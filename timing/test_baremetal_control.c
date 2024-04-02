#include <stdio.h>
#include <stdlib.h>
#include <gtsam/linear/gemmini_functions.h>

#include "cholesky.h"
#include "memory.h"
#include "baremetal_tests/control_N-12_M-4_num_agents-4_horizon-20.h"

int main() {

    int u_ridx[M] = {0};

    for(int agent = 0; agent < NUM_AGENTS; agent++) {
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

        for(int k = HORIZON - 1; k >= 0; k--) {
            printf("k = %d\n", k);
            // float* Pk_min_1 = (float*) malloc(N * N * sizeof(float));
            // memcpy(Pk_min_1, Q, N * N * sizeof(float));
            float* Pk_min_1 = P_k_data[agent][k];
            float* x = x_k_data[agent][k];
            float* u = u_k_data[agent][k];
            double alpha = 0.001;

            my_memcpy(Pk_min_1, Q, N * N * sizeof(float));

            // ATPk
            matmul2(N, N, N,
                    A, Pk, 
                    NULL, ATPk,
                    N, N, 0, N,
                    1, 1, 0,
                    true, false);
            
            // Pnext += ATPkA
            matmul2(N, N, N,
                    ATPk, A, 
                    Pk_min_1, ATPkA,
                    N, N, N, N,
                    alpha, 1, 1,
                    false, false);

            // ATPkB
            matmul2(N, M, N,
                    ATPk, B, 
                    NULL, ATPkB,
                    N, M, 0, M,
                    1, 1, 0,
                    false, false);

            // PkB
            matmul2(N, M, N,
                    Pk, B,
                    NULL, PkB,
                    N, M, 0, M,
                    1, 1, 0,
                    false, false);

            // R + BTPkB
            matmul2(M, M, N,
                    B, PkB,
                    R, R_plus_BTPkB,
                    M, M, M, M,
                    1, 1, 0,
                    true, false);

            // inv(R + BTPkB)
            // printf("fac1\n");
            partial_factorization4(R_plus_BTPkB, M, M);

            // L^-1 (ATPkB)^T
            // This is wrong btw, ATPkB needs to be transposed. But number of ops is the same
            dense_block_triangle_solve2(R_plus_BTPkB, ATPkB, M, N, M, N);

            // Pnext -= ATPkB * ATPkB^T * alpha (for small alpha to ensure psdness)
            matmul2(N, N, M,
                    ATPkB, ATPkB,
                    Pk_min_1, Pk_min_1,
                    M, M, N, N,
                    -alpha, 1, 1,
                    false, true);
            
            // Ax
            matmul2(N, 1, N,
                    A, x,
                    NULL, Ax,
                    N, 1, 0, 1,
                    1, 1, 0,
                    false, false);

            // PkAx
            matmul2(N, 1, N,
                    Pk, Ax,
                    NULL, PkAx,
                    N, 1, 0, 1,
                    1, 1, 0,
                    false, false);

            // BTPkAx, but store it in the last row of R - BTPkB
            matmul2(M, 1, N,
                    B, PkAx,
                    NULL, R_min_BTPkB + M,
                    M, 1, 0, M + 1,
                    0.5, 1, 0,
                    true, false);

            // R - BTPkB (using + to ensure psdness)
            matmul2(M, M, N,
                    B, PkB,
                    R, R_min_BTPkB,
                    M, M, M, M + 1,
                    1, 1, 1,
                    true, false);

            // printf("fac2\n");

            partial_factorization4(R_min_BTPkB, M, M + 1);  // This performs forward solve

            partial_backsolve(R_min_BTPkB, M, M + 1, M + 1, u_ridx, u);

            Pk = Pk_min_1;

        }
    }

    printf("Done :)\n");

    return 0;
}
