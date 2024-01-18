/************************************************************
 * test_baremetal_cascading_supernodes.c
 * Tests the partial cholesky fatorization of the dense supernodes 
 * into propagating into parent supernodes
 * Currently assume a given matrix m = [node1 node2 ...]. 
 * m_nnodes of block columns stored in dense format of m_hi x m_wi
 * Each supercolumn nodei is padded with 0 columns to make a square matrix to allocate space 
 * for C computation. This will be true for real matrices as well except that
 * the padded columns will not be 0
 ************************************************************/

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <float.h>

#include "baremetal_tests/cholesky.h""
#include "baremetal_tests/cascading_supernode_dim-200_level-8.h"

int main() {

  const double ERR_THRESH = FLT_EPSILON * cond * m_dim;

  printf("Error threshold: %.8e\n", ERR_THRESH);
  fflush(stdout);

  // Setup
  float* m_result[m_nnode];
  for(int i = 0; i < m_nnode; i++) {
    int height = m_height[i];
    m_result[i] = malloc(height * height * sizeof(float));
    memcpy(m_result[i], m[i], height * height * sizeof(float));
  }

  // Do cascading partial factorization
  for(int i = 0; i < m_nnode; i++) {
    int width = m_width[i];
    int height = m_height[i];

    // print_col_major(m_result[i], height, height, height);
    partial_factorization4(m_result[i], width, height);
    // print_col_major(m_result[i], height, height, height);


    if(i + 1 < m_nnode) {
      int next_height = m_height[i + 1];
      // print_col_major(m_result[i + 1], next_height, next_height, next_height);
      sparse_matrix_add(m_result[i] + width * (height + 1), height - width, height, m_row_indices[i] + width,
                        m_result[i + 1], next_height, next_height, m_row_indices[i + 1], 
                        1);
      // print_col_major(m_result[i + 1], next_height, next_height, next_height);
    }
  }

  // Check results
  for(int i = 0; i < m_nnode; i++) {
    int width = m_width[i];
    int height = m_height[i];
    int res = check_tril_result(m_result[i], m_correct[i], width, height, height, ERR_THRESH);
    if(res != 0) {
      printf("Column m%d does not pass check.\n");
      return 1;
    }
  }

  printf("Passed :)\n");

  return 0;
}
