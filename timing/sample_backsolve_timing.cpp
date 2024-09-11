#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <chrono>
#include <gtsam/base/Matrix.h>
#include <random>
#include <algorithm>

extern "C" {
#include "cholesky.h"
}

using namespace std;
using namespace Eigen;

float randomFloat() {
    return static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
}

MatrixXf generateSPDMatrix(int n) {
    MatrixXf A = MatrixXf::Random(n, n);
    MatrixXf spdMatrix = A.transpose() * A;
    spdMatrix += MatrixXf::Identity(n, n);
    return spdMatrix;
}

MatrixXf generateMNMatrix(int m, int n) {
    MatrixXf A = MatrixXf::Random(m, n);
    return A;
}

int main() {
    // seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    random_device rd;
    mt19937 g(rd()); // Random number generator seeded with rd()

    for(int i = 0; i < 1000; i++) {

        int n = rand() % 1000 + 24;
        int m = rand() % 400 + n + 1;

        MatrixXf matrix(m, m);

        matrix.block(0, 0, n, n) = generateSPDMatrix(n);
        matrix.block(n, 0, m - n, n) = generateMNMatrix(m - n, n);

        vector<int> values(3 * m + n);
        iota(values.begin(), values.end(), 0);

        shuffle(values.begin(), values.end(), g);

        vector<int> ridx(values.begin(), values.begin() + m);

        sort(ridx.begin(), ridx.end());

        MatrixXf x = generateMNMatrix(ridx.back(), 1);

        auto start = chrono::high_resolution_clock::now();
        partial_backsolve(matrix.data(), n, m, m, ridx.data(), x.data());

        auto end = chrono::high_resolution_clock::now();

        chrono::duration<double, std::micro> us_double = end - start;

        cout << m << " " << n << " " << us_double.count() << endl;

    }

}
