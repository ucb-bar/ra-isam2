#pragma once

#include <stdint.h>
#include <stdbool.h>

#include "step-360.h"

const bool no_values = true;

const int timestep_start = 360;

#define NUM_TIMESTEPS 1

const int num_timesteps = 1;

#define MAX_WORKSPACE_NEEDED 5218208

#define MAX_NNODE 82

#define MAX_FACTOR_HEIGHT 13

#define MAX_FACTOR_WIDTH 6

const int max_factor_height = 13;
const int max_factor_width = 6;

bool step_is_reconstruct[] = {step360_is_reconstruct, };
int step_num_threads[] = {step360_num_threads, };
uint64_t step_scaled_relin_cost[] = {step360_scaled_relin_cost, };
bool step_run_model[] = {step360_run_model, };
int step_nnodes[] = {step360_nnodes, };
bool* step_node_marked[] = {step360_node_marked, };
bool* step_node_fixed[] = {step360_node_fixed, };
int* step_node_num_factors[] = {step360_node_num_factors, };
int* step_node_relin_cost[] = {step360_node_relin_cost, };
int** step_node_factor_height[] = {step360_node_factor_height, };
int** step_node_factor_width[] = {step360_node_factor_width, };
int*** step_node_factor_ridx[] = {step360_node_factor_ridx, };
float*** step_node_factor_data[] = {step360_node_factor_data, };
int** step_node_factor_num_blks[] = {step360_node_factor_num_blks, };
int*** step_node_factor_A_blk_start[] = {step360_node_factor_A_blk_start, };
int*** step_node_factor_B_blk_start[] = {step360_node_factor_B_blk_start, };
int*** step_node_factor_blk_width[] = {step360_node_factor_blk_width, };
int* step_node_parent[] = {step360_node_parent, };
int* step_node_height[] = {step360_node_height, };
int* step_node_width[] = {step360_node_width, };
float** step_node_data[] = {step360_node_data, };
int* step_node_num_blks[] = {step360_node_num_blks, };
int** step_node_A_blk_start[] = {step360_node_A_blk_start, };
int** step_node_B_blk_start[] = {step360_node_B_blk_start, };
int** step_node_blk_width[] = {step360_node_blk_width, };
int** step_node_ridx[] = {step360_node_ridx, };
float* step_x_data[] = {step360_x_data, };

