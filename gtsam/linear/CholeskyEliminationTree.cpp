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
#include <gtsam/linear/CholeskyEliminationTreeTypes.h>
#include <gtsam/linear/CliqueColumns.h>
#include <gtsam/3rdparty/CCOLAMD/Include/ccolamd.h>
#include <Eigen/Dense>
#include <Eigen/Core>
#include <algorithm>
#include <fstream>
#include <cmath>
#include <stdexcept>

using namespace std;

namespace gtsam {

// Convenience function
inline Eigen::Block<Eigen::Map<ColMajorMatrix>> block(
    Eigen::Map<ColMajorMatrix> m, 
    size_t r, size_t c, size_t h, size_t w) {
    return Eigen::Block<Eigen::Map<ColMajorMatrix>>(m, r, c, h, w);
}

CholeskyEliminationTree::CholeskyEliminationTree() : orderingLess_(this) {
  // Add new node for the last row. Technically should be connected to everything
  RemappedKey key = addRemapKey(-1);
  assert(key == 0);
  addNewNode(key, 1); 
}

void CholeskyEliminationTree::addVariables(const Values& newTheta) {
  // cout << "[CholeskyEliminationTree] addVariables() " << newTheta.size() << endl;
  for(const auto& keyValPair : newTheta) {
    const Key& unmappedKey = keyValPair.key;
    const Value& val = keyValPair.value;
    const size_t dim = val.dim();

    // First remap the key to start from 1
    RemappedKey key = addRemapKey(unmappedKey);
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
  RemappedKeySet* affectedKeys,
  RemappedKeySet* observedKeys) {

  // cout << "[CholeskyEliminationTree] markAffectedKeys()" << endl;
  affectedKeys->clear();
  observedKeys->clear();

  // RelinKeys should be processed before we add in factors because we only need to
  // relinearize old factors
  for(const Key unmappedRelinKey : relinKeys) {
    RemappedKey relinKey = getRemapKey(unmappedRelinKey);
    sharedNode relinNode = nodes_[relinKey];
    assert(relinNode->status != MarkedStatus::NEW);

    for(sharedFactorWrapper factorWrapper : relinNode->factors) {
      if(factorWrapper->status() != LINEAR) {
        factorWrapper->status() = RELINEARIZE;
      }
    }

    // auto it = relinNode->lambdaStructure.begin();
    // auto itSelf = relinNode->lambdaStructure.find(relinKey);
    // auto itEnd = relinNode->lambdaStructure.end();

    // // All keys that interact with this key but are lower than this key
    // while(it != itSelf) {
    //   nodes_[*it]->changedLambdaStructure.insert(relinKey);
    //   it++;
    // }
    // // All keys that interact with this key but are higher
    // while(it != itEnd) {
    //   relinNode->changedLambdaStructure.insert(*it);
    //   it++;
    // }

    for(sharedFactorWrapper factorWrapper : relinNode->factors) {
      factorWrapper->markAffectedKeys(affectedKeys);
    }
  }
  
  for(const FactorIndex newFactorIndex : newFactorIndices) {
    // newFactorIndex starts from 0, and does not necessarily correspond to total factor index
    BlockIndexVector blockIndices;
    sharedFactor factor = nonlinearFactors[newFactorIndex];
    sharedFactorWrapper factorWrapper = std::make_shared<FactorWrapper>(factor, nullptr, this);

    factors_.push_back(factorWrapper);

    for(RemappedKey k : factorWrapper->remappedKeys()) {
      sharedNode node = nodes_[k];
      node->addFactor(factorWrapper);
    }

    factorWrapper->markAffectedKeys(affectedKeys);
    factorWrapper->markAffectedKeys(observedKeys);
  }

  for(const FactorIndex removeFactorIndex : updateParams.removeFactorIndices) {
    sharedFactorWrapper factorWrapper = factors_.at(removeFactorIndex);
    factorWrapper->status() = REMOVING;
    factorWrapper->markAffectedKeys(affectedKeys);
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
    for(auto&[factorIndex, newUnmappedKeys] : updateParams.newAffectedKeys.get()) {
      vector<RemappedKey> newKeys;
      for(Key newUnmappedKey : newUnmappedKeys) {
        newKeys.push_back(getRemapKey(newUnmappedKey));
      }
      sharedFactorWrapper factorWrapper = factors_[factorIndex];
      factors_[factorIndex]->addNewKeys(newKeys);
      factors_[factorIndex]->markAffectedKeys(affectedKeys);
      factors_[factorIndex]->markAffectedKeys(observedKeys);
    }
  }

  // // DEBUG
  // cout << "Observed keys: ";
  // for(RemappedKey key : *observedKeys) {
  //   cout << key << " ";
  // }
  // cout << endl;

  // cout << "RelinKeys: ";
  // for(const Key relinKey : relinKeys) {
  //     cout << getRemapKey(relinKey) << " ";
  // }
  // cout << endl;

  // cout << "Affected keys: ";
  // for(RemappedKey key : *affectedKeys) {
  //   cout << key << " ";
  // }
  // cout << endl;

}

void CholeskyEliminationTree::markAncestors(
    const RemappedKeySet& affectedKeys, 
    RemappedKeySet* markedKeys) {
  // cout << "[CholeskyEliminationTree] markAncestors()" << endl;
  for(const RemappedKey key : affectedKeys) {
      markKey(key, markedKeys);
  }
  for(Key k : *markedKeys) {  // marked keys are always backsolved
    nodes_[k]->backsolve = true;
  }
}

void CholeskyEliminationTree::markKey(const RemappedKey key, RemappedKeySet* markedKeys) {
  // Not sure why this is needed
  if(nodes_[key]->clique()->marked()) {
    // Node is already processed
    return;
  }

  // cout << "[CholeskyEliminationTree] markKey " << key << " in clique " << *(nodes_[key]->clique()) << endl;
  sharedNode node = nodes_[key];

  sharedClique curClique = node->clique();
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

void CholeskyEliminationTree::symbolicElimination(const RemappedKeySet& markedKeys) {
  // cout << "[CholeskyEliminationTree] symbolicElimination()" << endl;

  root_ = nullptr;

  // cout << "markedKeys: ";
  // for(RemappedKey key : markedKeys) {
  //   cout << key << " ";
  // }
  // cout << endl;

  // Sort marked keys based on variable ordering
  vector<RemappedKey> sortedMarkedKeys;
  sortedMarkedKeys.reserve(markedKeys.size());
  sortedMarkedKeys.insert(sortedMarkedKeys.begin(), markedKeys.begin(), markedKeys.end());
  sort(sortedMarkedKeys.begin(), sortedMarkedKeys.end(), orderingLess_);

  for(const RemappedKey key : sortedMarkedKeys) {
    symbolicEliminateKey(key);
  }
  assert(root_);

  if(postOrder_) {
    // sortedMarkedKeys in this case will be exactly the same as partialOrdering
    postReordering(sortedMarkedKeys);
  }

  allocateStack();

  checkInvariant_afterSymbolic();
}

void CholeskyEliminationTree::symbolicEliminateKey(const RemappedKey key) {
  // cout << "[CholeskyEliminationTree] symbolicEliminateKey: " << key << endl;

  sharedNode node = nodes_[key];
  sharedClique clique = node->clique();

  assert(clique->orderingVersion == orderingVersion_);
  assert(clique->nodes.size() == 1);
  assert(clique->marked() == true);

  // Add keys induced by raw factors but only keys that are higher than this key
  vector<RemappedKey> colStructure;
  for(const auto& [otherKey, count] : node->lambdaStructure) {
    if(!orderingLess_(otherKey, node->key)) {
      colStructure.push_back(otherKey);
    }
  }
  std::sort(colStructure.begin(), colStructure.end(), orderingLess_);
  // colStructure.insert(colStructure.end(),
  //                     node->lambdaStructure.find(node->key),
  //                     node->lambdaStructure.end());

  // Merge column structure from children cliques
  for(sharedClique childClique : clique->children) {
      if(childClique->orderingVersion != orderingVersion_) {
          childClique->reorderClique();
      }

      childClique->mergeColStructure(&colStructure);
  }

  // cout << "col structure: ";
  // for(Key k : colStructure) {
  //     cout << k << " ";
  // }
  // cout << endl;

  bool mergeFlag = false;
  if(clique->nodes.front()->key != 0 &&
      clique->children.size() == 1) {
    // Clique 0 cannot be merged and will always be root
    sharedClique childClique = *(clique->children.begin());
    if(childClique->marked() 
        && colStructure.size() == childClique->blockIndices.size() - childClique->cliqueSize()) {
      childClique->mergeClique(clique);
      // Need to update clique pointer to current clique, which is the child clique
      assert(clique.unique());
      clique.reset();
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
  if(clique->parent() == nullptr) {
    assert(clique->nodes.size() == 1);
    assert(clique->nodes.front()->key == 0);

    if(root_ != nullptr) {
      // We can actually solve the mltiple root issue by recognizing 
      // the node 0 (Atb row) as a node
      throw runtime_error("Multiple roots!");
    }
    root_ = clique;
  }

  /*
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
  */
}

void CholeskyEliminationTree::remapConstrainedKeys(
    const boost::optional<FastMap<Key, int>>& unmappedConstrainedKeys,
    std::map<RemappedKey, int>* constrainedKeys) {
  constrainedKeys->clear();
  if(unmappedConstrainedKeys) {
    for(const auto&[unmappedKey, group] : *unmappedConstrainedKeys) {
      constrainedKeys->insert({getRemapKey(unmappedKey), group});
    }
  }
}

void CholeskyEliminationTree::constructCSCMatrix(
    const unordered_map<RemappedKey, int>& markedKeysIndex,
    int* nEntries,
    int* nVars,
    int* nFactors,
    vector<int>* A,
    vector<int>* p) {

  vector<vector<int>> csc_matrix;
  csc_matrix = vector<vector<int>>(markedKeysIndex.size());

  unordered_set<sharedFactorWrapper> rawFactors;

  for(const auto&[key, _] : markedKeysIndex) {
    for(sharedFactorWrapper factor : nodes_[key]->factors) {
      rawFactors.insert(factor);
    }
  }

  int factorCount = 0;
  for(sharedFactorWrapper factor : rawFactors) {
    for(RemappedKey key : factor->remappedKeys()) {
      auto it = markedKeysIndex.find(key);
      if(it != markedKeysIndex.end()) {
        csc_matrix[it->second].push_back(factorCount);
      }
    }
    factorCount++;
  }

  // Deal with induced factors, each child contributes an induced factor
  for(const auto&[key, _] : markedKeysIndex) {
    for(sharedClique child : cliques_[key]->children) {
      assert(!child->marked());
      for(size_t i = child->cliqueSize(); i < child->blockIndices.size(); i++) {
        RemappedKey key = get<BLOCK_INDEX_KEY>(child->blockIndices[i]);
        auto it = markedKeysIndex.find(key);
        assert(it != markedKeysIndex.end());
        csc_matrix[it->second].push_back(factorCount);
      }
      factorCount++;
    }
  }

  // Remove last column that corresponds to Atb column
  assert(markedKeysIndex.at(0) == markedKeysIndex.size() - 1);
  csc_matrix.pop_back();

  A->clear();
  p->clear();
  p->push_back(0);

  int count = 0;
  for(const vector<int>& A_col : csc_matrix) {
    for(int row : A_col) {
      A->push_back(row);
      count++;
    }
    p->push_back(count);
  }
  *nVars = csc_matrix.size();
  *nFactors = factorCount;
  *nEntries = count;
}

void CholeskyEliminationTree::getPartialReordering(
    const RemappedKeySet& markedKeys, 
    const RemappedKeySet& observedKeys,
    const ISAM2UpdateParams& params,
    vector<RemappedKey>* partialOrdering) {

  // cout << "[CholeskyEliminationTree] getPartialReordering()" << endl;

  unordered_map<RemappedKey, int> markedKeysIndex;
  vector<RemappedKey> markedKeysVector;
  for(RemappedKey key : markedKeys) {
    markedKeysVector.push_back(key);
  }

  std::sort(markedKeysVector.begin(), markedKeysVector.end(), orderingLess_);
  assert(markedKeysVector.back() == 0);

  for(RemappedKey key : markedKeysVector) {
    markedKeysIndex.insert({key, markedKeysIndex.size()});
  }

  int nEntries, nVars, nFactors;
  vector<int> A, p;
  constructCSCMatrix(markedKeysIndex, &nEntries, &nVars, &nFactors, &A, &p);
  const size_t Alen = ccolamd_recommended(nEntries, nFactors, nVars);
  A.resize(Alen);

  // Construct constraints
  map<int, vector<RemappedKey>> constrainedGroupBuckets;
  for(RemappedKey key : markedKeys) {
    bool found = false;
    // If group is already defined by params.constrainedKeys
    if(params.constrainedKeys) {
      Key unmappedKey = unmapKey(key);
      auto it = params.constrainedKeys->find(unmappedKey);
      if(it != params.constrainedKeys->end()) {
        constrainedGroupBuckets[it->second].push_back(key);
        found = true;
      }
    }
    // Add observedKeys to the end of the ordering
    if(!found && observedKeys.find(key) != observedKeys.end()) {
      constrainedGroupBuckets[INT_MAX].push_back(key);
      found = true;
    }
    // Add all other keys to right before the observedKeys
    if(!found) {
      constrainedGroupBuckets[INT_MAX - 1].push_back(key);
    }
  }

  vector<int> cmember(nVars);

  int group = 0;
  for(const auto&[_, bucket] : constrainedGroupBuckets) {
    for(RemappedKey key : bucket) {
      if(key != 0) {
        int index = markedKeysIndex.at(key);
        assert(index < nVars);
        cmember[index] = group;
      }
    }
    group++;
  }

  //double* knobs = nullptr; /* colamd arg 6: parameters (uses defaults if nullptr) */
  double knobs[CCOLAMD_KNOBS];
  ccolamd_set_defaults(knobs);
  knobs[CCOLAMD_DENSE_ROW] = -1;
  knobs[CCOLAMD_DENSE_COL] = -1;

  int stats[CCOLAMD_STATS]; /* colamd arg 7: colamd output statistics and error codes */

  // call colamd, result will be in p
  /* returns (1) if successful, (0) otherwise*/
  if (nVars > 0) {
    int rv = ccolamd((int) nFactors, (int) nVars, (int) Alen, &A[0], &p[0],
        knobs, stats, &cmember[0]);
    if (rv != 1) {
      throw runtime_error("ccolamd failed with return value " + to_string(rv));
    }
  }

  partialOrdering->resize(nVars);
  for(int i = 0; i < p.size(); i++) {
    if(p[i] == -1) {
      break;
    }
    RemappedKey key = markedKeysVector[p[i]];
    (*partialOrdering)[i] = key;

    assert(key != 0);
    assert(cliques_[key]->marked());
  }

  // Manually add back key 0
  partialOrdering->push_back(0);
  assert(partialOrdering->size() == markedKeysVector.size());

  // cout << "Ordering: ";
  // for(auto k : *partialOrdering) {
  //   cout << (int) unmapKey(k) << " ";
  // }
  // cout << endl;
}

void CholeskyEliminationTree::updateOrdering(const RemappedKeySet& markedKeys, 
                                             const RemappedKeySet& observedKeys,
                                             const ISAM2UpdateParams& params) {
  postOrder_ = true;
  orderingVersion_++;
  vector<RemappedKey> partialOrdering;
  getPartialReordering(markedKeys, observedKeys, params, &partialOrdering);
  assert(partialOrdering.size() == markedKeys.size());

  // DEBUG
  RemappedKeySet markedKeysCopy = markedKeys;
  for(RemappedKey key : partialOrdering) {
    size_t n = markedKeysCopy.erase(key);
    assert(n == 1);
  }
  assert(markedKeysCopy.empty());
  // END DEBUG

  // Adjust ordering_. Shift not reordered keys to the front
  auto minIt = min_element(partialOrdering.begin(), partialOrdering.end(), orderingLess_);
  RemappedKey minReorderedKey = *minIt;
  size_t minReorderedIndex = keyToOrdering_[minReorderedKey];
  size_t fixedIndex = minReorderedIndex;
  vector<RemappedKey> newOrderingToKey(orderingToKey_);
  for(size_t i = minReorderedIndex; i < orderingToKey_.size(); i++) {
    RemappedKey key = orderingToKey_[i];
    if(!cliques_[key]->marked()) {
      newOrderingToKey[fixedIndex] = key;
      fixedIndex++;
    }
  }
  
  // Add newly reordered keys to the back of the ordering
  assert(fixedIndex + partialOrdering.size() == orderingToKey_.size());
  for(size_t i = 0; i < partialOrdering.size(); i++) {
    RemappedKey key = partialOrdering[i];
    newOrderingToKey[fixedIndex + i] = key;
  }
  orderingToKey_ = newOrderingToKey;

  // Now populate keyToOrdering_
  for(size_t i = minReorderedIndex; i < orderingToKey_.size(); i++) {
    RemappedKey key = orderingToKey_[i];
    keyToOrdering_[key] = i;
  }

  set<sharedFactorWrapper> affectedFactors;

  // Reset all affected nodes
  for(RemappedKey key : partialOrdering) {
    sharedNode node = nodes_[key];
    sharedClique clique = cliques_[key];
    assert(clique->orderingVersion != orderingVersion_);
    clique->orderingVersion = orderingVersion_;

    // If the node has any children cliques, the children need to be reattached
    // Since they might have new parents
    // Need to copy as changing node->clique->children invalidate iterators
    vector<sharedClique> cliqueChildren;
    for(sharedClique child : clique->children) {
      cliqueChildren.push_back(child);
    }
    for(sharedClique child : cliqueChildren) {
      child->reorderAndFindParent();
    }

    for(sharedFactorWrapper factor : node->factors) {
      affectedFactors.insert(factor);
    }
  }

  // No need to reorder factor keys, but need to update the lowest key
  // of a factor
  for(auto factor : affectedFactors) {
    factor->updateLowestKey();
  }
}

void CholeskyEliminationTree::postReordering(const vector<RemappedKey>& partialOrdering) {
  vector<RemappedKey> newOrderingToKey(orderingToKey_);

  RemappedKey minReorderedKey = partialOrdering.front();
  size_t minReorderedIndex = keyToOrdering_[minReorderedKey];

  assert(keyToOrdering_[0] == keyToOrdering_.size() - 1);
  assert(orderingToKey_.back() == 0);
  assert(partialOrdering.back() == 0);

  size_t curIndex = minReorderedIndex;
  for(size_t i = minReorderedIndex; i < orderingToKey_.size(); i++) {
    RemappedKey key = orderingToKey_[i];
    sharedClique clique = cliques_[key];

    // If come accross the first key of a clique, reorder all keys in the clique
    // to be right behind the first key
    if(key == clique->frontKey()) {
      for(size_t i = 0; i < clique->cliqueSize(); i++) {
        RemappedKey cliqueKey = get<BLOCK_INDEX_KEY>(clique->blockIndices[i]);
        assert(curIndex < newOrderingToKey.size());
        newOrderingToKey[curIndex] = cliqueKey;
        curIndex++;
      }
    }
  }
  assert(curIndex == keyToOrdering_.size());
  orderingToKey_ = newOrderingToKey;

  for(size_t i = minReorderedIndex; i < orderingToKey_.size(); i++) {
    RemappedKey key = orderingToKey_[i];
    keyToOrdering_[key] = i;
  }

}

void CholeskyEliminationTree::allocateStack() {
  if(postOrder_) {
    allocateStackPostOrdering();
  }
  else {
    allocateStackRegular();
  }

  workspace_.allocate(root_->accumSize);
}

void CholeskyEliminationTree::allocateStackRegular() {

  // There should be different behaviors for after reordering and before reordering
  vector<pair<sharedClique, bool>> stack(1, {root_, false});
  while(!stack.empty()) {
    auto& curPair = stack.back();
    sharedClique clique = curPair.first;
    bool& expanded = curPair.second;

    if(!expanded) {

      expanded = true;

      if(clique->marked()) {
        // Defaults to reconstructing
        // TODO: We do not have to default to reconstructing
        // cout << "set clique " << *clique << " to RECONSTRUCT" << endl;
        clique->status = MarkedStatus::RECONSTRUCT;

        size_t diagonalHeight = clique->diagonalHeight();
        size_t subdiagonalHeight = clique->subdiagonalHeight();
        size_t totalHeight = diagonalHeight + subdiagonalHeight;
        // clique->selfSize = diagonalHeight * subdiagonalHeight 
        //                     + subdiagonalHeight * subdiagonalHeight;
        clique->selfSize = totalHeight * totalHeight;

        // expand to children only if marked
        for(sharedClique childClique : clique->children) {
          stack.push_back({childClique, false});
          childClique->accumSize = 0;
        }
      }
      else {
        assert(clique->status == MarkedStatus::UNMARKED);

        // If we reordered this iteration, then set everything to RECONSTRUCT 
        for(size_t i = clique->cliqueSize(); i < clique->blockIndices.size(); i++) {
          // For any marked clique, if any of its decendants is unmarked, set to EDIT
          const auto&[key, row, height] = clique->blockIndices[i];
          assert(nodes_[key]->clique()->marked());
          // cout << "set clique " << *clique << " to EDIT" << endl;
          nodes_[key]->clique()->status = EDIT;
        }
      }
    }
    else {
      stack.pop_back();

      if(clique->marked()) {
        // Set node's markedStatus to be the same as the clique
        clique->setNodeStatus();
      }
      else {
        assert(clique->status == UNMARKED);
      }

      // Only count marked children clique and cliques that have reconstruct 
      // for mem allocation
      size_t maxChildSize = 0;
      for(sharedClique childClique : clique->children) {
        if(childClique->accumSize > maxChildSize) {
          maxChildSize = childClique->accumSize;
        }
      }

      clique->accumSize = clique->selfSize + maxChildSize;
    }
  }
}

void CholeskyEliminationTree::allocateStackPostOrdering() {

  vector<pair<sharedClique, bool>> stack(1, {root_, false});
  while(!stack.empty()) {
    auto& curPair = stack.back();
    sharedClique clique = curPair.first;
    bool& expanded = curPair.second;

    if(!expanded) {

      expanded = true;

      if(clique->marked() || clique->hasMarkedAncestor()) {
        if(clique->marked()) {
          // cout << "set clique " << *clique << " to RECONSTRUCT" << endl;
          clique->status = MarkedStatus::RECONSTRUCT;
        }

        // Allocate workspace for marked cliques and cliques that have RECONSTRUCT ancestors
        size_t diagonalHeight = clique->diagonalHeight();
        size_t subdiagonalHeight = clique->subdiagonalHeight();
        size_t totalHeight = diagonalHeight + subdiagonalHeight;

        clique->selfSize = totalHeight * totalHeight;

        // expand to children 
        for(sharedClique childClique : clique->children) {
          stack.push_back({childClique, false});
          childClique->accumSize = 0;
        }
      }
    }
    else {
      stack.pop_back();

      if(clique->marked()) {
        // Set node's markedStatus to be the same as the clique
        clique->setNodeStatus();
      }
      else {
        assert(clique->status == UNMARKED);
      }

      // Only count marked children clique and cliques that have reconstruct 
      // for mem allocation
      size_t maxChildSize = 0;
      for(sharedClique childClique : clique->children) {
        if(childClique->accumSize > maxChildSize) {
          maxChildSize = childClique->accumSize;
        }
      }

      clique->accumSize = clique->selfSize + maxChildSize;
    }
  }
}

void CholeskyEliminationTree::deallocateStack() {
  workspace_.deallocate();
}

void CholeskyEliminationTree::allocateAndGatherClique(sharedClique clique, bool allocate, bool reconstruct) {
  // Note: This function is run with the root clique because we want the root
  // clique to allocate space on the workspace, so that mergeWorkspaceClique can work
  // cout << "[CholeskyEliminationTree] allocateAndGatherClique() " << *clique << " reconstruct = " << reconstruct << endl;

  // At this point clique->blockIndices should already be set up
  BlockIndexVector& blockIndices = clique->blockIndices;

  assert(get<BLOCK_INDEX_KEY>(blockIndices.back()) == 0);

  size_t totalHeight = clique->height();
  size_t diagWidth = clique->width();
  size_t subdiagonalHeight = clique->subdiagonalHeight();

  // clique->workspaceIndex = workspace_.push_matrices({{totalHeight, diagWidth}, 
  //                                                    {subdiagonalHeight, subdiagonalHeight}});
  clique->workspaceIndex = workspace_.push_matrices({{totalHeight, totalHeight}});

  if(!reconstruct) {
    // Gather columns from wherever they is living now
    // Need to do a scatter operation based on the old blockIndices on to the new one
    // The clique who owns the data shall be responsible for the blockIndices
    double* matrixData = workspace_.get_ptrs(clique->workspaceIndex)[0];
    CliqueColumns workspaceColumn(matrixData, &blockIndices);

    for(auto& gatherSource : clique->gatherSources) {
      workspaceColumn.addCliqueColumns(gatherSource);
    }
  }

  for(LocalCliqueColumns& gatherSource : clique->gatherSources) {
    if(!gatherSource.ownsData()) {
      gatherSource.deallocateSelfData();
    }
  }

  if(allocate) {
    // Doing this part in scatterClique()
    // clique->gatherSources.clear();
    // auto matrixSource = make_shared<vector<double>>(totalHeight * diagWidth);
    // clique->gatherSources.push_back(LocalCliqueColumns(matrixSource, &blockIndices));
  }
  else {
    assert(clique->gatherSources.size() == 1);
    assert(clique->ownsColumns());
    assert(clique->gatherSources.front().rows() == totalHeight);
    assert(clique->gatherSources.front().cols() == diagWidth);
    assert(clique->gatherSources.front().startIndex() == 0);
  }

}

void CholeskyEliminationTree::choleskyElimination(const Values& theta) {
  // cout << "[CholeskyEliminationTree] choleskyElimination()" << endl;
  
  vector<pair<sharedClique, bool>> stack(1, {root_, false});
  while(!stack.empty()) {
    auto& curPair = stack.back();
    sharedClique clique = curPair.first;
    sharedClique parent = clique->parent();
    bool& expanded = curPair.second;
    if(!expanded) {
      expanded = true;

      // cout << "Restore pass: " << *clique << " markedStatus = " << clique->status << endl;

      bool expandChildren = clique->marked();

      if(clique->marked()) {
        // check has edit
        vector<RemappedKey> editCols;
        clique->checkEditOrReconstruct(EDIT, &editCols);
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
        if(clique->status == EDIT) {
          if(!gathered) {
            allocateAndGatherClique(clique, true, false);
            gathered = true;
          }
          restoreClique(clique);
        }
        else {
          if(!gathered) {
            allocateAndGatherClique(clique, true, true);
            gathered = true;
          }
          else {
            resetCliqueColumns(clique);
          }
        }
      }
      else {
        // Reorder fixed nodes
        if(clique->orderingVersion != orderingVersion_) {
          // Reorder each node in the clique
          clique->reorderClique();
        }

        vector<Key> reconstructCols;
        clique->checkEditOrReconstruct(RECONSTRUCT, &reconstructCols);

        if(!reconstructCols.empty()) {
          // cout << "ReconstructCols: ";
          // for(Key k : reconstructCols) {
          //     cout << k << " ";
          // }
          // cout << endl;
          allocateAndGatherClique(clique, false, false);
          editOrReconstructFromClique(clique, reconstructCols, -1);

          expandChildren = true;
        }
      }

      // only add child if it's marked or has reconstruct
      // It is possible to be marked but all ancestors are edits
      if(expandChildren) {
        for(sharedClique child : clique->children) {
          stack.push_back({child, false});
        }
      }
      else {
        stack.pop_back();
      }
    }
    else {
      // Eliminate pass
      stack.pop_back();

      // cout << "Eliminate pass: " << *clique << " markedStatus = " << clique->status << endl;

      if(!clique->marked()) {
        assert(postOrder_ && clique->hasMarkedAncestor());
      }

      // All factors of this clique should be relinearized
      // Do AtA for each node
      // cout << "before construct lambda clique" << endl;
      constructLambdaClique(clique, theta);
      
      if(clique->marked()) {
        // For UNAMRKED nodes, Add AtA blocks for reconstruct columns 
        // that may be connected to unmarked nodes
        // As of Jul. 2023, we do not need to do this for UNMARKED nodes because 
        // we do not depend on UNMARKED nodes

        // Eliminiate clique
        // cout << "before eliminate clique" << endl;
        eliminateClique(clique);
      }

      // Merge with parent
      // cout << "before merge clique" << endl;
      mergeWorkspaceClique(clique);

      // Scatter workspace back into columns
      // UNMARKED nodes still need to scatter to clear workspace
      // cout << "before scatter clique" << endl;
      scatterClique(clique);

      // cout << "before reset clique" << endl;
      clique->resetAfterCholesky();
      // cout << "after reset clique" << endl;

      if(clique->marked()) {
        clique->setBacksolve(true);
      }
      else {
        clique->setBacksolve(false);
      }
    }
  }

  assert(workspace_.empty());

  // checkInvariant_afterCholesky();
}

void CholeskyEliminationTree::editOrReconstructFromClique(
  sharedClique clique,
  const vector<Key>& destCols,
  double sign) {
  if(clique->isLastRow()) { return; }

  // cout << "editOrReconstructFromClique clique: " << *clique << endl;
  // cout << "cols = ";
  // for(Key key : destCols) {
  //   cout << key << " ";
  // }
  // cout << endl;

  auto m = workspace_.get_matrices(clique->workspaceIndex)[0];

  size_t cliqueSize = clique->cliqueSize();
  const auto& blockIndices = clique->blockIndices;
  size_t totalHeight = clique->height();
  size_t diagWidth = clique->width();
  size_t subdiagHeight = clique->subdiagonalHeight();

  assert(m.rows() == totalHeight && m.cols() == totalHeight);

  auto B = Eigen::Block<Eigen::Map<ColMajorMatrix>>
            (m, diagWidth, 0, subdiagHeight, diagWidth);
  auto C = Eigen::Block<Eigen::Map<ColMajorMatrix>>
            (m, diagWidth, diagWidth, subdiagHeight, subdiagHeight);

  assert(get<BLOCK_INDEX_KEY>(blockIndices.back()) == 0);

  bool processGrouped = true;
  size_t destSize = destCols.size();
  size_t totalSize = blockIndices.size() - 1;
  // if(destSize * 2 < totalSize) {
  //     processGrouped = false;
  // }

  if(processGrouped) {

    C.selfadjointView<Eigen::Lower>().rankUpdate(B, sign);

    auto destIt = destCols.begin();
    auto destEnd = destCols.end();

    // Set unused columns to be 0 since we did everything at once
    for(size_t i = cliqueSize; i < blockIndices.size(); i++) {
      const auto&[key, col, width] = blockIndices[i];

      if(destIt == destEnd || *destIt != key) {
        block(m, col, col, totalHeight - col, width).setZero();
      }
      else if (destIt != destEnd){
        destIt++;
      }
    }

    assert(destIt == destEnd);
  }
  else {
    auto destIt = destCols.begin();
    auto destEnd = destCols.end();

    for(size_t i = cliqueSize; i < blockIndices.size(); i++) {
      RemappedKey key = get<BLOCK_INDEX_KEY>(blockIndices[i]);   

      if(destIt != destEnd && *destIt == key) {
        destIt++;
        size_t col = get<BLOCK_INDEX_ROW>(blockIndices[i]);
        size_t width = get<BLOCK_INDEX_HEIGHT>(blockIndices[i]);
        size_t cHeight = totalHeight - col;
        block(m, col, col, cHeight, width) += 
          sign * block(m, col, 0, cHeight, diagWidth)
          * block(m, col, 0, width, diagWidth).transpose();
      }
    }
  }
}

void CholeskyEliminationTree::restoreClique(sharedClique clique) {
  if(clique->isLastRow()) { return; }

  auto m = workspace_.get_matrices(clique->workspaceIndex)[0];

  size_t totalHeight = clique->height();
  size_t diagWidth = clique->width();
  auto D = block(m, 0, 0, diagWidth, diagWidth);
  auto DB = block(m, 0, 0, totalHeight, diagWidth);

  D.triangularView<Eigen::StrictlyUpper>().setZero();

  DB *= D.transpose();
}

void CholeskyEliminationTree::resetCliqueColumns(sharedClique clique) {
  if(clique->isLastRow()) { return; }

  Eigen::Map<ColMajorMatrix> m = workspace_.get_matrices(clique->workspaceIndex)[0];

  size_t totalHeight = clique->height();
  size_t diagWidth = clique->width();

  auto DB = Eigen::Block<Eigen::Map<ColMajorMatrix>>(m, 0, 0, totalHeight, diagWidth);
  DB.setZero();
}


void CholeskyEliminationTree::constructLambdaClique(sharedClique clique, const Values& theta) {
  if(clique->isLastRow()) { return; }

  auto m = workspace_.get_matrices(clique->workspaceIndex)[0];

  const auto& blockIndices = clique->blockIndices;

  BlockIndexMap keyRowMap;

  for(const auto& p : blockIndices) {
    keyRowMap.insert({get<BLOCK_INDEX_KEY>(p), 
                     {get<BLOCK_INDEX_ROW>(p), get<BLOCK_INDEX_HEIGHT>(p)}});
  }

  for(sharedNode node : clique->nodes) {

    // There are 4 types of MarkedStatus and 6 types of FactorStatus
    // enum MarkedStatus {UNMARKED, EDIT, RECONSTRUCT, NEW};
    // enum FactorStatus {UNLINEARIZED, LINEARIZED, RELINEARIZE, LINEAR, REMOVING, REMOVED};
    // We only process a factor if the lowest key of that factor is in our clique
    // so that memory for that factor is guaranteed to be allocated
    // The MarkedStatus of each node in a clique may be different, generally ony happening 
    // if a clique is EDIT and we add some NEW nodes at the end
    // The MarkedStatus of each node in a factor may also be different, because
    // the nodes may be in different cliques
    // 1. Subtract all MarkedStatus-FactorStatus that are EDIT-{RELINEARIZE, REMOVING}
    // 2. Linearize/Relienarize all factors that are {UNLINEARIZED, RELINEARIZE}
    // 3. Add all MarkedStatus-FactorStatus that are {EDIT, RECONSTRUCT, NEW}-{UNLINEARIZED, RELINEARIZE} + {RECONSTRUCT, NEW}-{LINEARIZED, LINEAR}

    for(sharedFactorWrapper factorWrapper : node->factors) {
      // Node must be lowest node in factor
      // We need this to ensure there is an allocated entry in the workspace
      // for this AtA bock
      if(node->key != factorWrapper->lowestKey()) {
        continue;
      }
      else if(factorWrapper->status() == REMOVED) {
        continue;
      }

      // Status of the factor before constructing lambda
      // This allows us to change factorWrapper->status() without worrying about the logic
      FactorStatus factorStatus = factorWrapper->status();

      size_t totalHeight = clique->height();
      size_t diagWidth = clique->width();

      // Handle edits first
      // Subtract Hessian of the cachedLinearFactor from the workspace
      if(factorStatus == RELINEARIZE || factorStatus == REMOVING) {
        sharedLinearFactor linearFactor = factorWrapper->getLinearFactor();
        assert(linearFactor != nullptr);

        struct CheckEdits {
          CholeskyEliminationTree* etree = nullptr;
          CheckEdits(CholeskyEliminationTree* etree_in) : etree(etree_in) {}
          bool operator()(const RemappedKey& key) const { 
            return etree->nodes_[key]->status == EDIT;
          }
        };
        factorWrapper->updateHessian(m, -1, keyRowMap, CheckEdits(this));

        if(factorStatus == REMOVING) { 
          factorWrapper->status() = REMOVED; 
          continue;
        }
      }

      // Then relinearize factor to linear factor
      bool unlinearized = factorWrapper->linearizeIfNeeded(theta);

      // Then add hessian of factor to workspace
      if(unlinearized) {
        struct CheckNotUnmarked {
          CholeskyEliminationTree* etree = nullptr;
          CheckNotUnmarked(CholeskyEliminationTree* etree_in) : etree(etree_in) {}
          bool operator()(const RemappedKey& key) const { 
            return !(etree->nodes_[key]->status == UNMARKED);
          }
        };
        // // DEBUG
        // cout << "ADD factor " << factorWrapper << " keys: ";
        // factorWrapper->printKeys(cout);
        // cout << endl;
        // // END DEBUG
        factorWrapper->updateHessian(m, 1, keyRowMap, CheckNotUnmarked(this));
      }
      else if(factorStatus == LINEARIZED || factorStatus == LINEAR) {
        struct CheckReconstructNew {
          CholeskyEliminationTree* etree = nullptr;
          CheckReconstructNew(CholeskyEliminationTree* etree_in) : etree(etree_in) {}
          bool operator()(const RemappedKey& key) const { 
            const auto& status = etree->nodes_[key]->status;
            return (status == RECONSTRUCT) || (status == NEW);
          }
        };
        // // DEBUG
        // cout << "ADD factor " << factorWrapper << " keys: ";
        // factorWrapper->printKeys(cout);
        // cout << endl;
        // // END DEBUG
        factorWrapper->updateHessian(m, 1, keyRowMap, CheckReconstructNew(this));
      }
    }
  }
}

void CholeskyEliminationTree::eliminateClique(sharedClique clique) {
  if(clique->isLastRow()) { return; }

  auto m = workspace_.get_matrices(clique->workspaceIndex)[0];

  size_t totalHeight = clique->height();
  size_t bWidth = clique->width();
  size_t bHeight = totalHeight - bWidth;

  assert(totalHeight == m.rows());

  // // DEBUG
  // cout << "Keys: " << *clique << endl << endl;
  // m.triangularView<Eigen::StrictlyUpper>().setZero();
  // cout << "Before eliminate. m = \n" << block(m, 0, 0, totalHeight, bWidth) << endl << endl;

  Eigen::Block<Eigen::Map<ColMajorMatrix>> D = block(m, 0, 0, bWidth, bWidth);
  Eigen::LLT<Eigen::Ref<Eigen::Block<Eigen::Map<ColMajorMatrix>>>> llt(D);
  if(llt.info() == Eigen::NumericalIssue) {
    cout << "Diagonal block not positive definite!" << endl;
    clique->printClique(cout);
    exit(1);
  }
  auto L = D.triangularView<Eigen::Lower>();
  auto B = block(m, bWidth, 0, bHeight, bWidth);
  auto C = block(m, bWidth, bWidth, bHeight, bHeight);

  L.solveInPlace(B.transpose());

  if(bHeight != -1) {
    C.selfadjointView<Eigen::Lower>().rankUpdate(B, -1);
  }

  // // DEBUG
  // m.triangularView<Eigen::StrictlyUpper>().setZero();
  // cout << "After eliminate. m = \n" << block(m, 0, 0, totalHeight, bWidth) << endl << endl;
}

void CholeskyEliminationTree::mergeWorkspaceClique(sharedClique clique) {
  if(clique->isLastRow()) { 
    assert(clique == root_);
    assert(!clique->parent());
    return; 
  }

  sharedClique parent = clique->parent();

  // Interpret the workspace matrices as a CliqueColumns, then merge them
  auto childMatrixData = workspace_.get_ptrs(clique->workspaceIndex)[0];
  CliqueColumns childCliqueColumns(childMatrixData, 
      &clique->blockIndices, 
      clique->cliqueSize());

  auto parentMatrixData = workspace_.get_ptrs(parent->workspaceIndex)[0];
  CliqueColumns parentCliqueColumns(parentMatrixData, &parent->blockIndices);

  parentCliqueColumns.addCliqueColumns(childCliqueColumns);
}

void CholeskyEliminationTree::scatterClique(sharedClique clique) {

  if(clique->marked()) {
    auto m_ptr = workspace_.get_ptrs(clique->workspaceIndex)[0];
    size_t r = clique->height(), c = clique->width();
    std::shared_ptr<vector<double>> matrixSource = std::make_shared<vector<double>>(r * c);
    std::shared_ptr<BlockIndexVector> blockIndicesSource 
      = std::make_shared<BlockIndexVector>(clique->blockIndices);

    // // DEBUG
    // auto m = workspace_.get_matrices(clique->workspaceIndex)[0];
    // cout << "m rows = " << m.rows() << " m cols = " << m.cols() << " r = " << r << " c = " << c << endl;
    // assert(r == m.rows() && c <= m.cols());

    memcpy(matrixSource->data(), m_ptr, sizeof(double) * r * c);

    clique->gatherSources.clear();
    clique->gatherSources.push_back(LocalCliqueColumns(matrixSource, 
                                                       blockIndicesSource, 
                                                       0, clique->cliqueSize()));
  }

  workspace_.pop_matrices();
}

void CholeskyEliminationTree::backsolve(VectorValues* delta_ptr, double tol) {
  // cout << "[CholeskyEliminationTree] backwardSolve()" << endl;
  // Do a pre-order traversal from top ot bottom
  // For each node, first process the belowDiagonalBlocks, then do solve on the transpose of the diagonal
  vector<pair<sharedClique, bool>> stack(1, {root_, false});
  // Vector higher_delta()
  while(!stack.empty()) {
    auto& curPair = stack.back();
    sharedClique clique = curPair.first;
    bool& expanded = curPair.second;

    if(!expanded) {
      expanded = true;
      if(clique->orderingVersion != orderingVersion_) {
        clique->reorderClique();
      }

      bool backsolve = clique->marked() || clique->needsBacksolve();

      if(backsolve) {

        backsolveClique(clique, delta_ptr, tol);

        for(sharedClique child : clique->children) {
          stack.push_back({child, false});
        }
      }
    }
    else {
      stack.pop_back();

      clique->resetAfterBacksolve();
    }
  }

  deallocateStack();

  checkInvariant_afterBackSolve();
}

void CholeskyEliminationTree::backsolveClique(sharedClique clique, 
    VectorValues* delta_ptr, double tol) {
  if(clique->isLastRow()) { return; }

  // cout << "CholeskyEliminationTree::backsolveClique(): " << *clique << endl;

  // Columns are already gathered
  assert(clique->gatherSources.size() == 1);

  const auto& blockIndices = clique->blockIndices;
  auto m = clique->gatherSources.front().matrix();
  size_t cliqueSize = clique->cliqueSize();
  size_t totalHeight = clique->height();
  size_t diagWidth = clique->width();
  size_t subdiagHeight = clique->subdiagonalHeight();

  // Copy over L^-1 Atb row into delta
  Vector delta = block(m, totalHeight - 1, 0, 1, diagWidth).transpose();

  if(subdiagHeight > 1) {
    Vector gatherX(subdiagHeight - 1);

    // Gather deltas this clique depends on, don't need last row
    for(int i = cliqueSize; i < blockIndices.size() - 1; i++) {
      auto[key, row, height] = blockIndices[i];
      Key unmappedKey = unmapKey(key);

      row -= diagWidth;

      gatherX.block(row, 0, height, 1) = delta_ptr->at(unmappedKey);
    }

    auto B = block(m, diagWidth, 0, subdiagHeight - 1, diagWidth); // sub-diagonal blocks
    delta -= B.transpose() * gatherX;
  }
  
  // Solve diagonal
  auto D = block(m, 0, 0, diagWidth, diagWidth);
  auto LT = D.transpose().triangularView<Eigen::Upper>();
  LT.solveInPlace(delta);

  // Copy delta back into delta_ptr
  for(int i = 0; i < cliqueSize; i++) {
    auto[key, row, height] = blockIndices[i];
    Key unmappedKey = unmapKey(key);

    Vector delta_diff = delta.block(row, 0, height, 1) - delta_ptr->at(unmappedKey);
    delta_ptr->at(unmappedKey) = delta.block(row, 0, height, 1);

    if(valuesChanged(delta_diff, tol)) {
      nodes_.at(key)->backsolve = true;
    }
  }
}

bool CholeskyEliminationTree::valuesChanged(const Vector& diff, double tol) {
  return diff.lpNorm<Eigen::Infinity>() >= tol;
}

void CholeskyEliminationTree::reset() {
  postOrder_ = false;
}

RemappedKey CholeskyEliminationTree::addRemapKey(const Key unmappedKey) {
  // Remap regular keys to start from 1, 0 is for last row (unmappedKey -1)
  RemappedKey remappedKey = keyTransformMap_.size();

  bool inserted = keyTransformMap_.insert({unmappedKey, remappedKey}).second;

  if(!inserted) {
    return keyTransformMap_.at(unmappedKey);
  }

  assert(remappedKey == keyToOrdering_.size());

  if(unmappedKey != -1) {
    // Insert the new regular key in front of the last row
    keyToOrdering_[0] = keyToOrdering_.size();
    keyToOrdering_.push_back(keyToOrdering_.size() - 1);
    orderingToKey_.back() = remappedKey;
    orderingToKey_.push_back(0);
  }
  else {
    keyToOrdering_.push_back(0);
    orderingToKey_.push_back(0);
  }

  unmappedKeys_.push_back(unmappedKey);

  return remappedKey;
}

RemappedKey CholeskyEliminationTree::getRemapKey(const Key unmappedKey) {
  assert(keyTransformMap_.find(unmappedKey) != keyTransformMap_.end());
  return keyTransformMap_.at(unmappedKey);
}

Key CholeskyEliminationTree::unmapKey(const RemappedKey remappedKey) {
  return unmappedKeys_.at(remappedKey);
}

void CholeskyEliminationTree::addNewNode(const RemappedKey key, const size_t width) {
  sharedNode newNode = make_shared<Node>(this, key, width);
  nodes_.push_back(newNode);
  cliques_.push_back(nullptr);

  // We cannot make sharedNode part of the constructor
  // Because at construct time, Clique is not pointed to by shared_ptr
  // Maybe there is a cleaner way?
  sharedClique newClique = make_shared<Clique>(this);
  newClique->addNode(newNode);

  assert(newNode->clique() == newClique);
}

size_t CholeskyEliminationTree::colWidth(const RemappedKey key) const {
  return nodes_.at(key)->width;
}

void CholeskyEliminationTree::checkInvariant_afterSymbolic() const {
  for(sharedClique clique : cliques_) {
    clique->checkInvariant();
  }

  assert(orderingToKey_.back() == 0);
  assert(keyToOrdering_[0] == keyToOrdering_.size() - 1);

  for(int i = 0; i < orderingToKey_.size(); i++) {
    auto key = orderingToKey_[i];
    assert(keyToOrdering_[key] == i);
  }

}

void CholeskyEliminationTree::checkInvariant_afterBackSolve() const {
  for(const sharedClique& clique : cliques_) {
    if(clique->isLastRow()) {
      assert(clique->parent() == nullptr);
      assert(clique == root_);
      assert(clique.use_count() == 2);  // one from cliques_ and one from root_
    }
    else {
      // nodes.size() from cliques_ and one of clique->children
      assert(clique.use_count() == clique->cliqueSize() + 1);  
    }
    assert(clique->ownsColumns());
    clique->checkInvariant();
  }
  for(const sharedNode& node : nodes_) {
    // One in nodes_ and one in clique->nodes
    assert(node.use_count() == 2);
  }
}


template<typename MATRIX>
void scatterMatrix(const MATRIX& src, 
                   const BlockIndexVector& srcBlockIndices,
                   size_t srcStartIndex,
                   size_t srcWidth,
                   const MATRIX& dest,
                   const BlockIndexVector& destBlockIndices,
                   size_t destStartIndex) {
  // scan the two block indices to see which rows can be merged
  
  vector<tuple<size_t, size_t, size_t>> mergedIndices;
  // Want to be able to cleanly copy over data col by col using the same scatter indices

  size_t startCol = get<BLOCK_INDEX_ROW>(srcBlockIndices[srcStartIndex]);
}

// // Take in two BlockIndexVector's and map the corresponding keys from srcBlockIndices
// // to the rows in destBlockIndices, merging heights whenever possible. 
// // The keys in srcBlockIndices must be a subset of the keys destBlockIndices
// // and must be in the same order
// // Taking care that the merged heights do not cross the srcCliqueSize boundary
// // Return vectors of tuple <srcRow, destRow, height>, inCliqueIndices are all the mapped
// // rows of keys in this clique
// BlockIndexVector mapBlockIndices(const BlockIndexVector& srcBlockIndices,
//                                  size_t srcCliqueSize,
//                                  const BlockIndexVector& destBlockIndices,
//                                  tuple<size_t, size_t, size_t>* inCliqueIndices,
//                                  tuple<size_t, size_t, size_t>* outCliqueIndices) {
// 
//   size_t j = 0;
//   size_t lastRow = -1;
//   tuple<size_t, size_t, size_t>* dest = inCliqueIndices;
//   for(size_t i = 0; i < srcBlockIndices.size(); i++) {
//     auto&[srcKey, srcRow, srcHeight] = srcBlockIndices[i];
// 
//     assert(srcKey != 0);
//     
//     RemappedKey destKey;
//     size_t destRow, destHeight;
//     while(j < destBlockIndices.size()) {
//       std::tie(destKey, destRow, destHeight) = destBlockIndices[j];
//       assert(destHeight == srcHeight);
//       if(destKey == srcKey) {
//         break;
//       }
//       j++;
//     }
// 
//     if(j == destBlockIndices.size()) {
//       throw runtime_error("In mapBlockIndices, srcBlockIndices is not a subset of destBlockIndices!");
//     }
// 
//     if(i == srcCliqueSize) {
//       // Reset lastRow so we force a separation between the keys in clique and out
//       lastRow = -1;
//       dest = outCliqueIndices;
//     }
//     if(destRow != lastRow) {
//       // If cannot be merged
//       dest->push_back({srcRow, destRow, destHeight});
//     }
//     else {
//       get<BLOCK_INDEX_HEIGHT>(dest->back()) += destHeight;
//     }
//     lastRow = destRow + destHeight;
//   }
// }

// // Scatter the entries of the matrix src into the matrix dest
// // src is a (not strict) submatrix of a matrix indexed by srcBlockIndices
// // dest is a (not strict) submatrix of a matrix indexed by destBlockIndices
// // The keys in srcBlockIndices must be a subset of the keys in destBlockIndices
// // and must have the same ordering
// // The submatrix src is defined by srcBlockIndices[srcR1:srcR2, srcC1:srcC2]
// // The submatrix dest is defined by destBlockIndices[destR1:destR2, destC1:destC2]
// template<class MATRIX>
// void scatterMatrix(MATRIX& src, MATRIX& dest, 
//                    const BlockIndexVector& srcBlockIndices,
//                    const BlockIndexVector& destBlockIndices,
//                    size_t srcR1, size_t srcR2, size_t srcC1, size_t srcC2,
//                    size_t destR1, size_t destR2, size_t destC1, size_t destC2) {
//   // Do a scan of the blockIndices to determine what rows can be merged
//   mappedIndices = mapBlockIndices(srcBlockIndices, destBlockIndices, srcR1, srcR2, destR1, destR2);
// }


} // namespace gtsam
