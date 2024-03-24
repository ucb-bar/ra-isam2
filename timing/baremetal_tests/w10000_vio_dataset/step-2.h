#pragma once

const bool step2_is_reconstruct = true;

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

const int step2_num_factors = 6;
const int step2_factor_height[] = {step2_factor0_height, step2_factor1_height, step2_factor2_height, step2_factor3_height, step2_factor4_height, step2_factor5_height, };
const int step2_factor_width[] = {step2_factor0_width, step2_factor1_width, step2_factor2_width, step2_factor3_width, step2_factor4_width, step2_factor5_width, };
int* step2_factor_ridx[] = {step2_factor0_ridx, step2_factor1_ridx, step2_factor2_ridx, step2_factor3_ridx, step2_factor4_ridx, step2_factor5_ridx, };
float* step2_factor_data[] = {step2_factor0_data, step2_factor1_data, step2_factor2_data, step2_factor3_data, step2_factor4_data, step2_factor5_data, };
int step2_factor_num_blks[] = {step2_factor0_num_blks, step2_factor1_num_blks, step2_factor2_num_blks, step2_factor3_num_blks, step2_factor4_num_blks, step2_factor5_num_blks, };
int* step2_factor_A_blk_start[] = {step2_factor0_A_blk_start, step2_factor1_A_blk_start, step2_factor2_A_blk_start, step2_factor3_A_blk_start, step2_factor4_A_blk_start, step2_factor5_A_blk_start, };
int* step2_factor_B_blk_start[] = {step2_factor0_B_blk_start, step2_factor1_B_blk_start, step2_factor2_B_blk_start, step2_factor3_B_blk_start, step2_factor4_B_blk_start, step2_factor5_B_blk_start, };
int* step2_factor_blk_width[] = {step2_factor0_blk_width, step2_factor1_blk_width, step2_factor2_blk_width, step2_factor3_blk_width, step2_factor4_blk_width, step2_factor5_blk_width, };

const int step2_vio_node_height = 10;
const int step2_vio_node_width = 9;
const int step2_vio_marginal_width = 0;

const float step2_H_correct_cond = 100.8978271484375;
float step2_H_correct_data[] = {
2.0000010, 0.0000000, 0.0000000, -0.9999670, 0.0081837, 0.0335822, 0.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.0000000, 2.0000010, 0.0000000, -0.0081837, -0.9999670, 0.9990980, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 2.0000010, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 
-0.9999670, -0.0081837, 0.0000000, 2.0000019, 0.0000000, -0.0417574, -0.9999840, 0.0056968, 0.0178761, -0.0000000, 
0.0081837, -0.9999670, 0.0000000, 0.0000000, 2.0000019, -0.9987902, -0.0056968, -0.9999840, 1.0034800, 0.0000000, 
0.0335822, 0.9990980, -1.0000000, -0.0417574, -0.9987902, 2.9993255, 0.0000000, 0.0000000, -1.0000000, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, -0.9999840, -0.0056968, 0.0000000, 1.0000014, 0.0000000, -0.0235924, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0056968, -0.9999840, 0.0000000, 0.0000000, 1.0000014, -1.0033621, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0178761, 1.0034800, -1.0000000, -0.0235924, -1.0033621, 2.0072925, 0.0000000, 
};

float step2_M_correct_data[] = {
1.4142139, 0.0000000, 0.0000000, -0.7070833, 0.0057868, 0.0237462, 0.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.0000000, 1.4142139, 0.0000000, -0.0057868, -0.7070833, 0.7064688, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 1.4142139, 0.0000000, 0.0000000, -0.7071066, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 1.2247455, 0.0000000, -0.0170474, -0.8164831, 0.0046514, 0.0145958, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 1.2247455, -0.4077544, -0.0046514, -0.8164831, 0.8193375, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 1.3539237, -0.0116813, -0.2458375, -0.4916545, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.5772337, -0.0049749, -0.0235733, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.5223737, -0.8718646, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.5773542, 0.0000000, 
};

