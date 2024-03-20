/************************************************************
 * test_baremetal_full_tree_backsolve.c
 * Compute the cholesky of a full tree with branches, and performs backsolve at the end
 ************************************************************/

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <float.h>

#include "cholesky.h"
#include "memory.h"
#include "baremetal_tests/full_tree_backsolve_w10000_300_500.h"

int main() {
    const double ERR_THRESH = FLT_EPSILON * cond * 100;
    printf("ERROR THRESHOLD=%f\n", ERR_THRESH);

    int* H_lookups[H_nnode];

    for(int node = 0; node < H_nnode; node++) {
        int H_h = H_height[node];
        int H_w = H_width[node];
        int* H_ridx = H_row_indices[node];
        float* H_data = H[node];

        int max_H_ridx = H_ridx[H_h - 1];
        H_lookups[node] = my_malloc((max_H_ridx + 1) * sizeof(int));
        my_memset(H_lookups[node], 0, (max_H_ridx + 1) * sizeof(int));

        build_reverse_lookup(H_ridx, H_h, H_lookups[node]);

    }

    for(int node = 0; node < H_nnode; node++) {

        int H_h = H_height[node];
        int H_w = H_width[node];
        int* H_ridx = H_row_indices[node];
        float* H_data = H[node];

        int* H_lookup = H_lookups[node];

        // print_col_major(H[node], 3, 3, H_h);

        // printf("\n");

        for(int i = 0; i < node_nfactors[node]; i++) {
            int h = node_factor_height[node][i];
            int w = node_factor_width[node][i];
            int* ridx = node_factor_ridx[node][i];
            float* data = node_factor_data[node][i];
            float* workspace = my_malloc(h * h * sizeof(float));
            my_memset(workspace, 0, h * h * sizeof(float));

            matmul(h, h, w, 
                   data, data, workspace,
                   h, h, h,
                   1, 1, 
                   true, false);

            sparse_matrix_add3_2(workspace, h, h, ridx,
                                 H_data, H_h, H_h, H_ridx,
                                 1, H_lookup);

            my_free_after(workspace);
        }

        // FIXME: Fix this intermediate check
        // int res = check_tril_result(H[node], M[node], H_w, H_h, H_h, 
        //                             ERR_THRESH);
        // if(res != 0) {
        //     printf("Column H%d does not pass initial check.\n", node);
        //     return 1;
        // }
        // else {
        //     printf("Column H%d passed initial check.\n", node);
        // }

        // Do cholesky of A and solve B and compute C -= BB^T
        partial_factorization4(H_data, H_w, H_h);

        // Add C to the next node
        int parent = node_parent[node];
        if(parent != -1) {
            int subdiag_h = H_h - H_w;
            float* C = H_data + H_w * (H_h + 1);
            int next_H_h = H_height[parent];
            int* next_H_ridx = H_row_indices[parent];
            float* next_H_data = H[parent];
            int* next_H_lookup = H_lookups[parent];
            
            sparse_matrix_add3_2(C, subdiag_h, H_h, H_ridx + H_w,
                                 next_H_data, next_H_h, next_H_h, next_H_ridx,
                                 1, next_H_lookup);
            
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

    // Perform backsolve
    float* x = my_malloc(x_correct_len * sizeof(float));
    for(int node = H_nnode - 2; node >= 0; node--) {
        int width = H_width[node];
        int height = H_height[node];
        int* ridx = H_row_indices[node];

        set_strictly_upper_trianguler(0, H[node], width, height, height);

        partial_backsolve(H[node], width, height, height, ridx, x);

        int res = check_tril_result(x + ridx[0], x_correct_data + ridx[0], 1, width, width, 
                                    ERR_THRESH);
        if(res != 0) {
            printf("x at node %d does not pass check.\n", node);
            return 1;
        }
    }

    printf("Passed :)\n");
}

