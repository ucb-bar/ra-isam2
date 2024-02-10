/************************************************************
 * test_baremetal_AtA_supernode.c
 * Combine the AtA and single supernode factorization
 ************************************************************/

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <float.h>

#include "cholesky.h"
#include "memory.h"
#include "baremetal_tests/AtA_supernode_dim-50_num_factor-50.h"

int main() {
    const double ERR_THRESH = FLT_EPSILON * H_height * nfactors * factor_widths[0];
    printf("ERROR THRESHOLD=%f\n", ERR_THRESH);

    for(int i = 0; i < nfactors; i++) {
        int h = factor_heights[i];
        int w = factor_widths[i];
        int* ridx = factor_ridx[i];
        float* data = factor_data[i];
        float* workspace = my_malloc(h * h * sizeof(float));
        my_memset(workspace, 0, h * h * sizeof(float));

        matmul(h, h, w, 
               data, data, workspace,
               h, h, h,
               1, 1, 
               true, false);

        sparse_matrix_add2(workspace, h, h, ridx,
                           H, H_height, H_height, H_ridx,
                           1);
        my_free_all(workspace);
    }

    // Do cholesky of A and solve B
    partial_factorization4(H, supernode_width, H_height);

    int res = check_tril_result(H, M_cor,
                                H_width, H_height, H_height,
                                ERR_THRESH);

    if(res != 0) {
      printf("H does not pass check.\n");
      return 1;
    }

    printf("Passed :)\n");
}

