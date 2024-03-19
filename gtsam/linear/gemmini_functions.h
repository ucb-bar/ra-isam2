/**
* @file    gemmini_functions.h
* @brief   All the different linear algebra routines used in CholeskyEliminationTree. Isolated out to support gemmini
* @author  Roger Hsiao (rogerhh)
* @date    Aug. 11, 2023
*/


#pragma once

#include "gemmini_no_gemm.h"

#define GEMMINI_TYPE elem_t

// Perform C += A_scale_factor * A^(transpose_A * T) * B_scale_factor * B^(transpose_B * T)
// Assume A, B, C are stored in row-major order
void matmul(
  size_t dim_I, size_t dim_J, size_t dim_K, 
  const elem_t* A, const elem_t* B, elem_t* C,
  size_t stride_A, size_t stride_B, size_t stride_C,
  scale_t A_scale_factor, scale_t B_scale_factor,
  bool transpose_A, bool transpose_B);

// Perform C = A_scale_factor * A^(transpose_A * T) * B_scale_factor * B^(transpose_B * T) + D_scale_factor * D
// Assume A, B, C, D are stored in row-major order
void matmul2(
  size_t dim_I, size_t dim_J, size_t dim_K, 
  const elem_t* A, const elem_t* B, 
  const elem_t* D, elem_t* C,
  size_t stride_A, size_t stride_B, size_t stride_D, size_t stride_C,
  scale_t A_scale_factor, scale_t B_scale_factor, scale_t D_scale_factor,
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

// Do C += scale * A.T * B. A, B, C must be preallocated
void transposed_matmul(
    size_t A_rows, size_t A_cols, 
    size_t B_rows, size_t B_cols,
    GEMMINI_TYPE scale,
    const GEMMINI_TYPE* A, const GEMMINI_TYPE* B, GEMMINI_TYPE* C);

// // Do C += scale * A.T * A. A, C must be preallocated
// void syrk(
//   size_t A_rows, size_t A_cols,
//   GEMMINI_TYPE scale,
//   const GEMMINI_TYPE* A, GEMMINI_TYPE* C);

// Add the block of A(Ar, Ac, h, w) into the block of M(Mr, Mc, h, w)
void add_block(
  const GEMMINI_TYPE* A, GEMMINI_TYPE* M,
  size_t stride_A, size_t stride_M,
  size_t Ar, size_t Ac,
  size_t Mr, size_t Mc,
  size_t h, size_t w
  );

// Add the block of A(Ar, Ac, h, w).T into the block of M(Mr, Mc, w, h)
void add_block_transpose(
  const GEMMINI_TYPE* A, GEMMINI_TYPE* M,
  size_t stride_A, size_t stride_M,
  size_t Ar, size_t Ac,
  size_t Mr, size_t Mc,
  size_t h, size_t w
  );

// // Do y += scale * Ax
// void gemv(
//   size_t A_rows, size_t A_cols,
//   GEMMINI_TYPE scale,
//   const GEMMINI_TYPE* A, 
//   const GEMMINI_TYPE* x,
//   GEMMINI_TYPE* y);

// // Do y += scale * A.Tx
// void transpose_gemv(
//   size_t A_rows, size_t A_cols,
//   GEMMINI_TYPE scale,
//   const GEMMINI_TYPE* A, 
//   const GEMMINI_TYPE* x, 
//   GEMMINI_TYPE* y);

