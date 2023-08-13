/**
* @file    gemmini_functions.h
* @brief   All the different linear algebra routines used in CholeskyEliminationTree. Isolated out to support gemmini
* @author  Roger Hsiao (rogerhh)
* @date    Aug. 11, 2023
*/


#ifndef GEMMINI_FUNCTIONS_H
#define GEMMINI_FUNCTIONS_H

#define GEMMINI_TYPE float

#include <gtsam/base/Matrix.h>
#include <iostream>

namespace gtsam {

// Copy the contents of M into a GEMMINI_TYPEing point array A
// M is typically a matrix of doubles, so it must be down-casted
// A must be preallocated
template<typename MATRIX>
void gather(const MATRIX& M, GEMMINI_TYPE* A) {
  size_t rows = M.rows();
  size_t cols = M.cols();
  for(size_t j = 0; j < cols; j++) {
    GEMMINI_TYPE* A_start = A + j * rows;
    for(size_t i = 0; i < rows; i++) {
      *(A_start + i) = (GEMMINI_TYPE) M(i, j);
    }
  }
}

// Do C += scale * A * B. A, B, C must be preallocated
inline void matmul(
    size_t A_rows, size_t A_cols, 
    size_t B_rows, size_t B_cols,
    GEMMINI_TYPE scale,
    const GEMMINI_TYPE* A, const GEMMINI_TYPE* B, GEMMINI_TYPE* C) {
  assert(A_cols == B_rows);
  for(size_t i = 0; i < A_rows; i++) {
    for(size_t j = 0; j < B_rows; j++) {
      for(size_t k = 0; k < A_cols; k++) {
        C[j * A_rows + i] += scale * A[k * A_rows + i] * B[j * B_rows + k];
      }
    }
  }
}

// Do C += scale * A.T * B. A, B, C must be preallocated
inline void transposed_matmul(
    size_t A_rows, size_t A_cols, 
    size_t B_rows, size_t B_cols,
    GEMMINI_TYPE scale,
    const GEMMINI_TYPE* A, const GEMMINI_TYPE* B, GEMMINI_TYPE* C) {
  assert(A_rows == B_rows);
  for(size_t i = 0; i < A_cols; i++) {
    for(size_t j = 0; j < B_rows; j++) {
      for(size_t k = 0; k < A_rows; k++) {
        C[j * A_cols + i] += scale * A[k * A_cols + i] * B[j * B_rows + k];
      }
    }
  }
}

// Do C += scale * A.T * A. A, C must be preallocated
inline void syrk(
  size_t A_rows, size_t A_cols,
  GEMMINI_TYPE scale,
  const GEMMINI_TYPE* A, GEMMINI_TYPE* C) {
  for(size_t j = 0; j < A_cols; j++) {
    GEMMINI_TYPE* C_start = C + j * A_cols;
    const GEMMINI_TYPE* A_start = A + j * A_rows;
    for(size_t i = j; i < A_cols; i++) {
      const GEMMINI_TYPE* AT_start = A + i * A_rows;
      for(size_t k = 0; k < A_rows; k++) {
        *(C_start + i) += scale * (*(AT_start + k)) * (*(A_start + k));
      }
    }
  }
}

// scatter-add the block of A(r, c, w, h) into MATRIX M
template<typename MATRIX>
void scatter_add(size_t A_rows, size_t A_cols, 
  const GEMMINI_TYPE* A, 
  size_t r, size_t c, size_t w, size_t h,
  MATRIX& M) {
  for(size_t j = 0; j < h; j++) {
    const GEMMINI_TYPE* A_start = A + (c + j) * A_rows + r;
    for(size_t i = 0; i < w; i++) {
      M(i, j) += (double) *(A_start + i);
    }
  }
}

// scatter-add the block of A(r, c, w, h).T into MATRIX M
template<typename MATRIX>
void transpose_scatter_add(
  size_t A_rows, size_t A_cols, 
  const GEMMINI_TYPE* A, 
  size_t r, size_t c, size_t w, size_t h,
  MATRIX& M) {
  for(size_t j = 0; j < h; j++) {
    const GEMMINI_TYPE* A_start = A + c * A_rows + r + j;
    for(size_t i = 0; i < w; i++) {
      M(i, j) += (double) *(A_start + i * A_rows);
    }
  }
}

} // namespace gtsam

#endif
