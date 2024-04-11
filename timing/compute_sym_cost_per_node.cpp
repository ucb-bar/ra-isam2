#include <vector>
#include <iostream>

// This needs to be set to the relative path of the target header file
#include "baremetal_tests/incremental_sphere2500_steps-2000_period-25/incremental_dataset.h"

using namespace std;

int main() {

    const int SYM_COST = 2000;
    const int SYM_COST_REORDER = 4000;

    bool is3D = max_factor_width == 6;

    for(int step = 0; step < num_timesteps; step++) {
        int total_cost = 0;
        bool* node_marked = step_node_marked[step];
        bool* node_fixed = step_node_fixed[step];
        int* node_width = step_node_width[step];

        int nnodes = step_nnodes[step];

        for(int node = 0; node < nnodes; node++) {
            if(!node_marked[node] && !node_fixed[node]) {
                // cout << 0 << " ";
                continue;
            }
            int num_keys = node_width[node] / max_factor_width;
            int relin_cost = num_keys * SYM_COST_REORDER;
            // cout << relin_cost << " ";
            total_cost += relin_cost;
        }
        // cout << endl;
        cout << total_cost << endl;
    }

}
