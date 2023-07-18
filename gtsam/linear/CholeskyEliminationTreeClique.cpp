/**
* @file    CholeskyEliminationTreeClique.cpp
* @brief   A group of fully connected node in the CholeskyEliminationTree
* @author  Roger Hsiao (rogerhh)
* @date    Mar. 16, 2023
*/

#include "CholeskyEliminationTree.h"
#include <gtsam/linear/CholeskyEliminationTreeClique.h>
#include <gtsam/linear/CholeskyEliminationTreeNode.h>
#include <iostream>
#include <cassert>

using namespace std;

namespace gtsam {

using sharedNode = CholeskyEliminationTree::sharedNode;
using sharedClique = CholeskyEliminationTree::sharedClique;

CholeskyEliminationTree::Clique::Clique(CholeskyEliminationTree* etree_in)
  : etree(etree_in) {}

void CholeskyEliminationTree::Clique::addNode(sharedNode node) {
  nodes.push_back(node);
  node->clique = shared_from_this();
}

sharedClique CholeskyEliminationTree::Clique::markClique(
    const RemappedKey lowestKey, RemappedKeySet* markedKeys) {

  sharedClique oldParent = parent;
  detachParent();

  if(nodes.size() > 1) {
    // This is not a new clique, check that we have Atb row
    assert(blockIndices.size() >= nodes.size() + 1);
  }

  assert(ownsColumns());

  int i;
  for(i = nodes.size() - 1; i >= 0; i--) {
    markedKeys->insert(nodes[i]->key);
    if(i > 0) {
      // make new clique for node
      sharedClique newClique = make_shared<Clique>(etree);
      newClique->addNode(nodes[i]);
      newClique->marked_ = true;

      assert(gatherSources.size() == 1);
      newClique->gatherSources.push_back(gatherSources.front().split(i));

      if(nodes[i]->key == lowestKey) {
        // The last detached node's clique should have this clique as a child
        setParent(newClique);
        // resize vector to detach all nodes that have new cliques
        nodes.resize(i);
        break;
      }
    }
    else {
      marked_ = true;
      assert(nodes[i]->key == lowestKey);
      assert(nodes[i]->clique == get_ptr());
      nodes.resize(1);

      // This cannot be a split clique, as clique generated from the previous 
      // if block will not be processed again
      if(!blockIndices.empty()) {
        // If not a new clique
        assert(ownsColumns());

        // This clique now has the same number of columns as the width of the first variable
        // This is taken care of by splitting CliqueColumns

        blockIndices.clear();
      }
    }
  }
  return oldParent;
}

void CholeskyEliminationTree::Clique::reorderClique() {
  assert(0);
}

void CholeskyEliminationTree::Clique::findParent() {
  assert(!blockIndices.empty());
  if(blockIndices.size() == 1) {
    // Last row is going to be the root of all cliques
    // This will solve the multiple roots problem
    assert(nodes.front()->key == 0);
    parent = nullptr;
    return;
  }

  RemappedKey parentKey = get<BLOCK_INDEX_KEY>(blockIndices.at(cliqueSize()));
  setParent(etree->nodes_[parentKey]->clique);

  cout << "block indices: ";
  for(auto [key, r, h] : blockIndices) {
    cout << key << " ";
  }
  cout << endl;

  cout << "found parent " << *parent << " " << parent << endl;
}

void CholeskyEliminationTree::Clique::detachParent() {
    if(parent != nullptr) {
        assert(parent->children.find(get_ptr()) != parent->children.end());
        parent->children.erase(get_ptr());
        parent = nullptr;
    }
}

void CholeskyEliminationTree::Clique::setParent(sharedClique newParent) {
    // Detach from old parent
    detachParent();

    // Set new parent
    parent = newParent;
    if(parent != nullptr) {
        assert(parent->children.find(get_ptr()) == parent->children.end());
        parent->children.insert(get_ptr());
    }
}

shared_ptr<CholeskyEliminationTree::Node> CholeskyEliminationTree::Clique::front() {
    return nodes.front();
}

shared_ptr<CholeskyEliminationTree::Node> CholeskyEliminationTree::Clique::back() {
  return nodes.back();
}

RemappedKey CholeskyEliminationTree::Clique::frontKey() const {
  return nodes.front()->key;
}

RemappedKey CholeskyEliminationTree::Clique::backKey() const {
  return nodes.back()->key;
}

bool CholeskyEliminationTree::Clique::isLastRow() const {
  if(frontKey() == 0) {
    assert(backKey() == 0);
    assert(nodes.size() == 1);
    return true;;
  }
  return false;
}

bool CholeskyEliminationTree::Clique::marked() const {
  return marked_;
}

size_t CholeskyEliminationTree::Clique::cliqueSize() const {
  return nodes.size();
}

size_t CholeskyEliminationTree::Clique::diagonalHeight() const {
  if(isLastRow()) {
    return 1;
  }
  assert(blockIndices.size() > cliqueSize());
  return get<BLOCK_INDEX_ROW>(blockIndices[cliqueSize()]);
}

size_t CholeskyEliminationTree::Clique::subdiagonalHeight() const {
  return get<BLOCK_INDEX_ROW>(blockIndices.back()) - diagonalHeight() + 1;
}

size_t CholeskyEliminationTree::Clique::height() const {
    assert(get<BLOCK_INDEX_KEY>(blockIndices.back()) == 0);
    return get<BLOCK_INDEX_ROW>(blockIndices.back()) + 1;
}

size_t CholeskyEliminationTree::Clique::width() const {
  return diagonalHeight();
}

void CholeskyEliminationTree::Clique::mergeClique(sharedClique otherClique) {
    // Assert the clique is standalone because we generally only merge with lone nodes
    // during symbolic elimination
    assert(parent == otherClique);
    assert(otherClique->nodes.size() == 1);   
    assert(otherClique->nodes.front()->key != 0);
    assert(otherClique->children.find(get_ptr()) != otherClique->children.end());   

    cout << "In merge clique: this = " << *this << " other = " << *otherClique << endl;

    addNode(otherClique->front());

    // Added clique can only have 1 node, but may have clique children
    // Need to add clique children to merged clique
    // Need to make sure to not create circular references
    // This is for the case of a relaxed supernode. We are disallowing the case for now
    assert(otherClique->children.size() == 1);
    vector<sharedClique> otherChildren;
    otherChildren.insert(otherChildren.begin(), 
                         otherClique->children.begin(),
                         otherClique->children.end());
    for(sharedClique childClique : otherChildren) {
      if(childClique != get_ptr()) {
        childClique->setParent(get_ptr());
      }
    }

    // clique1 parent must now be set to clique2 parent
    assert(otherClique->parent == nullptr);
    setParent(otherClique->parent);

    // After reassigning parent, no node shoud point to this clique
    otherClique->detachParent();

    // Merge CliqueColumns, which are fragments of the previous Cholesky factor
    mergeGatherSources(otherClique->gatherSources);
}

void CholeskyEliminationTree::Clique::mergeGatherSources(
    const vector<LocalCliqueColumns>& otherGatherSources) {
  // There are 3 cases
  // 1. The 2 cliqueColumns used to belong in the same clique. Merge them
  // 2. The 2 cliqueColumns do not belong in the same clique. Keep them both.
  // 3. One or both of them are new (gatherSources.empty()). Keep whatever is valid.

  if(otherGatherSources.empty()) {
    // Case 3.1. Do nothing
  }
  else if(gatherSources.empty()) {
    // Case 3.2. 
    gatherSources = otherGatherSources;
  }
  else {
    // otherClique should only have a single node, but we can write it to be more flexible
    for(const LocalCliqueColumns& otherColumns : otherGatherSources) {
      // If the other CliqueColumns can be merged into our last CliqueColumn, merge
      // Otherwise just add it to the list of fragments
      if(!gatherSources.back().merge(otherColumns)) {
        gatherSources.push_back(otherColumns);
      }
    }
  }
}

void CholeskyEliminationTree::Clique::mergeColStructure(
    vector<RemappedKey>* parentColStructure) {
  vector<RemappedKey> newColStructure;
  newColStructure.reserve(blockIndices.size() + parentColStructure->size());

  size_t i1 = 0, i2 = cliqueSize();  // merged col structure does not include child diagonal

  while(i1 < parentColStructure->size() || i2 < blockIndices.size()) {
    RemappedKey k1 = 0, k2 = 0; // Default to 0 because the ordering of key 0 is INT_MAX
    if(i1 < parentColStructure->size()) {
      k1 = (*parentColStructure)[i1];
    }
    if(i2 < blockIndices.size()) {
      k2 = get<BLOCK_INDEX_KEY>(blockIndices[i2]);
    }

    if(k1 == k2) {
      newColStructure.push_back(k1);
      i1++;
      i2++;
    }
    else if(etree->orderingLess_(k1, k2)) {
      newColStructure.push_back(k1);
      i1++;
    }
    else {
      assert(etree->orderingLess_(k2, k1));
      newColStructure.push_back(k2);
      i2++;
    }
  }

  *parentColStructure = std::move(newColStructure);
}

void CholeskyEliminationTree::Clique::populateBlockIndices(
    const std::vector<RemappedKey>& colStructure) {
  assert(colStructure.back() == 0);
  assert(nodes.size() == 1);
  assert(blockIndices.size() == 0);
  size_t row = 0;
  for(RemappedKey k : colStructure) {
    size_t height = etree->colWidth(k);
    blockIndices.push_back({k, row, height});
    row += height;
  }
}

bool CholeskyEliminationTree::Clique::reorderColumn(BlockIndexVector& newBlockIndices) {
  assert(0);
  throw runtime_error("reorderColumn not implemented");
  //   assert(newBlockIndices.size() == blockIndices.size());

  //   size_t i = 0;
  //   // The nodes in the clique should remain the same
  //   for(i = 0; i < cliqueSize(); i++) {
  //       assert(newBlockIndices[i] == blockIndices[i]);
  //   }

  //   size_t lowestReorderedIndex = -1;
  //   for(; i < blockIndices.size(); i++) {
  //       if(newBlockIndices[i].first != blockIndices[i].first) {
  //           lowestReorderedIndex = i;
  //           break;
  //       }
  //   }

  //   if(i == blockIndices.size()) {
  //       return false;
  //   }

  //   assert(blockIndices[lowestReorderedIndex].second.first 
  //           == newBlockIndices[lowestReorderedIndex].second.first);
  //   size_t firstRow = blockIndices[lowestReorderedIndex].second.first;

  //   unordered_map<Key, size_t> keyRowMap;

  //   for(size_t i = lowestReorderedIndex; i < blockIndices.size(); i++) {
  //       Key key = blockIndices[i].first;
  //       size_t row = blockIndices[i].second.first;
  //       keyRowMap.insert({key, row});
  //   }

  //   assert(gatherSources.size() == 1);
  //   auto&[col_data_ptr, col_data_start, col_row_start, r, c] = gatherSources[0];

  //   // if(firstRow * 2 < r) {
  //   if(false) {
  //       // Update partially
  //       assert(0);
  //   
  //   } 
  //   else {
  //       // update all matrix
  //       shared_ptr<vector<double>> new_col_data_ptr = make_shared<vector<double>>(r * c);
  //       Eigen::Map<ColMajorMatrix> new_m(new_col_data_ptr->data(), r, c);
  //       Eigen::Map<ColMajorMatrix> old_m(col_data_ptr->data(), r, c);

  //       Eigen::Block<Eigen::Map<ColMajorMatrix>>(new_m, 0, 0, firstRow, c)
  //           = Eigen::Block<Eigen::Map<ColMajorMatrix>>(old_m, 0, 0, firstRow, c);

  //       for(size_t i = lowestReorderedIndex; i < blockIndices.size(); i++) {
  //           Key newKey = newBlockIndices[i].first;
  //           size_t newRow = newBlockIndices[i].second.first;
  //           size_t width = newBlockIndices[i].second.second;
  //           size_t oldRow = keyRowMap.at(newKey);

  //           Eigen::Block<Eigen::Map<ColMajorMatrix>>(new_m, newRow, 0, width, c)
  //               = Eigen::Block<Eigen::Map<ColMajorMatrix>>(old_m, oldRow, 0, width, c);
  //       }

  //       col_data_ptr = new_col_data_ptr;

  //   }

  //   blockIndices = std::move(newBlockIndices);
  //   
  //   return true;
}

void CholeskyEliminationTree::Clique::setEditOrReconstruct() {
  assert(0);
}

void CholeskyEliminationTree::Clique::checkEditOrReconstruct(
    MarkedStatus mode, std::vector<RemappedKey>* destCols) {

  destCols->clear();
  destCols->reserve(blockIndices.size());

  for(size_t i = cliqueSize(); i < blockIndices.size(); i++) { 
    // Start from subdiagonal keys
    RemappedKey key = get<BLOCK_INDEX_KEY>(blockIndices[i]);
    assert(etree->nodes_[key]->clique->marked());
    if(key != 0 && etree->nodes_[key]->clique->status == mode) {
      // ignore last row
      destCols->push_back(key);
    }
  }
}

// void CholeskyEliminationTree::Clique::deallocateExcessCols() {
//     assert(!marked);
//     assert(temp_data_start == 0);
// 
//     if(r * c != col_data.size()) {
//         assert(parent != nullptr);
//         assert(parent->temp_data == &col_data);
//         parent->temp_data = nullptr;
//         col_data.resize(r * c);
//     }
//     else {
//         assert(parent != nullptr);
//         assert(parent->temp_data != &col_data);
//     }
// }

void CholeskyEliminationTree::Clique::setNodeStatus() {
  for(sharedNode node : nodes) {
    if(node->status == NEW && this->status == EDIT) {
      // Do nothing
    }
    else {
      node->status = this->status;
    }
  }
}

void CholeskyEliminationTree::Clique::setBacksolve(bool backsolve) {
  for(sharedNode node : nodes) {
    node->backsolve = backsolve;
  }
}

bool CholeskyEliminationTree::Clique::needsBacksolve() const {
  for(size_t i = cliqueSize(); i < blockIndices.size(); i++) {
    RemappedKey key = get<BLOCK_INDEX_KEY>(blockIndices[i]);
    if(etree->nodes_[key]->backsolve) {
      return true;
    }
  }
  return false;
}

void CholeskyEliminationTree::Clique::resetAfterCholesky() {
}

void CholeskyEliminationTree::Clique::resetAfterBacksolve() {
  // Reset node member variables
  setBacksolve(false);

  // Reset node member variables
  for(sharedNode node : nodes) {
    node->status = UNMARKED;
    node->changedLambdaStructure.clear();
  }

  // Reset member variables
  status = UNMARKED;
  marked_ = false;
  workspaceIndex = -1;
}

void CholeskyEliminationTree::Clique::printClique(ostream& os) {
    os << "Clique: ";
    for(sharedNode node : nodes) {
        os << node->key << " ";
    }
    os << endl;
    os << "   Parent: ";
    if(parent != nullptr) {
        for(sharedNode node : parent->nodes) {
            os << node->key << " ";
        }
    }
    else {
        os << "nullptr";
    }
    os << endl;
    os << "   Children: " << endl;
    for(sharedClique clique : children) {
        os << "   - ";
        for(sharedNode node : clique->nodes) {
            os << node->key << " ";
        }
        os << endl;
    }
}

std::ostream& operator<<(std::ostream& os, const CholeskyEliminationTree::Clique& clique) {
    for(size_t i = 0; i < clique.nodes.size(); i++) {
        os << clique.nodes[i]->key;
        if(i != clique.nodes.size() - 1) {
            os << " ";
        }
    }
    return os;
}

// Check if we own our columns
bool CholeskyEliminationTree::Clique::ownsColumns() const {

  if(gatherSources.empty()) { return true; }

  if(gatherSources.size() > 1) {
    return false;
  }
  
  return gatherSources.front().ownsData();
}

}   // namespace gtsam
