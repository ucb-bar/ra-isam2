#include <stdio.h>
#include <stdlib.h>
#include <gtsam/linear/gemmini_functions.h>

#include "cholesky.h"
#include "memory.h"
#include "baremetal_tests/control_N-12_M-4_num_agents-4_horizon-20.h"

int main() {

    int u_ridx[CONTROL_M] = {0};

    for(int agent = 0; agent < CONTROL_NUM_AGENTS; agent++) {
        printf("agent = %d\n", agent);
        float* Pk = Q_data[agent];
        float* ATPk = ATPk_data[agent];
        float* ATPkA = ATPkA_data[agent];
        float* ATPkB = ATPkB_data[agent];
        float* PkB = PkB_data[agent];
        float* R_plus_BTPkB = R_plus_BTPkB_data[agent];

        float* Ax = Ax_data[agent];
        float* PkAx = PkAx_data[agent];
        float* R_min_BTPkB = R_min_BTPkB_data[agent];

        float* A = A_data[agent];
        float* B = B_data[agent];
        float* Q = Q_data[agent];
        float* R = R_data[agent];

        for(int k = CONTROL_HORIZON - 1; k >= 0; k--) {
            printf("k = %d\n", k);
            // float* Pk_min_1 = (float*) malloc(N * N * sizeof(float));
            // memcpy(Pk_min_1, Q, N * N * sizeof(float));
            float* Pk_min_1 = P_k_data[agent][k];
            float* x = x_k_data[agent][k];
            float* u = u_k_data[agent][k];
            double alpha = 0.001;

            my_memcpy(Pk_min_1, Q, CONTROL_N * CONTROL_N * sizeof(float));

            // ATPk
            matmul2(CONTROL_N, CONTROL_N, CONTROL_N,
                    A, Pk, 
                    NULL, ATPk,
                    CONTROL_N, CONTROL_N, 0, CONTROL_N,
                    1, 1, 0,
                    true, false);
            
            // Pnext += ATPkA
            matmul2(CONTROL_N, CONTROL_N, CONTROL_N,
                    ATPk, A, 
                    Pk_min_1, ATPkA,
                    CONTROL_N, CONTROL_N, CONTROL_N, CONTROL_N,
                    alpha, 1, 1,
                    false, false);

            // ATPkB
            matmul2(CONTROL_N, CONTROL_M, CONTROL_N,
                    ATPk, B, 
                    NULL, ATPkB,
                    CONTROL_N, CONTROL_M, 0, CONTROL_M,
                    1, 1, 0,
                    false, false);

            // PkB
            matmul2(CONTROL_N, CONTROL_M, CONTROL_N,
                    Pk, B,
                    NULL, PkB,
                    CONTROL_N, CONTROL_M, 0, CONTROL_M,
                    1, 1, 0,
                    false, false);

            // R + BTPkB
            matmul2(CONTROL_M, CONTROL_M, CONTROL_N,
                    B, PkB,
                    R, R_plus_BTPkB,
                    CONTROL_M, CONTROL_M, CONTROL_M, CONTROL_M,
                    1, 1, 0,
                    true, false);

            // inv(R + BTPkB)
            // printf("fac1\n");
            partial_factorization4(R_plus_BTPkB, CONTROL_M, CONTROL_M);

            // L^-1 (ATPkB)^T
            // This is wrong btw, ATPkB needs to be transposed. But number of ops is the same
            dense_block_triangle_solve2(R_plus_BTPkB, ATPkB, CONTROL_M, CONTROL_N, CONTROL_M, CONTROL_N);

            // Pnext -= ATPkB * ATPkB^T * alpha (for small alpha to ensure psdness)
            matmul2(CONTROL_N, CONTROL_N, CONTROL_M,
                    ATPkB, ATPkB,
                    Pk_min_1, Pk_min_1,
                    CONTROL_M, CONTROL_M, CONTROL_N, CONTROL_N,
                    -alpha, 1, 1,
                    false, true);
            
            // Ax
            matmul2(CONTROL_N, 1, CONTROL_N,
                    A, x,
                    NULL, Ax,
                    CONTROL_N, 1, 0, 1,
                    1, 1, 0,
                    false, false);

            // PkAx
            matmul2(CONTROL_N, 1, CONTROL_N,
                    Pk, Ax,
                    NULL, PkAx,
                    CONTROL_N, 1, 0, 1,
                    1, 1, 0,
                    false, false);

            // BTPkAx, but store it in the last row of R - BTPkB
            matmul2(CONTROL_M, 1, CONTROL_N,
                    B, PkAx,
                    NULL, R_min_BTPkB + CONTROL_M,
                    CONTROL_M, 1, 0, CONTROL_M + 1,
                    0.5, 1, 0,
                    true, false);

            // R - BTPkB (using + to ensure psdness)
            matmul2(CONTROL_M, CONTROL_M, CONTROL_N,
                    B, PkB,
                    R, R_min_BTPkB,
                    CONTROL_M, CONTROL_M, CONTROL_M, CONTROL_M + 1,
                    1, 1, 1,
                    true, false);

            // printf("fac2\n");

            partial_factorization4(R_min_BTPkB, CONTROL_M, CONTROL_M + 1);  // This performs forward solve

            partial_backsolve(R_min_BTPkB, CONTROL_M, CONTROL_M + 1, CONTROL_M + 1, u_ridx, u);

            Pk = Pk_min_1;

        }
    }

    printf("Done :)\n");

    return 0;
}
