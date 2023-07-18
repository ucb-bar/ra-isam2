/**
* @file    CliqueColumns.h
* @brief   Representation matrix data in the columns of a clique. There are 2 different types of clique columns, LocalCliqueColumns and WorkspaceCliqueColumns. A LocalCliqueColumns owns its own matrix. A WorkspaceCliqueColumns only has a view on the matrix and does not own its own data, and is just needed to implement addCliqueColumns.
* @author  Roger Hsiao (rogerhh)
* @date    Jun. 25, 2023
*/

#pragma once

#include <cstddef>
// #include <gtsam/linear/CholeskyEliminationTree.h>
#include <gtsam/linear/CholeskyEliminationTreeTypes.h>
#include <utility>
#include <vector>
#include <unordered_set>
#include <iostream>
#include <cassert>
#include <cstring>

namespace gtsam {

class CliqueColumns {

/*
 *  A CliqueColumns stores the entries of the Cholesky factor. matrix gives a view on the underlying matrix; however, the CliqueColumns doesn't have to own the data. The blockIndices stores the variable keys, ordering, and widths associated with the clique. As the Cholesky factor is symmetric, we only store the subdiagonal part. However, since we might need to split a CliqueColumns into multiple CliqueColumns, the startIndex and endIndex member variables denote the width of the CliqueColumns. 
 * */

public:

  struct Scatter {
    size_t srcRow = 0;
    size_t destRow = 0;
    size_t height = 0;
  };

protected:
  // Pointer to the underlying data of the matrix. Construct an Eigen::Map whenever a view of the matrix is needed
  double* origMatrixData_ = nullptr;
  double* matrixData_ = nullptr;     // Pointer to the start of this column
  size_t rows_ = 0, cols_ = 0;

  BlockIndexVector* blockIndices_;

  size_t startIndex_ = 0, endIndex_ = -1;

  inline void vectorAdd(double* dest, double* src, size_t len) {
    for(size_t i = 0; i < len; i++) {
      *(dest + i) += *(src + i);
    }
  }

public:

  CliqueColumns() {}

  CliqueColumns(double* origMatrixData_in, 
                BlockIndexVector* blockIndices_in,
                size_t startIndex_in,
                size_t endIndex_in) 
  : origMatrixData_(origMatrixData_in), 
    blockIndices_(blockIndices_in), 
    startIndex_(startIndex_in), endIndex_(endIndex_in) {
    assert(std::get<BLOCK_INDEX_KEY>(blockIndices_->back()) == 0);
    rows_ = std::get<BLOCK_INDEX_ROW>(blockIndices_->back()) + 1;
    size_t c1 = std::get<BLOCK_INDEX_ROW>(blockIndices_->at(startIndex_));
    size_t c2 = std::get<BLOCK_INDEX_ROW>(blockIndices_->at(endIndex_ - 1)) 
                + std::get<BLOCK_INDEX_HEIGHT>(blockIndices_->at(endIndex_ - 1));
    cols_ = c2 - c1;

    assert(c2 > c1);

    matrixData_ = origMatrixData_ + rows_ * c1;
  }

  CliqueColumns(double* matrixData_in, 
                BlockIndexVector* blockIndices_in,
                size_t startIndex_in)
  : CliqueColumns(matrixData_in, blockIndices_in, startIndex_in, blockIndices_in->size()) {}


  CliqueColumns(double* matrixData_in, 
                BlockIndexVector* blockIndices_in) 
  : CliqueColumns(matrixData_in, blockIndices_in, 0, blockIndices_in->size()) {}

  CliqueColumns(const CliqueColumns& other) = default;

  // Getters
  bool allocated() const {
    return origMatrixData_ != nullptr;
  }

  size_t rows() const {
    return rows_;
  }

  size_t cols() const {
    return cols_;
  }

  size_t startIndex() const {
    return startIndex_;
  }

  size_t endIndex() const {
    return endIndex_;
  }

  Eigen::Map<ColMajorMatrix> matrix() {
    return Eigen::Map<ColMajorMatrix>(matrixData_, rows_, cols_);
  }

  CliqueColumns split(size_t splitIndex) {
    if(!allocated()) {
      return CliqueColumns();
    }

    CliqueColumns res(origMatrixData_, blockIndices_, splitIndex, endIndex_);
    endIndex_ = splitIndex;
    cols_ = cols_ - res.cols_;

    return res;
  }

  // Merge the other CliqueColumns into this CliqueColumns
  // iff their matrixData is contiguous in memory
  bool merge(const CliqueColumns& other) {
    if(!other.allocated()) {
      return true;
    }

    if(origMatrixData_ == other.origMatrixData_ && endIndex_ == other.startIndex_) {
      cols_ += other.cols_;
      return true;
    }
    return false;
  }

