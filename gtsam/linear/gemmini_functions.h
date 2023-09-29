/**
* @file    gemmini_functions.h
* @brief   All the different linear algebra routines used in CholeskyEliminationTree. Isolated out to support gemmini
* @author  Roger Hsiao (rogerhh)
* @date    Aug. 11, 2023
*/


#ifndef GEMMINI_FUNCTIONS_H
#define GEMMINI_FUNCTIONS_H

#define GEMMINI_TYPE double
#define elem_t GEMMINI_TYPE
#define scale_t GEMMINI_TYPE

#include <gtsam/base/Matrix.h>
#include <iostream>

namespace gtsam {

// Perform C += A_scale_factor * A^(transpose_A * T) * B_scale_factor * B^(transpose_B * T)
// Assume A, B, C are stored in row-major order
inline void matmul(
  size_t dim_I, size_t dim_J, size_t dim_K, 
  const elem_t* A, const elem_t* B, elem_t* C,
  size_t stride_A, size_t stride_B, size_t stride_C,
  scale_t A_scale_factor, scale_t B_scale_factor,
  bool transpose_A, bool transpose_B) {
  size_t stride_Ai, stride_Ak, stride_Bk, stride_Bj, stride_Ci = stride_C, stride_Cj = 1;
  if(transpose_A) {
    stride_Ai = 1;
    stride_Ak = stride_A;
  }
  else {
    stride_Ai = stride_A;
    stride_Ak = 1;
  }
  if(transpose_B) {
    stride_Bk = 1;
    stride_Bj = stride_B;
  }
  else {
    stride_Bk = stride_B;
    stride_Bj = 1;
  }
  const elem_t* Ai = A;
  elem_t* Ci = C;
  for(size_t i = 0; i < dim_I; i++) {
    const elem_t* Bj = B;
    elem_t* Cij = Ci;
    for(size_t j = 0; j < dim_J; j++) {
      const elem_t* Aik = Ai;
      const elem_t* Bkj = Bj;
      for(size_t k = 0; k < dim_K; k++) {
        *Cij += A_scale_factor * (*Aik) * B_scale_factor * (*Bkj);
        Aik += stride_Ak;
        Bkj += stride_Bk;
      }
      Bj += stride_Bj;
      Cij += stride_Cj;
    }
    Ai += stride_Ai;
    Ci += stride_Ci;
  }
}

// Perform C += A_scale_factor * A^(transpose_A * T) * A^(transpose_A * T)
// Assume A, C are stored in row-major order
// Inputting B as a parameter because I don't want to change the function call lol
// B is required to be the same as A
inline void syrk(
  size_t dim_I, size_t dim_J, size_t dim_K, 
  const elem_t* A, const elem_t* B, elem_t* C,
  size_t stride_A, size_t stride_B, size_t stride_C,
  scale_t A_scale_factor, scale_t B_scale_factor,
  bool transpose_A, bool transpose_B) {
  size_t stride_Ai, stride_Ak, stride_Bk, stride_Bj, stride_Ci = stride_C, stride_Cj = 1;
  if(transpose_A) {
    stride_Ai = 1;
    stride_Ak = stride_A;
  }
  else {
    stride_Ai = stride_A;
    stride_Ak = 1;
  }
  if(transpose_B) {
    stride_Bk = 1;
    stride_Bj = stride_B;
  }
  else {
    stride_Bk = stride_B;
    stride_Bj = 1;
  }
  const elem_t* Ai = A;
  elem_t* Ci = C;
  for(size_t i = 0; i < dim_I; i++) {
    const elem_t* Bj = B + i * stride_Bj;
    elem_t* Cij = Ci + i * stride_Cj;
    for(size_t j = i; j < dim_J; j++) {
      const elem_t* Aik = Ai;
      const elem_t* Bkj = Bj;
      for(size_t k = 0; k < dim_K; k++) {
        *Cij += A_scale_factor * (*Aik) * B_scale_factor * (*Bkj);
        Aik += stride_Ak;
        Bkj += stride_Bk;
      }
      Bj += stride_Bj;
      Cij += stride_Cj;
    }
    Ai += stride_Ai;
    Ci += stride_Ci;
  }
}

// Perform y += A_scale_factor A * x
inline void gemv(
  size_t dim_I, size_t dim_K,
  const elem_t* A, const elem_t* x, elem_t* y,
  size_t stride_A,
  scale_t A_scale_factor) {
  size_t stride_Ai = stride_A, stride_Ak = 1, stride_xk = 1, stride_yi = 1;

  const elem_t* Ai = A;
  elem_t* yi = y;
  for(size_t i = 0; i < dim_I; i++) {
    const elem_t* Aik = Ai;
    const elem_t* xk = x;
    for(size_t k = 0; k < dim_K; k++) {
      *yi += A_scale_factor * (*Aik) * (*xk);
      Aik += stride_Ak;
      xk += stride_xk;
    }
    Ai += stride_Ai;
    yi += stride_yi;
  }
}

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
// inline void matmul(
//     size_t A_rows, size_t A_cols, 
//     size_t B_rows, size_t B_cols,
//     GEMMINI_TYPE scale,
//     const GEMMINI_TYPE* A, const GEMMINI_TYPE* B, GEMMINI_TYPE* C) {
//   assert(A_cols == B_rows);
//   for(size_t i = 0; i < A_rows; i++) {
//     for(size_t j = 0; j < B_rows; j++) {
//       for(size_t k = 0; k < A_cols; k++) {
//         C[j * A_rows + i] += scale * A[k * A_rows + i] * B[j * B_rows + k];
//       }
//     }
//   }
// }

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
inline void gemv(
  size_t A_rows, size_t A_cols,
  GEMMINI_TYPE scale,
  const GEMMINI_TYPE* A, 
  const GEMMINI_TYPE* x,
  GEMMINI_TYPE* y) {

  for(size_t j = 0; j < A_cols; j++) {
    const GEMMINI_TYPE* A_start = A + j * A_rows;
    for(size_t i = 0; i < A_rows; i++) {
      y[i] += scale * A_start[i] * x[j];
    }
  }

}

// Do y += scale * A.Tx
inline void transpose_gemv(
  size_t A_rows, size_t A_cols,
  GEMMINI_TYPE scale,
  const GEMMINI_TYPE* A, 
  const GEMMINI_TYPE* x, 
  GEMMINI_TYPE* y) {

  for(size_t j = 0; j < A_cols; j++) {
    const GEMMINI_TYPE* A_start = A + j * A_rows;
    for(size_t i = 0; i < A_rows; i++) {
      y[j] += scale * A_start[i] * x[i];
    }
  }
}

} // namespace gtsam

#endif
