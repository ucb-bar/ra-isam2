/**
* @file    CholeskyEliminationTreeNode.h
* @brief   A node in the CholeskyEliminationTree
* @author  Roger Hsiao (rogerhh)
* @date    Feb. 8, 2023
*/

#pragma once

#include <gtsam/linear/CholeskyEliminationTree.h>
#include <utility>

namespace gtsam {

class CholeskyEliminationTree::Node {
private:
  CholeskyEliminationTree* etree = nullptr;

public:
  RemappedKey key;
  size_t width = 0;

  sharedClique clique = nullptr;
  enum Status {UNMARKED, EDIT, RECONSTRUCT, NEW};
  Status status = NEW; 

  bool backsolve = true;

  // Column structure of the lambda matrix for this column
  // Only affected by raw factor connections
  std::set<RemappedKey, OrderingLess> lambdaStructure;
  std::set<RemappedKey, OrderingLess> changedLambdaStructure;

  // // Column structure of the cholesky factor
  // std::vector<Key> colStructure;

  // Factors involving this node
  std::vector<sharedFactorWrapper> factors;

  Node(CholeskyEliminationTree* etree, const Key key_in, const size_t width_in) 
    : etree(etree), key(key_in), width(width_in),
      lambdaStructure(etree->orderingLess_),
      changedLambdaStructure(etree->orderingLess_) {}
};

}

// namespace gtsam {
// 
// class CholeskyEliminationTree::Node {
// public:
//     typedef LowerTriangularColumnMatrix::RowHeightPair RowHeightPair;
// 
// private:
//     CholeskyEliminationTree* eTreePtr = nullptr;
// 
// public:
// 
//     Key key;
//     sharedClique clique = nullptr;
// 
//     // 03/21/2023 We're replacing colStructure and colContribution for a simpler design
//     // factorColStructure gives us the colStructure from raw factors
//     // We use it to determine how many Jacobian columns to load
//     // This only include keys that are higher than us in ordering  (Not true anymore)
//     // This is because we don't need to load the other A column if it is to the left of us
//     // Note: factorColStructure and changedFactorColStructure need to be 
//     // reset for reordered variables!
//     // factorColStructure will contain all rows we interact
//     std::set<Key, OrderingLess> factorColStructure;
//     std::set<Key, OrderingLess> changedFactorColStructure;
// 
//     std::vector<Key> colStructure;
// 
//     // This iteration is reordered
//     bool is_reordered = false;
// 
//     // Factors involving this node. Other keys are already stored in the factor
//     // Not storing a sharedFactor in case factor got moved
//     // This can be a TODO later
//     std::vector<FactorIndex> factorIndices;
// 
//     // True if the whole node needs to be relinearized
//     bool relinearize = false;
// 
//     // Used to check if we need to reorder blocks
//     size_t ordering_version = 0;
// 
//     Node(CholeskyEliminationTree* eTreePtr_in, const Key key_in, size_t ordering_version_in)
//         : eTreePtr(eTreePtr_in), key(key_in), ordering_version(ordering_version_in),
//           factorColStructure(eTreePtr_in->orderingLess), 
//           changedFactorColStructure(eTreePtr_in->orderingLess) {}
// 
// };
// 
// } // namespace gtsam
