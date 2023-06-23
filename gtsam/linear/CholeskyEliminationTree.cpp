/**
* @file    CholeskyEliminationTree.h
* @brief   Elimination tree structure to perform symbolic factorization and Cholesky factorization
* @author  Roger Hsiao (rogerhh)
* @date    Feb. 8, 2023
*/

#include <gtsam/inference/Ordering.h>
#include <gtsam/linear/CholeskyEliminationTree.h>
#include <gtsam/linear/CholeskyEliminationTreeNode.h>
#include <gtsam/linear/CholeskyEliminationTreeClique.h>
#include <gtsam/linear/CholeskyEliminationTreeFactorWrapper.h>
#include <gtsam/3rdparty/CCOLAMD/Include/ccolamd.h>
#include <Eigen/Dense>
#include <Eigen/Core>
#include <algorithm>
#include <fstream>
#include <cmath>

using namespace std;

namespace gtsam {

using ColMajorMatrix = CholeskyEliminationTree::ColMajorMatrix;
using BlockIndexVector = CholeskyEliminationTree::BlockIndexVector;
using RemappedKey = CholeskyEliminationTree::RemappedKey;

CholeskyEliminationTree::CholeskyEliminationTree() : orderingLess_(this) {
  // The last row Atb is mapped to key 0, and has ordering infinity
  keyToOrdering_.push_back(INT_MAX);
  orderingToKey_.push_back(0);
  // Add new node for the last row. Technically should be connected to everything
  addNewNode(0, 1); 
}

void CholeskyEliminationTree::addVariables(const Values& newTheta) {
  cout << "[CholeskyEliminationTree] addVariables() " << newTheta.size() << endl;
  for(const auto& keyValPair : newTheta) {
    const Key& unmappedKey = keyValPair.key;
    const Value& val = keyValPair.value;
    const size_t dim = val.dim();

    // First remap the key to start from 1
    Key key = addRemapKey(unmappedKey);
    addNewNode(key, dim);
    
  }
} 

// Mark directly changed keys and keys that we explicitly want to update (extraKeys)
// observedKeys are the keys associated with the new factors
void CholeskyEliminationTree::markAffectedKeys(
  const NonlinearFactorGraph& nonlinearFactors,
  const FactorIndices& newFactorIndices,
  const KeySet& relinKeys, 
  const ISAM2UpdateParams& updateParams,
  KeySet* affectedKeys,
  KeySet* observedKeys) {

  cout << "[CholeskyEliminationTree] markAffectedKeys()" << endl;
  affectedKeys->clear();
  observedKeys->clear();

  // cout << "RelinKeys: ";
  // for(const Key relinKey : relinKeys) {
  //     cout << relinKey << " ";
  // }
  // cout << endl;

  // RelinKeys should be processed before we add in factors because we only need to
  // relinearize old factors
  for(const Key unmappedRelinKey : relinKeys) {
    RemappedKey relinKey = getRemapKey(unmappedRelinKey);
    sharedNode relinNode = nodes_[relinKey];
    assert(relinNode->status != Node::Status::NEW);

    for(sharedFactorWrapper factor : relinNode->factors) {
      if(factor->status() != FactorWrapper::Status::LINEAR) {
        factor->status() = FactorWrapper::Status::RELINEARIZE;
      }
    }

    auto it = relinNode->lambdaStructure.begin();
    auto itSelf = relinNode->lambdaStructure.find(relinKey);
    auto itEnd = relinNode->lambdaStructure.end();

    // All keys that interact with this key but are lower than this key
    while(it != itSelf) {
      nodes_[*it]->changedLambdaStructure.insert(relinKey);
      affectedKeys->insert(*it);
      it++;
    }
    // All keys that interact with this key but are higher
    while(it != itEnd) {
      relinNode->changedLambdaStructure.insert(*it);
      affectedKeys->insert(*it);
      it++;
    }
  }
  
  for(const FactorIndex newFactorIndex : newFactorIndices) {
    // newFactorIndex starts from 0, and does not necessarily correspond to total factor index
    BlockIndexVector blockIndices;
    sharedFactor factor = nonlinearFactors[newFactorIndex];

    size_t col1 = 0;
    for(Key unmappedKey1 : factor->keys()) {
      RemappedKey k1 = getRemapKey(unmappedKey1);
      size_t width1 = colWidth(k1);
      blockIndices.push_back({k1, col1, width1});
      col1 += width1;
    }
    // Add Atb col
    blockIndices.push_back({0, col1, 1});

    sharedFactorWrapper factorWrapper = 
      std::make_shared<FactorWrapper>(blockIndices, factor, ColMajorMatrix());

    factors_.push_back(factorWrapper);

    for(const auto&[k1, col1, width1] : factorWrapper->blockIndices()) {
      sharedNode node1 = nodes_[k1];
      node1->factors.push_back(factorWrapper);
      affectedKeys->insert(k1);
      observedKeys->insert(k1);
      for(const auto&[k2, col2, width2] : factorWrapper->blockIndices()) {
        node1->lambdaStructure.insert(k2);
      }
    }
  }

  for(const FactorIndex removeFactorIndex : updateParams.removeFactorIndices) {
    factors_.at(removeFactorIndex)->status() = CholeskyEliminationTree::FactorWrapper::REMOVING;
  }

  // We don't have to worry about noRelinKeys for now as it will be removed from relinKeys
  
  // We have to manually mark extraReelimKeys as affectedKeys though
  if(updateParams.extraReelimKeys) {
    for(Key unmappedExtraReelimKey : updateParams.extraReelimKeys.get()) {
      RemappedKey extraReelimKey = getRemapKey(unmappedExtraReelimKey);
      affectedKeys->insert(extraReelimKey);
    }
  }

  if(updateParams.newAffectedKeys) {
    for(auto&[factorIndex, newKeys] : updateParams.newAffectedKeys) {
      
    }
  }

}

void CholeskyEliminationTree::markAncestors(
    const KeySet& affectedKeys, 
    KeySet* markedKeys) {
  cout << "[CholeskyEliminationTree] markAncestors()" << endl;
  for(const RemappedKey key : affectedKeys) {
      markKey(key, markedKeys);
  }
  for(Key k : *markedKeys) {  // marked keys are always backsolved
    nodes_[k]->backsolve = true;
  }
}

void CholeskyEliminationTree::markKey(const RemappedKey key, KeySet* markedKeys) {
  if(nodes_[key]->clique->marked) {
    // Node is already processed
    return;
  }

  cout << "[CholeskyEliminationTree] markKey() " << key << endl;
  sharedNode node = nodes_[key];

  sharedClique curClique = node->clique;
  RemappedKey curKey = key;
  do {
      if(curClique->orderingVersion != orderingVersion_) {
          curClique->reorderClique();
      }

      curClique = curClique->markClique(curKey, markedKeys);
      if(curClique) {
          curKey = curClique->frontKey();
      }
  } while(curClique != nullptr);
}

void CholeskyEliminationTree::symbolicElimination(const KeySet& markedKeys) {
  cout << "[CholeskyEliminationTree] symbolicElimination()" << endl;

  vector<RemappedKey> sortedMarkedKeys;
  sortedMarkedKeys.reserve(markedKeys.size());
  sortedMarkedKeys.insert(sortedMarkedKeys.begin(), markedKeys.begin(), markedKeys.end());
  sort(sortedMarkedKeys.begin(), sortedMarkedKeys.end(), orderingLess_);
  for(const RemappedKey key : sortedMarkedKeys) {
    symbolicEliminateKey(key);
  }

  if(postOrder_) {
    assert(0);
    postReordering();
  }

  allocateStack();

}

void CholeskyEliminationTree::symbolicEliminateKey(const RemappedKey key) {
  cout << "[CholeskyEliminationTree] symbolicEliminateKey: " << key << endl;

  sharedNode node = nodes_[key];
  sharedClique clique = node->clique;

  assert(clique->orderingVersion == orderingVersion_);
  assert(clique->nodes.size() == 1);
  assert(clique->marked == true);

  // Add keys induced by raw factors but only keys that are higher than this key
  vector<RemappedKey> colStructure;
  colStructure.insert(colStructure.end(),
                      node->lambdaStructure.find(node->key),
                      node->lambdaStructure.end());
  assert(checkSortedNoDuplicates(colStructure));

  // Merge column structure from children cliques
  for(sharedClique childClique : clique->children) {
      if(childClique->orderingVersion != orderingVersion_) {
          childClique->reorderClique();
      }

      childClique->mergeColStructure(&colStructure);
  }

  // cout << "col structure: ";
  // for(Key k : node->colStructure) {
  //     cout << k << " ";
  // }
  // cout << endl;

  // Find parent, if last key, then parentKey == 0
  RemappedKey parentKey = colStructure[1];

  bool mergeFlag = false;
  if(clique->children.size() == 1) {
    sharedClique childClique = *(clique->children.begin());
    if(childClique->marked && colStructure.size() == childClique->blockIndices.size() - 1) {
      childClique->mergeClique(clique);
      // Need to update clique pointer to current clique, which is the child clique
      clique = childClique;
      mergeFlag = true;
    }
  }

  // Need to popoluate our own blockIndices
  if(!mergeFlag) {
    clique->populateBlockIndices(colStructure);
  }

  // Find parent after merging cliques
  clique->findParent();

  // Set root after merging
  if(clique->parent == nullptr) {
      assert(orderingToKey_[key] == orderingToKey_.size() - 2);
      root_ = clique;
  }

  // Set ancestors' descendants
  for(size_t i = 1; i < colStructure.size(); i++) {
      // Don't need to count self
      size_t changeAmount = colStructure.size() - i;
      Key& ancestorKey = colStructure[i];
      auto& changedDescendants = changedDescendants_.at(ancestorKey);
      assert(changedDescendants.empty()
              || orderingLess_(changedDescendants.back(), node->key));
      changedDescendants.push_back(node->key);
  }

  // Merge changed descendants with descendants
  auto& changedDescendants = changedDescendants_.at(node->key);
  // assert(sorted_no_duplicates(changedDescendants));
  if(!changedDescendants.empty()) {
      size_t i = 0;
      auto& descendants = descendants_.at(node->key);
      for(; i < descendants.size(); i++) {
          // Find the index in descendants that is the same as the 
          // first element in changed descendants. If not found,
          // i will be set to the end of descendants
          if(!orderingLess_(descendants[i], changedDescendants[0])) {
              break;
          }
          else {
              assert(orderingLess_(descendants[i], changedDescendants[0]));
          }
      }
      // At this point we just need to insert changedDescendants into descendants
      descendants.resize(i + changedDescendants.size());
      for(size_t j = 0; j < changedDescendants.size(); j++) {
          descendants[i + j] = changedDescendants[j];
      }
  }
}

void CholeskyEliminationTree::allocateStack() {
  vector<pair<sharedClique, bool>> stack(1, {root_, false});
  while(!stack.empty()) {
    auto& curPair = stack.back();
    sharedClique clique = curPair.first;
    bool& expanded = curPair.second;

    if(!expanded) {

      expanded = true;

      if(clique->marked) {
        // Defaults to reconstructing
        clique->status = Clique::Status::RECONSTRUCT;

        // expand to children only if marked
        for(sharedClique childClique : clique->children) {
          stack.push_back({childClique, false});
        }
        size_t diagonalHeight = clique->diagonalSize();
        size_t subdiagonalHeight = clique->subdiaongalSize();
        clique->selfSize = diagonalHeight * subdiagonalHeight 
                            + subdiagonalHeight * subdiagonalHeight;
      }
      else {
        assert(clique->status == Clique::Status::UNMARKED);

        for(auto&[key, row, height] : clique->blockIndices) {
          // For any marked clique, if any of its decendants is unmarked, set to EDIT
          nodes_[key]->clique->status = Clique::Status::EDIT;
        }
      }
    }
    else {
      stack.pop_back();

      // Only count marked children clique and cliques that have reconstruct 
      // for mem allocation
      size_t maxChildSize = 0;
      for(sharedClique childClique : clique->children) {
        if(childClique->marked) {
          maxChildSize = childClique->accumSize;
        }
      }

      // Count our contribution
      size_t cliqueWidth = 0;
      for(sharedNode node : clique->nodes) {
        cliqueWidth += colWidth(node->key);
      }

      clique->accumSize = clique->selfSize + maxChildSize;
    }
  }

  workspace_.allocate(root_->accumSize);
}

void CholeskyEliminationTree::deallocateStack() {
  assert(0);
}

void CholeskyEliminationTree::choleskyElimination(const Values& theta) {
  cout << "[CholeskyEliminationTree] choleskyElimination()" << endl;
  vector<pair<sharedClique, bool>> stack(1, {root_, false});
  while(!stack.empty()) {
    auto& curPair = stack.back();
    sharedClique clique = curPair.first;
    sharedClique parent = clique->parent;
    bool& expanded = curPair.second;
    if(!expanded) {
      expanded = true;

      cout << "Restore pass: " << *clique << endl;

      if(clique->marked) {
        // check has edit
        vector<RemappedKey> editCols;
        clique->checkEditOrReconstruct(Clique::Status::EDIT, &editCols);
        bool gathered = false;
        // if has edit
        if(!editCols.empty()) {
          // cout << "EditCols: ";
          // for(Key k : editCols) {
          //     cout << k << " ";
          // }
          // cout << endl;

          allocateAndGatherClique(clique, true, false);
          gathered = true;
          editOrReconstructFromClique(clique, editCols, 1);
        }
        if(!clique->is_reconstruct) {
          if(!gathered) { 
            allocateAndGatherClique(clique, true, false);
            gathered = true;
          }
          restoreClique(clique);
              }
              else {
                  if(gathered) {
                      resetCliqueColumns(clique);
                  }
                  else {
                      allocateAndGatherClique(clique, true, true);
                  }
              }
          }
          else {
              // Reorder fixed nodes
              if(clique->orderingVersion() != ordering_version_) {
                  // Reorder each node in the clique
                  reorderClique(clique);
              }

              vector<Key> reconstructCols;
              checkEditOrReconstructClique(clique, RECONSTRUCT, &reconstructCols);

              if(!reconstructCols.empty()) {
                  // cout << "ReconstructCols: ";
                  // for(Key k : reconstructCols) {
                  //     cout << k << " ";
                  // }
                  // cout << endl;
                  allocateAndGatherClique(clique, false, false);
                  editOrReconstructFromClique(clique, reconstructCols, -1);
              }
          }

          // only add child is it's marked or has reconstruct
          // It is possible to be marked but all ancestors are edits
          for(sharedClique child : clique->children) {
              if(child->marked || child->has_reconstruct) {
                  stack.push_back({child, false});
              }
          }

      }
      else {

          // cout << "Eliminate pass: " << *clique << endl;
          // cout << "is reconstruct = " << clique->is_reconstruct << endl;

          // Eliminate pass
          stack.pop_back();

          // Unmarked clique already reconstructed
          if(clique->marked) {
              // All factors of this clique should be relinearized
              // Do AtA for each node
              prepareEliminateClique(clique, theta);

              // Eliminiate clique
              eliminateClique(clique);

              // Merge with parent
              mergeWorkspaceClique(clique);

              // Scatter workspace back into columns
              scatterClique(clique);

              // Reset node member variables
              for(sharedNode node : clique->nodes) {
                  node->relinearize = false;
                  node->is_reordered = false;
                  node->changedFactorColStructure.clear();
                  changedDescendants_[node->key].clear();
                  markedStatus_[node->key] = UNMARKED;
                  is_reordered_[node->key] = false;
              }
          }
          else {
              // Add AtA blocks for reconstruct columns that may be connected to unmarked nodes
              prepareEliminateClique(clique, theta);

              // Merge with parent
              mergeWorkspaceClique(clique);

              // Still need to scatter to clear workspace
              scatterClique(clique, false);
          }

          // cout << "before reset clique" << endl;

          // Reset member variables
          clique->marked = false;
          clique->is_reconstruct = true;
          clique->has_reconstruct = false;
          clique->workspaceIndex = -1;
      }
  }


  // checkInvariant_afterCholesky();
}

RemappedKey CholeskyEliminationTree::addRemapKey(const Key unmappedKey) {
  // Remap keys to start from 1, 0 is for last row
  RemappedKey remappedKey = keyTransformMap_.size();

  bool inserted = keyTransformMap_.insert({unmappedKey, remappedKey}).second;

  assert(inserted);
  assert(keyToOrdering_.size() == remappedKey);

  keyToOrdering_.push_back(keyToOrdering_.size());
  orderingToKey_.push_back(remappedKey);

  return remappedKey;
}

RemappedKey CholeskyEliminationTree::getRemapKey(const Key unmappedKey) {
  assert(keyTransformMap_.find(unmappedKey) != keyTransformMap_.end());
  return keyTransformMap_.at(unmappedKey);
}

void CholeskyEliminationTree::addNewNode(const RemappedKey key, const size_t width) {
  sharedNode newNode = make_shared<Node>(this, key, width);
  nodes_.push_back(newNode);
  // We cannot make sharedNode part of the constructor
  // Because at construct time, Clique is not pointed to by shared_ptr
  // Maybe there is a cleaner way?
  sharedClique newClique = make_shared<Clique>(this);
  newClique->addNode(newNode);

}

size_t CholeskyEliminationTree::colWidth(const RemappedKey key) const {
  return nodes_.at(key)->width;
}


} // namespace gtsam
