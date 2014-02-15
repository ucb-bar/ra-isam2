/* ----------------------------------------------------------------------------

 * GTSAM Copyright 2010, Georgia Tech Research Corporation,
 * Atlanta, Georgia 30332-0415
 * All Rights Reserved
 * Authors: Frank Dellaert, et al. (see THANKS for the full author list)

 * See LICENSE for the license information

 * -------------------------------------------------------------------------- */

/**
 * @file    SymmetricBlockMatrix.h
 * @brief   Access to matrices via blocks of pre-defined sizes.  Used in GaussianFactor and GaussianConditional.
 * @author  Richard Roberts
 * @date    Sep 18, 2010
 */
#pragma once

#include <gtsam/base/Matrix.h>
#include <gtsam/base/FastVector.h>
#include <gtsam/base/SymmetricBlockMatrixBlockExpr.h>

namespace gtsam {

// Forward declarations
class VerticalBlockMatrix;

/**
 * This class stores a dense matrix and allows it to be accessed as a
 * collection of blocks. When constructed, the caller must provide the
 * dimensions of the blocks.
 *
 * The block structure is symmetric, but the underlying matrix does not
 * necessarily need to be.
 *
 * This class also has a parameter that can be changed after construction to
 * change the apparent matrix view.  firstBlock() determines the block that
 * appears to have index 0 for all operations (except re-setting firstBlock).
 *
 * @addtogroup base */
class GTSAM_EXPORT SymmetricBlockMatrix {
public:
  typedef SymmetricBlockMatrix This;
  typedef SymmetricBlockMatrixBlockExpr<This> Block;
  typedef SymmetricBlockMatrixBlockExpr<const This> constBlock;

protected:

  Matrix matrix_; ///< The full matrix

  /// the starting columns of each block (0-based)
  FastVector<DenseIndex> variableColOffsets_;

  /// Changes apparent matrix view, see main class comment.
  DenseIndex blockStart_;

public:
  /// Construct from an empty matrix (asserts that the matrix is empty)
  SymmetricBlockMatrix() :
      blockStart_(0) {
    variableColOffsets_.push_back(0);
    assertInvariants();
  }

  /// Construct from a container of the sizes of each block.
  template<typename CONTAINER>
  SymmetricBlockMatrix(const CONTAINER& dimensions) :
      blockStart_(0) {
    fillOffsets(dimensions.begin(), dimensions.end());
    matrix_.resize(variableColOffsets_.back(), variableColOffsets_.back());
    assertInvariants();
  }

  /// Construct from iterator over the sizes of each vertical block.
  template<typename ITERATOR>
  SymmetricBlockMatrix(ITERATOR firstBlockDim, ITERATOR lastBlockDim) :
      blockStart_(0) {
    fillOffsets(firstBlockDim, lastBlockDim);
    matrix_.resize(variableColOffsets_.back(), variableColOffsets_.back());
    assertInvariants();
  }

  /**
   * @brief Construct from a container of the sizes of each vertical block
   * and a pre-prepared matrix.
   */
  template<typename CONTAINER>
  SymmetricBlockMatrix(const CONTAINER& dimensions, const Matrix& matrix) :
      blockStart_(0) {
    matrix_.resize(matrix.rows(), matrix.cols());
    matrix_.triangularView<Eigen::Upper>() =
        matrix.triangularView<Eigen::Upper>();
    fillOffsets(dimensions.begin(), dimensions.end());
    if (matrix_.rows() != matrix_.cols())
      throw std::invalid_argument("Requested to create a SymmetricBlockMatrix"
          " from a non-square matrix.");
    if (variableColOffsets_.back() != matrix_.cols())
      throw std::invalid_argument(
          "Requested to create a SymmetricBlockMatrix with dimensions "
              "that do not sum to the total size of the provided matrix.");
    assertInvariants();
  }

  /**
   * Copy the block structure, but do not copy the matrix data.  If blockStart()
   * has been modified, this copies the structure of the corresponding matrix.
   * In the destination SymmetricBlockMatrix, blockStart() will be 0.
   */
  static SymmetricBlockMatrix LikeActiveViewOf(
      const SymmetricBlockMatrix& other);

  /**
   * Copy the block structure, but do not copy the matrix data. If blockStart()
   * has been modified, this copies the structure of the corresponding matrix.
   * In the destination SymmetricBlockMatrix, blockStart() will be 0.
   */
  static SymmetricBlockMatrix LikeActiveViewOf(
      const VerticalBlockMatrix& other);

  /// Row size
  DenseIndex rows() const {
    assertInvariants();
    return variableColOffsets_.back() - variableColOffsets_[blockStart_];
  }

  /// Column size
  DenseIndex cols() const {
    return rows();
  }

  /// Block count
  DenseIndex nBlocks() const {
    assertInvariants();
    return variableColOffsets_.size() - 1 - blockStart_;
  }