  // Get the row mappings from one CliqueColumns to another
  // The blockIndices of the src CliqueColumns must be a subset of this one
  // and must be in the same order
  std::vector<Scatter> getScatterMap(const CliqueColumns& src) {
    if(!src.allocated()) {
      return std::vector<Scatter>();
    }
    //
    // First scan the blockIndices to check for mergeable rows
    size_t i1 = startIndex_, i2 = src.startIndex_;

    std::vector<Scatter> scatterMap;

    size_t lastDestRow = -1;

    while(i1 < blockIndices_->size() && i2 < src.blockIndices_->size()) {
      RemappedKey k1 = std::get<BLOCK_INDEX_KEY>(blockIndices_->at(i1));
      RemappedKey k2 = std::get<BLOCK_INDEX_KEY>(src.blockIndices_->at(i2));
      if(k1 == k2) {
        size_t destRow = std::get<BLOCK_INDEX_ROW>(blockIndices_->at(i1));

        size_t height = std::get<BLOCK_INDEX_HEIGHT>(src.blockIndices_->at(i2));

        if(destRow == lastDestRow) {
          // if row can be merged
          scatterMap.back().height += height;
        }
        else {
          size_t srcRow = std::get<BLOCK_INDEX_ROW>(src.blockIndices_->at(i2));
          scatterMap.push_back({srcRow, destRow, height});
        }
        lastDestRow = destRow + height;

        i1++; i2++;
      }
      else {
        i1++;
      }
    }

    assert(i1 == blockIndices_->size());
    assert(i2 == src.blockIndices_->size());

    if(i1 != blockIndices_->size() || i2 != src.blockIndices_->size()) {
      throw std::runtime_error("BlockIndices do not match!");
    }

    return scatterMap;
  }

  // Add the entries of the CliqueColumn src into the entries of this. As the src CliqueColumns blockIndices is the subset 
  // of this->blockIndices, a scatter operation is needed.
  void addCliqueColumns(const CliqueColumns& src) {
    if(!src.allocated()) {
      return;
    }

    auto scatterMap = getScatterMap(src);

    addCliqueColumns(src, scatterMap);
  }

  // Add the entries of the src CliqueColumns into the entries of this with the help
  // of a row mapping from the src CliqueColumns to this one
  // This is for the possible future extension of spliting the workspace matrix into
  // 2 parts, but only needing 1 scatterMap
  void addCliqueColumns(const CliqueColumns& src, const std::vector<Scatter>& scatterMap) {
    // We can experiment with how exactly to do the copying
    // But in terms of hw compatibility, seems like we want to copy over col by col
    // Now use the scatterMap to copy over entries
    double* destPtr = matrixData_;
    double* srcPtr = src.matrixData_;

    // if the CliqueColumns does not have startIndex_ 0, there is an offset
    // between its column index and row index. The columns will have the full range of
    // blockIndices, so it will be taller than the rows
    size_t srcColOffset = std::get<BLOCK_INDEX_ROW>(src.blockIndices_->at(src.startIndex_));
    size_t destColOffset = std::get<BLOCK_INDEX_ROW>(blockIndices_->at(startIndex_));

    for(size_t i = 0; i < scatterMap.size(); i++) {
      const Scatter& colScatter = scatterMap[i];
      // A scatter stores row index to row index mappings. Need to be offset
      assert(colScatter.srcRow >= srcColOffset);
      assert(colScatter.destRow >= destColOffset);
      size_t srcColStart = colScatter.srcRow - srcColOffset;
      size_t destColStart = colScatter.destRow - destColOffset;

      assert(destColStart + colScatter.height <= cols_);

      for(size_t colOffset = 0; colOffset < colScatter.height; colOffset++) {
        size_t srcCol = srcColStart + colOffset;
        size_t destCol = destColStart + colOffset;
        if(srcCol >= src.cols_) {
          break;
        }

        size_t srcRowStart = srcCol * src.rows_;
        size_t destRowStart = destCol * rows_;

        for(size_t j = i; j < scatterMap.size(); j++) {
          const Scatter& rowScatter = scatterMap[j];
          size_t srcRow = rowScatter.srcRow;
          size_t destRow = rowScatter.destRow;

          vectorAdd(destPtr + destRowStart + destRow,
                    srcPtr + srcRowStart + srcRow,
                    rowScatter.height);
        }
      }
    }
  }

  friend std::ostream& operator<<(std::ostream& os, const CliqueColumns& cliqueColumns);
 
};

class LocalCliqueColumns : public CliqueColumns {

/* Multiple LocalCliqueColumns may shared the same underlying data matrixSource, although the LocalCliqueColumns whose startIndex_=0 is the true owner of the data
 * */

private:
    std::shared_ptr<std::vector<double>> matrixSource_ = nullptr;
    std::shared_ptr<BlockIndexVector> blockIndicesSource_ = nullptr;

public:
    LocalCliqueColumns(std::shared_ptr<std::vector<double>> matrixSource_in, 
                       std::shared_ptr<BlockIndexVector> blockIndicesSource_in,
                       size_t startIndex_in, 
                       size_t endIndex_in) 
    : CliqueColumns(matrixSource_in->data(), blockIndicesSource_in.get(), 
                    startIndex_in, endIndex_in),
      matrixSource_(matrixSource_in), blockIndicesSource_(blockIndicesSource_in) {}

    LocalCliqueColumns(std::shared_ptr<std::vector<double>> matrixSource_in, 
                       std::shared_ptr<BlockIndexVector> blockIndicesSource_in,
                       size_t startIndex_in)
    : LocalCliqueColumns(matrixSource_in, blockIndicesSource_in, 
                         startIndex_in, blockIndicesSource_in->size()) {} 

    LocalCliqueColumns(const LocalCliqueColumns& other) = default;

    LocalCliqueColumns split(size_t startIndex_) {
      LocalCliqueColumns res(matrixSource_, blockIndicesSource_, startIndex_, endIndex_);     
      endIndex_ = startIndex_;
      cols_ = cols_ - res.cols_;
      return res;
    }

    bool ownsData() const {
      return startIndex_ == 0;
    }

    // Dealocate data that we own
    void deallocateSelfData() {
      assert(matrixSource_->size() >= rows_ * cols_);
      matrixSource_->resize(matrixSource_->size() - rows_ * cols_);
    }
};

}   // namespace gtsam
