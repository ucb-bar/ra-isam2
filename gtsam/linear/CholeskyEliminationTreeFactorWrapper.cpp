/**
* @file    CholeskyEliminationTreeClique.cpp
* @brief   A wrapper around linear/nonlinear factors in the CholeskyEliminationTree
* @author  Roger Hsiao (rogerhh)
* @date    Mar. 16, 2023
*/

#include "CholeskyEliminationTree.h"
#include <gtsam/linear/CholeskyEliminationTreeFactorWrapper.h>
#include <gtsam/linear/CholeskyEliminationTreeClique.h>
#include <gtsam/linear/CholeskyEliminationTreeNode.h>
#include <iostream>
#include <cassert>

using namespace std;

namespace gtsam {
void CholeskyEliminationTree::FactorWrapper::marginalizeKeys() {
  assert(status_ == REMOVING);
  assert(cachedLinearFactor != nullptr);

  if(etree->nodes_[highestKey_]->status == MARGINALIZE) { return; }

  // Just remove the block indices corresponding to the keys that are marginalized
  vector<RemappedKey> newRemappedKeys;
  BlockIndexVector newBlockIndices;
  for(auto&[key, col, width] : blockIndices_) {
    if(etree->nodes_[key]->status != MARGINALIZE) {
      newBlockIndices.push_back({key, col, width});
      newRemappedKeys.push_back(key);
    }
  }

  blockIndices_ = newBlockIndices;
  remappedKeys_ = newRemappedKeys;

  assert(remappedKeys_.back() == 0);

  updateLowestHighestKeys();
}

const JacobianFactor* CholeskyEliminationTree::FactorWrapper::toJacobianFactor() const {
  return dynamic_cast<const JacobianFactor*>(cachedLinearFactor.get());
}

const HessianFactor* CholeskyEliminationTree::FactorWrapper::toHessianFactor() const {
  return dynamic_cast<const HessianFactor*>(cachedLinearFactor.get());
}



void CholeskyEliminationTree::FactorWrapper::printKeys(std::ostream& os) {
  for(auto key : remappedKeys_) {
    os << key << " ";
  }
}

} // namespace gtsam