  /**
   * Access the block with vertical block index \c i_block and horizontal block
   * index \c j_block. Note that the actual block accessed in the underlying
   * matrix is relative to blockStart().
   */
  Block operator()(DenseIndex i_block, DenseIndex j_block) {
    return Block(*this, i_block, j_block);
  }

  /**
   * Access the block with vertical block index \c i_block and horizontal block
   * index \c j_block. Note that the actual block accessed in the underlying
   * matrix is relative to blockStart().
   */
  constBlock operator()(DenseIndex i_block, DenseIndex j_block) const {
    return constBlock(*this, i_block, j_block);
  }

  /**
   * Access the range of blocks starting with vertical block index
   * \c i_startBlock, ending with vertical block index \c i_endBlock, starting
   * with horizontal block index \c j_startBlock, and ending with horizontal
   * block index \c j_endBlock. End block indices are exclusive. Note that the
   * actual blocks accessed in the underlying matrix are relative to blockStart().
   */
  Block range(DenseIndex i_startBlock, DenseIndex i_endBlock,
      DenseIndex j_startBlock, DenseIndex j_endBlock) {
    assertInvariants();
    return Block(*this, i_startBlock, j_startBlock, i_endBlock - i_startBlock,
        j_endBlock - j_startBlock);
  }

  /**
   * Access the range of blocks starting with vertical block index
   * \c i_startBlock, ending with vertical block index \c i_endBlock, starting
   * with horizontal block index \c j_startBlock, and ending with horizontal
   * block index \c j_endBlock.  End block indices are exclusive. Note that the
   * actual blocks accessed in the underlying matrix are relative to blockStart().
   */
  constBlock range(DenseIndex i_startBlock, DenseIndex i_endBlock,
      DenseIndex j_startBlock, DenseIndex j_endBlock) const {
    assertInvariants();
    return constBlock(*this, i_startBlock, j_startBlock,
        i_endBlock - i_startBlock, j_endBlock - j_startBlock);
  }

  /**
   * Return the full matrix, *not* including any portions excluded by
   * firstBlock().
   */
  Block full() {
    return Block(*this, 0, nBlocks(), 0);
  }

  /**
   * Return the full matrix, *not* including any portions excluded by
   * firstBlock().
   */
  constBlock full() const {
    return constBlock(*this, 0, nBlocks(), 0);
  }

  /**
   * Access to full matrix, including any portions excluded by firstBlock()
   * to other operations.
   */
  Eigen::SelfAdjointView<const Matrix, Eigen::Upper> matrix() const {
    return matrix_;
  }

  /** Access to full matrix, including any portions excluded by firstBlock()
   * to other operations.
   */
  Eigen::SelfAdjointView<Matrix, Eigen::Upper> matrix() {
    return matrix_;
  }

  /**
   * Return the absolute offset in the underlying matrix
   * of the start of the specified \c block.
   */
  DenseIndex offset(DenseIndex block) const {
    assertInvariants();
    DenseIndex actualBlock = block + blockStart_;
    checkBlock(actualBlock);
    return variableColOffsets_[actualBlock];
  }

  /**
   * Retrieve or modify the first logical block, i.e. the block referenced by
   * block index 0. Blocks before it will be inaccessible, except by accessing
   * the underlying matrix using matrix().
   */
  DenseIndex& blockStart() {
    return blockStart_;
  }

  /**
   * Retrieve the first logical block, i.e. the block referenced by block index 0.
   * Blocks before it will be inaccessible, except by accessing the underlying
   * matrix using matrix().
   */
  DenseIndex blockStart() const {
    return blockStart_;
  }

  /**
   * Do partial Cholesky in-place and return the eliminated block matrix,
   * leaving the remaining symmetric matrix in place.
   */
  VerticalBlockMatrix choleskyPartial(DenseIndex nFrontals);

protected:
  void assertInvariants() const {
    assert(matrix_.rows() == matrix_.cols());
    assert(matrix_.cols() == variableColOffsets_.back());
    assert(blockStart_ < (DenseIndex)variableColOffsets_.size());
  }

  void checkBlock(DenseIndex block) const {
    assert(matrix_.rows() == matrix_.cols());
    assert(matrix_.cols() == variableColOffsets_.back());
    assert(block >= 0);
    assert(block < (DenseIndex)variableColOffsets_.size()-1);
    assert(
        variableColOffsets_[block] < matrix_.cols() && variableColOffsets_[block+1] <= matrix_.cols());
  }

  DenseIndex offsetUnchecked(DenseIndex block) const {
    return variableColOffsets_[block + blockStart_];
  }

