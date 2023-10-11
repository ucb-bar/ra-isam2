#include <gtsam/linear/gemmini_functions.h>
#include <iostream>

using namespace gtsam;
using namespace std;

int main() {
    int dim_I = 2, dim_J = 2, dim_K = 3;
    elem_t A[6] = {1, 2, 3, 4, 5, 6};
    elem_t B[6] = {7, 8, 9, 10, 11, 12};
    elem_t C[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    int stride_A = 2, stride_B = 3, stride_C = 2;
    bool transpose_A = true, transpose_B = true;
    float scale_factor_A = 1, scale_factor_B = 1;
    
    matmul(dim_I, dim_J, dim_K,
         A, B, C, 
         stride_A, stride_B, stride_C,
         scale_factor_A, scale_factor_B,
         transpose_A, transpose_B);

    
    // Eigen::Map<Eigen::MatrixXf> m(C, dim_I, dim_J);

    for(int i = 0; i < 9; i++) {
        cout << C[i] << endl;
    }

    // Eigen::Block<Eigen::Map<Eigen::MatrixXf>> C(m, C_r1, C_c1, C-)
}
