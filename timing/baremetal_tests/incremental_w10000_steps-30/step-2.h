#pragma once

const bool step2_is_reconstruct = true;

const int step2_factor3_height = 4;
const int step2_factor3_width = 3;
int step2_factor3_ridx[] = {0, 1, 2, 9, };
float step2_factor3_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 1.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 1.0000000, 0.0000000, 
};

const int step2_factor3_num_blks = 1;
int step2_factor3_A_blk_start[] = {0, };
int step2_factor3_B_blk_start[] = {0, };
int step2_factor3_blk_width[] = {3, };

const int step2_factor4_height = 7;
const int step2_factor4_width = 3;
int step2_factor4_ridx[] = {0, 1, 2, 3, 4, 5, 9, };
float step2_factor4_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999670, 0.0081837, 0.0335822, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0081837, -0.9999670, 0.9990980, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step2_factor4_num_blks = 1;
int step2_factor4_A_blk_start[] = {0, };
int step2_factor4_B_blk_start[] = {0, };
int step2_factor4_blk_width[] = {6, };

const int step2_factor2_height = 4;
const int step2_factor2_width = 3;
int step2_factor2_ridx[] = {6, 7, 8, 9, };
float step2_factor2_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step2_factor2_num_blks = 1;
int step2_factor2_A_blk_start[] = {0, };
int step2_factor2_B_blk_start[] = {6, };
int step2_factor2_blk_width[] = {3, };

const int step2_factor5_height = 7;
const int step2_factor5_width = 3;
int step2_factor5_ridx[] = {3, 4, 5, 6, 7, 8, 9, };
float step2_factor5_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999840, 0.0056968, 0.0178761, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0056968, -0.9999840, 1.0034800, 0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0000000, 
};

const int step2_factor5_num_blks = 1;
int step2_factor5_A_blk_start[] = {0, };
int step2_factor5_B_blk_start[] = {3, };
int step2_factor5_blk_width[] = {6, };

const int step2_factor0_height = 4;
const int step2_factor0_width = 3;
int step2_factor0_ridx[] = {0, 1, 2, 9, };
float step2_factor0_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step2_factor0_num_blks = 1;
int step2_factor0_A_blk_start[] = {0, };
int step2_factor0_B_blk_start[] = {0, };
int step2_factor0_blk_width[] = {3, };

const int step2_factor1_height = 4;
const int step2_factor1_width = 3;
int step2_factor1_ridx[] = {3, 4, 5, 9, };
float step2_factor1_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step2_factor1_num_blks = 1;
int step2_factor1_A_blk_start[] = {0, };
int step2_factor1_B_blk_start[] = {3, };
int step2_factor1_blk_width[] = {3, };

const int step2_node0_num_factors = 6;
const bool step2_node0_marked = true;
const bool step2_node0_fixed = false;
int step2_node0_factor_height[] = {step2_factor3_height, step2_factor4_height, step2_factor2_height, step2_factor5_height, step2_factor0_height, step2_factor1_height, };
int step2_node0_factor_width[] = {step2_factor3_width, step2_factor4_width, step2_factor2_width, step2_factor5_width, step2_factor0_width, step2_factor1_width, };
int* step2_node0_factor_ridx[] = {step2_factor3_ridx, step2_factor4_ridx, step2_factor2_ridx, step2_factor5_ridx, step2_factor0_ridx, step2_factor1_ridx, };
float* step2_node0_factor_data[] = {step2_factor3_data, step2_factor4_data, step2_factor2_data, step2_factor5_data, step2_factor0_data, step2_factor1_data, };
int step2_node0_factor_num_blks[] = {step2_factor3_num_blks, step2_factor4_num_blks, step2_factor2_num_blks, step2_factor5_num_blks, step2_factor0_num_blks, step2_factor1_num_blks, };
int* step2_node0_factor_A_blk_start[] = {step2_factor3_A_blk_start, step2_factor4_A_blk_start, step2_factor2_A_blk_start, step2_factor5_A_blk_start, step2_factor0_A_blk_start, step2_factor1_A_blk_start, };
int* step2_node0_factor_B_blk_start[] = {step2_factor3_B_blk_start, step2_factor4_B_blk_start, step2_factor2_B_blk_start, step2_factor5_B_blk_start, step2_factor0_B_blk_start, step2_factor1_B_blk_start, };
int* step2_node0_factor_blk_width[] = {step2_factor3_blk_width, step2_factor4_blk_width, step2_factor2_blk_width, step2_factor5_blk_width, step2_factor0_blk_width, step2_factor1_blk_width, };
const int step2_node0_parent = 1;
const int step2_node0_height = 10;
const int step2_node0_width = 9;
float step2_node0_data[] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};
const int step2_node0_num_blks = 0;
int step2_node0_A_blk_start[] = {};
int step2_node0_B_blk_start[] = {};
int step2_node0_blk_width[] = {};
const float step2_node0_H_correct_cond = 100.8979285637637;
float step2_node0_H_correct_data[] = {
1.9999899240999999, 0.0, 0.0, -0.99996384943, 0.0081836938596, 0.033582113501999994, 0.0, 0.0, 0.0, -1.11021990366e-16, 
0.0, 1.9999899240999999, 0.0, -0.0081836938596, -0.99996384943, 0.9990955244899999, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 1.9999899240999999, 0.0, 0.0, -0.99999779047, 0.0, 0.0, 0.0, 4.364393481e-19, 
-0.99996384943, -0.0081836938596, 0.0, 2.000012417980298, -2.638723878179629e-10, -0.04175750403504, -0.99998755425, 0.0056967899025, 0.01787620605, -1.110261131682e-16, 
0.0081836938596, -0.99996384943, 0.0, -2.638723878179629e-10, 2.000012417980298, -0.9987915178630152, -0.005696789726588738, -0.999987554251002, 1.0034817659968553, 6.030347585199814e-18, 
0.033582113501999994, 0.9990955244899999, -0.99999779047, -0.04175750403504, -0.9987915178630152, 2.9993159441872, -1.0523740000612605e-08, 1.2840361139644401e-06, -0.99999788938492, -5.47364860083e-18, 
0.0, 0.0, 0.0, -0.99998755425, -0.005696789726588738, -1.0523740000612605e-08, 1.000000513776622, 7.751740000078374e-09, -0.02359239097584, 2.220009014019736e-16, 
0.0, 0.0, 0.0, 0.0056967899025, -0.999987554251002, 1.2840361139644401e-06, 7.751740000078374e-09, 1.0000002562449384, -1.003359972285202, -8.20371734943e-18, 
0.0, 0.0, 0.0, 0.01787620605, 1.0034817659968553, -0.99999788938492, -0.02359239097584, -1.003359972285202, 2.00728933358353, 4.302587336804e-18, 
};
float step2_node0_M_correct_data[] = {
1.41421, 0.0, 0.0, -0.707083, 0.00578676, 0.0237462, 0.0, 0.0, 0.0, -7.85046e-17, 
0.0, 1.41421, 0.0, -0.00578676, -0.707083, 0.706469, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 1.41421, 0.0, 0.0, -0.707107, 0.0, 0.0, 0.0, 3.0861e-19, 
0.0, 0.0, 0.0, 1.22475, -2.1545e-10, -0.0170474, -0.816483, 0.00465139, 0.0145958, -1.35975e-16, 
0.0, 0.0, 0.0, 0.0, 1.22475, -0.407754, -0.00465139, -0.816483, 0.819336, 5.29466e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.35392, -0.0116813, -0.245837, -0.491655, -2.62227e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.577233, -0.00497492, -0.0235733, 1.92251e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.522373, -0.871864, -5.62139e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.577354, 5.03671e-19, 
};


