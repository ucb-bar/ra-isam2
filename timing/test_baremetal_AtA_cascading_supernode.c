/************************************************************
 * test_baremetal_AtA_cascading_supernode.c
 * Combine the AtA and the cascading supernode factorization
 ************************************************************/

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <float.h>

#include "cholesky.h"
#include "memory.h"
#include "baremetal_tests/AtA_cascading_supernode_dim-200_num_levels-10.h"

int main() {
    const double ERR_THRESH = FLT_EPSILON * cond * 10;
    printf("ERROR THRESHOLD=%f\n", ERR_THRESH);

    for(int node = 0; node < H_nnode; node++) {

        int H_h = H_height[node];
        int H_w = H_width[node];
        int* H_ridx = H_row_indices[node];
        float* H_data = H[node];

        for(int i = 0; i < node_nfactors[node]; i++) {
            int h = node_factor_heights[node][i];
            int w = node_factor_widths[node][i];
            int* ridx = node_factor_ridx[node][i];
            float* data = node_factor_data[node][i];
            float* workspace = my_malloc(h * h * sizeof(float));
            my_memset(workspace, 0, h * h * sizeof(float));

            matmul(h, h, w, 
                   data, data, workspace,
                   h, h, h,
                   1, 1, 
                   true, false);

            sparse_matrix_add2(workspace, h, h, ridx,
                               H_data, H_h, H_h, H_ridx,
                               1);
            my_free_all(workspace);
        }


        // int res = check_tril_result(H[node], M[node], H_w, H_h, H_h, 
        //                             ERR_THRESH);
        // if(res != 0) {
        //     printf("Column H%d does not pass check.\n", node);
        //     return 1;
        // }
        // else {
        //     printf("Column H%d passed check.\n", node);
        // }

        // Do cholesky of A and solve B and compute C -= BB^T
        partial_factorization4(H_data, H_w, H_h);

        // Add C to the next node
        if(node + 1 < H_nnode) {
            int subdiag_h = H_h - H_w;
            float* C = H_data + H_w * (H_h + 1);
            int next_H_h = H_height[node + 1];
            int* next_H_ridx = H_row_indices[node + 1];
            float* next_H_data = H[node + 1];
            sparse_matrix_add2(C, subdiag_h, H_h, H_ridx + H_w,
                               next_H_data, next_H_h, next_H_h, next_H_ridx,
                               1);
            // print_col_major(m_result[i + 1], next_height, next_height, next_height);
        }
    }

    // Check results
    for(int node = 0; node < H_nnode; node++) {
        int width = H_width[node];
        int height = H_height[node];
        int res = check_tril_result(H[node], M_correct[node], width, height, height, 
                                    ERR_THRESH);
        if(res != 0) {
            printf("Column H%d does not pass check.\n", node);
            return 1;
        }
    }

    printf("Passed :)\n");
}

