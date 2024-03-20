/************************************************************
 * test_baremetal_full_tree_update.c
 * Test cholesky updating. Given a precomputed cholesky and a few updating factors
 * compute the new cholesky
 ************************************************************/

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <float.h>

#include "cholesky.h"
#include "memory.h"
#include "baremetal_tests/full_tree_update_sphere2500_300_500.h"

int main() {
    const double ERR_THRESH = FLT_EPSILON * cond * 100;
    printf("ERROR THRESHOLD=%f\n", ERR_THRESH);

    // Do a recursive marking of updated nodes from leaf to root
    bool* marked = my_malloc(M_nnode * sizeof(bool));
    my_memset(marked, 0, M_nnode * sizeof(bool));
    for(int node = M_nnode - 1; node >= 0; node--) {
        if(node_num_update_factors[node] != 0) {
            int cur_node = node;
            do {
              marked[cur_node] = true;
              cur_node = node_parent[cur_node];
            } while(cur_node != -1 && marked[cur_node] == false);
        }     
    }

    int* M_lookups[M_nnode];

    for(int node = 0; node < M_nnode; node++) {
        int M_h = M_height[node];
        int M_w = M_width[node];
        int* M_ridx = M_row_indices[node];
        float* M_data = M[node];

        int max_M_ridx = M_ridx[M_h - 1];
        M_lookups[node] = my_malloc((max_M_ridx + 1) * sizeof(int));
        my_memset(M_lookups[node], 0, (max_M_ridx + 1) * sizeof(int));

        build_reverse_lookup(M_ridx, M_h, M_lookups[node]);

    }

    // Do a pass from root to leaf
    // Allocate the [LA 0; LB LC] matrix and copy [A; B] over
    // Then compute LC += LB LB^T
    // And compute [LA; LB] = [LA; LB] * LA
    float** M_workspace = my_malloc(M_nnode * sizeof(float*));
    my_memset(M_workspace, 0, M_nnode * sizeof(float*));

    for(int node = M_nnode - 1; node >= 0; node--) {
        if(marked[node] == false) { continue; }

        int M_h = M_height[node];
        int M_w = M_width[node];
        float* M_data = M[node];

        int workspace_size = M_h * M_h * sizeof(float);
        int supernode_size = M_h * M_w * sizeof(float);

        M_workspace[node] = my_malloc(M_h * M_h * sizeof(float));

        my_memset(M_workspace[node], 0, M_h * M_h * sizeof(float));

    }

    for(int node = 0; node < M_nnode; node++) {

        if(marked[node] == false) { continue; }

        int M_h = M_height[node];
        int M_w = M_width[node];
        int* M_ridx = M_row_indices[node];
        float* M_data = M[node];
        float* M_workspace_data = M_workspace[node];

        int* M_lookup = M_lookups[node];

        int supernode_size = M_h * M_w;

        int cur_node_num_update_factors = node_num_update_factors[node];
        int* cur_node_factor_height = my_malloc(cur_node_num_update_factors * sizeof(int));
        int* cur_node_factor_width = my_malloc(cur_node_num_update_factors * sizeof(int));
        int** cur_node_factor_ridx = my_malloc(cur_node_num_update_factors * sizeof(int*));
        float** cur_node_factor_data = my_malloc(cur_node_num_update_factors * sizeof(float*));
        float** cur_node_new_factor_data = my_malloc(cur_node_num_update_factors * sizeof(float*));

        for(int i = 0; i < cur_node_num_update_factors; i++) {
          int factor_index = node_update_factors[node][i];
          cur_node_factor_height[i] = factor_height[factor_index];
          cur_node_factor_width[i] = factor_width[factor_index];
          cur_node_factor_ridx[i] = factor_ridx[factor_index];
          cur_node_factor_data[i] = factor_data[factor_index];
          cur_node_new_factor_data[i] = new_factor_data[factor_index];
        }

        // Restore C = LC + LBLB^T
        // Restore [A; B] = [LA; LB] * LA^T
        int M_subdiag_h = M_h - M_w;
        float* LA_data = M_data;
        float* LB_data = M_data + M_w;
        float* A_data = M_workspace_data;
        float* C_data = M_workspace_data + supernode_size + M_w;

        if(M_subdiag_h > 0) {
            // Restore C as LC + LB LB^T
            matmul2(M_subdiag_h, M_subdiag_h, M_w, 
                    LB_data, LB_data, C_data, C_data,
                    M_h, M_h, M_h, M_h,
                    1, 1, 1, 
                    true, false);
        }

        // Restore [A; B] as [LA; LB] * LA^T
        matmul2(M_w, M_h, M_w,
                LA_data, LA_data, A_data, A_data,
                M_h, M_h, M_h, M_h,
                1, 1, 1,
                true, false);

        for(int i = 0; i < cur_node_num_update_factors; i++) {
            int h = cur_node_factor_height[i];
            int w = cur_node_factor_width[i];
            int* ridx = cur_node_factor_ridx[i];
            float* data = cur_node_factor_data[i];
            float* new_data = cur_node_new_factor_data[i];
            float* workspace = my_malloc(h * h * sizeof(float));

            my_memset(workspace, 0, h * h * sizeof(float));

            matmul2(h, h, w, 
                   data, data, 
                   workspace, workspace,
                   h, h, h, h,
                   -1, 1, 0,
                   true, false);

            matmul2(h, h, w, 
                   new_data, new_data,
                   workspace, workspace,
                   h, h, h, h,
                   1, 1, 1,
                   true, false);

            sparse_matrix_add3_2(workspace, h, h, ridx,
                                 M_workspace_data, M_h, M_h, M_ridx,
                                 1, M_lookup);
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
        partial_factorization4(M_workspace_data, M_w, M_h);

        // Add C to the next node
        int parent = node_parent[node];
        if(parent != -1) {


            int subdiag_h = M_h - M_w;
            float* C = M_workspace_data + M_w * (M_h + 1);
            int next_M_h = M_height[parent];
            int* next_M_ridx = M_row_indices[parent];

            if(M_workspace[parent] == 0) {
                M_workspace[parent] = my_malloc(next_M_h * next_M_h * sizeof(float));
                my_memset(M_workspace[parent], 0, next_M_h * next_M_h * sizeof(float));
            }

            float* next_M_data = M_workspace[parent];
            int* next_M_lookup = M_lookups[parent];

            sparse_matrix_add3_2(C, subdiag_h, M_h, M_ridx + M_w,
                                 next_M_data, next_M_h, next_M_h, next_M_ridx,
                                 1, next_M_lookup);
            
        }

        // Copy [A; B] back into storage
        my_memcpy(M[node], M_workspace_data, M_h * M_w * sizeof(float));

        int res = check_tril_result(M[node], M_correct[node], M_w, M_h, M_h, 
                                    ERR_THRESH);
        if(res != 0) {
            printf("Column H%d does not pass initial check.\n", node);
            return 1;
        }
    }

    // Check results
    for(int node = 0; node < M_nnode; node++) {
        int width = M_width[node];
        int height = M_height[node];
        int res = check_tril_result(M[node], M_correct[node], width, height, height, 
                                    ERR_THRESH);
        if(res != 0) {
            printf("Column H%d does not pass check.\n", node);
            return 1;
        }
    }

    printf("Passed :)\n");
}
