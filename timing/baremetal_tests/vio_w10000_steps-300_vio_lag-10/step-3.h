#pragma once

const bool step3_is_reconstruct = true;

const int step3_factor0_height = 4;
const int step3_factor0_width = 3;
int step3_factor0_ridx[] = {0, 1, 2, 12, };
float step3_factor0_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step3_factor0_num_blks = 1;
int step3_factor0_A_blk_start[] = {0, };
int step3_factor0_B_blk_start[] = {0, };
int step3_factor0_blk_width[] = {3, };

const int step3_factor1_height = 4;
const int step3_factor1_width = 3;
int step3_factor1_ridx[] = {3, 4, 5, 12, };
float step3_factor1_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step3_factor1_num_blks = 1;
int step3_factor1_A_blk_start[] = {0, };
int step3_factor1_B_blk_start[] = {3, };
int step3_factor1_blk_width[] = {3, };

const int step3_factor2_height = 4;
const int step3_factor2_width = 3;
int step3_factor2_ridx[] = {6, 7, 8, 12, };
float step3_factor2_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step3_factor2_num_blks = 1;
int step3_factor2_A_blk_start[] = {0, };
int step3_factor2_B_blk_start[] = {6, };
int step3_factor2_blk_width[] = {3, };

const int step3_factor3_height = 4;
const int step3_factor3_width = 3;
int step3_factor3_ridx[] = {0, 1, 2, 12, };
float step3_factor3_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 1.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 1.0000000, 0.0000000, 
};

const int step3_factor3_num_blks = 1;
int step3_factor3_A_blk_start[] = {0, };
int step3_factor3_B_blk_start[] = {0, };
int step3_factor3_blk_width[] = {3, };

const int step3_factor4_height = 7;
const int step3_factor4_width = 3;
int step3_factor4_ridx[] = {0, 1, 2, 3, 4, 5, 12, };
float step3_factor4_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999670, 0.0081837, 0.0335822, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0081837, -0.9999670, 0.9990980, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step3_factor4_num_blks = 1;
int step3_factor4_A_blk_start[] = {0, };
int step3_factor4_B_blk_start[] = {0, };
int step3_factor4_blk_width[] = {6, };

const int step3_factor5_height = 7;
const int step3_factor5_width = 3;
int step3_factor5_ridx[] = {3, 4, 5, 6, 7, 8, 12, };
float step3_factor5_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999840, 0.0056968, 0.0178761, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0056968, -0.9999840, 1.0034800, 0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0000000, 
};

const int step3_factor5_num_blks = 1;
int step3_factor5_A_blk_start[] = {0, };
int step3_factor5_B_blk_start[] = {3, };
int step3_factor5_blk_width[] = {6, };

const int step3_factor6_height = 4;
const int step3_factor6_width = 3;
int step3_factor6_ridx[] = {9, 10, 11, 12, };
float step3_factor6_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step3_factor6_num_blks = 1;
int step3_factor6_A_blk_start[] = {0, };
int step3_factor6_B_blk_start[] = {9, };
int step3_factor6_blk_width[] = {3, };

const int step3_factor7_height = 7;
const int step3_factor7_width = 3;
int step3_factor7_ridx[] = {6, 7, 8, 9, 10, 11, 12, };
float step3_factor7_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9994120, 0.0342925, 0.0169251, 0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0342925, -0.9994120, 0.9733340, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step3_factor7_num_blks = 1;
int step3_factor7_A_blk_start[] = {0, };
int step3_factor7_B_blk_start[] = {6, };
int step3_factor7_blk_width[] = {6, };

