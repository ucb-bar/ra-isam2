/**
* @file    CholeskyEliminationTreeFactorWrapper.h
* @brief   A wrapper class around a Factor in the CholeskyEliminationTree. The Factor can be linear or nonlinear. The main purpose for this class is to provide a convenient lookup for remapped keys and to keep track of the state of each factor
* @author  Roger Hsiao (rogerhh)
* @date    Jun. 20, 2023
*/

#pragma once

#include <gtsam/linear/CholeskyEliminationTree.h>
#include <gtsam/linear/JacobianFactor.h>
#include <gtsam/nonlinear/NonlinearFactor.h>
#include <utility>

namespace gtsam {

class CholeskyEliminationTree::FactorWrapper {
public:

  // factorBlockIndices store the list of (key, col, width) of the block row
  BlockIndexVector factorBlockIndices;

  // Dimension is not supported as the factor can be a Hessian factor 
  // and cannot easily get dim
  // size_t factorDim;

  // State of the factor. 
  // UNLINEARIZED is the state of all new nonlinear factors
  // RELINEARIZE is the state of old factors that need relienarization, we need a separate state for this in the case of edits
  // LINEARIZED is the state of nonlinear factors after linearization
  // LINEAR is the state of linear/marginalized factors
  // REMOVING factors should be subtracted from the info matrix if the clique is EDIT, but 
  // should not be added back in
  // REMOVED factors is the final state of REMOVING factors. We keep the factors for
  // now to retain flexibility
  enum Status {UNLINEARIZED, LINEARIZED, RELINEARIZE, LINEAR, REMOVING, REMOVED};

  Status linearizeStatus = UNLINEARIZED;

  // A nonlinear factor linearizes to a linear augmented block row matrix
  // If a factor is already linear, then we instantiate directly as an augmented matrix
  sharedFactor nonlinearFactor = nullptr;

  // ColMajorMatrix cachedLinearFactor;
  sharedLinearFactor cachedLinearFactor = nullptr;

  // Construct a wrapper around a factor
  // If nonlinearFactor_in == nullptr, then we are constructing a linear factor
  FactorWrapper(const BlockIndexVector& blockIndices_in,
                sharedFactor nonlinearFactor_in, 
                const sharedLinearFactor& cachedLinearFactor_in)
    : factorBlockIndices(blockIndices_in), 
      nonlinearFactor(nonlinearFactor_in), 
      cachedLinearFactor(cachedLinearFactor_in) {
    
    if(nonlinearFactor == nullptr) {
      linearizeStatus = LINEAR;
      // factorDim = cachedLinearFactor->dim();
    }
    else {
      // factorDim = nonlinearFactor->dim();
    }
  }

  const BlockIndexVector& blockIndices() const { return factorBlockIndices; }
  const size_t dim() const { /*return factorDim;*/ assert(0); }
  Status& status() { return linearizeStatus; }

  void linearize(const Values& theta) {
    if(linearizeStatus == UNLINEARIZED || linearizeStatus == RELINEARIZE) {
      cachedLinearFactor = nonlinearFactor->linearize();

      linearizeStatus = LINEARIZED;
    }
  }

  sharedLinearFactor getLinearFactor() {
    return cachedLinearFactor;
  }

  void addNewKeys() {
    // We actually don't need to do a lot here as the nonlinearFactor will have already been 
    // updated with new keys, but we do need to relinearize the factor though
    linearizeStatus = RELINEARIZE;
    return;
  }

  const KeyVector& keys() {
    if(nonlinearFactor != nullptr) {
      return nonlinearFactor->keys();
    }
    return cachedLinearFactor->keys();
  }

  // const ColMajorMatrix& linearize(const Values& theta) {

  //   std::vector<ColMajorMatrix> A;

  //   Vector b(factorDim);
  //   nonlinearFactor->linearizeToMatrix(theta, &A, &b);

  //   size_t totalWidth = std::get<1>(factorBlockIndices.back()) + 1;

  //   cachedLinearFactor = ColMajorMatrix(factorDim, totalWidth);
  //   for(size_t i = 0; i < factorBlockIndices.size() - 1; i++) {
  //     auto&[_, col, width] = factorBlockIndices[i];
  //     Eigen::Block<ColMajorMatrix> block(cachedLinearFactor, 0, col, factorDim, width);
  //     block = A[i];
  //   }
  //   auto&[key, col, width] = factorBlockIndices.back();
  //   assert(key == 0);
  //   assert(width == 1);
  //   Eigen::Block<ColMajorMatrix> block(cachedLinearFactor, 0, col, factorDim, width);
  //   block = b;

  //   return cachedLinearFactor;
  //   
  // }

};

} // namespace gtsam
