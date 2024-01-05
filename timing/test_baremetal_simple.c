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

#include <gtsam/linear/gemmini_functions.h>

#include "baremetal_tests/supernode_2_6.h"

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
void partial_factorization1(float* AB, int w, int h) {
  int hh = h;
  for(int j = 0; j < w; j++) {
    hh--;
    float sqrtdiag = sqrt(AB[0]);
    AB[0] = sqrtdiag;
    float scale = 1 / sqrtdiag;
    div_ax(sqrtdiag, AB + 1, hh);
    // ax(scale, AB + 1, hh);
    float* AB_kk = AB;
    int hhh = hh;
    for(int k = 1; k < w - j; k++) {
      AB_kk += h + 1;
      saxpy(-AB[k], AB + k, AB_kk, hhh);
      hhh--;
    }
    AB += h + 1;
  }
}

// Do partial cholesky factorization by first doing as dense cholesky on the diagonal block
// Then doing triangle solve
void partial_factorization2(float* AB, int w, int h) {
  // TODO
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

  printf("%d %d\n", diag_width, height);

  float* m_result = (float*) malloc(height * height * sizeof(float));
  memcpy(m_result, m, height * height * sizeof(float));

  // Do cholesky of A and solve B
  partial_factorization1(m_result, diag_width, height);


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

  for(int j = 0; j < diag_width; j++) {
    for(int i = 0; i < height; i++) {
      printf("%f, ", m[j * height + i]);
    }
    printf("\n");
  }

  printf("\n\n");

  for(int j = 0; j < height; j++) {
    for(int i = 0; i < height; i++) {
      printf("%f, ", m_result[j * height + i]);
    }
    printf("\n");
  }

  printf("\n\n");

  for(int j = 0; j < height; j++) {
    for(int i = 0; i < height; i++) {
      printf("%f, ", m_correct[j * height + i]);
    }
    printf("\n");
  }

  printf("\n\n");

  for(int j = 0; j < height; j++) {
    for(int i = 0; i < height; i++) {
      float abs_err = abs(m_correct[j * height + i] - m_result[j * height + i]);
      float abs_A = abs(m_correct[j * height + i]);
      float rel_err = abs_A == 0? abs_err : abs_err / abs_A;

      printf("%f, ", rel_err);
    }
    printf("\n");
  }

}
