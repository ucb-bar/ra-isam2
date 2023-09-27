#include <gtsam/linear/gemmini_functions.h>
#include "syrk_test0.h"
#include <iostream>

using namespace gtsam;
using namespace std;

int main() {
    matmul(dim_I, dim_J, dim_K,
         m_full + A_r1 + A_c1 * stride_A, m_full + B_r1 + B_c1 * stride_B, m_full + C_r1 + C_c1 * stride_C, 
         stride_A, stride_B, stride_C,
         scale_factor_A, scale_factor_B,
         transpose_A, transpose_B);
    for(int i = 0; i < m_full_rows * m_full_cols; i++) {
      cout << m_full[i] - m_correct[i] << " ";
    }
    cout << endl;
}
