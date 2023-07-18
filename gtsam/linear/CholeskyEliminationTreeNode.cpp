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
  factors.push_back(factor);
  for(RemappedKey k : factor->remappedKeys()) {
    lambdaStructure[k]++;
  }
}

} // namespace gtsam
