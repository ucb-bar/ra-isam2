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

  typedef Eigen::Block<const Matrix> constBlock;

  CholeskyEliminationTree* etree = nullptr;

  // blockIndices_ store the list of (key, col, width) of the block row
  // This DOES NOT change after reordering keys. Only needs updating after
  // adding new keys
  BlockIndexVector blockIndices_;

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
  // enum Status {UNLINEARIZED, LINEARIZED, RELINEARIZE, LINEAR, REMOVING, REMOVED};

  FactorStatus status_ = UNLINEARIZED;

  // A nonlinear factor linearizes to a linear augmented block row matrix
  // If a factor is already linear, then we instantiate directly as an augmented matrix
  sharedFactor nonlinearFactor_ = nullptr;

  // ColMajorMatrix cachedLinearFactor;
  sharedLinearFactor cachedLinearFactor = nullptr;

  RemappedKeyVector remappedKeys_;

  RemappedKey lowestKey_;

  // Construct a wrapper around a factor
  // If nonlinearFactor_in == nullptr, then we are constructing a linear factor
  FactorWrapper(sharedFactor nonlinearFactor_in,
                sharedLinearFactor cachedLinearFactor_in,
                CholeskyEliminationTree* etree_in) 
  : etree(etree_in),
    nonlinearFactor_(nonlinearFactor_in),
    cachedLinearFactor(cachedLinearFactor_in) {
    if(nonlinearFactor_ == nullptr) {

      status_ = LINEAR;
      // factorDim = cachedLinearFactor->dim();
      for(Key unmappedKey : cachedLinearFactor->keys()) {
        remappedKeys_.push_back(etree->getRemapKey(unmappedKey));
      }
    }
    else {
      // factorDim = nonlinearFactor_->dim();
      for(Key unmappedKey : nonlinearFactor_->keys()) {
        remappedKeys_.push_back(etree->getRemapKey(unmappedKey));
      }
    }

    // Add rhs to remapped keys
    remappedKeys_.push_back(0);

    updateBlockIndices();
    updateLowestKey();
  }

  void updateBlockIndices() {
    blockIndices_.clear();
    assert(remappedKeys_.back() == 0);
    size_t curCol = 0;
    for(RemappedKey key : remappedKeys_) {
      size_t width = etree->colWidth(key);
      blockIndices_.push_back({key, curCol, width});
      curCol += width;
    }
  }

  const BlockIndexVector& blockIndices() const { return blockIndices_; }

  void updateLowestKey() {
    lowestKey_ = remappedKeys_.front();
    for(RemappedKey key : remappedKeys_) {
      if(etree->orderingLess_(key, lowestKey_)) {
        lowestKey_ = key;
      }
    }
  }

  RemappedKey lowestKey() { return lowestKey_; }

  const size_t dim() const { 
    /*return factorDim;*/ 
    throw std::runtime_error("dim() not implemented"); 
    return 0; 
  }

  FactorStatus& status() { return status_; }

  // Linearize the factor if it needs to be linearized. 
  // Returns true if action is done, false otherwise
  // This does not change the status of the factor yet
  bool linearizeIfNeeded(const Values& theta) {
    if(status_ == UNLINEARIZED || status_ == RELINEARIZE) {
      cachedLinearFactor = nonlinearFactor_->linearize(theta);
      status_ = LINEARIZED;
      return true;
    }
    return false;
  }

  sharedFactor nonlinearFactor() { return nonlinearFactor_; }

  sharedLinearFactor getLinearFactor() {
    return cachedLinearFactor;
  }

  void addNewKeys(const std::vector<RemappedKey>& newKeys) {
    // We actually don't need to do a lot here as the nonlinearFactor will have already been 
    // updated with new keys, but we do need to relinearize the factor though
    status_ = RELINEARIZE;
    for(RemappedKey key : newKeys) {
      remappedKeys_.push_back(key);
    }

    // TODO: verify if new keys are added to the end of the list of keys
    throw std::runtime_error("factor add new keys");

    updateBlockIndices();
    updateLowestKey();

    return;
  }

  void markAffectedKeys(RemappedKeySet* affectedKeys) {
    for(RemappedKey key : remappedKeys_) {
      affectedKeys->insert(key);
    }
  }

  const RemappedKeyVector& remappedKeys() {
    return remappedKeys_;
  }

  const KeyVector& keys() {
    throw std::runtime_error("Are you sure you want to get unmapped keys");
    if(nonlinearFactor_ != nullptr) {
      return nonlinearFactor_->keys();
    }
    return cachedLinearFactor->keys();
  }

  const JacobianFactor* toJacobianFactor() const {
    return dynamic_cast<const JacobianFactor*>(cachedLinearFactor.get());
  }

  const HessianFactor* toHessianFactor() const {
    return dynamic_cast<const HessianFactor*>(cachedLinearFactor.get());
  }

  struct DefaultPred {
    bool operator()(const RemappedKey& key) const { return true; }
  };

  template<typename MATRIX, typename PREDICATE>
  void updateHessianJacobian(
      const JacobianFactor* jf, 
      MATRIX& m, 
      double sign, 
      const BlockIndexMap& keyRowMap, 
      const PREDICATE& pred=DefaultPred()) {
    const Matrix& Ab = jf->matrixObject().matrix();
    // const VerticalBlockMatrix& Ab = jf->matrixObject();
    size_t height = Ab.rows();

    for(size_t i = 0; i < blockIndices_.size() - 1; i++) {
      // Higher key represents the column. Don't need last column
      const auto&[lowerKey, srcCol1, srcW1] = blockIndices_.at(i);
      // std::cout << "checking lowerKey = " << lowerKey << std::endl;
      if(!pred(lowerKey)) {
        continue;
      }
      const auto&[destR1, h1] = keyRowMap.at(lowerKey);
      Eigen::Block<const Matrix> Ab_i(Ab, 0, srcCol1, height, srcW1);
      for(size_t j = 0; j < remappedKeys_.size(); j++) {
        const auto&[higherKey, srcCol2, srcW2] = blockIndices_.at(j);
        if(etree->orderingLess_(higherKey, lowerKey)) {
          continue;
        }
        // std::cout << "lowerKey = " << lowerKey << " higherKey = " << higherKey << std::endl;
        const auto&[destR2, h2] = keyRowMap.at(higherKey);
        Eigen::Block<const Matrix> Ab_j(Ab, 0, srcCol2, height, srcW2);

        Eigen::Block<MATRIX> destBlock(m, destR2, destR1, h2, h1);

        destBlock.noalias() += sign * Ab_j.transpose() * Ab_i;

      }
    }
  }

  template<typename MATRIX, typename PREDICATE>
  void updateHessianHessian(
      const HessianFactor* hf,
      MATRIX& m, 
      double sign, 
      const BlockIndexMap& keyRowMap, 
      const PREDICATE& pred=DefaultPred()) {
    assert(0);
    // const SymmetricBlockMatrix& info = hf->info();
    // for(size_t i = 0; i < remappedKeys_.size(); i++) {
    //   RemappedKey lowerKey = remappedKeys_[i];
    //   if(!pred(lowerKey)) {
    //     continue;
    //   }
    //   const auto&[destR1, h1] = keyRowMap.at(lowerKey);
    //   for(size_t j = 0; j < remappedKeys_.size(); j++) {
    //     RemappedKey higherKey = remappedKeys_[j];
    //     if(etree->orderingLess_(higherKey, lowerKey)) {
    //       continue;
    //     }
    //     const auto&[destR2, h2] = keyRowMap.at(higherKey);

    //     Eigen::Block<MATRIX> destBlock(m, destR2, destR1, h2, h1);
    //     if(i == j) {
    //       Eigen::SelfAdjointView<Eigen::Block<MATRIX>, Eigen::Upper>(destBlock) 
    //         += sign * info.diagonalBlock(i);
    //     }
    //     else {
    //       DenseIndex I = std::min(i, j);
    //       DenseIndex J = std::max(i, j);
    //       destBlock += sign * info.aboveDiagonalBlock(I, J).transpose();
    //     }
    //   }
    // }
  }

  // Populate the columns of the MATRIX m with the sign * Hessian of the factor
  // skipping column key if pred(key) == false
  template<typename MATRIX, typename PREDICATE>
  void updateHessian(
      MATRIX& m, 
      double sign, 
      const BlockIndexMap& keyRowMap, 
      const PREDICATE& pred=DefaultPred()) {

    if(const JacobianFactor* jf = toJacobianFactor()) {
      updateHessianJacobian(jf, m, sign, keyRowMap, pred);
    }
    else if(const HessianFactor* hf = toHessianFactor()) {
      updateHessianHessian(hf, m, sign, keyRowMap, pred);   
    }
    else {
      throw std::runtime_error("Factor cannot be dynamically cast");
    }
  }

  void printKeys(std::ostream& os) {
    for(auto key : remappedKeys_) {
      os << key << " ";
    }
  }
};

} // namespace gtsam
