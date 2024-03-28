#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <float.h>

#include "cholesky.h"
#include "memory.h"
#include "baremetal_tests/vio_w10000_steps-30_vio_lag-5/vio_dataset.h"

int main() {

    float* ABC = (float*) my_malloc(vio_node_max_height * vio_node_max_height * sizeof(float));

    for(int step = 0; step < num_timesteps; step++) {
        // Convenience names
        int H_h = step_vio_node_height[step];
        int H_w = step_vio_node_width[step];

        my_memset(ABC, 0, H_h * H_h * sizeof(float));

        if(step_is_reconstruct[step]) {
            double ERR_THRESH = FLT_EPSILON * step_H_correct_cond[step] * 10;

            // Restore C -= LB LB^T
            if(step_vio_marginal_width[step] > 0) {
                int marginal_w= step_vio_marginal_width[step];
                int subdiag_h = H_h - marginal_w;
                float* LB = vio_node_data + marginal_w;

                // If marginalizing, LB must have the same stride as ABC
                // Need to skip the last col
                matmul(subdiag_h - 1, subdiag_h, marginal_w,
                       LB, LB, ABC,
                       H_h, H_h, H_h,
                       -vio_scale, 1,
                       true, false);

                // Manually copy last row down
                float* oldlastrow = ABC + subdiag_h - 1;
                float* newlastrow = ABC + H_h - 1;
                for(int j = 0; j < subdiag_h - 1; j++) {
                    *newlastrow = *oldlastrow;
                    *oldlastrow = 0;
                    newlastrow += H_h;
                    oldlastrow += H_h;
                }
            }

            // Add all factors to ABC
            for(int i = 0; i < step_num_factors[step]; i++) {
                int h = step_factor_height[step][i];
                int w = step_factor_width[step][i];

                float* data = step_factor_data[step][i];

                float* workspace = my_malloc(h * h * sizeof(float));
                my_memset(workspace, 0, h * h * sizeof(float));

                matmul(h, h, w, 
                       data, data, workspace,
                       h, h, h,
                       1, 1, 
                       true, false);

                int num_blks = step_factor_num_blks[step][i];
                int* A_blk_start = step_factor_A_blk_start[step][i];
                int* B_blk_start = step_factor_B_blk_start[step][i];
                int* blk_width = step_factor_blk_width[step][i];


                sparse_matrix_add3_3(workspace, h, h, 
                                     ABC, H_h, H_h, 
                                     1, 
                                     num_blks, A_blk_start, B_blk_start, blk_width);
                my_free_after(workspace);
            }


            int res = check_tril_result(ABC, step_H_correct_data[step], H_w, H_h, H_h, ERR_THRESH);
            if(res != 0) {
                printf("H at step %d is not correct. Check step-%d.h\n", step + timestep_start, step + timestep_start);
                exit(0);
            }
            else {
                printf("H at step %d passes check\n", step + timestep_start);
            }

            partial_factorization4(ABC, H_w, H_h);

            my_memcpy(vio_node_data, ABC, H_w * H_h * sizeof(float));

            res = check_tril_result(vio_node_data, step_M_correct_data[step], H_w, H_h, H_h, ERR_THRESH);

            if(res != 0) {
                printf("M at step %d is not correct. Check step-%d.h\n", step + timestep_start, step + timestep_start);
                exit(0);
            }
            else {
                printf("M at step %d passes check\n", step + timestep_start);
            }

        }
        else {
            printf("Only reconstuct is supported in VIO\n");
            exit(0);
        }

    }

    printf("Passed :)\n");

}

