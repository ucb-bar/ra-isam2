/**
* @file    CholeskyEliminationTreeClique.cpp
* @brief   A group of fully connected node in the CholeskyEliminationTree
* @author  Roger Hsiao (rogerhh)
* @date    Mar. 16, 2023
*/

#include "CholeskyEliminationTree.h"
#include <gtsam/linear/CholeskyEliminationTreeNode.h>
#include <gtsam/linear/CholeskyEliminationTreeFactorWrapper.h>
#include <iostream>
#include <cassert>

using namespace std;

namespace gtsam {

void CholeskyEliminationTree::Node::addFactor(sharedFactorWrapper factor) {
  for(sharedFactorWrapper oldFactor : factors) {
    assert(oldFactor->factorIndex() != factor->factorIndex());
  }


  factors.push_back(factor);
  for(RemappedKey k : factor->remappedKeys()) {
    lambdaStructure[k]++;
  }
}

void CholeskyEliminationTree::Node::removeFactor(sharedFactorWrapper factor) {
  for(RemappedKey k : factor->remappedKeys()) {
    assert(lambdaStructure.at(k) > 0);
    lambdaStructure[k]--;
    if(lambdaStructure.at(k) == 0) {
      lambdaStructure.erase(k);
    }
  }

  for(int i = 0; i < factors.size(); i++) {
    if(factors[i] == factor) {
      factors[i] = factors.back();
      factors.pop_back();
    }
  }

}

} // namespace gtsam
