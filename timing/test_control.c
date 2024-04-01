#include <stdio.h>
#include <stdlib.h>
#include <gtsam/linear/gemmini_functions.h>

#include "cholesky.h"

#define NUM_AGENTS 1


void init_rand_matrix(float* M, float scale, int h, int w, int stride) {
  for(int j = 0; j < w; j++) {
    for(int i = 0; i < h; i++) {
      M[i] = scale * (float) rand() / RAND_MAX;
    }
    M += stride;
  }
}

void init_spd_matrix(float* M, float scale, int dim) {
    float* A = (float*) malloc(dim * dim * sizeof(float));
    init_rand_matrix(A, 1, dim, dim, dim);

    matmul2(dim, dim, dim,
            A, A,
            NULL, M,
            dim, dim, 0, dim,
            scale, 1, 0,
            false, true);

    free(A);
    A = NULL;

}

int main() {

    // System matrix sizes
    const int N = 12;
    const int M = 4;

    // Horizon length
    const int horizon = 200;

    // Define system matrices for each agent dynamically
    float* A_agents[NUM_AGENTS] = {0};
    float* B_agents[NUM_AGENTS] = {0};
    float* Q_agents[NUM_AGENTS] = {0};
    float* R_agents[NUM_AGENTS] = {0};
    float*** x_list_agents[NUM_AGENTS] = {0};
    int* u_ridx = malloc(M * sizeof(int));
    memset(u_ridx, 0, M * sizeof(int));

    // Randomly initialize system matrices for each agent
    for (int agent = 0; agent < NUM_AGENTS; agent++) {
        A_agents[agent] = (float*) malloc(N * N * sizeof(float));
        B_agents[agent] = (float*) malloc(N * M * sizeof(float));
        Q_agents[agent] = (float*) malloc(N * N * sizeof(float));
        R_agents[agent] = (float*) malloc(M * M * sizeof(float));

        // Randomly initialize matrices for the current agent
        // You may need to adjust the range of random values based on your requirements
        init_rand_matrix(A_agents[agent], 1, N, N, N);
        init_rand_matrix(B_agents[agent], 1, N, M, M);
        init_spd_matrix(Q_agents[agent], 10, N);
        init_spd_matrix(R_agents[agent], 1, M);

        x_list_agents[agent] = (float**) malloc(horizon * sizeof(float*));

        for(int k = 0; k < horizon; k++) {
            x_list_agents[agent][k] = (float*) malloc(N * sizeof(float));
            init_rand_matrix(x_list_agents[agent][k], 1, N, 1, N);
        }
    }

    
    // Initialize lists to store matrices P and control inputs for each agent
    float*** P_list_agents[NUM_AGENTS] = {0};
    float*** u_list_agents[NUM_AGENTS] = {0};

    for (int agent = 0; agent < NUM_AGENTS; agent++) {
      P_list_agents[agent] = (float**) malloc(horizon * sizeof(float*));
      u_list_agents[agent] = (float**) malloc(horizon * sizeof(float*));
    }

    // Perform Riccati recursion for each agent
    for (int agent = 0; agent < NUM_AGENTS; agent++) {
      // Initialize terminal cost matrix P_N for the agent
      float* Pk = (float*) malloc(N * N * sizeof(float));
      float* oldPk = Pk;
      float* ATPk = (float*) malloc(N * N * sizeof(float));
      float* ATPkA = (float*) malloc(N * N * sizeof(float));
      float* ATPkB = (float*) malloc(N * M * sizeof(float));
      float* PkB = (float*) malloc(N * M * sizeof(float));
      float* R_plus_BTPkB = (float*) malloc(M * M * sizeof(float));

      float* Ax = (float*) malloc(N * sizeof(float));
      float* PkAx = (float*) malloc(N * sizeof(float));
      float* R_min_BTPkB = (float*) malloc((M+1) * M * sizeof(float));  // This includes last row

      float* A = A_agents[agent];
      float* B = B_agents[agent];
      float* Q = Q_agents[agent];
      float* R = R_agents[agent];

      memcpy(Pk, Q, N * N * sizeof(float));

      // Perform backward Riccati recursion
      for (int k = horizon - 1; k >= 0; k--) {
        printf("k = %d\n", k);
        // Compute Pnext = Q + AT Pk A - AT Pk B inv(R + BT Pk B) BT Pk A
        // Perform C = A_scale_factor * A^(transpose_A * T) * B_scale_factor * B^(transpose_B * T) + D_scale_factor * D
        float* Pk_min_1 = (float*) malloc(N * N * sizeof(float));
        memcpy(Pk_min_1, Q, N * N * sizeof(float));

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
                1, 1, 1,
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
                1, 1, 1,
                true, false);


        // inv(R + BTPkB)
        printf("fac1\n");
        partial_factorization4(R_plus_BTPkB, M, M);

        // L^-1 (ATPkB)^T
        // This is wrong btw, ATPkB needs to be transposed. But number of ops is the same
        dense_block_triangle_solve2(R_plus_BTPkB, ATPkB, M, N, M, N);

        // Pnext -= ATPkB * ATPkB^T * alpha (for small alpha to ensure psdness)
        double alpha = 0.005;
        matmul2(N, N, M,
                ATPkB, ATPkB,
                Pk_min_1, Pk_min_1,
                M, M, N, N,
                0.5, alpha, 0.1,
                false, true);

        // Ax
        float* x = x_list_agents[agent][k];
        u_list_agents[agent][k] = (float*) malloc(M * sizeof(float));
        float* u = u_list_agents[agent][k];
        memset(u, 0, M * sizeof(float));
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

        printf("fac2\n");
        partial_factorization4(R_min_BTPkB, M, M + 1);  // This performs forward solve

        partial_backsolve(R_min_BTPkB, M, M + 1, M + 1, u_ridx, u);


        // PN = Pnext
        P_list_agents[agent][k] = Pk_min_1;

        Pk = Pk_min_1;

      }

      for (int k = 0; k < horizon; k++) {
          u_list_agents[agent][k] = NULL;
      }

      free(oldPk);
      free(ATPk);
      free(ATPkA);
      free(ATPkB);
      free(PkB);
      free(R_plus_BTPkB);

      free(Ax);
      free(PkAx);
      free(R_min_BTPkB);
    }

    // // Print the optimal control inputs for each agent
    // for (int agent = 0; agent < NUM_AGENTS; agent++) {
    //   printf("Optimal Control Inputs for Agent %d:\n", agent + 1);
    //   for (int k = 0; k < horizon; k++) {
    //     printf("u_%d = %f\n", k, u_list_agents[agent][k]);
    //   }
    // }

    // Free dynamically allocated memory
    free(u_ridx);
    for (int agent = 0; agent < NUM_AGENTS; agent++) {
      free(A_agents[agent]);
      free(B_agents[agent]);
      free(Q_agents[agent]);
      free(R_agents[agent]);
      for (int k = 0; k < horizon; k++) {
        free(P_list_agents[agent][k]);
        free(u_list_agents[agent][k]);
      }
      free(P_list_agents[agent]);
      free(u_list_agents[agent]);
    }

    printf("Done\n");

    return 0;
}
