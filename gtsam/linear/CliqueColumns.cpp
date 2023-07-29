#include <gtsam/linear/CliqueColumns.h>

using namespace std;

namespace gtsam {

CliqueColumns CliqueColumns::split(size_t splitIndex) {
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
bool CliqueColumns::merge(const CliqueColumns& other) {
  if(!other.allocated()) {
    return true;
  }

  if(origMatrixData_ == other.origMatrixData_ && endIndex_ == other.startIndex_) {
    cols_ += other.cols_;
    return true;
  }
  return false;
}

std::vector<CliqueColumns::Scatter> CliqueColumns::getScatterMap(const CliqueColumns& src) {
  if(!src.allocated()) {
    return std::vector<Scatter>();
  }

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

std::vector<CliqueColumns::Scatter> CliqueColumns::getScatterMapReordered(
    const CliqueColumns& src) {

  if(!src.allocated()) {
    return std::vector<Scatter>();
  }

  // First create an unordered map for fast access
  BlockIndexMap destKeyRowMap;
  for(const auto& p : *blockIndices_) {
    destKeyRowMap.insert({get<BLOCK_INDEX_KEY>(p), 
                         {get<BLOCK_INDEX_ROW>(p), get<BLOCK_INDEX_HEIGHT>(p)}});
  }

  size_t lastDestRow = -1;
  vector<Scatter> scatterMap;
  for(const auto&[key, srcRow, height] : *src.blockIndices_) {
    assert(destKeyRowMap.find(key) != destKeyRowMap.end());
    const auto&[destRow, destHeight] = destKeyRowMap[key];
    assert(height == destHeight);
    if(destRow == lastDestRow) {
      // if row can be merged
      scatterMap.back().height += height;
    }
    else {
      scatterMap.push_back({srcRow, destRow, height});
    }
    lastDestRow = destRow + height;
  }
  return scatterMap;
}

// Add the entries of the CliqueColumn src into the entries of this. As the src CliqueColumns blockIndices is the subset 
// of this->blockIndices, a scatter operation is needed.
void CliqueColumns::addCliqueColumns(const CliqueColumns& src, bool reordered) {
  if(!src.allocated()) {
    return;
  }

  vector<Scatter> scatterMap;
  if(reordered) {
    scatterMap = getScatterMapReordered(src);
  }
  else {
    scatterMap = getScatterMap(src);
  }

  // for(Scatter scatter : scatterMap) {
  //   cout << scatter.srcRow << " " << scatter.destRow << " " << scatter.height << endl;
  // }

  addCliqueColumns(src, scatterMap);
}

// Add the entries of the src CliqueColumns into the entries of this with the help
// of a row mapping from the src CliqueColumns to this one
// This is for the possible future extension of spliting the workspace matrix into
// 2 parts, but only needing 1 scatterMap
void CliqueColumns::addCliqueColumns(
    const CliqueColumns& src, const std::vector<Scatter>& scatterMap) {
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
    // A scatter stores src row index to dest row index mappings. Need to be offset
    assert(colScatter.srcRow >= srcColOffset);
    assert(colScatter.destRow >= destColOffset);
    size_t srcColStart = colScatter.srcRow - srcColOffset;
    size_t destColStart = colScatter.destRow - destColOffset;

    for(size_t colOffset = 0; colOffset < colScatter.height; colOffset++) {
      size_t srcCol = srcColStart + colOffset;
      size_t destCol = destColStart + colOffset;
      if(srcCol >= src.cols_ || destCol >= cols_) {
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

std::ostream& operator<<(std::ostream& os, const CliqueColumns& cliqueColumns) {
  Eigen::Map<ColMajorMatrix> m(cliqueColumns.matrixData_, cliqueColumns.rows_, cliqueColumns.cols_);
  os << m;
  return os; 
}

} // namespace gtsam