const int step3_num_factors = 8;
const int step3_factor_height[] = {step3_factor0_height, step3_factor1_height, step3_factor2_height, step3_factor3_height, step3_factor4_height, step3_factor5_height, step3_factor6_height, step3_factor7_height, };
const int step3_factor_width[] = {step3_factor0_width, step3_factor1_width, step3_factor2_width, step3_factor3_width, step3_factor4_width, step3_factor5_width, step3_factor6_width, step3_factor7_width, };
int* step3_factor_ridx[] = {step3_factor0_ridx, step3_factor1_ridx, step3_factor2_ridx, step3_factor3_ridx, step3_factor4_ridx, step3_factor5_ridx, step3_factor6_ridx, step3_factor7_ridx, };
float* step3_factor_data[] = {step3_factor0_data, step3_factor1_data, step3_factor2_data, step3_factor3_data, step3_factor4_data, step3_factor5_data, step3_factor6_data, step3_factor7_data, };
int step3_factor_num_blks[] = {step3_factor0_num_blks, step3_factor1_num_blks, step3_factor2_num_blks, step3_factor3_num_blks, step3_factor4_num_blks, step3_factor5_num_blks, step3_factor6_num_blks, step3_factor7_num_blks, };
int* step3_factor_A_blk_start[] = {step3_factor0_A_blk_start, step3_factor1_A_blk_start, step3_factor2_A_blk_start, step3_factor3_A_blk_start, step3_factor4_A_blk_start, step3_factor5_A_blk_start, step3_factor6_A_blk_start, step3_factor7_A_blk_start, };
int* step3_factor_B_blk_start[] = {step3_factor0_B_blk_start, step3_factor1_B_blk_start, step3_factor2_B_blk_start, step3_factor3_B_blk_start, step3_factor4_B_blk_start, step3_factor5_B_blk_start, step3_factor6_B_blk_start, step3_factor7_B_blk_start, };
int* step3_factor_blk_width[] = {step3_factor0_blk_width, step3_factor1_blk_width, step3_factor2_blk_width, step3_factor3_blk_width, step3_factor4_blk_width, step3_factor5_blk_width, step3_factor6_blk_width, step3_factor7_blk_width, };

const int step3_vio_node_height = 13;
const int step3_vio_node_width = 12;
const int step3_vio_marginal_width = 0;

const float step3_H_correct_cond = 274.7033386230469;
float step3_H_correct_data[] = {
2.0000010, 0.0000000, 0.0000000, -0.9999670, 0.0081837, 0.0335822, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.0000000, 2.0000010, 0.0000000, -0.0081837, -0.9999670, 0.9990980, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 2.0000010, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 
-0.9999670, -0.0081837, 0.0000000, 2.0000019, 0.0000000, -0.0417574, -0.9999840, 0.0056968, 0.0178761, 0.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.0081837, -0.9999670, 0.0000000, 0.0000000, 2.0000019, -0.9987902, -0.0056968, -0.9999840, 1.0034800, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0335822, 0.9990980, -1.0000000, -0.0417574, -0.9987902, 2.9993255, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, -0.9999840, -0.0056968, 0.0000000, 2.0000014, 0.0000000, -0.0235924, -0.9994120, 0.0342925, 0.0169251, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0056968, -0.9999840, 0.0000000, 0.0000000, 2.0000014, -1.0033621, -0.0342925, -0.9994120, 0.9733340, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0178761, 1.0034800, -1.0000000, -0.0235924, -1.0033621, 3.0072925, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9994120, -0.0342925, 0.0000000, 1.0000013, 0.0000000, -0.0502932, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0342925, -0.9994120, 0.0000000, 0.0000000, 1.0000013, -0.9721813, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0169251, 0.9733340, -1.0000000, -0.0502932, -0.9721813, 1.9476665, 0.0000000, 
};

float step3_M_correct_data[] = {
1.4142139, 0.0000000, 0.0000000, -0.7070833, 0.0057868, 0.0237462, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.0000000, 1.4142139, 0.0000000, -0.0057868, -0.7070833, 0.7064688, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 1.4142139, 0.0000000, 0.0000000, -0.7071066, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 1.2247455, 0.0000000, -0.0170474, -0.8164831, 0.0046514, 0.0145958, 0.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 1.2247455, -0.4077544, -0.0046514, -0.8164831, 0.8193375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 1.3539237, -0.0116813, -0.2458375, -0.4916545, 0.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 1.1546422, -0.0024871, -0.0117849, -0.8655599, 0.0296997, 0.0146583, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 1.1282256, -0.4035994, -0.0323031, -0.8857610, 0.8627446, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 1.3896079, -0.0167227, -0.2570096, -0.4689266, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.4994840, -0.0144227, -0.0351922, 0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3850777, -0.8555608, -0.0000000, 
0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.5000086, 0.0000000, 
};