  //void checkRange(DenseIndex i_startBlock, DenseIndex i_endBlock, DenseIndex j_startBlock, DenseIndex j_endBlock) const
  //{
  //  const DenseIndex i_actualStartBlock = i_startBlock + blockStart_;
  //  const DenseIndex i_actualEndBlock = i_endBlock + blockStart_;
  //  const DenseIndex j_actualStartBlock = j_startBlock + blockStart_;
  //  const DenseIndex j_actualEndBlock = j_endBlock + blockStart_;
  //  checkBlock(i_actualStartBlock);
  //  checkBlock(j_actualStartBlock);
  //  if(i_startBlock != 0 || i_endBlock != 0) {
  //    checkBlock(i_actualStartBlock);
  //    assert(i_actualEndBlock < (DenseIndex)variableColOffsets_.size());
  //  }
  //  if(j_startBlock != 0 || j_endBlock != 0) {
  //    checkBlock(j_actualStartBlock);
  //    assert(j_actualEndBlock < (DenseIndex)variableColOffsets_.size());
  //  }
  //}

  //void checkRange(DenseIndex startBlock, DenseIndex endBlock) const
  //{
  //  const DenseIndex actualStartBlock = startBlock + blockStart_;
  //  const DenseIndex actualEndBlock = endBlock + blockStart_;
  //  checkBlock(actualStartBlock);
  //  if(startBlock != 0 || endBlock != 0) {
  //    checkBlock(actualStartBlock);
  //    assert(actualEndBlock < (DenseIndex)variableColOffsets_.size());
  //  }
  //}

  //Block rangeUnchecked(DenseIndex i_startBlock, DenseIndex i_endBlock, DenseIndex j_startBlock, DenseIndex j_endBlock)
  //{
  //  const DenseIndex i_actualStartBlock = i_startBlock + blockStart_;
  //  const DenseIndex i_actualEndBlock = i_endBlock + blockStart_;
  //  const DenseIndex j_actualStartBlock = j_startBlock + blockStart_;
  //  const DenseIndex j_actualEndBlock = j_endBlock + blockStart_;

  //  return Block(matrix(),
  //    variableColOffsets_[i_actualStartBlock],
  //    variableColOffsets_[j_actualStartBlock],
  //    variableColOffsets_[i_actualEndBlock] - variableColOffsets_[i_actualStartBlock],
  //    variableColOffsets_[j_actualEndBlock] - variableColOffsets_[j_actualStartBlock]);
  //}

  //constBlock rangeUnchecked(DenseIndex i_startBlock, DenseIndex i_endBlock, DenseIndex j_startBlock, DenseIndex j_endBlock) const
  //{
  //  // Convert Block to constBlock
  //  const Block block = const_cast<This*>(this)->rangeUnchecked(i_startBlock, i_endBlock, j_startBlock, j_endBlock);
  //  return constBlock(matrix(), block.Base::Base::, block.startCol(), block.rows(), block.cols());
  //}

  //Block rangeUnchecked(DenseIndex startBlock, DenseIndex endBlock)
  //{
  //  const DenseIndex actualStartBlock = startBlock + blockStart_;
  //  const DenseIndex actualEndBlock = endBlock + blockStart_;

  //  return Block(matrix(),
  //    variableColOffsets_[actualStartBlock],
  //    variableColOffsets_[actualStartBlock],
  //    variableColOffsets_[actualEndBlock] - variableColOffsets_[actualStartBlock],
  //    variableColOffsets_[actualEndBlock] - variableColOffsets_[actualStartBlock]);
  //}

  //constBlock rangeUnchecked(DenseIndex startBlock, DenseIndex endBlock) const
  //{
  //  // Convert Block to constBlock
  //  const Block block = const_cast<This*>(this)->rangeUnchecked(startBlock, endBlock);
  //  return constBlock(matrix(), block.startRow(), block.startCol(), block.rows(), block.cols());
  //}

  template<typename ITERATOR>
  void fillOffsets(ITERATOR firstBlockDim, ITERATOR lastBlockDim) {
    variableColOffsets_.resize((lastBlockDim - firstBlockDim) + 1);
    variableColOffsets_[0] = 0;
    DenseIndex j = 0;
    for (ITERATOR dim = firstBlockDim; dim != lastBlockDim; ++dim) {
      variableColOffsets_[j + 1] = variableColOffsets_[j] + *dim;
      ++j;
    }
  }

  friend class VerticalBlockMatrix;
  template<typename SymmetricBlockMatrixType> friend class SymmetricBlockMatrixBlockExpr;

private:
  /** Serialization function */
  friend class boost::serialization::access;
  template<class ARCHIVE>
  void serialize(ARCHIVE & ar, const unsigned int version) {
    ar & BOOST_SERIALIZATION_NVP(matrix_);
    ar & BOOST_SERIALIZATION_NVP(variableColOffsets_);
    ar & BOOST_SERIALIZATION_NVP(blockStart_);
  }
};

/* ************************************************************************* */
class CholeskyFailed: public gtsam::ThreadsafeException<CholeskyFailed> {
public:
  CholeskyFailed() throw () {
  }
  virtual ~CholeskyFailed() throw () {
  }
};

} //\ namespace gtsam

