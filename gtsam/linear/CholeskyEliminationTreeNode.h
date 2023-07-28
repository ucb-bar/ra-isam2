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

  // This is needed because within the same clique, it is possible that some columns are NEW
  // while the clique itself is EDIT. We don't want to subtract from the NEW columns
  MarkedStatus status_ = NEW; 

public:
  RemappedKey key;
  size_t width = 0;

  bool backsolve = false;

  // Column structure of the lambda matrix for this column
  // Only affected by raw factor connections
  // For each nonzero entry, also keep track of the number of occurrences 
  // in case of removing factors
  std::map<RemappedKey, size_t> lambdaStructure;

  // Factors involving this node
  std::vector<sharedFactorWrapper> factors;

  Node(CholeskyEliminationTree* etree, const Key key_in, const size_t width_in) 
    : etree(etree), key(key_in), width(width_in) {}

  sharedClique clique() {
    assert(etree->cliques_[key]);
    return etree->cliques_[key];
  }

  void setClique(sharedClique c) {
    etree->cliques_[key] = c;
  }

  void addFactor(sharedFactorWrapper factor);

  void removeFactor(sharedFactorWrapper factor);

  // There are 5 types of MarkedStatus's
  // enum MarkedStatus {UNMARKED=0, EDIT=1, RECONSTRUCT=2, NEW=3, MARGINALIZE=4};
  // When checking for state transitions, we should explicitly check for legal start states
  const MarkedStatus& status() const { return status_; }

  void setStatusUnmarked() {
    assert(status_ == UNMARKED || status_ == EDIT || status_ == RECONSTRUCT || status_ == NEW);
    status_ = UNMARKED;
  }

  void setStatusEdit() {
    assert(status_ == UNMARKED || status_ == NEW);
    status_ = EDIT;
  }

  void setStatusReconstruct() {
    assert(status_ == UNMARKED || status_ == NEW);
    status_ = RECONSTRUCT;
  }
  
  void setStatusMarginalized() {
    assert(status_ == UNMARKED);
    status_ = MARGINALIZED;
  }
};

} // namespace gtsam

