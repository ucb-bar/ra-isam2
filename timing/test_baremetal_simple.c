/************************************************************
 * test_baremetal_simple.c
 * Tests the partial cholesky fatorization of the dense supernode
 * Currently assume a given matrix m = [A 0; B C]. 
 * A, C must by symmetric. A must be positive definite
 * A is diag_width x diag_width. C is (height - diag_width) x (height - diag_width)
 ************************************************************/

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <float.h>

#include <gtsam/linear/gemmini_functions.h>

#include "baremetal_tests/supernode_12_36.h"

void ax(float a, float* x, int h) {
  for(int i = 0; i < h; i++) {
    x[i] *= a;
  }
}

void div_ax(float a, float* x, int h) {
  for(int i = 0; i < h; i++) {
    x[i] /= a;
  }
}

void saxpy(float a, float* x, float* y, int h) {
  for(int i = 0; i < h; i++) {
    y[i] += a * x[i];
  }
}

// Do partial cholesky factorization with more vector type operations
// AB is column major
void partial_factorization1(float* AB, int w, int h) {
  int hh = h;
  for(int j = 0; j < w; j++) {
    hh--;
    float sqrtdiag = sqrt(AB[0]);
    AB[0] = sqrtdiag;
    float scale = 1 / sqrtdiag;
    div_ax(sqrtdiag, AB + 1, hh);
    // ax(scale, AB + 1, hh);
    float* AB_k = AB;
    int hhh = hh;
    for(int k = 1; k < w - j; k++) {
      AB_k += h + 1;
      saxpy(-AB[k], AB + k, AB_k, hhh);
      hhh--;
    }
    AB += h + 1;
  }
}

// Takes a dense square matrix A with size dim x dim, 
// modify it to be chol(A). 
// A is column major
void dense_block_cholesky(float* A, int dim, int stride) {
  int hh = dim;                       // subdiagonal height of current column
  for(int j = 0; j < dim; j++) {
    hh--;
    float sqrtdiag = sqrt(A[0]);
    A[0] = sqrtdiag;
    div_ax(sqrtdiag, A + 1, hh);
    float* A_k = A;
    int hhh = hh;                     // subdiagonal height for columns left of current column
    for(int k = 1; k < dim - j; k++) {
      A_k += stride + 1;
      saxpy(-A[k], A + k, A_k, hhh);
      hhh--;
    }
    A += stride + 1;
  }
}

// Solve Lx = B.T in place, overwriting B with the answer
// L is size w x w column major, B is size h x w column major
// B will be transposed implicitly
void dense_block_triangle_solve(float* L, float* B, 
                                int w, int h,
                                int strideL, int strideB) {
  int hh = w;                         // subdiagonal height of current column of L
  for(int j = 0; j < w; j++) {
    hh--;
    div_ax(L[0], B, h);
    float* B_k = B;
    for(int k = 1; k < w - j; k++) {
      B_k += strideB;
      saxpy(-L[k], B, B_k, h);
    }
    L += strideL + 1;
    B += strideB;
  }
}

// Do partial cholesky factorization by first doing as dense cholesky on the diagonal block
// Then doing triangle solve
void partial_factorization2(float* AB, int w, int h) {
  dense_block_cholesky(AB, w, h);
  dense_block_triangle_solve(AB, AB + w, w, h - w, h, h);
}

void set_strictly_upper_trianguler(float a, float* x, int w, int h) {
  for(int j = 0; j < w; j++) {
    for(int i = 0; i < j; i++) {
      x[i] = a;
    }
    x += h;
  }
}

int main() {

  float* m_result = (float*) malloc(height * height * sizeof(float));
  memcpy(m_result, m, height * height * sizeof(float));

  const double ERR_THRESH = FLT_EPSILON * cond;

  printf("Error threshold: %.8e\n", ERR_THRESH);

  // Do cholesky of A and solve B
  partial_factorization2(m_result, diag_width, height);

  // Do C - BBT
  // We want to get C^T = B^T^T B^T, we have column major B, which is row major B^T
  int dim_I = height - diag_width, dim_J = dim_I, dim_K = diag_width;
  float* B = m_result + diag_width;
  float* C = m_result + diag_width * height + diag_width;
  int stride_B = height, stride_C = height;
  float scale_factor_A = -1, scale_factor_B = 1;
  bool transpose_A = true, transpose_B = false;

  matmul(dim_I, dim_J, dim_K,
       B, B, C, 
       stride_B, stride_B, stride_C,
       scale_factor_A, scale_factor_B,
       transpose_A, transpose_B);


  // This line is only needed for visual inspection
  set_strictly_upper_trianguler(0, m_result, diag_width, height);

  // for(int j = 0; j < diag_width; j++) {
  //   for(int i = 0; i < height; i++) {
  //     printf("%f, ", m[j * height + i]);
  //   }
  //   printf("\n");
  // }

  // printf("\n\n");

  // for(int j = 0; j < height; j++) {
  //   for(int i = 0; i < height; i++) {
  //     printf("%f, ", m_result[j * height + i]);
  //   }
  //   printf("\n");
  // }

  // printf("\n\n");

  // for(int j = 0; j < height; j++) {
  //   for(int i = 0; i < height; i++) {
  //     printf("%f, ", m_correct[j * height + i]);
  //   }
  //   printf("\n");
  // }

  // printf("\n\n");

  for(int j = 0; j < height; j++) {
    for(int i = 0; i < height; i++) {
      double abs_err = fabs(m_correct[j * height + i] - m_result[j * height + i]);
      double abs_A = fabs(m_correct[j * height + i]);
      double rel_err = abs_A != 0? abs_err / abs_A :
                       abs_err == 0? 0 : INFINITY;

      // printf("%.10e, ", rel_err);

      if(rel_err > ERR_THRESH) {
        // printf("Relative error at (%d, %d) exceeded threshold: %.8e\n", j, i, rel_err);
        return 1;
      }
    }
    // printf("\n");
  }

  printf("Passed :)\n");

  return 0;
}
