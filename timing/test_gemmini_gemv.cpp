#include <gtsam/linear/gemmini_functions.h>
#include "gemv_test0.h"
#include <iostream>

using namespace gtsam;
using namespace std;

int main() {
    gemv(dim_I, dim_J,
         A_full + A_r1 + A_c1 * stride_A, x_full + x_c1, y_full + y_c1, 
         stride_A,
         scale_factor_A);
    for(int i = 0; i < y_full_rows; i++) {
        cout << y_full[i] << " ";
    }
    cout << endl;
}
