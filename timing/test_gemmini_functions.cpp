#include <gtsam/linear/gemmini_functions.h>
#include <iostream>

#define MATRIX_GEMMINI_TYPE Eigen::MatrixXd

using namespace gtsam;
using namespace std;


int main() {
  Matrix m(5, 5);
  for(int i = 0; i < 5; i ++) {
    for(int j = 0; j < 5; j++) {
      m(i, j) = i * 10 + j;
    }
  }

  cout << m << endl;

  vector<GEMMINI_TYPE> m_float(25, 0);
  gather(m, m_float.data());

  for(GEMMINI_TYPE f : m_float) {
    cout << f << " ";
  }
  cout << endl;

  vector<GEMMINI_TYPE> C_float(25, 0);

  syrk(5, 5, 1, m_float.data(), C_float.data());


  Eigen::Map<MATRIX_GEMMINI_TYPE> C(C_float.data(), 5, 5);

  cout << C << endl;

  auto m_block = m.block(1, 1, 3, 3);

  transpose_scatter_add(5, 5, 
                        m_float.data(),
                        1, 1, 3, 3, m_block);

  cout << m << endl;

  vector<GEMMINI_TYPE> n_float(25, 0);
  transpose_gather(m, n_float.data());

  Eigen::Map<MATRIX_GEMMINI_TYPE> B(n_float.data(), 5, 5);
  cout << B << endl;

}
