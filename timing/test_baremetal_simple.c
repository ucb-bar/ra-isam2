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

#include "baremetal_tests/supernode_8_8.h"

const int CHOL_BLOCK_SIZE = 4;
const int TRSM_BLOCK_SIZE = 4;
const int GEMM_BLOCK_SIZE = 4;

static inline int min(int A, int B) { return A > B? B : A; }

void print_col_major(float* M, int w, int h, int stride) {
  float* M_i0 = M;
  for(int i = 0; i < h; i++) {
    float* M_ij = M_i0;
    for(int j = 0; j < w; j++) {
      printf("%f, ", *M_ij);
      M_ij += stride;
    }
    printf("\n");
    M_i0++;
  }
  printf("\n");
}

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

// Do C += scale_factor_B * BB^T
// B is dim_I x dim_K, C is dim_I x dim_I
// Equivalent to the following call
// matmul(dim_I, dim_I, dim_K,
//      B, B, C, 
//      stride_B, stride_B, stride_C,
//      scale_factor_B, 1,
//      true, false);
void blocked_syrk(int dim_I, int dim_K,
                  float* B, float* C,
                  int stride_B, int stride_C,
                  float scale_factor_B) {

  float* B_0K = B;
  for(int K = 0; K < dim_K; K += GEMM_BLOCK_SIZE) {
    int ww = min(dim_K - K, GEMM_BLOCK_SIZE); // ww is the actual panel width
    float* B_JK = B_0K;
    float* C_0J = C;
    for(int J = 0; J < dim_I; J += GEMM_BLOCK_SIZE) {
      int hhJ = min(dim_I - J, GEMM_BLOCK_SIZE);
      float* B_IK = B_JK;
      float* C_IJ = C_0J + J;
      for(int I = J; I < dim_I; I += GEMM_BLOCK_SIZE) {
        int hhI = min(dim_I - I, GEMM_BLOCK_SIZE); 

        matmul(hhJ, hhI, ww,
               B_JK, B_IK, C_IJ,
               stride_B, stride_B, stride_C,
               scale_factor_B, 1,
               true, false);

        B_IK += GEMM_BLOCK_SIZE;
        C_IJ += GEMM_BLOCK_SIZE;
      }
      B_JK += GEMM_BLOCK_SIZE;
      C_0J += GEMM_BLOCK_SIZE * stride_C;
    }
    B_0K += GEMM_BLOCK_SIZE * stride_B;
  }
}

// Do C[:, max_J] += (scale_factor_B * BB^T)[:, max_J]
// B is dim_I x dim_K, C is dim_I x dim_I
// Equivalent to the following call
// matmul(dim_I, dim_I, dim_K,
//      B, B, C, 
//      stride_B, stride_B, stride_C,
//      scale_factor_B, 1,
//      true, false);
void truncated_blocked_syrk(int dim_I, int dim_K, int max_J,
                  float* B, float* C,
                  int stride_B, int stride_C,
                  float scale_factor_B) {

  float* B_0K = B;
  for(int K = 0; K < dim_K; K += GEMM_BLOCK_SIZE) {
    int ww = min(dim_K - K, GEMM_BLOCK_SIZE); // ww is the actual panel width
    float* B_JK = B_0K;
    float* C_0J = C;
    for(int J = 0; J < max_J; J += GEMM_BLOCK_SIZE) {
      int hhJ = min(max_J - J, GEMM_BLOCK_SIZE);
      float* B_IK = B_JK;
      float* C_IJ = C_0J + J;
      for(int I = J; I < dim_I; I += GEMM_BLOCK_SIZE) {
        int hhI = min(dim_I - I, GEMM_BLOCK_SIZE); 

        matmul(hhJ, hhI, ww,
               B_JK, B_IK, C_IJ,
               stride_B, stride_B, stride_C,
               scale_factor_B, 1,
               true, false);

        B_IK += GEMM_BLOCK_SIZE;
        C_IJ += GEMM_BLOCK_SIZE;
      }
      B_JK += GEMM_BLOCK_SIZE;
      C_0J += GEMM_BLOCK_SIZE * stride_C;
    }
    B_0K += GEMM_BLOCK_SIZE * stride_B;
  }
}

