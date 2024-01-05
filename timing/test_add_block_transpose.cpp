extern "C" {
#include <gtsam/linear/gemmini_functions.h>
}

#include <gtsam/linear/CholeskyEliminationTreeTypes.h>
#include <iostream>

using namespace gtsam;
using namespace std;

int main() {
  GemminiMatrix M(5, 5);

  GemminiMatrix A(5, 5);

  for(int j = 0; j < 5; j++) {
    for(int i = 0; i < 5; i++) {
      A(i, j) = j * 0.1 + i * 0.01;
    }
  }

  for(int j = 0; j < 5; j++) {
    for(int i = 0; i < 5; i++) {
      M(i, j) = j * 10 + i;
    }
  }

  cout << M << endl << endl;

  add_block_transpose(&A(0, 0), &M(0, 0), 5, 5, 1, 0, 2, 1, 2, 3);

  cout << Eigen::Block<GemminiMatrix>(A, 1, 0, 3, 2) << endl << endl;
  
  cout << M << endl << endl;
}
