#include <gtsam/linear/gemmini_functions.h>
#include <iostream>

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
}
