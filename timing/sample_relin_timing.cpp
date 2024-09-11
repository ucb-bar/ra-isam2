#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <chrono>
#include <gtsam/base/Matrix.h>
#include <gtsam/slam/dataset.h>
#include <random>
#include <algorithm>

extern "C" {
#include "cholesky.h"
}

using namespace std;
using namespace Eigen;
using namespace gtsam;

int main() {
    // seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    random_device rd;
    mt19937 g(rd()); // Random number generator seeded with rd()

    string datasetFile = findExampleDataFile("../../examples/Data/sphere2500.txt");

    std::pair<NonlinearFactorGraph::shared_ptr, Values::shared_ptr> data =
        readG2o(datasetFile, true);

    NonlinearFactorGraph measurements = *data.first;
    Values initial = *data.second;

    cout << "initial size = " << initial.size() << endl;
    for(int i = 0; i < measurements.size(); i++) {
        initial.insert(i, Pose3());
    }

    const int num_samples = 1000;

    auto start = chrono::high_resolution_clock::now();
    for(int i = 0; i < num_samples; i++) {

        int index = rand() % measurements.size();

        NonlinearFactor::shared_ptr measurementf = measurements[index];

        auto linearFactor = measurementf->linearize(initial);

    }
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double, std::micro> us_double = end - start;

    cout << us_double.count() / num_samples << endl;
}
