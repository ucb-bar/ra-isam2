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
  : etree(etree_in) {
  
  // Use nullptr to denote column not allocated
  // We will deal with this in mergeClique, but we can also try to make a special case for this
  gatherSources.push_back(make_tuple(nullptr, nullptr, 0, 0, 0));
}

void CholeskyEliminationTree::Clique::addNode(sharedNode node) {
  nodes.push_back(node);
  node->clique = shared_from_this();
}

sharedClique CholeskyEliminationTree::Clique::markClique(
  const RemappedKey lowestKey, KeySet* markedKeys) {
    sharedClique oldParent = parent;
    detachParent();

    if(nodes.size() > 1) {
        // This is not a new clique, check that we have Atb row
        assert(blockIndices.size() >= nodes.size() + 1);
    }

    assert(ownColumns());
    auto&[matrixSource, vectorSource, matrixNumRows, gatherStartRow, gatherWidth] 
      = gatherSources.front();

    int i;
    for(i = nodes.size() - 1; i >= 0; i--) {
        markedKeys->insert(nodes[i]->key);
        if(i > 0) {
            // make new clique for node
            sharedClique newClique = make_shared<Clique>(etree);
            newClique->addNode(nodes[i]);
            newClique->marked = true;

            // There is a small problem here, when we split off columns from cliques
            // The new columns shouldn't have the same number of rows as 
            // the top of the column is not used
            auto&[_, newCliqueStartRow, newCliqueWidth] = blockIndices[i];
            newClique->gatherSources.front() = make_tuple(matrixSource, 
                                                          vectorSource, 
                                                          matrixNumRows, 
                                                          newCliqueStartRow,
                                                          newCliqueWidth);

            if(nodes[i]->key == lowestKey) {
                // The last detached node's clique should have this clique as a child
                setParent(newClique);
                // resize vector to detach all nodes that have new cliques
                nodes.resize(i);
                // This clique now has fewer columns than before
                gatherWidth = newCliqueStartRow;
                break;
            }
        }
        else {
            marked = true;
            assert(nodes[i]->key == lowestKey);
            assert(nodes[i]->clique == get_ptr());
            nodes.resize(1);

            // This cannot be a split clique, as clique generated from the previous 
            // if block will not be processed again
            if(!blockIndices.empty()) {
              // If not a new clique
              assert(ownColumns());
              assert(matrixSource != nullptr);
              assert(vectorSource != nullptr);

              // This clique now has the same number of columns as the width of the first variable
              gatherWidth = get<BLOCK_INDEX_HEIGHT>(blockIndices.front());

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
  RemappedKey parentKey = get<BLOCK_INDEX_KEY>(blockIndices.at(cliqueSize()));
  if(parentKey != 0) {
    assert(etree->nodes_[parentKey]->clique != nullptr);
    setParent(etree->nodes_[parentKey]->clique);
    assert(parent->children.size() > 0);
  }
  else {
    parent = nullptr;
  }
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

Key CholeskyEliminationTree::Clique::frontKey() {
  return nodes.front()->key;
}

Key CholeskyEliminationTree::Clique::backKey() {
  return nodes.back()->key;
}

size_t CholeskyEliminationTree::Clique::cliqueSize() const {
  return nodes.size();
}

size_t CholeskyEliminationTree::Clique::diagonalSize() const {
  return get<BLOCK_INDEX_ROW>(blockIndices[cliqueSize()]);
}

size_t CholeskyEliminationTree::Clique::subdiaongalSize() const {
  return get<BLOCK_INDEX_ROW>(blockIndices.back()) - diagonalSize() + 1;
}

void CholeskyEliminationTree::Clique::mergeClique(sharedClique otherClique) {
    // Assert the clique is standalone because we generally only merge with lone nodes
    // during symbolic elimination
    assert(parent == otherClique);
    assert(otherClique->nodes.size() == 1);   
    assert(otherClique->children.find(get_ptr()) != otherClique->children.end());   

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
      cout << "Why are we here?" << endl;
      assert(0);
      exit(0);
        if(childClique != get_ptr()) {
            childClique->setParent(get_ptr());
        }
    }

    // clique1 parent must now be set to clique2 parent
    assert(otherClique->parent == nullptr);
    setParent(otherClique->parent);

    // After reassigning parent, no node shoud point to this clique
    otherClique->detachParent();


    // Merge column matrices. After merging, col_data_start, r, c should be enough information 
    // to gather the existing columns of the clique
    // 3 possibilities
    // 1. Column is just reordered. In that case, this merging does not matter as 
    // we will not use the data. However, we still need to take care of the old memory
    // 2. The parent column is new. In that case, just use the old one
    // 3. The two cliques used to belong to the same clique. In that case, they will have the same col_data_ptr
    //  3.1 However, it is also possible that there is a reordering but the two nodes are still in the same clique. In this case, the old col will still be downsized the same amount
    // I.e. col_data_ptr should be the same for all 3 cases. r and c need to be merged in case 3
    // We only check the last source of the child clique. This takes care of the 
    // case of multiple fragments

    assert(otherClique->gatherSources.size() == 1);

    auto&[matrixSource1, vectorSource1, matrixNumRows1, gatherStartRow1, gatherWidth1] 
      = gatherSources.back();
    auto&[matrixSource2, vectorSource2, matrixNumRows2, gatherStartRow2, gatherWidth2] 
      = otherClique->gatherSources.back();
    
    if(matrixSource1 != nullptr && matrixSource1 == matrixSource2 
        && gatherStartRow1 + gatherWidth1 == gatherStartRow2) {
        // This is case 3
        assert(matrixNumRows1 == matrixNumRows2);
        assert(vectorSource1 == vectorSource2);
        gatherWidth1 += gatherWidth2;
    }
    else {
        // If col_data_ptr == nullptr
        //   In this case, either both are new or there is a reordering. Might need to deallocate parent
        // If col_data_ptr != otherClique->col_data_ptr
        //   There is a reordering, might need to deallocate parent
        //   (New scheme: don't deallocate old but keep it around)
        if(matrixSource2) {
          gatherSources.push_back(otherClique->gatherSources.back());
        }
        else {
          // Do nothing
        }
    
    }
}

void CholeskyEliminationTree::Clique::mergeColStructure(
    vector<RemappedKey>* parentColStructure) {
  vector<RemappedKey> newColStructure;
  newColStructure.reserve(blockIndices.size() + parentColStructure->size());

  size_t i1 = 0, i2 = 1;  // merged col structure does not include child diagonal

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
    if(etree->orderingLess_(k1, k2)) {
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
    assert(newBlockIndices.size() == blockIndices.size());

    size_t i = 0;
    // The nodes in the clique should remain the same
    for(i = 0; i < cliqueSize(); i++) {
        assert(newBlockIndices[i] == blockIndices[i]);
    }

    size_t lowestReorderedIndex = -1;
    for(; i < blockIndices.size(); i++) {
        if(newBlockIndices[i].first != blockIndices[i].first) {
            lowestReorderedIndex = i;
            break;
        }
    }

    if(i == blockIndices.size()) {
        return false;
    }

    assert(blockIndices[lowestReorderedIndex].second.first 
            == newBlockIndices[lowestReorderedIndex].second.first);
    size_t firstRow = blockIndices[lowestReorderedIndex].second.first;

    unordered_map<Key, size_t> keyRowMap;

    for(size_t i = lowestReorderedIndex; i < blockIndices.size(); i++) {
        Key key = blockIndices[i].first;
        size_t row = blockIndices[i].second.first;
        keyRowMap.insert({key, row});
    }

    assert(gatherSources.size() == 1);
    auto&[col_data_ptr, col_data_start, col_row_start, r, c] = gatherSources[0];

    // if(firstRow * 2 < r) {
    if(false) {
        // Update partially
        assert(0);
    
    } 
    else {
        // update all matrix
        shared_ptr<vector<double>> new_col_data_ptr = make_shared<vector<double>>(r * c);
        Eigen::Map<ColMajorMatrix> new_m(new_col_data_ptr->data(), r, c);
        Eigen::Map<ColMajorMatrix> old_m(col_data_ptr->data(), r, c);

        Eigen::Block<Eigen::Map<ColMajorMatrix>>(new_m, 0, 0, firstRow, c)
            = Eigen::Block<Eigen::Map<ColMajorMatrix>>(old_m, 0, 0, firstRow, c);

        for(size_t i = lowestReorderedIndex; i < blockIndices.size(); i++) {
            Key newKey = newBlockIndices[i].first;
            size_t newRow = newBlockIndices[i].second.first;
            size_t width = newBlockIndices[i].second.second;
            size_t oldRow = keyRowMap.at(newKey);

            Eigen::Block<Eigen::Map<ColMajorMatrix>>(new_m, newRow, 0, width, c)
                = Eigen::Block<Eigen::Map<ColMajorMatrix>>(old_m, oldRow, 0, width, c);
        }

        col_data_ptr = new_col_data_ptr;

    }

    blockIndices = std::move(newBlockIndices);
    
    return true;
}

void CholeskyEliminationTree::Clique::setEditOrReconstruct() {
  assert(0);
}

void CholeskyEliminationTree::Clique::checkEditOrReconstruct(
    Status mode, std::vector<RemappedKey>* destCols) {

  destCols->clear();
  destCols->reserve(blockIndices.size());

  for(size_t i = cliqueSize(); i < blockIndices.size(); i++) { 
    // Start from subdiagonal keys
    RemappedKey key = get<BLOCK_INDEX_KEY>(blockIndices[i]);
    assert(etree->nodes_[key]->clique->marked);
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
bool CholeskyEliminationTree::Clique::ownColumns() const {
  assert(gatherSources.size() >= 1);
     
  if(gatherSources.size() != 1) {
    return false;
  }

  if(std::get<GATHER_START_ROW>(gatherSources.front()) == 0) {
    return true;
  }

  return false;
}

}   // namespace gtsam
