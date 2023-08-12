/**
* @file    gemmini_functions.h
* @brief   All the different linear algebra routines used in CholeskyEliminationTree. Isolated out to support gemmini
* @author  Roger Hsiao (rogerhh)
* @date    Aug. 11, 2023
*/

#pragma once

#include <gtsam/base/Matrix.h>

namespace gtsam {

// Copy the contents of M into a floating point array A
// M is typically a matrix of doubles, so it must be down-casted
// A must be preallocated
template<typename MATRIX>
void gather(const MATRIX& M, float* A) {
  size_t rows = M.rows();
  size_t cols = M.cols();
  for(size_t j = 0; j < cols; j++) {
    float* A_start = A + j * rows;
    double* M_start = &M(0, j);
    for(size_t i = 0; i < rows; i++) {
      *(A_start + i) = (float) *(M_start + i);
    }
  }
}

// Do C += scale * A * B. A, B, C must be preallocated
void matmul(size_t A_rows, size_t A_cols, 
    size_t B_rows, size_t B_cols,
    float scale,
    const float* A, const float* B, float* C) {
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
void transposed_matmul(
    size_t A_rows, size_t A_cols, 
    size_t B_rows, size_t B_cols,
    float scale,
    const float* A, const float* B, float* C) {
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
void syrk(
  size_t A_rows, size_t A_cols,
  float scale,
  const float* A, float* C) {
  for(size_t j = 0; j < A_cols; j++) {
    double* C_start = C + j * A_cols;
    double* A_start = A + j * A_rows;
    for(size_t i = j; i < A_cols; i++) {
      double* AT_start = A + i * A_rows;
      for(size_t k = 0; k < A_rows; k++) {
        *(C_start + i) += scale * (*(AT_start + k)) * (*(A_start + k));
      }
    }
  }
}

// scatter-add the block of A(r, c, w, h) into MATRIX M
template<typename MATRIX>
void scatter_add(size_t A_rows, size_t A_cols, 
  const float* A, 
  size_t r, size_t c, size_t w, size_t h
  MATRIX& M) {
  for(size_t j = 0; j < h; j++) {
    double* M_start = &M(0, j);
    float* A_start = A + (c + j) * A_rows + r;
    for(size_t i = 0; i < w; i++) {
      *(M_start + i) += (double) *(A_start + i);
    }
  }
}

// scatter-add the block of A(r, c, w, h).T into MATRIX M
template<typename MATRIX>
void transpose_scatter_add(
  size_t A_rows, size_t A_cols, 
  const float* A, 
  size_t r, size_t c, size_t w, size_t h
  MATRIX& M) {
  for(size_t j = 0; j < h; j++) {
    double* M_start = &M(0, j);
    float* A_start = A + c * A_rows + r + j;
    for(size_t i = 0; i < w; i++) {
      *(M_start + i) += (double) *(A_start + i * A_rows);
    }
  }
}

} // namespace gtsam