// Do partial cholesky factorization with more vector type operations
// AB is column major
void partial_factorization1(float* AB, int w, int h) {
  float* AB_orig = AB;

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
  
  // Do C - BBT
  // We want to get C^T = B^T^T B^T, we have column major B, which is row major B^T
  int dim_I = h - w, dim_J = dim_I, dim_K = w;
  float* B = AB_orig + w;
  float* C = AB_orig + w * (h + 1);
  int stride_B = h, stride_C = h;
  float scale_factor_A = -1, scale_factor_B = 1;
  bool transpose_A = true, transpose_B = false;

  matmul(dim_I, dim_J, dim_K,
       B, B, C, 
       stride_B, stride_B, stride_C,
       scale_factor_A, scale_factor_B,
       transpose_A, transpose_B);

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

// Solve Lx = B.T in place, overwriting B with the answer
// L is size w x w column major, B is size h x w column major
// B will be transposed implicitly
void dense_block_triangle_solve2(float* L, float* B, 
                                 int w, int h,
                                 int strideL, int strideB) {
  for(int j = 0; j < w; j++) {
    div_ax(L[0], B, h);
    float* B_k = B;

    int dim_I = h, dim_J = w - 1 - j, dim_K = 1;
    float* gemmA = B;
    float* gemmB = L + 1;
    B += strideB;
    float* gemmC = B;
    int stride_A = strideB, stride_B = strideL, stride_C = strideB;
    float scale_factor_A = -1, scale_factor_B = 1;
    bool transpose_A = true, transpose_B = false;

    if(dim_J > 0) {
      matmul(dim_J, dim_I, dim_K,
          gemmB, gemmA, gemmC,
          stride_B, stride_A, stride_C,
          scale_factor_A, scale_factor_B,
          transpose_A, transpose_B);
    }

    // matmul(dim_I, dim_J, dim_K,
    //      B, B, C, 
    //      stride_B, stride_B, stride_C,
    //      scale_factor_A, scale_factor_B,
    //      transpose_A, transpose_B);

    // for(int k = 1; k < w - j; k++) {
    //   B_k += strideB;
    //   saxpy(-L[k], B, B_k, h);
    // }

    L += strideL + 1;
  }
}

// Do partial cholesky factorization by first doing as dense cholesky on the diagonal block
// Then doing triangle solve
void partial_factorization2(float* AB, int w, int h) {

  int hh = h;   // hh is the height of the current block column

  float* AB_JJ = AB;
  // J is the row/col index of the diagonal block
  // I is the row index of the subdiagonal block
  int J;
  int I;
  for(J = 0; J < w; J += CHOL_BLOCK_SIZE) {
    // TODO: Make ww fixed and use cleanup iterations
    int ww = min(w - J, CHOL_BLOCK_SIZE); // ww is the panel width.
    dense_block_cholesky(AB_JJ, ww, h);
    float* AB_IJ = AB_JJ + ww;
    for(I = J + ww; I < h; I += TRSM_BLOCK_SIZE) {
      // TODO: Make hh fixed and use cleanup iterations
      int hh = min(h - I, TRSM_BLOCK_SIZE); // hh is the block height
      dense_block_triangle_solve(AB_JJ, AB_IJ, 
                                 ww, 
                                 hh, 
                                 h, h);
      AB_IJ += TRSM_BLOCK_SIZE;
    }

    int dim_I = h - J - ww, dim_J = dim_I, dim_K = ww;
    float* B = AB_JJ + ww;
    float* C = AB_JJ + ww * (h + 1);
    int stride_B = h, stride_C = h;
    float scale_factor_A = -1, scale_factor_B = 1;
    bool transpose_A = true, transpose_B = false;

    blocked_syrk(dim_I, dim_K,
                 B, C,
                 stride_B, stride_C,
                 scale_factor_A);

    // matmul(dim_I, dim_J, dim_K,
    //      B, B, C, 
    //      stride_B, stride_B, stride_C,
    //      scale_factor_A, scale_factor_B,
    //      transpose_A, transpose_B);

    AB_JJ += CHOL_BLOCK_SIZE * (h + 1);
    hh -= CHOL_BLOCK_SIZE;
  }
}

// Splitting out LC = C - LB LB^T computation for profiling
void partial_factorization3(float* AB, int w, int h) {

  int hh = h;   // hh is the height of the current block column

  float* AB_JJ = AB;
  // J is the row/col index of the diagonal block
  // I is the row index of the subdiagonal block
  int J;
  int I;

  // This is interleaved [LA; LB] computation
  for(J = 0; J < w; J += CHOL_BLOCK_SIZE) {
    // TODO: Make ww fixed and use cleanup iterations
    int ww = min(w - J, CHOL_BLOCK_SIZE); // ww is the panel width.
    dense_block_cholesky(AB_JJ, ww, h);
    float* AB_IJ = AB_JJ + ww;

    for(I = J + ww; I < h; I += TRSM_BLOCK_SIZE) {
      // TODO: Make hh fixed and use cleanup iterations
      int hh = min(h - I, TRSM_BLOCK_SIZE); // hh is the block height
      dense_block_triangle_solve(AB_JJ, AB_IJ, 
                                 ww, 
                                 hh, 
                                 h, h);
      AB_IJ += TRSM_BLOCK_SIZE;
    }

    int dim_I = h - J - ww, dim_J = dim_I, dim_K = ww, max_J = w - J - ww;
    float* B = AB_JJ + ww;
    float* C = AB_JJ + ww * (h + 1);
    int stride_B = h, stride_C = h;
    float scale_factor_A = -1, scale_factor_B = 1;
    bool transpose_A = true, transpose_B = false;

    truncated_blocked_syrk(dim_I, dim_K, max_J,
                 B, C,
                 stride_B, stride_C,
                 scale_factor_A);

    AB_JJ += CHOL_BLOCK_SIZE * (h + 1);
    hh -= CHOL_BLOCK_SIZE;
  }

  // This is LC = C - LB LB^T computation
  int dim_I = h - w, dim_J = dim_I, dim_K = w;
  float* B = AB + w;
  float* C = AB + w * (h + 1);
  int stride_B = h, stride_C = h;
  float scale_factor_A = -1, scale_factor_B = 1;
  bool transpose_A = true, transpose_B = false;

  blocked_syrk(dim_I, dim_K,
               B, C,
               stride_B, stride_C,
               scale_factor_A);
}

// Splitting out LC = C - LB LB^T computation for profiling
void partial_factorization4(float* AB, int w, int h) {

  int hh = h;   // hh is the height of the current block column

  float* AB_JJ = AB;
  // J is the row/col index of the diagonal block
  // I is the row index of the subdiagonal block
  int J;
  int I;

  // This is interleaved [LA; LB] computation
  for(J = 0; J < w; J += CHOL_BLOCK_SIZE) {
    // TODO: Make ww fixed and use cleanup iterations
    int ww = min(w - J, CHOL_BLOCK_SIZE); // ww is the panel width.
    dense_block_cholesky(AB_JJ, ww, h);
    float* AB_IJ = AB_JJ + ww;

    for(I = J + ww; I < h; I += TRSM_BLOCK_SIZE) {
      // TODO: Make hh fixed and use cleanup iterations
      int hh = min(h - I, TRSM_BLOCK_SIZE); // hh is the block height
      dense_block_triangle_solve2(AB_JJ, AB_IJ, 
                                  ww, 
                                  hh, 
                                  h, h);
      AB_IJ += TRSM_BLOCK_SIZE;
    }

    int dim_I = h - J - ww, dim_J = dim_I, dim_K = ww, max_J = w - J - ww;
    float* B = AB_JJ + ww;
    float* C = AB_JJ + ww * (h + 1);
    int stride_B = h, stride_C = h;
    float scale_factor_A = -1, scale_factor_B = 1;
    bool transpose_A = true, transpose_B = false;

    truncated_blocked_syrk(dim_I, dim_K, max_J,
                 B, C,
                 stride_B, stride_C,
                 scale_factor_A);

    AB_JJ += CHOL_BLOCK_SIZE * (h + 1);
    hh -= CHOL_BLOCK_SIZE;
  }

  // This is LC = C - LB LB^T computation
  int dim_I = h - w, dim_J = dim_I, dim_K = w;
  float* B = AB + w;
  float* C = AB + w * (h + 1);
  int stride_B = h, stride_C = h;
  float scale_factor_A = -1, scale_factor_B = 1;
  bool transpose_A = true, transpose_B = false;

  blocked_syrk(dim_I, dim_K,
               B, C,
               stride_B, stride_C,
               scale_factor_A);
}

// Seah's impl of partial_factorization4
void partial_factorization5(float* AB, int w, int h) {

  int hh = h;   // hh is the height of the current block column

  float* AB_JJ = AB;
  // J is the row/col index of the diagonal block
  // I is the row index of the subdiagonal block
  int J;
  int I;

  uint64_t A_B_start = 0, A_B_end = 0, A_B_mid = 0;
  uint64_t total_panel_chol = 0, total_triangular = 0;

  // This is interleaved [LA; LB] computation
  for(J = 0; J < w; J += CHOL_BLOCK_SIZE) {
    // TODO: Make ww fixed and use cleanup iterations
    int ww = min(w - J, CHOL_BLOCK_SIZE); // ww is the panel width.

    dense_block_cholesky(AB_JJ, ww, h);
    float* AB_IJ = AB_JJ + ww;
    for(I = J + ww; I < h; I += TRSM_BLOCK_SIZE) {
      // TODO: Make hh fixed and use cleanup iterations
      int hh = min(h - I, TRSM_BLOCK_SIZE); // hh is the block height
      dense_block_triangle_solve2(AB_JJ, AB_IJ, 
                                  ww, 
                                  hh, 
                                  h, h);
      AB_IJ += TRSM_BLOCK_SIZE;
    }
    int dim_I = h - J - ww, dim_J = dim_I, dim_K = ww, max_J = w - J - ww;
    float* B = AB_JJ + ww;
    float* C = AB_JJ + ww * (h + 1);
    int stride_B = h, stride_C = h;
    float scale_factor_A = -1, scale_factor_B = 1;
    bool transpose_A = true, transpose_B = false;

    truncated_blocked_syrk(dim_I, dim_K, max_J,
                 B, C,
                 stride_B, stride_C,
                 scale_factor_A);

    total_panel_chol += (A_B_mid - A_B_start);
    total_triangular += (A_B_end - A_B_mid);
    AB_JJ += CHOL_BLOCK_SIZE * (h + 1);
    hh -= CHOL_BLOCK_SIZE;
  }
  printf("A_B cholesky cycles: %llu\n", total_panel_chol);
  printf("A_B triangle solve cycles: %llu\n", total_triangular);

  // This is LC = C - LB LB^T computation
  int dim_I = h - w, dim_J = dim_I, dim_K = w;
  float* B = AB + w;
  float* C = AB + w * (h + 1);
  int stride_B = h, stride_C = h;
  float scale_factor_A = -1, scale_factor_B = 1;
  bool transpose_A = true, transpose_B = false;

  uint64_t C_start = 0, C_end = 0;
#if GEMM_BLOCKED == true
  blocked_syrk(dim_I, dim_K,
               B, C,
               stride_B, stride_C,
               scale_factor_A);
#else
  tiled_matmul_auto(dim_I, dim_J, dim_K,
          (elem_t*)B, (elem_t*)B, (elem_t*)C, (elem_t*)C,
          stride_B, stride_B, stride_C, stride_C,
          scale_factor_B, scale_factor_A, MVIN_SCALE_IDENTITY,
          NO_ACTIVATION, ACC_SCALE_IDENTITY, 0, false,
          transpose_A, transpose_B,
          false, false,
          0,
          CPU);
#endif
  printf("C cycles: %llu\n", C_end - C_start);
}

void set_strictly_upper_trianguler(float a, float* x, int w, int h, int stride) {
  for(int j = 0; j < w; j++) {
    for(int i = 0; i < j && i < h; i++) {
      x[i] = a;
    }
    x += stride;
  }
}

int main() {

  float* m_result = (float*) malloc(height * height * sizeof(float));
  memcpy(m_result, m, height * height * sizeof(float));

  const double ERR_THRESH = FLT_EPSILON * cond;

  printf("Error threshold: %.8e\n", ERR_THRESH);
  fflush(stdout);

  // Do cholesky of A and solve B
  partial_factorization4(m_result, diag_width, height);

  // This line is only needed for visual inspection
  set_strictly_upper_trianguler(0, m_result, height, diag_width, height);

  printf("ABC = \n");
  print_col_major(m, height, height, height);
  printf("ABC_result = \n");
  print_col_major(m_result, height, height, height);
  printf("ABC_correct = \n");
  print_col_major(m_correct, height, height, height);

  for(int j = 0; j < height; j++) {
    for(int i = j; i < height; i++) {
      double abs_err = fabs(m_correct[j * height + i] - m_result[j * height + i]);
      double abs_A = fabs(m_correct[j * height + i]);
      double rel_err = abs_A != 0? abs_err / abs_A :
                       abs_err == 0? 0 : INFINITY;

      // printf("%.10e, ", rel_err);

      if(rel_err > ERR_THRESH) {
        printf("Relative error at (%d, %d) exceeded threshold: %.8e\n", j, i, rel_err);
        return 1;
      }
    }
    // printf("\n");
  }

  for(int j = 0; j < height; j++) {
    for(int i = j; i < height; i++) {
      double abs_err = fabs(m_correct[j * height + i] - m_result[j * height + i]);
      double abs_A = fabs(m_correct[j * height + i]);
      double rel_err = abs_A != 0? abs_err / abs_A :
                       abs_err == 0? 0 : INFINITY;

      // printf("%.10e, ", rel_err);

      if(rel_err > ERR_THRESH) {
        printf("Relative error at (%d, %d) exceeded threshold: %.8e\n", j, i, rel_err);
        return 1;
      }
    }
    // printf("\n");
  }

  printf("Passed :)\n");

  return 0;
}
