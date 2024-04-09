#include <vector>
#include <iostream>

// This needs to be set to the relative path of the target header file
#include "baremetal_tests/incremental_sphere2500_steps-2500_period-25/incremental_dataset.h"

using namespace std;

int main() {

    const int RELIN_COST_7_3 = 15000;
    const int RELIN_COST_13_6 = 30000;

    bool is3D = max_factor_width == 6;
    int relin_cost_per_factor = is3D? RELIN_COST_13_6 : RELIN_COST_7_3;

    cout << num_timesteps << endl;
    for(int step = 0; step < num_timesteps; step++) {
        bool* node_marked = step_node_marked[step];
        bool* node_fixed = step_node_fixed[step];
        int* node_num_factors = step_node_num_factors[step];

        int nnodes = step_nnodes[step];

        cout << nnodes << endl;
        for(int node = 0; node < nnodes; node++) {
            if(!node_marked[node] && !node_fixed[node]) {
                cout << 0 << " ";
                continue;
            }
            int num_factors = node_num_factors[node];
            int relin_cost = num_factors * relin_cost_per_factor;
            cout << relin_cost << " ";
        }
        cout << endl;
    }

}