const int step2_node1_num_factors = 0;
const bool step2_node1_marked = true;
const bool step2_node1_fixed = false;
int step2_node1_factor_height[] = {};
int step2_node1_factor_width[] = {};
int* step2_node1_factor_ridx[] = {};
float* step2_node1_factor_data[] = {};
int step2_node1_factor_num_blks[] = {};
int* step2_node1_factor_A_blk_start[] = {};
int* step2_node1_factor_B_blk_start[] = {};
int* step2_node1_factor_blk_width[] = {};
const int step2_node1_parent = -1;
const int step2_node1_height = 1;
const int step2_node1_width = 1;
float step2_node1_data[] = {
0, 
};
const int step2_node1_num_blks = 0;
int step2_node1_A_blk_start[] = {};
int step2_node1_B_blk_start[] = {};
int step2_node1_blk_width[] = {};
const float step2_node1_H_correct_cond = 1.0;
float step2_node1_H_correct_data[] = {
3.8043853920900005e-63, 
};
float step2_node1_M_correct_data[] = {
-6.16797e-32, 
};


const int step2_nnodes = 2;
bool step2_node_marked[] = {step2_node0_marked, step2_node1_marked, };
bool step2_node_fixed[] = {step2_node0_fixed, step2_node1_fixed, };
int step2_node_num_factors[] = {step2_node0_num_factors, step2_node1_num_factors, };
int* step2_node_factor_height[] = {step2_node0_factor_height, step2_node1_factor_height, };
int* step2_node_factor_width[] = {step2_node0_factor_width, step2_node1_factor_width, };
int** step2_node_factor_ridx[] = {step2_node0_factor_ridx, step2_node1_factor_ridx, };
float** step2_node_factor_data[] = {step2_node0_factor_data, step2_node1_factor_data, };
int* step2_node_factor_num_blks[] = {step2_node0_factor_num_blks, step2_node1_factor_num_blks, };
int** step2_node_factor_A_blk_start[] = {step2_node0_factor_A_blk_start, step2_node1_factor_A_blk_start, };
int** step2_node_factor_B_blk_start[] = {step2_node0_factor_B_blk_start, step2_node1_factor_B_blk_start, };
int** step2_node_factor_blk_width[] = {step2_node0_factor_blk_width, step2_node1_factor_blk_width, };
int step2_node_parent[] = {step2_node0_parent, step2_node1_parent, };
int step2_node_height[] = {step2_node0_height, step2_node1_height, };
int step2_node_width[] = {step2_node0_width, step2_node1_width, };
float* step2_node_data[] = {step2_node0_data, step2_node1_data, };
int step2_node_num_blks[] = {step2_node0_num_blks, step2_node1_num_blks, };
int* step2_node_A_blk_start[] = {step2_node0_A_blk_start, step2_node1_A_blk_start, };
int* step2_node_B_blk_start[] = {step2_node0_B_blk_start, step2_node1_B_blk_start, };
int* step2_node_blk_width[] = {step2_node0_blk_width, step2_node1_blk_width, };
float step2_node_H_correct_cond[] = {step2_node0_H_correct_cond, step2_node1_H_correct_cond, };
float* step2_node_H_correct_data[] = {step2_node0_H_correct_data, step2_node1_H_correct_data, };
float* step2_node_M_correct_data[] = {step2_node0_M_correct_data, step2_node1_M_correct_data, };


