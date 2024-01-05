extern "C" {
#include <gtsam/linear/gemmini_functions.h>
}

#include "syrk_test0.h"
#include <iostream>

using namespace std;

int main() {
    matmul(dim_I, dim_J, dim_K,
         m_full + A_r1 + A_c1 * stride_A, m_full + B_r1 + B_c1 * stride_B, m_full + C_r1 + C_c1 * stride_C, 
         stride_A, stride_B, stride_C,
         scale_factor_A, scale_factor_B,
         transpose_A, transpose_B);
    for(int j = 0; j < m_full_cols; j++) {
        for(int i = j; i < m_full_rows; i++) {
            float test = m_full[i + j * m_full_rows];
            float cor = m_correct[i + j * m_full_rows];
            cout << i << " " << j << " " << test - cor << " " << test << " " << cor << endl;
        }
    }
    cout << endl;

    
    // Eigen::Map<Eigen::MatrixXf> m(m_full, m_full_rows, m_full_cols);
    // Eigen::Block<Eigen::Map<Eigen::MatrixXf>> C(m, C_r1, C_c1, C-)
    // cout << "C = \n" << m << endl;
}
