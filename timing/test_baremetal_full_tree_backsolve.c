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
#include "baremetal_tests/full_tree_backsolve_sphere2500_300_500.h"

int main() {
    const double ERR_THRESH = FLT_EPSILON * cond * 100;
    printf("ERROR THRESHOLD=%f\n", ERR_THRESH);

    // Perform backsolve
    float* x = my_malloc(x_correct_len * sizeof(float));
    for(int node = M_correct_nnode - 2; node >= 0; node--) {
        int width = M_correct_width[node];
        int height = M_correct_height[node];
        int* ridx = M_correct_row_indices[node];

        set_strictly_upper_trianguler(0, M_correct[node], width, height, height);

        partial_backsolve(M_correct[node], width, height, height, ridx, x);

        int res = check_tril_result(x + ridx[0], x_correct_data + ridx[0], 1, width, width, 
                                    ERR_THRESH);
        if(res != 0) {
            printf("x at node %d does not pass check.\n", node);
            return 1;
        }
    }

    printf("Passed :)\n");
}

