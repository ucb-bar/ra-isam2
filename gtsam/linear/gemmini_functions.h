/**
* @file    gemmini_functions.h
* @brief   All the different linear algebra routines used in CholeskyEliminationTree. Isolated out to support gemmini
* @author  Roger Hsiao (rogerhh)
* @date    Aug. 11, 2023
*/


#ifndef GEMMINI_FUNCTIONS_H
#define GEMMINI_FUNCTIONS_H

#define GEMMINI_IS_FLOAT  0
#define GEMMINI_IS_DOUBLE 1
#define GEMMINI_TYPE_CHECK GEMMINI_FLOAT
typedef float GEMMINI_TYPE;
typedef GEMMINI_TYPE elem_t;
typedef GEMMINI_TYPE scale_t;
// #define elem_t GEMMINI_TYPE
// #define scale_t GEMMINI_TYPE

#include <gtsam/base/Matrix.h>
#include <iostream>

extern "C" {
#include "gemmini_no_gemm.h"
}

namespace gtsam {

typedef Eigen::Matrix<GEMMINI_TYPE, Eigen::Dynamic, Eigen::Dynamic> GemminiMatrix;

// Perform C += A_scale_factor * A^(transpose_A * T) * B_scale_factor * B^(transpose_B * T)
// Assume A, B, C are stored in row-major order
void matmul(
  size_t dim_I, size_t dim_J, size_t dim_K, 
  const elem_t* A, const elem_t* B, elem_t* C,
  size_t stride_A, size_t stride_B, size_t stride_C,
  scale_t A_scale_factor, scale_t B_scale_factor,
  bool transpose_A, bool transpose_B);

// Perform C += A_scale_factor * A^(transpose_A * T) * A^(transpose_A * T)
// Assume A, C are stored in row-major order
// Inputting B as a parameter because I don't want to change the function call lol
// B is required to be the same as A
void syrk(
  size_t dim_I, size_t dim_J, size_t dim_K, 
  const elem_t* A, const elem_t* B, elem_t* C,
  size_t stride_A, size_t stride_B, size_t stride_C,
  scale_t A_scale_factor, scale_t B_scale_factor,
  bool transpose_A, bool transpose_B);

// Perform y += A_scale_factor A * x
void gemv(
  size_t dim_I, size_t dim_K,
  const elem_t* A, const elem_t* x, elem_t* y,
  size_t stride_A,
  scale_t A_scale_factor);

// Copy the contents of M into a GEMMINI_TYPE array A
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

// Copy the contents of M.T into a GEMMINI_TYPE array A
// M is typically a matrix of doubles, so it must be down-casted
// A must be preallocated
template<typename MATRIX>
void transpose_gather(const MATRIX& M, GEMMINI_TYPE* A) {
  size_t rows = M.rows();
  size_t cols = M.cols();
  size_t stride = cols;
  for(size_t j = 0; j < cols; j++) {
    GEMMINI_TYPE* A_start = A + j;
    for(size_t i = 0; i < rows; i++) {
      *(A_start) = (GEMMINI_TYPE) M(i, j);
      A_start += stride;
    }
  }
}

// // Do C += scale * A * B. A, B, C must be preallocated
// void matmul(
//     size_t A_rows, size_t A_cols, 
//     size_t B_rows, size_t B_cols,
//     GEMMINI_TYPE scale,
//     const GEMMINI_TYPE* A, const GEMMINI_TYPE* B, GEMMINI_TYPE* C);

// Do C += scale * A.T * B. A, B, C must be preallocated
void transposed_matmul(
    size_t A_rows, size_t A_cols, 
    size_t B_rows, size_t B_cols,
    GEMMINI_TYPE scale,
    const GEMMINI_TYPE* A, const GEMMINI_TYPE* B, GEMMINI_TYPE* C);

// Do C += scale * A.T * A. A, C must be preallocated
void syrk(
  size_t A_rows, size_t A_cols,
  GEMMINI_TYPE scale,
  const GEMMINI_TYPE* A, GEMMINI_TYPE* C);

// scatter-add the block of A(r, c, w, h) into MATRIX M
template<typename MATRIX>
void scatter_add(size_t A_rows, size_t A_cols, 
  const GEMMINI_TYPE* A, 
  size_t r, size_t c, size_t h, size_t w,
  MATRIX& M) {
  const GEMMINI_TYPE* A_col_start = A + c * A_rows + r;
  for(size_t j = 0; j < w; j++) {
    const GEMMINI_TYPE* A_start = A_col_start;
    for(size_t i = 0; i < h; i++) {
      M(i, j) += (GEMMINI_TYPE) *A_start;
      A_start++;
    }
    A_col_start += A_rows;
  }
}

// scatter-add the block of A(r, c, w, h).T into MATRIX M
template<typename MATRIX>
void transpose_scatter_add(
  size_t A_rows, size_t A_cols, 
  const GEMMINI_TYPE* A, 
  size_t r, size_t c, size_t h, size_t w,
  MATRIX& M) {
  const GEMMINI_TYPE* A_col_start = A + c * A_rows + r;
  for(size_t j = 0; j < h; j++) {
    const GEMMINI_TYPE* A_start = A_col_start;
    for(size_t i = 0; i < w; i++) {
      M(i, j) += (GEMMINI_TYPE) *A_start;
      A_start += A_rows;
    }
    A_col_start++;
  }
}

// Do y += scale * Ax
void gemv(
  size_t A_rows, size_t A_cols,
  GEMMINI_TYPE scale,
  const GEMMINI_TYPE* A, 
  const GEMMINI_TYPE* x,
  GEMMINI_TYPE* y);

// Do y += scale * A.Tx
void transpose_gemv(
  size_t A_rows, size_t A_cols,
  GEMMINI_TYPE scale,
  const GEMMINI_TYPE* A, 
  const GEMMINI_TYPE* x, 
  GEMMINI_TYPE* y);

} // namespace gtsam

#endif
