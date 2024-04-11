#include <vector>
#include <iostream>

// This needs to be set to the relative path of the target header file
#include "baremetal_tests/incremental_sphere2500_steps-2000_period-25/incremental_dataset.h"

using namespace std;

int main() {

    const int RELIN_COST_7_3 = 15000;
    const int RELIN_COST_13_6 = 20000;

    bool is3D = max_factor_width == 6;
    int relin_cost_per_factor = is3D? RELIN_COST_13_6 : RELIN_COST_7_3;

    for(int step = 0; step < num_timesteps; step++) {
        bool* node_marked = step_node_marked[step];
        bool* node_fixed = step_node_fixed[step];
        int* node_num_factors = step_node_num_factors[step];
        int* node_relin_cost = step_node_relin_cost[step];

        int nnodes = step_nnodes[step];

        int total_cost = 0;

        for(int node = 0; node < nnodes; node++) {
            if(!node_marked[node] && !node_fixed[node]) {
                continue;
            }
            int num_factors = node_num_factors[node];
            int relin_cost = node_relin_cost[node];
            total_cost += relin_cost;
        }
        cout << total_cost << endl;
    }

}
