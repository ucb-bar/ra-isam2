#pragma once

const bool step100_is_reconstruct = true;

const int step100_factor3_height = 4;
const int step100_factor3_width = 3;
int step100_factor3_ridx[] = {39, 40, 41, 66, };
float step100_factor3_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 1.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 1.0000000, 0.0000000, 
};

const int step100_factor3_num_blks = 1;
int step100_factor3_A_blk_start[] = {0, };
int step100_factor3_B_blk_start[] = {39, };
int step100_factor3_blk_width[] = {3, };

const int step100_factor45_height = 4;
const int step100_factor45_width = 3;
int step100_factor45_ridx[] = {57, 58, 59, 66, };
float step100_factor45_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor45_num_blks = 1;
int step100_factor45_A_blk_start[] = {0, };
int step100_factor45_B_blk_start[] = {57, };
int step100_factor45_blk_width[] = {3, };

const int step100_factor297_height = 7;
const int step100_factor297_width = 3;
int step100_factor297_ridx[] = {51, 52, 53, 54, 55, 56, 66, };
float step100_factor297_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998100, 0.0195045, 0.0199225, 0.0397134, 
0.0000000, 1.0000000, 0.0000000, -0.0195045, -0.9998100, -0.0413803, 0.0443423, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0143899, 
};

const int step100_factor297_num_blks = 1;
int step100_factor297_A_blk_start[] = {0, };
int step100_factor297_B_blk_start[] = {51, };
int step100_factor297_blk_width[] = {6, };

const int step100_factor381_height = 4;
const int step100_factor381_width = 3;
int step100_factor381_ridx[] = {15, 16, 17, 30, };
float step100_factor381_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor381_num_blks = 1;
int step100_factor381_A_blk_start[] = {0, };
int step100_factor381_B_blk_start[] = {15, };
int step100_factor381_blk_width[] = {3, };

const int step100_factor4_height = 7;
const int step100_factor4_width = 3;
int step100_factor4_ridx[] = {39, 40, 41, 60, 61, 62, 66, };
float step100_factor4_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999670, 0.0081837, 0.0335822, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0081837, -0.9999670, 0.9990980, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step100_factor4_num_blks = 2;
int step100_factor4_A_blk_start[] = {0, 3, };
int step100_factor4_B_blk_start[] = {39, 60, };
int step100_factor4_blk_width[] = {3, 3, };

const int step100_factor46_height = 7;
const int step100_factor46_width = 3;
int step100_factor46_ridx[] = {6, 7, 8, 36, 37, 38, 45, };
float step100_factor46_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9997320, -0.0231475, -0.0554081, 0.0496439, 
0.0000000, 1.0000000, 0.0000000, 0.0231475, -0.9997320, -0.9925260, -0.0343027, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0138051, 
};

const int step100_factor46_num_blks = 2;
int step100_factor46_A_blk_start[] = {0, 3, };
int step100_factor46_B_blk_start[] = {6, 36, };
int step100_factor46_blk_width[] = {3, 3, };

const int step100_factor298_height = 7;
const int step100_factor298_width = 3;
int step100_factor298_ridx[] = {36, 37, 38, 54, 55, 56, 66, };
float step100_factor298_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999810, -0.0061304, -0.0076224, -0.0023626, 
0.0000000, 1.0000000, 0.0000000, 0.0061304, -0.9999810, -1.0067800, -0.1132470, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0159074, 
};

const int step100_factor298_num_blks = 2;
int step100_factor298_A_blk_start[] = {0, 3, };
int step100_factor298_B_blk_start[] = {36, 54, };
int step100_factor298_blk_width[] = {3, 3, };

const int step100_factor382_height = 7;
const int step100_factor382_width = 3;
int step100_factor382_ridx[] = {12, 13, 14, 15, 16, 17, 30, };
float step100_factor382_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999010, 0.0140806, -0.0915529, 0.0026181, 
0.0000000, 1.0000000, 0.0000000, -0.0140806, -0.9999010, 1.1570100, 0.0024961, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0055222, 
};

const int step100_factor382_num_blks = 1;
int step100_factor382_A_blk_start[] = {0, };
int step100_factor382_B_blk_start[] = {12, };
int step100_factor382_blk_width[] = {6, };

const int step100_factor5_height = 7;
const int step100_factor5_width = 3;
int step100_factor5_ridx[] = {6, 7, 8, 39, 40, 41, 45, };
float step100_factor5_data[] = {
-0.9999840, 0.0056968, 0.0178761, 1.0000000, 0.0000000, 0.0000000, -0.0000000, 
-0.0056968, -0.9999840, 1.0034800, 0.0000000, 1.0000000, 0.0000000, 0.0000000, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0000000, 
};

const int step100_factor5_num_blks = 2;
int step100_factor5_A_blk_start[] = {0, 3, };
int step100_factor5_B_blk_start[] = {6, 39, };
int step100_factor5_blk_width[] = {3, 3, };

const int step100_factor47_height = 7;
const int step100_factor47_width = 3;
int step100_factor47_ridx[] = {57, 58, 59, 60, 61, 62, 66, };
float step100_factor47_data[] = {
-0.9998480, -0.0174518, -0.0318769, 1.0000000, 0.0000000, 0.0000000, -0.0511022, 
0.0174518, -0.9998480, 0.0106526, 0.0000000, 1.0000000, 0.0000000, -0.0094142, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0106607, 
};

const int step100_factor47_num_blks = 1;
int step100_factor47_A_blk_start[] = {0, };
int step100_factor47_B_blk_start[] = {57, };
int step100_factor47_blk_width[] = {6, };

const int step100_factor299_height = 7;
const int step100_factor299_width = 3;
int step100_factor299_ridx[] = {39, 40, 41, 54, 55, 56, 66, };
float step100_factor299_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.0067950, -0.9999770, -1.0141200, 0.0015355, 
0.0000000, 1.0000000, 0.0000000, 0.9999770, -0.0067950, -0.0167889, 0.0763711, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0076113, 
};

const int step100_factor299_num_blks = 2;
int step100_factor299_A_blk_start[] = {0, 3, };
int step100_factor299_B_blk_start[] = {39, 54, };
int step100_factor299_blk_width[] = {3, 3, };

const int step100_factor383_height = 4;
const int step100_factor383_width = 3;
int step100_factor383_ridx[] = {18, 19, 20, 30, };
float step100_factor383_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor383_num_blks = 1;
int step100_factor383_A_blk_start[] = {0, };
int step100_factor383_B_blk_start[] = {18, };
int step100_factor383_blk_width[] = {3, };

const int step100_factor48_height = 7;
const int step100_factor48_width = 3;
int step100_factor48_ridx[] = {39, 40, 41, 57, 58, 59, 66, };
float step100_factor48_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999570, -0.0092688, 0.0016191, -0.0270803, 
0.0000000, 1.0000000, 0.0000000, 0.0092688, -0.9999570, 1.0094900, -0.0159025, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0026554, 
};

const int step100_factor48_num_blks = 2;
int step100_factor48_A_blk_start[] = {0, 3, };
int step100_factor48_B_blk_start[] = {39, 57, };
int step100_factor48_blk_width[] = {3, 3, };

const int step100_factor300_height = 7;
const int step100_factor300_width = 3;
int step100_factor300_ridx[] = {42, 43, 44, 54, 55, 56, 66, };
float step100_factor300_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9995080, 0.0313735, 0.0163997, -0.0795215, 
0.0000000, 1.0000000, 0.0000000, -0.0313735, -0.9995080, -1.0621700, 0.0842226, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0212505, 
};

const int step100_factor300_num_blks = 2;
int step100_factor300_A_blk_start[] = {0, 3, };
int step100_factor300_B_blk_start[] = {42, 54, };
int step100_factor300_blk_width[] = {3, 3, };

const int step100_factor384_height = 7;
const int step100_factor384_width = 3;
int step100_factor384_ridx[] = {15, 16, 17, 18, 19, 20, 30, };
float step100_factor384_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9994890, -0.0319612, 0.1149680, 0.0025848, 
0.0000000, 1.0000000, 0.0000000, 0.0319612, -0.9994890, 1.0419100, 0.0020817, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0027143, 
};

const int step100_factor384_num_blks = 1;
int step100_factor384_A_blk_start[] = {0, };
int step100_factor384_B_blk_start[] = {15, };
int step100_factor384_blk_width[] = {6, };

const int step100_factor49_height = 7;
const int step100_factor49_width = 3;
int step100_factor49_ridx[] = {42, 43, 44, 57, 58, 59, 66, };
float step100_factor49_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0153141, 0.9998830, -1.0345400, -0.0044196, 
0.0000000, 1.0000000, 0.0000000, -0.9998830, 0.0153141, -0.0719612, 0.0417279, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0002390, 
};

const int step100_factor49_num_blks = 2;
int step100_factor49_A_blk_start[] = {0, 3, };
int step100_factor49_B_blk_start[] = {42, 57, };
int step100_factor49_blk_width[] = {3, 3, };

const int step100_factor301_height = 4;
const int step100_factor301_width = 3;
int step100_factor301_ridx[] = {45, 46, 47, 66, };
float step100_factor301_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor301_num_blks = 1;
int step100_factor301_A_blk_start[] = {0, };
int step100_factor301_B_blk_start[] = {45, };
int step100_factor301_blk_width[] = {3, };

const int step100_factor379_height = 4;
const int step100_factor379_width = 3;
int step100_factor379_ridx[] = {12, 13, 14, 30, };
float step100_factor379_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor379_num_blks = 1;
int step100_factor379_A_blk_start[] = {0, };
int step100_factor379_B_blk_start[] = {12, };
int step100_factor379_blk_width[] = {3, };

const int step100_factor385_height = 4;
const int step100_factor385_width = 3;
int step100_factor385_ridx[] = {21, 22, 23, 30, };
float step100_factor385_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor385_num_blks = 1;
int step100_factor385_A_blk_start[] = {0, };
int step100_factor385_B_blk_start[] = {21, };
int step100_factor385_blk_width[] = {3, };

const int step100_factor302_height = 7;
const int step100_factor302_width = 3;
int step100_factor302_ridx[] = {45, 46, 47, 54, 55, 56, 66, };
float step100_factor302_data[] = {
-0.9997870, -0.0206333, -0.0019494, 1.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.0206333, -0.9997870, 1.0260600, 0.0000000, 1.0000000, 0.0000000, -0.0000000, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0000000, 
};

const int step100_factor302_num_blks = 2;
int step100_factor302_A_blk_start[] = {0, 3, };
int step100_factor302_B_blk_start[] = {45, 54, };
int step100_factor302_blk_width[] = {3, 3, };

const int step100_factor386_height = 7;
const int step100_factor386_width = 3;
int step100_factor386_ridx[] = {18, 19, 20, 21, 22, 23, 30, };
float step100_factor386_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999950, 0.0030143, 0.0655364, 0.0025970, 
0.0000000, 1.0000000, 0.0000000, -0.0030143, -0.9999950, 1.0809200, 0.0021989, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0001386, 
};

const int step100_factor386_num_blks = 1;
int step100_factor386_A_blk_start[] = {0, };
int step100_factor386_B_blk_start[] = {18, };
int step100_factor386_blk_width[] = {6, };

const int step100_factor303_height = 7;
const int step100_factor303_width = 3;
int step100_factor303_ridx[] = {45, 46, 47, 48, 49, 50, 66, };
float step100_factor303_data[] = {
-0.9999990, -0.0014958, -0.0214717, 1.0000000, 0.0000000, 0.0000000, 0.1629600, 
0.0014958, -0.9999990, 1.0346500, 0.0000000, 1.0000000, 0.0000000, -0.0064846, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0009594, 
};

const int step100_factor303_num_blks = 1;
int step100_factor303_A_blk_start[] = {0, };
int step100_factor303_B_blk_start[] = {45, };
int step100_factor303_blk_width[] = {6, };

const int step100_factor387_height = 4;
const int step100_factor387_width = 3;
int step100_factor387_ridx[] = {0, 1, 2, 36, };
float step100_factor387_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor387_num_blks = 1;
int step100_factor387_A_blk_start[] = {0, };
int step100_factor387_B_blk_start[] = {0, };
int step100_factor387_blk_width[] = {3, };

const int step100_factor380_height = 7;
const int step100_factor380_width = 3;
int step100_factor380_ridx[] = {9, 10, 11, 12, 13, 14, 30, };
float step100_factor380_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.0010637, 0.9999990, -0.9425960, -0.0023203, 
0.0000000, 1.0000000, 0.0000000, -0.9999990, -0.0010637, 0.0227642, 0.0019015, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0078326, 
};

const int step100_factor380_num_blks = 1;
int step100_factor380_A_blk_start[] = {0, };
int step100_factor380_B_blk_start[] = {9, };
int step100_factor380_blk_width[] = {6, };

const int step100_factor304_height = 7;
const int step100_factor304_width = 3;
int step100_factor304_ridx[] = {45, 46, 47, 51, 52, 53, 66, };
float step100_factor304_data[] = {
-0.9999990, -0.0011291, -0.0020393, 1.0000000, 0.0000000, 0.0000000, -0.0069847, 
0.0011291, -0.9999990, 0.9844450, 0.0000000, 1.0000000, 0.0000000, -0.0142614, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0015309, 
};

const int step100_factor304_num_blks = 2;
int step100_factor304_A_blk_start[] = {0, 3, };
int step100_factor304_B_blk_start[] = {45, 51, };
int step100_factor304_blk_width[] = {3, 3, };

const int step100_factor388_height = 7;
const int step100_factor388_width = 3;
int step100_factor388_ridx[] = {21, 22, 23, 24, 25, 26, 30, };
float step100_factor388_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999650, 0.0083785, 0.0365277, 0.0021167, 
0.0000000, 1.0000000, 0.0000000, -0.0083785, -0.9999650, 0.9186420, 0.0022944, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0025221, 
};

const int step100_factor388_num_blks = 1;
int step100_factor388_A_blk_start[] = {0, };
int step100_factor388_B_blk_start[] = {21, };
int step100_factor388_blk_width[] = {6, };

const int step100_factor53_height = 7;
const int step100_factor53_width = 3;
int step100_factor53_ridx[] = {3, 4, 5, 39, 40, 41, 45, };
float step100_factor53_data[] = {
-0.9994810, -0.0322200, -0.0580138, 1.0000000, 0.0000000, 0.0000000, 0.0497852, 
0.0322200, -0.9994810, 1.0470300, 0.0000000, 1.0000000, 0.0000000, 0.1207720, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0003860, 
};

const int step100_factor53_num_blks = 2;
int step100_factor53_A_blk_start[] = {0, 3, };
int step100_factor53_B_blk_start[] = {3, 39, };
int step100_factor53_blk_width[] = {3, 3, };

const int step100_factor305_height = 7;
const int step100_factor305_width = 3;
int step100_factor305_ridx[] = {36, 37, 38, 45, 46, 47, 66, };
float step100_factor305_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9996420, -0.0267621, -0.0032816, -0.0443923, 
0.0000000, 1.0000000, 0.0000000, 0.0267621, -0.9996420, 0.0192727, 0.0394010, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0170434, 
};

const int step100_factor305_num_blks = 2;
int step100_factor305_A_blk_start[] = {0, 3, };
int step100_factor305_B_blk_start[] = {36, 45, };
int step100_factor305_blk_width[] = {3, 3, };

const int step100_factor389_height = 4;
const int step100_factor389_width = 3;
int step100_factor389_ridx[] = {3, 4, 5, 36, };
float step100_factor389_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor389_num_blks = 1;
int step100_factor389_A_blk_start[] = {0, };
int step100_factor389_B_blk_start[] = {3, };
int step100_factor389_blk_width[] = {3, };

const int step100_factor54_height = 7;
const int step100_factor54_width = 3;
int step100_factor54_ridx[] = {3, 4, 5, 36, 37, 38, 45, };
float step100_factor54_data[] = {
-0.9998910, -0.0147723, -0.0442197, 1.0000000, 0.0000000, 0.0000000, 0.0000314, 
0.0147723, -0.9998910, 1.0357700, 0.0000000, 1.0000000, 0.0000000, 0.0399277, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0047666, 
};

const int step100_factor54_num_blks = 2;
int step100_factor54_A_blk_start[] = {0, 3, };
int step100_factor54_B_blk_start[] = {3, 36, };
int step100_factor54_blk_width[] = {3, 3, };

const int step100_factor306_height = 7;
const int step100_factor306_width = 3;
int step100_factor306_ridx[] = {45, 46, 47, 60, 61, 62, 66, };
float step100_factor306_data[] = {
0.0220218, -0.9997570, -0.0299249, 1.0000000, 0.0000000, 0.0000000, -0.1061350, 
0.9997570, 0.0220218, -1.0067500, 0.0000000, 1.0000000, 0.0000000, -0.0843348, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0018801, 
};

const int step100_factor306_num_blks = 2;
int step100_factor306_A_blk_start[] = {0, 3, };
int step100_factor306_B_blk_start[] = {45, 60, };
int step100_factor306_blk_width[] = {3, 3, };

const int step100_factor390_height = 7;
const int step100_factor390_width = 3;
int step100_factor390_ridx[] = {0, 1, 2, 3, 4, 5, 36, };
float step100_factor390_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.0032961, 0.9999950, -0.9874480, 0.0002483, 
0.0000000, 1.0000000, 0.0000000, -0.9999950, -0.0032961, -0.1031110, 0.0040613, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0047798, 
};

const int step100_factor390_num_blks = 1;
int step100_factor390_A_blk_start[] = {0, };
int step100_factor390_B_blk_start[] = {0, };
int step100_factor390_blk_width[] = {6, };

const int step100_factor307_height = 7;
const int step100_factor307_width = 3;
int step100_factor307_ridx[] = {45, 46, 47, 57, 58, 59, 66, };
float step100_factor307_data[] = {
0.0045709, -0.9999900, 0.0197074, 1.0000000, 0.0000000, 0.0000000, -0.0321489, 
0.9999900, 0.0045709, -1.0172200, 0.0000000, 1.0000000, 0.0000000, 0.0153645, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0020928, 
};

const int step100_factor307_num_blks = 2;
int step100_factor307_A_blk_start[] = {0, 3, };
int step100_factor307_B_blk_start[] = {45, 57, };
int step100_factor307_blk_width[] = {3, 3, };

const int step100_factor391_height = 4;
const int step100_factor391_width = 3;
int step100_factor391_ridx[] = {6, 7, 8, 36, };
float step100_factor391_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor391_num_blks = 1;
int step100_factor391_A_blk_start[] = {0, };
int step100_factor391_B_blk_start[] = {6, };
int step100_factor391_blk_width[] = {3, };

const int step100_factor308_height = 7;
const int step100_factor308_width = 3;
int step100_factor308_ridx[] = {45, 46, 47, 63, 64, 65, 66, };
float step100_factor308_data[] = {
0.0174181, -0.9998480, 0.0166975, 1.0000000, 0.0000000, 0.0000000, -0.0489209, 
0.9998480, 0.0174181, -1.0697000, 0.0000000, 1.0000000, 0.0000000, 0.0620428, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0065747, 
};

const int step100_factor308_num_blks = 2;
int step100_factor308_A_blk_start[] = {0, 3, };
int step100_factor308_B_blk_start[] = {45, 63, };
int step100_factor308_blk_width[] = {3, 3, };

const int step100_factor392_height = 7;
const int step100_factor392_width = 3;
int step100_factor392_ridx[] = {3, 4, 5, 6, 7, 8, 36, };
float step100_factor392_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998610, -0.0166989, 0.0405687, 0.0037509, 
0.0000000, 1.0000000, 0.0000000, 0.0166989, -0.9998610, 0.9366200, -0.0004550, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0042945, 
};

const int step100_factor392_num_blks = 1;
int step100_factor392_A_blk_start[] = {0, };
int step100_factor392_B_blk_start[] = {3, };
int step100_factor392_blk_width[] = {6, };

const int step100_factor309_height = 7;
const int step100_factor309_width = 3;
int step100_factor309_ridx[] = {39, 40, 41, 45, 46, 47, 66, };
float step100_factor309_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0138394, -0.9999040, 0.0118973, -0.0580141, 
0.0000000, 1.0000000, 0.0000000, 0.9999040, 0.0138394, -0.0078675, -0.0460627, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0050539, 
};

const int step100_factor309_num_blks = 2;
int step100_factor309_A_blk_start[] = {0, 3, };
int step100_factor309_B_blk_start[] = {39, 45, };
int step100_factor309_blk_width[] = {3, 3, };

const int step100_factor393_height = 4;
const int step100_factor393_width = 3;
int step100_factor393_ridx[] = {9, 10, 11, 36, };
float step100_factor393_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor393_num_blks = 1;
int step100_factor393_A_blk_start[] = {0, };
int step100_factor393_B_blk_start[] = {9, };
int step100_factor393_blk_width[] = {3, };

const int step100_factor310_height = 7;
const int step100_factor310_width = 3;
int step100_factor310_ridx[] = {42, 43, 44, 45, 46, 47, 66, };
float step100_factor310_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999420, 0.0107436, -0.0177398, -0.1456190, 
0.0000000, 1.0000000, 0.0000000, -0.0107436, -0.9999420, -0.0366784, 0.0227405, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0033207, 
};

const int step100_factor310_num_blks = 1;
int step100_factor310_A_blk_start[] = {0, };
int step100_factor310_B_blk_start[] = {42, };
int step100_factor310_blk_width[] = {6, };

const int step100_factor394_height = 7;
const int step100_factor394_width = 3;
int step100_factor394_ridx[] = {6, 7, 8, 9, 10, 11, 36, };
float step100_factor394_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999950, -0.0030867, 0.0402078, 0.0036796, 
0.0000000, 1.0000000, 0.0000000, 0.0030867, -0.9999950, 1.0374000, -0.0004000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0041706, 
};

const int step100_factor394_num_blks = 1;
int step100_factor394_A_blk_start[] = {0, };
int step100_factor394_B_blk_start[] = {6, };
int step100_factor394_blk_width[] = {6, };

const int step100_factor311_height = 4;
const int step100_factor311_width = 3;
int step100_factor311_ridx[] = {27, 28, 29, 66, };
float step100_factor311_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor311_num_blks = 1;
int step100_factor311_A_blk_start[] = {0, };
int step100_factor311_B_blk_start[] = {27, };
int step100_factor311_blk_width[] = {3, };

const int step100_factor395_height = 4;
const int step100_factor395_width = 3;
int step100_factor395_ridx[] = {30, 31, 32, 66, };
float step100_factor395_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor395_num_blks = 1;
int step100_factor395_A_blk_start[] = {0, };
int step100_factor395_B_blk_start[] = {30, };
int step100_factor395_blk_width[] = {3, };

const int step100_factor312_height = 7;
const int step100_factor312_width = 3;
int step100_factor312_ridx[] = {27, 28, 29, 36, 37, 38, 66, };
float step100_factor312_data[] = {
0.0110680, -0.9999390, 0.9763090, 1.0000000, 0.0000000, 0.0000000, -0.0390865, 
0.9999390, 0.0110680, -0.0113112, 0.0000000, 1.0000000, 0.0000000, 0.0472444, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0134045, 
};

const int step100_factor312_num_blks = 2;
int step100_factor312_A_blk_start[] = {0, 3, };
int step100_factor312_B_blk_start[] = {27, 36, };
int step100_factor312_blk_width[] = {3, 3, };

const int step100_factor396_height = 7;
const int step100_factor396_width = 3;
int step100_factor396_ridx[] = {30, 31, 32, 36, 37, 38, 66, };
float step100_factor396_data[] = {
0.9999780, 0.0066254, -0.0278825, 1.0000000, 0.0000000, 0.0000000, 0.0892239, 
-0.0066254, 0.9999780, 1.0400400, 0.0000000, 1.0000000, 0.0000000, 0.0561563, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0210028, 
};

const int step100_factor396_num_blks = 2;
int step100_factor396_A_blk_start[] = {0, 3, };
int step100_factor396_B_blk_start[] = {30, 36, };
int step100_factor396_blk_width[] = {3, 3, };

const int step100_factor313_height = 7;
const int step100_factor313_width = 3;
int step100_factor313_ridx[] = {27, 28, 29, 45, 46, 47, 66, };
float step100_factor313_data[] = {
-0.0156964, -0.9998770, 0.9800580, 1.0000000, 0.0000000, 0.0000000, -0.0069474, 
0.9998770, -0.0156964, -0.0043571, 0.0000000, 1.0000000, 0.0000000, 0.0216338, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0058907, 
};

const int step100_factor313_num_blks = 2;
int step100_factor313_A_blk_start[] = {0, 3, };
int step100_factor313_B_blk_start[] = {27, 45, };
int step100_factor313_blk_width[] = {3, 3, };

const int step100_factor397_height = 7;
const int step100_factor397_width = 3;
int step100_factor397_ridx[] = {30, 31, 32, 45, 46, 47, 66, };
float step100_factor397_data[] = {
0.9997970, -0.0201384, -0.0519101, 1.0000000, 0.0000000, 0.0000000, 0.0383060, 
0.0201384, 0.9997970, 1.0197500, 0.0000000, 1.0000000, 0.0000000, -0.0076311, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0286324, 
};

const int step100_factor397_num_blks = 2;
int step100_factor397_A_blk_start[] = {0, 3, };
int step100_factor397_B_blk_start[] = {30, 45, };
int step100_factor397_blk_width[] = {3, 3, };

const int step100_factor314_height = 7;
const int step100_factor314_width = 3;
int step100_factor314_ridx[] = {27, 28, 29, 39, 40, 41, 66, };
float step100_factor314_data[] = {
0.9999980, -0.0018572, -0.0060227, 1.0000000, 0.0000000, 0.0000000, 0.0141328, 
0.0018572, 0.9999980, -0.9877720, 0.0000000, 1.0000000, 0.0000000, 0.0890286, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0282299, 
};

const int step100_factor314_num_blks = 2;
int step100_factor314_A_blk_start[] = {0, 3, };
int step100_factor314_B_blk_start[] = {27, 39, };
int step100_factor314_blk_width[] = {3, 3, };

const int step100_factor398_height = 7;
const int step100_factor398_width = 3;
int step100_factor398_ridx[] = {30, 31, 32, 39, 40, 41, 66, };
float step100_factor398_data[] = {
0.0062999, 0.9999800, 1.0322700, 1.0000000, 0.0000000, 0.0000000, 0.0096033, 
-0.9999800, 0.0062999, 0.0299249, 0.0000000, 1.0000000, 0.0000000, 0.1164290, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0009437, 
};

const int step100_factor398_num_blks = 2;
int step100_factor398_A_blk_start[] = {0, 3, };
int step100_factor398_B_blk_start[] = {30, 39, };
int step100_factor398_blk_width[] = {3, 3, };

const int step100_factor315_height = 7;
const int step100_factor315_width = 3;
int step100_factor315_ridx[] = {27, 28, 29, 42, 43, 44, 66, };
float step100_factor315_data[] = {
-0.0264378, -0.9996500, 0.9623090, 1.0000000, 0.0000000, 0.0000000, -0.0990594, 
0.9996500, -0.0264378, -0.0305058, 0.0000000, 1.0000000, 0.0000000, 0.0931641, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0280545, 
};

const int step100_factor315_num_blks = 2;
int step100_factor315_A_blk_start[] = {0, 3, };
int step100_factor315_B_blk_start[] = {27, 42, };
int step100_factor315_blk_width[] = {3, 3, };

const int step100_factor399_height = 7;
const int step100_factor399_width = 3;
int step100_factor399_ridx[] = {30, 31, 32, 42, 43, 44, 66, };
float step100_factor399_data[] = {
0.9995230, -0.0308787, -0.0806027, 1.0000000, 0.0000000, 0.0000000, -0.0164131, 
0.0308787, 0.9995230, 0.9824530, 0.0000000, 1.0000000, 0.0000000, -0.0003943, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0189262, 
};

const int step100_factor399_num_blks = 2;
int step100_factor399_A_blk_start[] = {0, 3, };
int step100_factor399_B_blk_start[] = {30, 42, };
int step100_factor399_blk_width[] = {3, 3, };

const int step100_factor316_height = 4;
const int step100_factor316_width = 3;
int step100_factor316_ridx[] = {0, 1, 2, 66, };
float step100_factor316_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor316_num_blks = 1;
int step100_factor316_A_blk_start[] = {0, };
int step100_factor316_B_blk_start[] = {0, };
int step100_factor316_blk_width[] = {3, };

const int step100_factor400_height = 7;
const int step100_factor400_width = 3;
int step100_factor400_ridx[] = {9, 10, 11, 33, 34, 35, 36, };
float step100_factor400_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9997710, 0.0214197, -0.0743630, 0.0034531, 
0.0000000, 1.0000000, 0.0000000, -0.0214197, -0.9997710, 1.0027500, -0.0002608, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0040538, 
};

const int step100_factor400_num_blks = 2;
int step100_factor400_A_blk_start[] = {0, 3, };
int step100_factor400_B_blk_start[] = {9, 33, };
int step100_factor400_blk_width[] = {3, 3, };

const int step100_factor317_height = 7;
const int step100_factor317_width = 3;
int step100_factor317_ridx[] = {0, 1, 2, 27, 28, 29, 66, };
float step100_factor317_data[] = {
-0.9995900, -0.0286264, -0.0576574, 1.0000000, 0.0000000, 0.0000000, 0.0307930, 
0.0286264, -0.9995900, 1.0982600, 0.0000000, 1.0000000, 0.0000000, 0.0365907, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0076271, 
};

const int step100_factor317_num_blks = 2;
int step100_factor317_A_blk_start[] = {0, 3, };
int step100_factor317_B_blk_start[] = {0, 27, };
int step100_factor317_blk_width[] = {3, 3, };

const int step100_factor401_height = 4;
const int step100_factor401_width = 3;
int step100_factor401_ridx[] = {33, 34, 35, 66, };
float step100_factor401_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor401_num_blks = 1;
int step100_factor401_A_blk_start[] = {0, };
int step100_factor401_B_blk_start[] = {33, };
int step100_factor401_blk_width[] = {3, };

const int step100_factor318_height = 4;
const int step100_factor318_width = 3;
int step100_factor318_ridx[] = {3, 4, 5, 66, };
float step100_factor318_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor318_num_blks = 1;
int step100_factor318_A_blk_start[] = {0, };
int step100_factor318_B_blk_start[] = {3, };
int step100_factor318_blk_width[] = {3, };

const int step100_factor402_height = 7;
const int step100_factor402_width = 3;
int step100_factor402_ridx[] = {33, 34, 35, 54, 55, 56, 66, };
float step100_factor402_data[] = {
0.9998030, -0.0198389, -0.0382317, 1.0000000, 0.0000000, 0.0000000, -0.0761019, 
0.0198389, 0.9998030, 1.0002400, 0.0000000, 1.0000000, 0.0000000, 0.0743019, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0722728, 
};

const int step100_factor402_num_blks = 2;
int step100_factor402_A_blk_start[] = {0, 3, };
int step100_factor402_B_blk_start[] = {33, 54, };
int step100_factor402_blk_width[] = {3, 3, };

const int step100_factor319_height = 7;
const int step100_factor319_width = 3;
int step100_factor319_ridx[] = {0, 1, 2, 3, 4, 5, 66, };
float step100_factor319_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999150, -0.0130506, 0.0735470, 0.0002848, 
0.0000000, 1.0000000, 0.0000000, 0.0130506, -0.9999150, 1.0016700, -0.0002276, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000001, 
};

const int step100_factor319_num_blks = 1;
int step100_factor319_A_blk_start[] = {0, };
int step100_factor319_B_blk_start[] = {0, };
int step100_factor319_blk_width[] = {6, };

const int step100_factor403_height = 7;
const int step100_factor403_width = 3;
int step100_factor403_ridx[] = {33, 34, 35, 48, 49, 50, 66, };
float step100_factor403_data[] = {
0.9992400, -0.0389693, -0.0572532, 1.0000000, 0.0000000, 0.0000000, 0.0065331, 
0.0389693, 0.9992400, 1.0081400, 0.0000000, 1.0000000, 0.0000000, 0.0066843, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0112719, 
};

const int step100_factor403_num_blks = 2;
int step100_factor403_A_blk_start[] = {0, 3, };
int step100_factor403_B_blk_start[] = {33, 48, };
int step100_factor403_blk_width[] = {3, 3, };

const int step100_factor320_height = 4;
const int step100_factor320_width = 3;
int step100_factor320_ridx[] = {6, 7, 8, 66, };
float step100_factor320_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor320_num_blks = 1;
int step100_factor320_A_blk_start[] = {0, };
int step100_factor320_B_blk_start[] = {6, };
int step100_factor320_blk_width[] = {3, };

const int step100_factor404_height = 7;
const int step100_factor404_width = 3;
int step100_factor404_ridx[] = {33, 34, 35, 51, 52, 53, 66, };
float step100_factor404_data[] = {
0.9992260, -0.0393357, -0.0378110, 1.0000000, 0.0000000, 0.0000000, 0.0175067, 
0.0393357, 0.9992260, 0.9579210, 0.0000000, 1.0000000, 0.0000000, -0.0063624, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0379285, 
};

const int step100_factor404_num_blks = 2;
int step100_factor404_A_blk_start[] = {0, 3, };
int step100_factor404_B_blk_start[] = {33, 51, };
int step100_factor404_blk_width[] = {3, 3, };

const int step100_factor321_height = 7;
const int step100_factor321_width = 3;
int step100_factor321_ridx[] = {3, 4, 5, 6, 7, 8, 66, };
float step100_factor321_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9997890, -0.0205509, 0.0662302, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, 0.0205509, -0.9997890, 1.0484700, 0.0000003, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000001, 
};

const int step100_factor321_num_blks = 1;
int step100_factor321_A_blk_start[] = {0, };
int step100_factor321_B_blk_start[] = {3, };
int step100_factor321_blk_width[] = {6, };

const int step100_factor405_height = 7;
const int step100_factor405_width = 3;
int step100_factor405_ridx[] = {33, 34, 35, 36, 37, 38, 66, };
float step100_factor405_data[] = {
0.9999060, -0.0137093, -0.0397214, 1.0000000, 0.0000000, 0.0000000, -0.0521741, 
0.0137093, 0.9999060, -0.0063261, 0.0000000, 1.0000000, 0.0000000, 0.1096230, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0127976, 
};

const int step100_factor405_num_blks = 1;
int step100_factor405_A_blk_start[] = {0, };
int step100_factor405_B_blk_start[] = {33, };
int step100_factor405_blk_width[] = {6, };

const int step100_factor28_height = 4;
const int step100_factor28_width = 3;
int step100_factor28_ridx[] = {9, 10, 11, 45, };
float step100_factor28_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor28_num_blks = 1;
int step100_factor28_A_blk_start[] = {0, };
int step100_factor28_B_blk_start[] = {9, };
int step100_factor28_blk_width[] = {3, };

const int step100_factor322_height = 4;
const int step100_factor322_width = 3;
int step100_factor322_ridx[] = {27, 28, 29, 36, };
float step100_factor322_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor322_num_blks = 1;
int step100_factor322_A_blk_start[] = {0, };
int step100_factor322_B_blk_start[] = {27, };
int step100_factor322_blk_width[] = {3, };

const int step100_factor406_height = 7;
const int step100_factor406_width = 3;
int step100_factor406_ridx[] = {33, 34, 35, 60, 61, 62, 66, };
float step100_factor406_data[] = {
0.0184503, 0.9998300, -0.0556961, 1.0000000, 0.0000000, 0.0000000, 0.1064670, 
-0.9998300, 0.0184503, -0.9704370, 0.0000000, 1.0000000, 0.0000000, 0.0309376, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0474077, 
};

const int step100_factor406_num_blks = 2;
int step100_factor406_A_blk_start[] = {0, 3, };
int step100_factor406_B_blk_start[] = {33, 60, };
int step100_factor406_blk_width[] = {3, 3, };

const int step100_factor29_height = 7;
const int step100_factor29_width = 3;
int step100_factor29_ridx[] = {21, 22, 23, 27, 28, 29, 45, };
float step100_factor29_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999450, -0.0104654, -0.0138404, 0.1075490, 
0.0000000, 1.0000000, 0.0000000, 0.0104654, -0.9999450, 0.9935780, -0.0390919, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0027010, 
};

const int step100_factor29_num_blks = 2;
int step100_factor29_A_blk_start[] = {0, 3, };
int step100_factor29_B_blk_start[] = {21, 27, };
int step100_factor29_blk_width[] = {3, 3, };

const int step100_factor323_height = 7;
const int step100_factor323_width = 3;
int step100_factor323_ridx[] = {27, 28, 29, 30, 31, 32, 36, };
float step100_factor323_data[] = {
-0.9999920, 0.0039905, -0.0958136, 1.0000000, 0.0000000, 0.0000000, -0.0000000, 
-0.0039905, -0.9999920, 1.0150100, 0.0000000, 1.0000000, 0.0000000, 0.0000005, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0000001, 
};

const int step100_factor323_num_blks = 1;
int step100_factor323_A_blk_start[] = {0, };
int step100_factor323_B_blk_start[] = {27, };
int step100_factor323_blk_width[] = {6, };

const int step100_factor407_height = 7;
const int step100_factor407_width = 3;
int step100_factor407_ridx[] = {33, 34, 35, 57, 58, 59, 66, };
float step100_factor407_data[] = {
0.0358964, 0.9993550, -0.0066938, 1.0000000, 0.0000000, 0.0000000, -0.0498016, 
-0.9993550, 0.0358964, -0.9813550, 0.0000000, 1.0000000, 0.0000000, 0.0300608, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0369704, 
};

const int step100_factor407_num_blks = 2;
int step100_factor407_A_blk_start[] = {0, 3, };
int step100_factor407_B_blk_start[] = {33, 57, };
int step100_factor407_blk_width[] = {3, 3, };

const int step100_factor30_height = 4;
const int step100_factor30_width = 3;
int step100_factor30_ridx[] = {3, 4, 5, 45, };
float step100_factor30_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor30_num_blks = 1;
int step100_factor30_A_blk_start[] = {0, };
int step100_factor30_B_blk_start[] = {3, };
int step100_factor30_blk_width[] = {3, };

const int step100_factor324_height = 4;
const int step100_factor324_width = 3;
int step100_factor324_ridx[] = {18, 19, 20, 36, };
float step100_factor324_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor324_num_blks = 1;
int step100_factor324_A_blk_start[] = {0, };
int step100_factor324_B_blk_start[] = {18, };
int step100_factor324_blk_width[] = {3, };

const int step100_factor408_height = 7;
const int step100_factor408_width = 3;
int step100_factor408_ridx[] = {33, 34, 35, 63, 64, 65, 66, };
float step100_factor408_data[] = {
0.0230540, 0.9997340, -0.0092408, 1.0000000, 0.0000000, 0.0000000, 0.0504640, 
-0.9997340, 0.0230540, -1.0335000, 0.0000000, 1.0000000, 0.0000000, 0.0598783, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0066176, 
};

const int step100_factor408_num_blks = 2;
int step100_factor408_A_blk_start[] = {0, 3, };
int step100_factor408_B_blk_start[] = {33, 63, };
int step100_factor408_blk_width[] = {3, 3, };

const int step100_factor31_height = 7;
const int step100_factor31_width = 3;
int step100_factor31_ridx[] = {3, 4, 5, 9, 10, 11, 45, };
float step100_factor31_data[] = {
-0.9999620, -0.0087638, -0.0137944, 1.0000000, 0.0000000, 0.0000000, 0.0805330, 
0.0087638, -0.9999620, 0.9816290, 0.0000000, 1.0000000, 0.0000000, -0.0145622, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0170112, 
};

const int step100_factor31_num_blks = 2;
int step100_factor31_A_blk_start[] = {0, 3, };
int step100_factor31_B_blk_start[] = {3, 9, };
int step100_factor31_blk_width[] = {3, 3, };

const int step100_factor325_height = 7;
const int step100_factor325_width = 3;
int step100_factor325_ridx[] = {18, 19, 20, 27, 28, 29, 36, };
float step100_factor325_data[] = {
0.0222118, -0.9997530, 1.0618800, 1.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.9997530, 0.0222118, 0.0312368, 0.0000000, 1.0000000, 0.0000000, 0.0000005, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0000001, 
};

const int step100_factor325_num_blks = 2;
int step100_factor325_A_blk_start[] = {0, 3, };
int step100_factor325_B_blk_start[] = {18, 27, };
int step100_factor325_blk_width[] = {3, 3, };

const int step100_factor409_height = 7;
const int step100_factor409_width = 3;
int step100_factor409_ridx[] = {33, 34, 35, 45, 46, 47, 66, };
float step100_factor409_data[] = {
0.9991810, -0.0404639, -0.0357418, 1.0000000, 0.0000000, 0.0000000, -0.0480562, 
0.0404639, 0.9991810, -0.0265648, 0.0000000, 1.0000000, 0.0000000, -0.0035848, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0568976, 
};

const int step100_factor409_num_blks = 2;
int step100_factor409_A_blk_start[] = {0, 3, };
int step100_factor409_B_blk_start[] = {33, 45, };
int step100_factor409_blk_width[] = {3, 3, };

const int step100_factor32_height = 4;
const int step100_factor32_width = 3;
int step100_factor32_ridx[] = {21, 22, 23, 45, };
float step100_factor32_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor32_num_blks = 1;
int step100_factor32_A_blk_start[] = {0, };
int step100_factor32_B_blk_start[] = {21, };
int step100_factor32_blk_width[] = {3, };

const int step100_factor326_height = 4;
const int step100_factor326_width = 3;
int step100_factor326_ridx[] = {0, 1, 2, 30, };
float step100_factor326_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor326_num_blks = 1;
int step100_factor326_A_blk_start[] = {0, };
int step100_factor326_B_blk_start[] = {0, };
int step100_factor326_blk_width[] = {3, };

const int step100_factor410_height = 7;
const int step100_factor410_width = 3;
int step100_factor410_ridx[] = {33, 34, 35, 39, 40, 41, 66, };
float step100_factor410_data[] = {
0.0266320, 0.9996450, -0.0141703, 1.0000000, 0.0000000, 0.0000000, 0.1103310, 
-0.9996450, 0.0266320, 0.0282384, 0.0000000, 1.0000000, 0.0000000, 0.0164399, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0031815, 
};

const int step100_factor410_num_blks = 2;
int step100_factor410_A_blk_start[] = {0, 3, };
int step100_factor410_B_blk_start[] = {33, 39, };
int step100_factor410_blk_width[] = {3, 3, };

const int step100_factor33_height = 7;
const int step100_factor33_width = 3;
int step100_factor33_ridx[] = {3, 4, 5, 21, 22, 23, 45, };
float step100_factor33_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0095974, 0.9999540, -0.8637850, -0.0352375, 
0.0000000, 1.0000000, 0.0000000, -0.9999540, 0.0095974, -0.0442869, -0.1300450, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0349461, 
};

const int step100_factor33_num_blks = 2;
int step100_factor33_A_blk_start[] = {0, 3, };
int step100_factor33_B_blk_start[] = {3, 21, };
int step100_factor33_blk_width[] = {3, 3, };

const int step100_factor327_height = 7;
const int step100_factor327_width = 3;
int step100_factor327_ridx[] = {0, 1, 2, 27, 28, 29, 30, };
float step100_factor327_data[] = {
-0.9999900, 0.0043823, -0.0164934, 1.0000000, 0.0000000, 0.0000000, 0.0000001, 
-0.0043823, -0.9999900, 1.0167700, 0.0000000, 1.0000000, 0.0000000, -0.0000000, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0000000, 
};

const int step100_factor327_num_blks = 2;
int step100_factor327_A_blk_start[] = {0, 3, };
int step100_factor327_B_blk_start[] = {0, 27, };
int step100_factor327_blk_width[] = {3, 3, };

const int step100_factor411_height = 7;
const int step100_factor411_width = 3;
int step100_factor411_ridx[] = {33, 34, 35, 42, 43, 44, 66, };
float step100_factor411_data[] = {
0.9986890, -0.0511964, -0.0531941, 1.0000000, 0.0000000, 0.0000000, -0.0238953, 
0.0511964, 0.9986890, -0.0636257, 0.0000000, 1.0000000, 0.0000000, 0.0435192, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0560514, 
};

const int step100_factor411_num_blks = 2;
int step100_factor411_A_blk_start[] = {0, 3, };
int step100_factor411_B_blk_start[] = {33, 42, };
int step100_factor411_blk_width[] = {3, 3, };

const int step100_factor34_height = 4;
const int step100_factor34_width = 3;
int step100_factor34_ridx[] = {12, 13, 14, 66, };
float step100_factor34_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor34_num_blks = 1;
int step100_factor34_A_blk_start[] = {0, };
int step100_factor34_B_blk_start[] = {12, };
int step100_factor34_blk_width[] = {3, };

const int step100_factor328_height = 4;
const int step100_factor328_width = 3;
int step100_factor328_ridx[] = {3, 4, 5, 30, };
float step100_factor328_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor328_num_blks = 1;
int step100_factor328_A_blk_start[] = {0, };
int step100_factor328_B_blk_start[] = {3, };
int step100_factor328_blk_width[] = {3, };

const int step100_factor412_height = 7;
const int step100_factor412_width = 3;
int step100_factor412_ridx[] = {27, 28, 29, 33, 34, 35, 66, };
float step100_factor412_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.0247754, -0.9996930, 0.0062606, -0.0656470, 
0.0000000, 1.0000000, 0.0000000, 0.9996930, -0.0247754, -1.0160200, 0.0249898, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0396616, 
};

const int step100_factor412_num_blks = 2;
int step100_factor412_A_blk_start[] = {0, 3, };
int step100_factor412_B_blk_start[] = {27, 33, };
int step100_factor412_blk_width[] = {3, 3, };

const int step100_factor35_height = 7;
const int step100_factor35_width = 3;
int step100_factor35_ridx[] = {21, 22, 23, 30, 31, 32, 45, };
float step100_factor35_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999790, 0.0064055, 0.0096208, 0.0290461, 
0.0000000, 1.0000000, 0.0000000, -0.0064055, -0.9999790, 1.0048600, -0.0086165, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0014277, 
};

const int step100_factor35_num_blks = 2;
int step100_factor35_A_blk_start[] = {0, 3, };
int step100_factor35_B_blk_start[] = {21, 30, };
int step100_factor35_blk_width[] = {3, 3, };

const int step100_factor329_height = 7;
const int step100_factor329_width = 3;
int step100_factor329_ridx[] = {0, 1, 2, 3, 4, 5, 30, };
float step100_factor329_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9992960, 0.0375241, -0.1338880, -0.0061187, 
0.0000000, 1.0000000, 0.0000000, -0.0375241, -0.9992960, 0.9971420, 0.0700166, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0309312, 
};

const int step100_factor329_num_blks = 1;
int step100_factor329_A_blk_start[] = {0, };
int step100_factor329_B_blk_start[] = {0, };
int step100_factor329_blk_width[] = {6, };

const int step100_factor413_height = 7;
const int step100_factor413_width = 3;
int step100_factor413_ridx[] = {30, 31, 32, 33, 34, 35, 66, };
float step100_factor413_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9997930, 0.0203338, 0.0049060, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0203338, -0.9997930, 1.0464300, 0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step100_factor413_num_blks = 1;
int step100_factor413_A_blk_start[] = {0, };
int step100_factor413_B_blk_start[] = {30, };
int step100_factor413_blk_width[] = {6, };

const int step100_factor36_height = 4;
const int step100_factor36_width = 3;
int step100_factor36_ridx[] = {21, 22, 23, 66, };
float step100_factor36_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor36_num_blks = 1;
int step100_factor36_A_blk_start[] = {0, };
int step100_factor36_B_blk_start[] = {21, };
int step100_factor36_blk_width[] = {3, };

const int step100_factor330_height = 4;
const int step100_factor330_width = 3;
int step100_factor330_ridx[] = {6, 7, 8, 30, };
float step100_factor330_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor330_num_blks = 1;
int step100_factor330_A_blk_start[] = {0, };
int step100_factor330_B_blk_start[] = {6, };
int step100_factor330_blk_width[] = {3, };

const int step100_factor37_height = 7;
const int step100_factor37_width = 3;
int step100_factor37_ridx[] = {12, 13, 14, 21, 22, 23, 66, };
float step100_factor37_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9996650, -0.0258808, -0.0674961, 0.0380544, 
0.0000000, 1.0000000, 0.0000000, 0.0258808, -0.9996650, 1.0342200, 0.1266400, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0016196, 
};

const int step100_factor37_num_blks = 2;
int step100_factor37_A_blk_start[] = {0, 3, };
int step100_factor37_B_blk_start[] = {12, 21, };
int step100_factor37_blk_width[] = {3, 3, };

const int step100_factor331_height = 7;
const int step100_factor331_width = 3;
int step100_factor331_ridx[] = {3, 4, 5, 6, 7, 8, 30, };
float step100_factor331_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9991770, 0.0405718, -0.0286158, 0.0017327, 
0.0000000, 1.0000000, 0.0000000, -0.0405718, -0.9991770, 1.0304700, -0.0006545, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0020922, 
};

const int step100_factor331_num_blks = 1;
int step100_factor331_A_blk_start[] = {0, };
int step100_factor331_B_blk_start[] = {3, };
int step100_factor331_blk_width[] = {6, };

const int step100_factor38_height = 4;
const int step100_factor38_width = 3;
int step100_factor38_ridx[] = {51, 52, 53, 66, };
float step100_factor38_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor38_num_blks = 1;
int step100_factor38_A_blk_start[] = {0, };
int step100_factor38_B_blk_start[] = {51, };
int step100_factor38_blk_width[] = {3, };

const int step100_factor332_height = 4;
const int step100_factor332_width = 3;
int step100_factor332_ridx[] = {9, 10, 11, 30, };
float step100_factor332_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor332_num_blks = 1;
int step100_factor332_A_blk_start[] = {0, };
int step100_factor332_B_blk_start[] = {9, };
int step100_factor332_blk_width[] = {3, };

const int step100_factor39_height = 7;
const int step100_factor39_width = 3;
int step100_factor39_ridx[] = {21, 22, 23, 51, 52, 53, 66, };
float step100_factor39_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998170, 0.0191359, 0.0298270, 0.0136289, 
0.0000000, 1.0000000, 0.0000000, -0.0191359, -0.9998170, 1.0312200, -0.0020662, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0005958, 
};

const int step100_factor39_num_blks = 2;
int step100_factor39_A_blk_start[] = {0, 3, };
int step100_factor39_B_blk_start[] = {21, 51, };
int step100_factor39_blk_width[] = {3, 3, };

const int step100_factor333_height = 7;
const int step100_factor333_width = 3;
int step100_factor333_ridx[] = {6, 7, 8, 9, 10, 11, 30, };
float step100_factor333_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999980, -0.0018618, 0.0528064, 0.0171030, 
0.0000000, 1.0000000, 0.0000000, 0.0018618, -0.9999980, 0.9507200, -0.0333380, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0099054, 
};

const int step100_factor333_num_blks = 1;
int step100_factor333_A_blk_start[] = {0, };
int step100_factor333_B_blk_start[] = {6, };
int step100_factor333_blk_width[] = {6, };

const int step100_factor40_height = 7;
const int step100_factor40_width = 3;
int step100_factor40_ridx[] = {39, 40, 41, 51, 52, 53, 66, };
float step100_factor40_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0127104, -0.9999190, -0.9724940, 0.0107849, 
0.0000000, 1.0000000, 0.0000000, 0.9999190, 0.0127104, 0.0026060, -0.0012893, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0057470, 
};

const int step100_factor40_num_blks = 2;
int step100_factor40_A_blk_start[] = {0, 3, };
int step100_factor40_B_blk_start[] = {39, 51, };
int step100_factor40_blk_width[] = {3, 3, };

const int step100_factor250_height = 7;
const int step100_factor250_width = 3;
int step100_factor250_ridx[] = {18, 19, 20, 27, 28, 29, 45, };
float step100_factor250_data[] = {
-0.9999480, -0.0101559, 0.0544034, 1.0000000, 0.0000000, 0.0000000, -0.0305580, 
0.0101559, -0.9999480, -1.0041000, 0.0000000, 1.0000000, 0.0000000, -0.0278891, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0328787, 
};

const int step100_factor250_num_blks = 2;
int step100_factor250_A_blk_start[] = {0, 3, };
int step100_factor250_B_blk_start[] = {18, 27, };
int step100_factor250_blk_width[] = {3, 3, };

const int step100_factor334_height = 4;
const int step100_factor334_width = 3;
int step100_factor334_ridx[] = {12, 13, 14, 30, };
float step100_factor334_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor334_num_blks = 1;
int step100_factor334_A_blk_start[] = {0, };
int step100_factor334_B_blk_start[] = {12, };
int step100_factor334_blk_width[] = {3, };

const int step100_factor1_height = 4;
const int step100_factor1_width = 3;
int step100_factor1_ridx[] = {60, 61, 62, 66, };
float step100_factor1_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor1_num_blks = 1;
int step100_factor1_A_blk_start[] = {0, };
int step100_factor1_B_blk_start[] = {60, };
int step100_factor1_blk_width[] = {3, };

const int step100_factor41_height = 4;
const int step100_factor41_width = 3;
int step100_factor41_ridx[] = {42, 43, 44, 66, };
float step100_factor41_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor41_num_blks = 1;
int step100_factor41_A_blk_start[] = {0, };
int step100_factor41_B_blk_start[] = {42, };
int step100_factor41_blk_width[] = {3, };

const int step100_factor251_height = 7;
const int step100_factor251_width = 3;
int step100_factor251_ridx[] = {18, 19, 20, 30, 31, 32, 45, };
float step100_factor251_data[] = {
-0.9996630, -0.0259464, 0.0194703, 1.0000000, 0.0000000, 0.0000000, -0.0376309, 
0.0259464, -0.9996630, -0.9589810, 0.0000000, 1.0000000, 0.0000000, -0.0824077, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0243890, 
};

const int step100_factor251_num_blks = 2;
int step100_factor251_A_blk_start[] = {0, 3, };
int step100_factor251_B_blk_start[] = {18, 30, };
int step100_factor251_blk_width[] = {3, 3, };

const int step100_factor335_height = 7;
const int step100_factor335_width = 3;
int step100_factor335_ridx[] = {9, 10, 11, 12, 13, 14, 30, };
float step100_factor335_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.0121742, 0.9999260, -0.9498600, 0.0013764, 
0.0000000, 1.0000000, 0.0000000, -0.9999260, -0.0121742, 0.1182440, -0.0006858, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0008782, 
};

const int step100_factor335_num_blks = 1;
int step100_factor335_A_blk_start[] = {0, };
int step100_factor335_B_blk_start[] = {9, };
int step100_factor335_blk_width[] = {6, };

const int step100_factor42_height = 7;
const int step100_factor42_width = 3;
int step100_factor42_ridx[] = {42, 43, 44, 51, 52, 53, 66, };
float step100_factor42_data[] = {
-0.9999300, -0.0118726, 0.0161348, 1.0000000, 0.0000000, 0.0000000, -0.0000000, 
0.0118726, -0.9999300, 1.0209100, 0.0000000, 1.0000000, 0.0000000, 0.0000000, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0000000, 
};

const int step100_factor42_num_blks = 2;
int step100_factor42_A_blk_start[] = {0, 3, };
int step100_factor42_B_blk_start[] = {42, 51, };
int step100_factor42_blk_width[] = {3, 3, };

const int step100_factor252_height = 4;
const int step100_factor252_width = 3;
int step100_factor252_ridx[] = {15, 16, 17, 45, };
float step100_factor252_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor252_num_blks = 1;
int step100_factor252_A_blk_start[] = {0, };
int step100_factor252_B_blk_start[] = {15, };
int step100_factor252_blk_width[] = {3, };

const int step100_factor336_height = 4;
const int step100_factor336_width = 3;
int step100_factor336_ridx[] = {15, 16, 17, 30, };
float step100_factor336_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor336_num_blks = 1;
int step100_factor336_A_blk_start[] = {0, };
int step100_factor336_B_blk_start[] = {15, };
int step100_factor336_blk_width[] = {3, };

const int step100_factor43_height = 7;
const int step100_factor43_width = 3;
int step100_factor43_ridx[] = {42, 43, 44, 60, 61, 62, 66, };
float step100_factor43_data[] = {
0.0327616, -0.9994630, 0.0061527, 1.0000000, 0.0000000, 0.0000000, -0.0746744, 
0.9994630, 0.0327616, -1.0256900, 0.0000000, 1.0000000, 0.0000000, -0.0893995, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0259637, 
};

const int step100_factor43_num_blks = 2;
int step100_factor43_A_blk_start[] = {0, 3, };
int step100_factor43_B_blk_start[] = {42, 60, };
int step100_factor43_blk_width[] = {3, 3, };

const int step100_factor253_height = 7;
const int step100_factor253_width = 3;
int step100_factor253_ridx[] = {6, 7, 8, 15, 16, 17, 45, };
float step100_factor253_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998710, -0.0160902, 0.1040980, -0.0001406, 
0.0000000, 1.0000000, 0.0000000, 0.0160902, -0.9998710, -1.0304600, -0.1438880, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0234236, 
};

const int step100_factor253_num_blks = 2;
int step100_factor253_A_blk_start[] = {0, 3, };
int step100_factor253_B_blk_start[] = {6, 15, };
int step100_factor253_blk_width[] = {3, 3, };

const int step100_factor337_height = 7;
const int step100_factor337_width = 3;
int step100_factor337_ridx[] = {12, 13, 14, 15, 16, 17, 30, };
float step100_factor337_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9995240, 0.0308428, -0.1182760, -0.0006552, 
0.0000000, 1.0000000, 0.0000000, -0.0308428, -0.9995240, 0.9863890, -0.0013462, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0005195, 
};

const int step100_factor337_num_blks = 1;
int step100_factor337_A_blk_start[] = {0, };
int step100_factor337_B_blk_start[] = {12, };
int step100_factor337_blk_width[] = {6, };

const int step100_factor44_height = 7;
const int step100_factor44_width = 3;
int step100_factor44_ridx[] = {39, 40, 41, 42, 43, 44, 66, };
float step100_factor44_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0245811, -0.9996980, 0.0481286, 0.0119112, 
0.0000000, 1.0000000, 0.0000000, 0.9996980, 0.0245811, -0.0265036, -0.1232020, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0464599, 
};

const int step100_factor44_num_blks = 1;
int step100_factor44_A_blk_start[] = {0, };
int step100_factor44_B_blk_start[] = {39, };
int step100_factor44_blk_width[] = {6, };

const int step100_factor254_height = 7;
const int step100_factor254_width = 3;
int step100_factor254_ridx[] = {18, 19, 20, 33, 34, 35, 45, };
float step100_factor254_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999720, -0.0074687, 0.0616442, -0.0871386, 
0.0000000, 1.0000000, 0.0000000, 0.0074687, -0.9999720, 0.9464280, 0.0039040, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0316962, 
};

const int step100_factor254_num_blks = 2;
int step100_factor254_A_blk_start[] = {0, 3, };
int step100_factor254_B_blk_start[] = {18, 33, };
int step100_factor254_blk_width[] = {3, 3, };

const int step100_factor338_height = 4;
const int step100_factor338_width = 3;
int step100_factor338_ridx[] = {18, 19, 20, 30, };
float step100_factor338_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor338_num_blks = 1;
int step100_factor338_A_blk_start[] = {0, };
int step100_factor338_B_blk_start[] = {18, };
int step100_factor338_blk_width[] = {3, };

const int step100_factor295_height = 7;
const int step100_factor295_width = 3;
int step100_factor295_ridx[] = {21, 22, 23, 54, 55, 56, 66, };
float step100_factor295_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9992530, 0.0386331, 0.0505378, 0.1030320, 
0.0000000, 1.0000000, 0.0000000, -0.0386331, -0.9992530, 0.9902240, -0.0791773, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0304483, 
};

const int step100_factor295_num_blks = 2;
int step100_factor295_A_blk_start[] = {0, 3, };
int step100_factor295_B_blk_start[] = {21, 54, };
int step100_factor295_blk_width[] = {3, 3, };

const int step100_factor129_height = 7;
const int step100_factor129_width = 3;
int step100_factor129_ridx[] = {12, 13, 14, 15, 16, 17, 66, };
float step100_factor129_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999340, -0.0114628, 0.0115288, -0.0224097, 
0.0000000, 1.0000000, 0.0000000, 0.0114628, -0.9999340, 0.0017090, 0.0025730, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0167981, 
};

const int step100_factor129_num_blks = 1;
int step100_factor129_A_blk_start[] = {0, };
int step100_factor129_B_blk_start[] = {12, };
int step100_factor129_blk_width[] = {6, };

const int step100_factor255_height = 7;
const int step100_factor255_width = 3;
int step100_factor255_ridx[] = {24, 25, 26, 33, 34, 35, 45, };
float step100_factor255_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998190, -0.0190495, 0.0787874, 0.0056204, 
0.0000000, 1.0000000, 0.0000000, 0.0190495, -0.9998190, 0.9592180, -0.0844280, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0078212, 
};

const int step100_factor255_num_blks = 2;
int step100_factor255_A_blk_start[] = {0, 3, };
int step100_factor255_B_blk_start[] = {24, 33, };
int step100_factor255_blk_width[] = {3, 3, };

const int step100_factor339_height = 7;
const int step100_factor339_width = 3;
int step100_factor339_ridx[] = {15, 16, 17, 18, 19, 20, 30, };
float step100_factor339_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9994760, -0.0323555, 0.0874376, -0.0006608, 
0.0000000, 1.0000000, 0.0000000, 0.0323555, -0.9994760, 1.0052600, -0.0013584, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0017861, 
};

const int step100_factor339_num_blks = 1;
int step100_factor339_A_blk_start[] = {0, };
int step100_factor339_B_blk_start[] = {15, };
int step100_factor339_blk_width[] = {6, };

const int step100_factor130_height = 4;
const int step100_factor130_width = 3;
int step100_factor130_ridx[] = {24, 25, 26, 66, };
float step100_factor130_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor130_num_blks = 1;
int step100_factor130_A_blk_start[] = {0, };
int step100_factor130_B_blk_start[] = {24, };
int step100_factor130_blk_width[] = {3, };

const int step100_factor256_height = 7;
const int step100_factor256_width = 3;
int step100_factor256_ridx[] = {21, 22, 23, 33, 34, 35, 45, };
float step100_factor256_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9996050, -0.0280868, 0.1111980, -0.0840582, 
0.0000000, 1.0000000, 0.0000000, 0.0280868, -0.9996050, 0.9339220, -0.0820984, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0043235, 
};

const int step100_factor256_num_blks = 2;
int step100_factor256_A_blk_start[] = {0, 3, };
int step100_factor256_B_blk_start[] = {21, 33, };
int step100_factor256_blk_width[] = {3, 3, };

const int step100_factor296_height = 7;
const int step100_factor296_width = 3;
int step100_factor296_ridx[] = {48, 49, 50, 54, 55, 56, 66, };
float step100_factor296_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998170, 0.0191379, 0.0001139, -0.0545224, 
0.0000000, 1.0000000, 0.0000000, -0.0191379, -0.9998170, 0.0088184, -0.0552930, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0113444, 
};

const int step100_factor296_num_blks = 2;
int step100_factor296_A_blk_start[] = {0, 3, };
int step100_factor296_B_blk_start[] = {48, 54, };
int step100_factor296_blk_width[] = {3, 3, };

const int step100_factor340_height = 4;
const int step100_factor340_width = 3;
int step100_factor340_ridx[] = {21, 22, 23, 30, };
float step100_factor340_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor340_num_blks = 1;
int step100_factor340_A_blk_start[] = {0, };
int step100_factor340_B_blk_start[] = {21, };
int step100_factor340_blk_width[] = {3, };

const int step100_factor131_height = 7;
const int step100_factor131_width = 3;
int step100_factor131_ridx[] = {21, 22, 23, 24, 25, 26, 66, };
float step100_factor131_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9990430, 0.0437389, 0.0543409, -0.0156751, 
0.0000000, 1.0000000, 0.0000000, -0.0437389, -0.9990430, -0.0483030, -0.0307228, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0306117, 
};

const int step100_factor131_num_blks = 1;
int step100_factor131_A_blk_start[] = {0, };
int step100_factor131_B_blk_start[] = {21, };
int step100_factor131_blk_width[] = {6, };

const int step100_factor257_height = 7;
const int step100_factor257_width = 3;
int step100_factor257_ridx[] = {9, 10, 11, 15, 16, 17, 45, };
float step100_factor257_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998450, -0.0176240, 0.1256560, -0.0429355, 
0.0000000, 1.0000000, 0.0000000, 0.0176240, -0.9998450, -0.0583444, -0.0691494, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0020050, 
};

const int step100_factor257_num_blks = 2;
int step100_factor257_A_blk_start[] = {0, 3, };
int step100_factor257_B_blk_start[] = {9, 15, };
int step100_factor257_blk_width[] = {3, 3, };

const int step100_factor341_height = 7;
const int step100_factor341_width = 3;
int step100_factor341_ridx[] = {18, 19, 20, 21, 22, 23, 30, };
float step100_factor341_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9996960, -0.0246726, 0.0597983, -0.0005699, 
0.0000000, 1.0000000, 0.0000000, 0.0246726, -0.9996960, 0.9258620, -0.0013847, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0032227, 
};

const int step100_factor341_num_blks = 1;
int step100_factor341_A_blk_start[] = {0, };
int step100_factor341_B_blk_start[] = {18, };
int step100_factor341_blk_width[] = {6, };

const int step100_factor0_height = 4;
const int step100_factor0_width = 3;
int step100_factor0_ridx[] = {39, 40, 41, 66, };
float step100_factor0_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor0_num_blks = 1;
int step100_factor0_A_blk_start[] = {0, };
int step100_factor0_B_blk_start[] = {39, };
int step100_factor0_blk_width[] = {3, };

const int step100_factor132_height = 7;
const int step100_factor132_width = 3;
int step100_factor132_ridx[] = {15, 16, 17, 24, 25, 26, 66, };
float step100_factor132_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9995700, 0.0293280, -0.0372165, -0.0008559, 
0.0000000, 1.0000000, 0.0000000, -0.0293280, -0.9995700, 0.9824590, 0.0607384, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0124250, 
};

const int step100_factor132_num_blks = 2;
int step100_factor132_A_blk_start[] = {0, 3, };
int step100_factor132_B_blk_start[] = {15, 24, };
int step100_factor132_blk_width[] = {3, 3, };

const int step100_factor258_height = 7;
const int step100_factor258_width = 3;
int step100_factor258_ridx[] = {12, 13, 14, 15, 16, 17, 45, };
float step100_factor258_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9994420, -0.0334119, 0.1056500, 0.0185510, 
0.0000000, 1.0000000, 0.0000000, 0.0334119, -0.9994420, -0.0144718, 0.0047004, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0511155, 
};

const int step100_factor258_num_blks = 1;
int step100_factor258_A_blk_start[] = {0, };
int step100_factor258_B_blk_start[] = {12, };
int step100_factor258_blk_width[] = {6, };

const int step100_factor342_height = 4;
const int step100_factor342_width = 3;
int step100_factor342_ridx[] = {0, 1, 2, 30, };
float step100_factor342_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor342_num_blks = 1;
int step100_factor342_A_blk_start[] = {0, };
int step100_factor342_B_blk_start[] = {0, };
int step100_factor342_blk_width[] = {3, };

const int step100_factor133_height = 7;
const int step100_factor133_width = 3;
int step100_factor133_ridx[] = {12, 13, 14, 24, 25, 26, 66, };
float step100_factor133_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998400, 0.0178682, -0.0144235, 0.0230355, 
0.0000000, 1.0000000, 0.0000000, -0.0178682, -0.9998400, 0.9845300, -0.0010207, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0173933, 
};

const int step100_factor133_num_blks = 2;
int step100_factor133_A_blk_start[] = {0, 3, };
int step100_factor133_B_blk_start[] = {12, 24, };
int step100_factor133_blk_width[] = {3, 3, };

const int step100_factor259_height = 7;
const int step100_factor259_width = 3;
int step100_factor259_ridx[] = {3, 4, 5, 15, 16, 17, 45, };
float step100_factor259_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999610, -0.0088609, 0.1485600, 0.0457125, 
0.0000000, 1.0000000, 0.0000000, 0.0088609, -0.9999610, -1.0387100, -0.0569031, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0028557, 
};

const int step100_factor259_num_blks = 2;
int step100_factor259_A_blk_start[] = {0, 3, };
int step100_factor259_B_blk_start[] = {3, 15, };
int step100_factor259_blk_width[] = {3, 3, };

const int step100_factor343_height = 7;
const int step100_factor343_width = 3;
int step100_factor343_ridx[] = {21, 22, 23, 24, 25, 26, 30, };
float step100_factor343_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999700, 0.0078072, 0.0135870, -0.0003961, 
0.0000000, 1.0000000, 0.0000000, -0.0078072, -0.9999700, 1.0080900, -0.0013966, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0045523, 
};

const int step100_factor343_num_blks = 1;
int step100_factor343_A_blk_start[] = {0, };
int step100_factor343_B_blk_start[] = {21, };
int step100_factor343_blk_width[] = {6, };

const int step100_factor134_height = 7;
const int step100_factor134_width = 3;
int step100_factor134_ridx[] = {24, 25, 26, 51, 52, 53, 66, };
float step100_factor134_data[] = {
-0.9996970, 0.0246134, 0.0038519, 1.0000000, 0.0000000, 0.0000000, -0.0204065, 
-0.0246134, -0.9996970, -1.0797900, 0.0000000, 1.0000000, 0.0000000, -0.0201024, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0369423, 
};

const int step100_factor134_num_blks = 2;
int step100_factor134_A_blk_start[] = {0, 3, };
int step100_factor134_B_blk_start[] = {24, 51, };
int step100_factor134_blk_width[] = {3, 3, };

const int step100_factor260_height = 4;
const int step100_factor260_width = 3;
int step100_factor260_ridx[] = {0, 1, 2, 45, };
float step100_factor260_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor260_num_blks = 1;
int step100_factor260_A_blk_start[] = {0, };
int step100_factor260_B_blk_start[] = {0, };
int step100_factor260_blk_width[] = {3, };

const int step100_factor344_height = 4;
const int step100_factor344_width = 3;
int step100_factor344_ridx[] = {3, 4, 5, 30, };
float step100_factor344_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor344_num_blks = 1;
int step100_factor344_A_blk_start[] = {0, };
int step100_factor344_B_blk_start[] = {3, };
int step100_factor344_blk_width[] = {3, };

const int step100_factor135_height = 4;
const int step100_factor135_width = 3;
int step100_factor135_ridx[] = {48, 49, 50, 66, };
float step100_factor135_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor135_num_blks = 1;
int step100_factor135_A_blk_start[] = {0, };
int step100_factor135_B_blk_start[] = {48, };
int step100_factor135_blk_width[] = {3, };

const int step100_factor261_height = 7;
const int step100_factor261_width = 3;
int step100_factor261_ridx[] = {0, 1, 2, 6, 7, 8, 45, };
float step100_factor261_data[] = {
-0.9999950, -0.0031383, 0.0965887, 1.0000000, 0.0000000, 0.0000000, -0.0295968, 
0.0031383, -0.9999950, 0.0205847, 0.0000000, 1.0000000, 0.0000000, -0.1135810, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0159118, 
};

const int step100_factor261_num_blks = 2;
int step100_factor261_A_blk_start[] = {0, 3, };
int step100_factor261_B_blk_start[] = {0, 6, };
int step100_factor261_blk_width[] = {3, 3, };

const int step100_factor345_height = 7;
const int step100_factor345_width = 3;
int step100_factor345_ridx[] = {0, 1, 2, 3, 4, 5, 30, };
float step100_factor345_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0058238, 0.9999830, -0.9719500, 0.0419218, 
0.0000000, 1.0000000, 0.0000000, -0.9999830, 0.0058238, -0.0222889, 0.0601741, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0145102, 
};

const int step100_factor345_num_blks = 1;
int step100_factor345_A_blk_start[] = {0, };
int step100_factor345_B_blk_start[] = {0, };
int step100_factor345_blk_width[] = {6, };

const int step100_factor136_height = 7;
const int step100_factor136_width = 3;
int step100_factor136_ridx[] = {24, 25, 26, 48, 49, 50, 66, };
float step100_factor136_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9997060, -0.0242468, 0.0412968, -0.0171947, 
0.0000000, 1.0000000, 0.0000000, 0.0242468, -0.9997060, 1.0288900, -0.0536469, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0478345, 
};

const int step100_factor136_num_blks = 2;
int step100_factor136_A_blk_start[] = {0, 3, };
int step100_factor136_B_blk_start[] = {24, 48, };
int step100_factor136_blk_width[] = {3, 3, };

const int step100_factor262_height = 7;
const int step100_factor262_width = 3;
int step100_factor262_ridx[] = {0, 1, 2, 15, 16, 17, 45, };
float step100_factor262_data[] = {
-0.9999160, 0.0129522, -0.0244204, 1.0000000, 0.0000000, 0.0000000, -0.0000000, 
-0.0129522, -0.9999160, 1.0507900, 0.0000000, 1.0000000, 0.0000000, -0.0000000, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0000000, 
};

const int step100_factor262_num_blks = 2;
int step100_factor262_A_blk_start[] = {0, 3, };
int step100_factor262_B_blk_start[] = {0, 15, };
int step100_factor262_blk_width[] = {3, 3, };

const int step100_factor346_height = 4;
const int step100_factor346_width = 3;
int step100_factor346_ridx[] = {6, 7, 8, 30, };
float step100_factor346_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor346_num_blks = 1;
int step100_factor346_A_blk_start[] = {0, };
int step100_factor346_B_blk_start[] = {6, };
int step100_factor346_blk_width[] = {3, };

const int step100_factor137_height = 7;
const int step100_factor137_width = 3;
int step100_factor137_ridx[] = {21, 22, 23, 48, 49, 50, 66, };
float step100_factor137_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998100, 0.0195025, 0.0505959, -0.0619577, 
0.0000000, 1.0000000, 0.0000000, -0.0195025, -0.9998100, 0.9814050, -0.1205010, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0676317, 
};

const int step100_factor137_num_blks = 2;
int step100_factor137_A_blk_start[] = {0, 3, };
int step100_factor137_B_blk_start[] = {21, 48, };
int step100_factor137_blk_width[] = {3, 3, };

const int step100_factor263_height = 7;
const int step100_factor263_width = 3;
int step100_factor263_ridx[] = {0, 1, 2, 9, 10, 11, 45, };
float step100_factor263_data[] = {
-0.9999890, -0.0046723, 0.1197590, 1.0000000, 0.0000000, 0.0000000, -0.0145509, 
0.0046723, -0.9999890, 0.9927150, 0.0000000, 1.0000000, 0.0000000, -0.0211515, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0016624, 
};

const int step100_factor263_num_blks = 2;
int step100_factor263_A_blk_start[] = {0, 3, };
int step100_factor263_B_blk_start[] = {0, 9, };
int step100_factor263_blk_width[] = {3, 3, };

const int step100_factor347_height = 7;
const int step100_factor347_width = 3;
int step100_factor347_ridx[] = {3, 4, 5, 6, 7, 8, 30, };
float step100_factor347_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9993670, 0.0355844, -0.0957775, -0.0000567, 
0.0000000, 1.0000000, 0.0000000, -0.0355844, -0.9993670, 1.0838400, 0.0007488, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0050013, 
};

const int step100_factor347_num_blks = 1;
int step100_factor347_A_blk_start[] = {0, };
int step100_factor347_B_blk_start[] = {3, };
int step100_factor347_blk_width[] = {6, };

const int step100_factor138_height = 7;
const int step100_factor138_width = 3;
int step100_factor138_ridx[] = {48, 49, 50, 51, 52, 53, 66, };
float step100_factor138_data[] = {
-1.0000000, 0.0003667, 0.0198119, 1.0000000, 0.0000000, 0.0000000, -0.0137849, 
-0.0003667, -1.0000000, -0.0501986, 0.0000000, 1.0000000, 0.0000000, -0.0732829, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0030983, 
};

const int step100_factor138_num_blks = 1;
int step100_factor138_A_blk_start[] = {0, };
int step100_factor138_B_blk_start[] = {48, };
int step100_factor138_blk_width[] = {6, };

const int step100_factor264_height = 7;
const int step100_factor264_width = 3;
int step100_factor264_ridx[] = {0, 1, 2, 12, 13, 14, 45, };
float step100_factor264_data[] = {
-0.9997910, -0.0204641, 0.1163520, 1.0000000, 0.0000000, 0.0000000, 0.0256288, 
0.0204641, -0.9997910, 1.0365500, 0.0000000, 1.0000000, 0.0000000, -0.0749209, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0276044, 
};

const int step100_factor264_num_blks = 2;
int step100_factor264_A_blk_start[] = {0, 3, };
int step100_factor264_B_blk_start[] = {0, 12, };
int step100_factor264_blk_width[] = {3, 3, };

const int step100_factor348_height = 4;
const int step100_factor348_width = 3;
int step100_factor348_ridx[] = {9, 10, 11, 30, };
float step100_factor348_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor348_num_blks = 1;
int step100_factor348_A_blk_start[] = {0, };
int step100_factor348_B_blk_start[] = {9, };
int step100_factor348_blk_width[] = {3, };

const int step100_factor139_height = 7;
const int step100_factor139_width = 3;
int step100_factor139_ridx[] = {39, 40, 41, 48, 49, 50, 66, };
float step100_factor139_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0123437, -0.9999240, -1.0229400, -0.0014617, 
0.0000000, 1.0000000, 0.0000000, 0.9999240, 0.0123437, -0.0165662, 0.0209153, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0077104, 
};

const int step100_factor139_num_blks = 2;
int step100_factor139_A_blk_start[] = {0, 3, };
int step100_factor139_B_blk_start[] = {39, 48, };
int step100_factor139_blk_width[] = {3, 3, };

const int step100_factor265_height = 7;
const int step100_factor265_width = 3;
int step100_factor265_ridx[] = {0, 1, 2, 3, 4, 5, 45, };
float step100_factor265_data[] = {
-0.9999920, 0.0040916, 0.1334510, 1.0000000, 0.0000000, 0.0000000, 0.0503836, 
-0.0040916, -0.9999920, 0.0122559, 0.0000000, 1.0000000, 0.0000000, -0.0855363, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0035229, 
};

const int step100_factor265_num_blks = 1;
int step100_factor265_A_blk_start[] = {0, };
int step100_factor265_B_blk_start[] = {0, };
int step100_factor265_blk_width[] = {6, };

const int step100_factor349_height = 7;
const int step100_factor349_width = 3;
int step100_factor349_ridx[] = {6, 7, 8, 9, 10, 11, 30, };
float step100_factor349_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998350, -0.0181629, 0.0884365, 0.0001104, 
0.0000000, 1.0000000, 0.0000000, 0.0181629, -0.9998350, 1.0277500, 0.0005575, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0042063, 
};

const int step100_factor349_num_blks = 1;
int step100_factor349_A_blk_start[] = {0, };
int step100_factor349_B_blk_start[] = {6, };
int step100_factor349_blk_width[] = {6, };

const int step100_factor140_height = 7;
const int step100_factor140_width = 3;
int step100_factor140_ridx[] = {42, 43, 44, 48, 49, 50, 66, };
float step100_factor140_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999250, 0.0122393, 0.0163937, -0.1070760, 
0.0000000, 1.0000000, 0.0000000, -0.0122393, -0.9999250, -1.0709900, 0.0994563, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0048805, 
};

const int step100_factor140_num_blks = 2;
int step100_factor140_A_blk_start[] = {0, 3, };
int step100_factor140_B_blk_start[] = {42, 48, };
int step100_factor140_blk_width[] = {3, 3, };

const int step100_factor266_height = 7;
const int step100_factor266_width = 3;
int step100_factor266_ridx[] = {0, 1, 2, 24, 25, 26, 45, };
float step100_factor266_data[] = {
-0.0009875, -1.0000000, 0.0356532, 1.0000000, 0.0000000, 0.0000000, -0.0058491, 
1.0000000, -0.0009875, -0.9979100, 0.0000000, 1.0000000, 0.0000000, -0.0307696, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0211712, 
};

const int step100_factor266_num_blks = 2;
int step100_factor266_A_blk_start[] = {0, 3, };
int step100_factor266_B_blk_start[] = {0, 24, };
int step100_factor266_blk_width[] = {3, 3, };

const int step100_factor350_height = 4;
const int step100_factor350_width = 3;
int step100_factor350_ridx[] = {12, 13, 14, 30, };
float step100_factor350_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor350_num_blks = 1;
int step100_factor350_A_blk_start[] = {0, };
int step100_factor350_B_blk_start[] = {12, };
int step100_factor350_blk_width[] = {3, };

const int step100_factor141_height = 4;
const int step100_factor141_width = 3;
int step100_factor141_ridx[] = {36, 37, 38, 66, };
float step100_factor141_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor141_num_blks = 1;
int step100_factor141_A_blk_start[] = {0, };
int step100_factor141_B_blk_start[] = {36, };
int step100_factor141_blk_width[] = {3, };

const int step100_factor267_height = 7;
const int step100_factor267_width = 3;
int step100_factor267_ridx[] = {0, 1, 2, 21, 22, 23, 45, };
float step100_factor267_data[] = {
0.0055059, -0.9999850, 0.0469692, 1.0000000, 0.0000000, 0.0000000, 0.0223839, 
0.9999850, 0.0055059, -0.9977320, 0.0000000, 1.0000000, 0.0000000, -0.1424840, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0472877, 
};

const int step100_factor267_num_blks = 2;
int step100_factor267_A_blk_start[] = {0, 3, };
int step100_factor267_B_blk_start[] = {0, 21, };
int step100_factor267_blk_width[] = {3, 3, };

const int step100_factor351_height = 7;
const int step100_factor351_width = 3;
int step100_factor351_ridx[] = {9, 10, 11, 12, 13, 14, 30, };
float step100_factor351_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999460, -0.0104327, 0.0197167, 0.0003676, 
0.0000000, 1.0000000, 0.0000000, 0.0104327, -0.9999460, 1.0711100, 0.0006085, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0036457, 
};

const int step100_factor351_num_blks = 1;
int step100_factor351_A_blk_start[] = {0, };
int step100_factor351_B_blk_start[] = {9, };
int step100_factor351_blk_width[] = {6, };

const int step100_factor142_height = 7;
const int step100_factor142_width = 3;
int step100_factor142_ridx[] = {36, 37, 38, 48, 49, 50, 66, };
float step100_factor142_data[] = {
-0.9996810, 0.0252668, -0.0177043, 1.0000000, 0.0000000, 0.0000000, -0.0225220, 
-0.0252668, -0.9996810, 1.0154700, 0.0000000, 1.0000000, 0.0000000, 0.0895847, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0388752, 
};

const int step100_factor142_num_blks = 2;
int step100_factor142_A_blk_start[] = {0, 3, };
int step100_factor142_B_blk_start[] = {36, 48, };
int step100_factor142_blk_width[] = {3, 3, };

const int step100_factor268_height = 4;
const int step100_factor268_width = 3;
int step100_factor268_ridx[] = {18, 19, 20, 45, };
float step100_factor268_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor268_num_blks = 1;
int step100_factor268_A_blk_start[] = {0, };
int step100_factor268_B_blk_start[] = {18, };
int step100_factor268_blk_width[] = {3, };

const int step100_factor352_height = 4;
const int step100_factor352_width = 3;
int step100_factor352_ridx[] = {15, 16, 17, 30, };
float step100_factor352_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor352_num_blks = 1;
int step100_factor352_A_blk_start[] = {0, };
int step100_factor352_B_blk_start[] = {15, };
int step100_factor352_blk_width[] = {3, };

const int step100_factor143_height = 7;
const int step100_factor143_width = 3;
int step100_factor143_ridx[] = {36, 37, 38, 51, 52, 53, 66, };
float step100_factor143_data[] = {
-0.9996710, 0.0256334, 0.0017352, 1.0000000, 0.0000000, 0.0000000, -0.0648445, 
-0.0256334, -0.9996710, 0.9652630, 0.0000000, 1.0000000, 0.0000000, -0.0951299, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0341870, 
};

const int step100_factor143_num_blks = 2;
int step100_factor143_A_blk_start[] = {0, 3, };
int step100_factor143_B_blk_start[] = {36, 51, };
int step100_factor143_blk_width[] = {3, 3, };

const int step100_factor269_height = 7;
const int step100_factor269_width = 3;
int step100_factor269_ridx[] = {6, 7, 8, 18, 19, 20, 45, };
float step100_factor269_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0224641, 0.9997480, -0.9480180, 0.0275674, 
0.0000000, 1.0000000, 0.0000000, -0.9997480, 0.0224641, -0.0637484, -0.0253216, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0205523, 
};

const int step100_factor269_num_blks = 2;
int step100_factor269_A_blk_start[] = {0, 3, };
int step100_factor269_B_blk_start[] = {6, 18, };
int step100_factor269_blk_width[] = {3, 3, };

const int step100_factor353_height = 7;
const int step100_factor353_width = 3;
int step100_factor353_ridx[] = {12, 13, 14, 15, 16, 17, 30, };
float step100_factor353_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9989460, -0.0459108, 0.0686572, -0.0666276, 
0.0000000, 1.0000000, 0.0000000, 0.0459108, -0.9989460, 0.9579030, 0.0459027, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0182009, 
};

const int step100_factor353_num_blks = 1;
int step100_factor353_A_blk_start[] = {0, };
int step100_factor353_B_blk_start[] = {12, };
int step100_factor353_blk_width[] = {6, };

const int step100_factor144_height = 7;
const int step100_factor144_width = 3;
int step100_factor144_ridx[] = {36, 37, 38, 60, 61, 62, 66, };
float step100_factor144_data[] = {
-0.0047416, -0.9999890, -0.0491818, 1.0000000, 0.0000000, 0.0000000, 0.0669301, 
0.9999890, -0.0047416, -1.0101300, 0.0000000, 1.0000000, 0.0000000, -0.0015614, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0241647, 
};

const int step100_factor144_num_blks = 2;
int step100_factor144_A_blk_start[] = {0, 3, };
int step100_factor144_B_blk_start[] = {36, 60, };
int step100_factor144_blk_width[] = {3, 3, };

const int step100_factor270_height = 7;
const int step100_factor270_width = 3;
int step100_factor270_ridx[] = {0, 1, 2, 18, 19, 20, 45, };
float step100_factor270_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0256015, 0.9996720, -1.0443400, -0.0558398, 
0.0000000, 1.0000000, 0.0000000, -0.9996720, 0.0256015, -0.0876111, -0.0115682, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0075193, 
};

const int step100_factor270_num_blks = 2;
int step100_factor270_A_blk_start[] = {0, 3, };
int step100_factor270_B_blk_start[] = {0, 18, };
int step100_factor270_blk_width[] = {3, 3, };

const int step100_factor354_height = 4;
const int step100_factor354_width = 3;
int step100_factor354_ridx[] = {18, 19, 20, 30, };
float step100_factor354_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor354_num_blks = 1;
int step100_factor354_A_blk_start[] = {0, };
int step100_factor354_B_blk_start[] = {18, };
int step100_factor354_blk_width[] = {3, };

const int step100_factor145_height = 7;
const int step100_factor145_width = 3;
int step100_factor145_ridx[] = {36, 37, 38, 57, 58, 59, 66, };
float step100_factor145_data[] = {
-0.0221926, -0.9997540, 0.0005123, 1.0000000, 0.0000000, 0.0000000, -0.0230280, 
0.9997540, -0.0221926, -1.0209300, 0.0000000, 1.0000000, 0.0000000, -0.0472137, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0351881, 
};

const int step100_factor145_num_blks = 2;
int step100_factor145_A_blk_start[] = {0, 3, };
int step100_factor145_B_blk_start[] = {36, 57, };
int step100_factor145_blk_width[] = {3, 3, };

const int step100_factor271_height = 7;
const int step100_factor271_width = 3;
int step100_factor271_ridx[] = {3, 4, 5, 18, 19, 20, 45, };
float step100_factor271_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0296916, 0.9995590, -0.9105180, -0.0462601, 
0.0000000, 1.0000000, 0.0000000, -0.9995590, 0.0296916, -0.0796275, -0.0147433, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0468523, 
};

const int step100_factor271_num_blks = 2;
int step100_factor271_A_blk_start[] = {0, 3, };
int step100_factor271_B_blk_start[] = {3, 18, };
int step100_factor271_blk_width[] = {3, 3, };

const int step100_factor355_height = 7;
const int step100_factor355_width = 3;
int step100_factor355_ridx[] = {15, 16, 17, 18, 19, 20, 30, };
float step100_factor355_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0030068, 0.9999950, -0.9599250, -0.0002487, 
0.0000000, 1.0000000, 0.0000000, -0.9999950, 0.0030068, -0.0427749, 0.0008677, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0028032, 
};

const int step100_factor355_num_blks = 1;
int step100_factor355_A_blk_start[] = {0, };
int step100_factor355_B_blk_start[] = {15, };
int step100_factor355_blk_width[] = {6, };

const int step100_factor146_height = 7;
const int step100_factor146_width = 3;
int step100_factor146_ridx[] = {36, 37, 38, 39, 40, 41, 66, };
float step100_factor146_data[] = {
-0.0129251, -0.9999160, -0.0073314, 1.0000000, 0.0000000, 0.0000000, -0.0085749, 
0.9999160, -0.0129251, -0.0113979, 0.0000000, 1.0000000, 0.0000000, 0.0434288, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0153291, 
};

const int step100_factor146_num_blks = 1;
int step100_factor146_A_blk_start[] = {0, };
int step100_factor146_B_blk_start[] = {36, };
int step100_factor146_blk_width[] = {6, };

const int step100_factor272_height = 7;
const int step100_factor272_width = 3;
int step100_factor272_ridx[] = {18, 19, 20, 24, 25, 26, 45, };
float step100_factor272_data[] = {
-0.9996460, 0.0265887, -0.0529891, 1.0000000, 0.0000000, 0.0000000, 0.0909422, 
-0.0265887, -0.9996460, 0.0463395, 0.0000000, 1.0000000, 0.0000000, 0.0482211, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0149039, 
};

const int step100_factor272_num_blks = 2;
int step100_factor272_A_blk_start[] = {0, 3, };
int step100_factor272_B_blk_start[] = {18, 24, };
int step100_factor272_blk_width[] = {3, 3, };

const int step100_factor356_height = 4;
const int step100_factor356_width = 3;
int step100_factor356_ridx[] = {21, 22, 23, 30, };
float step100_factor356_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor356_num_blks = 1;
int step100_factor356_A_blk_start[] = {0, };
int step100_factor356_B_blk_start[] = {21, };
int step100_factor356_blk_width[] = {3, };

const int step100_factor147_height = 7;
const int step100_factor147_width = 3;
int step100_factor147_ridx[] = {36, 37, 38, 42, 43, 44, 66, };
float step100_factor147_data[] = {
-0.9992970, 0.0375003, -0.0137378, 1.0000000, 0.0000000, 0.0000000, 0.0223750, 
-0.0375003, -0.9992970, -0.0558145, 0.0000000, 1.0000000, 0.0000000, -0.0299771, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0134635, 
};

const int step100_factor147_num_blks = 2;
int step100_factor147_A_blk_start[] = {0, 3, };
int step100_factor147_B_blk_start[] = {36, 42, };
int step100_factor147_blk_width[] = {3, 3, };

const int step100_factor273_height = 7;
const int step100_factor273_width = 3;
int step100_factor273_ridx[] = {18, 19, 20, 21, 22, 23, 45, };
float step100_factor273_data[] = {
-0.9997980, 0.0200970, -0.0348905, 1.0000000, 0.0000000, 0.0000000, 0.0723278, 
-0.0200970, -0.9997980, 0.0470710, 0.0000000, 1.0000000, 0.0000000, -0.0559898, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0148095, 
};

const int step100_factor273_num_blks = 1;
int step100_factor273_A_blk_start[] = {0, };
int step100_factor273_B_blk_start[] = {18, };
int step100_factor273_blk_width[] = {6, };

const int step100_factor357_height = 7;
const int step100_factor357_width = 3;
int step100_factor357_ridx[] = {18, 19, 20, 21, 22, 23, 30, };
float step100_factor357_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999990, -0.0016960, 0.0593865, 0.0010433, 
0.0000000, 1.0000000, 0.0000000, 0.0016960, -0.9999990, 1.0428500, 0.0001534, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0025755, 
};

const int step100_factor357_num_blks = 1;
int step100_factor357_A_blk_start[] = {0, };
int step100_factor357_B_blk_start[] = {18, };
int step100_factor357_blk_width[] = {6, };

const int step100_factor148_height = 4;
const int step100_factor148_width = 3;
int step100_factor148_ridx[] = {63, 64, 65, 66, };
float step100_factor148_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor148_num_blks = 1;
int step100_factor148_A_blk_start[] = {0, };
int step100_factor148_B_blk_start[] = {63, };
int step100_factor148_blk_width[] = {3, };

const int step100_factor274_height = 7;
const int step100_factor274_width = 3;
int step100_factor274_ridx[] = {18, 19, 20, 33, 34, 35, 45, };
float step100_factor274_data[] = {
-0.9996840, 0.0251532, -0.0511751, 1.0000000, 0.0000000, 0.0000000, -0.0080309, 
-0.0251532, -0.9996840, -0.9598380, 0.0000000, 1.0000000, 0.0000000, 0.0293269, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0395418, 
};

const int step100_factor274_num_blks = 2;
int step100_factor274_A_blk_start[] = {0, 3, };
int step100_factor274_B_blk_start[] = {18, 33, };
int step100_factor274_blk_width[] = {3, 3, };

const int step100_factor358_height = 4;
const int step100_factor358_width = 3;
int step100_factor358_ridx[] = {15, 16, 17, 36, };
float step100_factor358_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor358_num_blks = 1;
int step100_factor358_A_blk_start[] = {0, };
int step100_factor358_B_blk_start[] = {15, };
int step100_factor358_blk_width[] = {3, };

const int step100_factor149_height = 7;
const int step100_factor149_width = 3;
int step100_factor149_ridx[] = {36, 37, 38, 63, 64, 65, 66, };
float step100_factor149_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.0093462, 0.9999560, -1.0730900, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.9999560, -0.0093462, 0.0125736, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0000000, 
};

const int step100_factor149_num_blks = 2;
int step100_factor149_A_blk_start[] = {0, 3, };
int step100_factor149_B_blk_start[] = {36, 63, };
int step100_factor149_blk_width[] = {3, 3, };

const int step100_factor275_height = 7;
const int step100_factor275_width = 3;
int step100_factor275_ridx[] = {18, 19, 20, 30, 31, 32, 45, };
float step100_factor275_data[] = {
-0.9999060, 0.0136924, -0.0506454, 1.0000000, 0.0000000, 0.0000000, 0.0050731, 
-0.0136924, -0.9999060, -0.9574790, 0.0000000, 1.0000000, 0.0000000, 0.1115310, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0115690, 
};

const int step100_factor275_num_blks = 2;
int step100_factor275_A_blk_start[] = {0, 3, };
int step100_factor275_B_blk_start[] = {18, 30, };
int step100_factor275_blk_width[] = {3, 3, };

const int step100_factor359_height = 7;
const int step100_factor359_width = 3;
int step100_factor359_ridx[] = {21, 22, 23, 24, 25, 26, 30, };
float step100_factor359_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999950, -0.0032027, -0.0557530, 0.0010463, 
0.0000000, 1.0000000, 0.0000000, 0.0032027, -0.9999950, 0.9381450, 0.0002627, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0023192, 
};

const int step100_factor359_num_blks = 1;
int step100_factor359_A_blk_start[] = {0, };
int step100_factor359_B_blk_start[] = {21, };
int step100_factor359_blk_width[] = {6, };

const int step100_factor150_height = 7;
const int step100_factor150_width = 3;
int step100_factor150_ridx[] = {6, 7, 8, 42, 43, 44, 45, };
float step100_factor150_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999470, -0.0103013, -0.0649293, 0.0298907, 
0.0000000, 1.0000000, 0.0000000, 0.0103013, -0.9999470, -0.9401140, 0.0542442, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0268987, 
};

const int step100_factor150_num_blks = 2;
int step100_factor150_A_blk_start[] = {0, 3, };
int step100_factor150_B_blk_start[] = {6, 42, };
int step100_factor150_blk_width[] = {3, 3, };

const int step100_factor276_height = 4;
const int step100_factor276_width = 3;
int step100_factor276_ridx[] = {9, 10, 11, 66, };
float step100_factor276_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor276_num_blks = 1;
int step100_factor276_A_blk_start[] = {0, };
int step100_factor276_B_blk_start[] = {9, };
int step100_factor276_blk_width[] = {3, };

const int step100_factor360_height = 4;
const int step100_factor360_width = 3;
int step100_factor360_ridx[] = {21, 22, 23, 36, };
float step100_factor360_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor360_num_blks = 1;
int step100_factor360_A_blk_start[] = {0, };
int step100_factor360_B_blk_start[] = {21, };
int step100_factor360_blk_width[] = {3, };

const int step100_factor109_height = 7;
const int step100_factor109_width = 3;
int step100_factor109_ridx[] = {24, 25, 26, 27, 28, 29, 45, };
float step100_factor109_data[] = {
-0.9999990, 0.0014257, 0.0482366, 1.0000000, 0.0000000, 0.0000000, -0.0402345, 
-0.0014257, -0.9999990, -1.0176700, 0.0000000, 1.0000000, 0.0000000, -0.0275855, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0142015, 
};

const int step100_factor109_num_blks = 1;
int step100_factor109_A_blk_start[] = {0, };
int step100_factor109_B_blk_start[] = {24, };
int step100_factor109_blk_width[] = {6, };

const int step100_factor151_height = 7;
const int step100_factor151_width = 3;
int step100_factor151_ridx[] = {3, 4, 5, 42, 43, 44, 45, };
float step100_factor151_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9996190, 0.0276173, 0.0480140, -0.0447691, 
0.0000000, 1.0000000, 0.0000000, -0.0276173, -0.9996190, -0.9829880, -0.0242837, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0353888, 
};

const int step100_factor151_num_blks = 2;
int step100_factor151_A_blk_start[] = {0, 3, };
int step100_factor151_B_blk_start[] = {3, 42, };
int step100_factor151_blk_width[] = {3, 3, };

const int step100_factor277_height = 7;
const int step100_factor277_width = 3;
int step100_factor277_ridx[] = {24, 25, 26, 27, 28, 29, 45, };
float step100_factor277_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9997300, 0.0232557, -0.0107810, 0.0160093, 
0.0000000, 1.0000000, 0.0000000, -0.0232557, -0.9997300, 1.1008200, 0.0425193, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0078908, 
};

const int step100_factor277_num_blks = 1;
int step100_factor277_A_blk_start[] = {0, };
int step100_factor277_B_blk_start[] = {24, };
int step100_factor277_blk_width[] = {6, };

const int step100_factor361_height = 7;
const int step100_factor361_width = 3;
int step100_factor361_ridx[] = {21, 22, 23, 27, 28, 29, 36, };
float step100_factor361_data[] = {
0.9998820, -0.0153478, -0.0359634, 1.0000000, 0.0000000, 0.0000000, 0.0015483, 
0.0153478, 0.9998820, 0.9524680, 0.0000000, 1.0000000, 0.0000000, 0.0000928, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0016389, 
};

const int step100_factor361_num_blks = 2;
int step100_factor361_A_blk_start[] = {0, 3, };
int step100_factor361_B_blk_start[] = {21, 27, };
int step100_factor361_blk_width[] = {3, 3, };

const int step100_factor110_height = 4;
const int step100_factor110_width = 3;
int step100_factor110_ridx[] = {12, 13, 14, 45, };
float step100_factor110_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor110_num_blks = 1;
int step100_factor110_A_blk_start[] = {0, };
int step100_factor110_B_blk_start[] = {12, };
int step100_factor110_blk_width[] = {3, };

const int step100_factor152_height = 7;
const int step100_factor152_width = 3;
int step100_factor152_ridx[] = {60, 61, 62, 63, 64, 65, 66, };
float step100_factor152_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999890, -0.0046047, -0.0416966, 0.1141710, 
0.0000000, 1.0000000, 0.0000000, 0.0046047, -0.9999890, 0.0630093, -0.0096482, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0175040, 
};

const int step100_factor152_num_blks = 1;
int step100_factor152_A_blk_start[] = {0, };
int step100_factor152_B_blk_start[] = {60, };
int step100_factor152_blk_width[] = {6, };

const int step100_factor278_height = 7;
const int step100_factor278_width = 3;
int step100_factor278_ridx[] = {18, 19, 20, 27, 28, 29, 45, };
float step100_factor278_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999940, -0.0033341, 0.0702305, 0.0701678, 
0.0000000, 1.0000000, 0.0000000, 0.0033341, -0.9999940, 1.0529800, -0.0668227, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0092171, 
};

const int step100_factor278_num_blks = 2;
int step100_factor278_A_blk_start[] = {0, 3, };
int step100_factor278_B_blk_start[] = {18, 27, };
int step100_factor278_blk_width[] = {3, 3, };

const int step100_factor362_height = 7;
const int step100_factor362_width = 3;
int step100_factor362_ridx[] = {15, 16, 17, 21, 22, 23, 36, };
float step100_factor362_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9997470, 0.0224793, -0.0758485, 0.0012169, 
0.0000000, 1.0000000, 0.0000000, -0.0224793, -0.9997470, 1.0103800, 0.0002839, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0020976, 
};

const int step100_factor362_num_blks = 2;
int step100_factor362_A_blk_start[] = {0, 3, };
int step100_factor362_B_blk_start[] = {15, 21, };
int step100_factor362_blk_width[] = {3, 3, };

const int step100_factor111_height = 7;
const int step100_factor111_width = 3;
int step100_factor111_ridx[] = {24, 25, 26, 30, 31, 32, 45, };
float step100_factor111_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998970, 0.0143670, -0.0270597, -0.0218121, 
0.0000000, 1.0000000, 0.0000000, -0.0143670, -0.9998970, 0.9721710, 0.0401372, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0113748, 
};

const int step100_factor111_num_blks = 2;
int step100_factor111_A_blk_start[] = {0, 3, };
int step100_factor111_B_blk_start[] = {24, 30, };
int step100_factor111_blk_width[] = {3, 3, };

const int step100_factor153_height = 7;
const int step100_factor153_width = 3;
int step100_factor153_ridx[] = {57, 58, 59, 63, 64, 65, 66, };
float step100_factor153_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999170, 0.0128477, -0.0107319, 0.1491820, 
0.0000000, 1.0000000, 0.0000000, -0.0128477, -0.9999170, 0.0521774, 0.0078131, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0074723, 
};

const int step100_factor153_num_blks = 2;
int step100_factor153_A_blk_start[] = {0, 3, };
int step100_factor153_B_blk_start[] = {57, 63, };
int step100_factor153_blk_width[] = {3, 3, };

const int step100_factor279_height = 7;
const int step100_factor279_width = 3;
int step100_factor279_ridx[] = {21, 22, 23, 27, 28, 29, 45, };
float step100_factor279_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998600, 0.0167635, 0.0141640, 0.1273940, 
0.0000000, 1.0000000, 0.0000000, -0.0167635, -0.9998600, 1.1012500, -0.0273291, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0091459, 
};

const int step100_factor279_num_blks = 2;
int step100_factor279_A_blk_start[] = {0, 3, };
int step100_factor279_B_blk_start[] = {21, 27, };
int step100_factor279_blk_width[] = {3, 3, };

const int step100_factor363_height = 4;
const int step100_factor363_width = 3;
int step100_factor363_ridx[] = {24, 25, 26, 36, };
float step100_factor363_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor363_num_blks = 1;
int step100_factor363_A_blk_start[] = {0, };
int step100_factor363_B_blk_start[] = {24, };
int step100_factor363_blk_width[] = {3, };

const int step100_factor112_height = 7;
const int step100_factor112_width = 3;
int step100_factor112_ridx[] = {21, 22, 23, 30, 31, 32, 45, };
float step100_factor112_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999860, 0.0053276, 0.0054728, -0.0442636, 
0.0000000, 1.0000000, 0.0000000, -0.0053276, -0.9999860, 0.9478310, 0.0347089, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0193238, 
};

const int step100_factor112_num_blks = 2;
int step100_factor112_A_blk_start[] = {0, 3, };
int step100_factor112_B_blk_start[] = {21, 30, };
int step100_factor112_blk_width[] = {3, 3, };

const int step100_factor154_height = 7;
const int step100_factor154_width = 3;
int step100_factor154_ridx[] = {39, 40, 41, 63, 64, 65, 66, };
float step100_factor154_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999940, 0.0035791, -0.0086286, 0.0584673, 
0.0000000, 1.0000000, 0.0000000, -0.0035791, -0.9999940, 1.0617600, -0.0202369, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0003017, 
};

const int step100_factor154_num_blks = 2;
int step100_factor154_A_blk_start[] = {0, 3, };
int step100_factor154_B_blk_start[] = {39, 63, };
int step100_factor154_blk_width[] = {3, 3, };

const int step100_factor280_height = 7;
const int step100_factor280_width = 3;
int step100_factor280_ridx[] = {9, 10, 11, 24, 25, 26, 66, };
float step100_factor280_data[] = {
-0.9999720, -0.0075103, 0.0037112, 1.0000000, 0.0000000, 0.0000000, 0.0198366, 
0.0075103, -0.9999720, -0.8883720, 0.0000000, 1.0000000, 0.0000000, -0.1194280, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0098918, 
};

const int step100_factor280_num_blks = 2;
int step100_factor280_A_blk_start[] = {0, 3, };
int step100_factor280_B_blk_start[] = {9, 24, };
int step100_factor280_blk_width[] = {3, 3, };

const int step100_factor364_height = 7;
const int step100_factor364_width = 3;
int step100_factor364_ridx[] = {24, 25, 26, 27, 28, 29, 36, };
float step100_factor364_data[] = {
0.9999200, -0.0126501, -0.0279821, 1.0000000, 0.0000000, 0.0000000, -0.1590360, 
0.0126501, 0.9999200, -0.0353962, 0.0000000, 1.0000000, 0.0000000, -0.0246144, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0027669, 
};

const int step100_factor364_num_blks = 1;
int step100_factor364_A_blk_start[] = {0, };
int step100_factor364_B_blk_start[] = {24, };
int step100_factor364_blk_width[] = {6, };

const int step100_factor113_height = 7;
const int step100_factor113_width = 3;
int step100_factor113_ridx[] = {9, 10, 11, 12, 13, 14, 45, };
float step100_factor113_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9998750, 0.0157925, 0.0197908, -0.0123419, 
0.0000000, 1.0000000, 0.0000000, -0.0157925, -0.9998750, -0.0455429, -0.0145117, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0418873, 
};

const int step100_factor113_num_blks = 1;
int step100_factor113_A_blk_start[] = {0, };
int step100_factor113_B_blk_start[] = {9, };
int step100_factor113_blk_width[] = {6, };

const int step100_factor155_height = 7;
const int step100_factor155_width = 3;
int step100_factor155_ridx[] = {42, 43, 44, 63, 64, 65, 66, };
float step100_factor155_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0281590, 0.9996030, -1.0865400, -0.0647741, 
0.0000000, 1.0000000, 0.0000000, -0.9996030, 0.0281590, -0.0834909, 0.0302934, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0176291, 
};

const int step100_factor155_num_blks = 2;
int step100_factor155_A_blk_start[] = {0, 3, };
int step100_factor155_B_blk_start[] = {42, 63, };
int step100_factor155_blk_width[] = {3, 3, };

const int step100_factor281_height = 7;
const int step100_factor281_width = 3;
int step100_factor281_ridx[] = {9, 10, 11, 21, 22, 23, 66, };
float step100_factor281_data[] = {
-0.9993430, 0.0362346, 0.0969049, 1.0000000, 0.0000000, 0.0000000, 0.0665550, 
-0.0362346, -0.9993430, -0.9356620, 0.0000000, 1.0000000, 0.0000000, 0.0141785, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0434709, 
};

const int step100_factor281_num_blks = 2;
int step100_factor281_A_blk_start[] = {0, 3, };
int step100_factor281_B_blk_start[] = {9, 21, };
int step100_factor281_blk_width[] = {3, 3, };

const int step100_factor365_height = 7;
const int step100_factor365_width = 3;
int step100_factor365_ridx[] = {18, 19, 20, 24, 25, 26, 36, };
float step100_factor365_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.0348570, -0.9993920, 0.0908243, -0.0682417, 
0.0000000, 1.0000000, 0.0000000, 0.9993920, -0.0348570, -1.0881100, -0.0255638, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0375377, 
};

const int step100_factor365_num_blks = 2;
int step100_factor365_A_blk_start[] = {0, 3, };
int step100_factor365_B_blk_start[] = {18, 24, };
int step100_factor365_blk_width[] = {3, 3, };

const int step100_factor114_height = 7;
const int step100_factor114_width = 3;
int step100_factor114_ridx[] = {3, 4, 5, 12, 13, 14, 45, };
float step100_factor114_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9996980, 0.0245547, 0.0425859, -0.0588465, 
0.0000000, 1.0000000, 0.0000000, -0.0245547, -0.9996980, -1.0268400, -0.0784462, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0040210, 
};

const int step100_factor114_num_blks = 2;
int step100_factor114_A_blk_start[] = {0, 3, };
int step100_factor114_B_blk_start[] = {3, 12, };
int step100_factor114_blk_width[] = {3, 3, };

const int step100_factor282_height = 7;
const int step100_factor282_width = 3;
int step100_factor282_ridx[] = {9, 10, 11, 15, 16, 17, 66, };
float step100_factor282_data[] = {
-0.9997620, 0.0218201, -0.0074528, 1.0000000, 0.0000000, 0.0000000, 0.1029200, 
-0.0218201, -0.9997620, 0.0945787, 0.0000000, 1.0000000, 0.0000000, -0.0468325, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0348809, 
};

const int step100_factor282_num_blks = 2;
int step100_factor282_A_blk_start[] = {0, 3, };
int step100_factor282_B_blk_start[] = {9, 15, };
int step100_factor282_blk_width[] = {3, 3, };

const int step100_factor366_height = 7;
const int step100_factor366_width = 3;
int step100_factor366_ridx[] = {24, 25, 26, 30, 31, 32, 36, };
float step100_factor366_data[] = {
0.9998620, -0.0166403, -0.1236540, 1.0000000, 0.0000000, 0.0000000, -0.0457974, 
0.0166403, 0.9998620, 0.9794980, 0.0000000, 1.0000000, 0.0000000, 0.0896426, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0087163, 
};

const int step100_factor366_num_blks = 2;
int step100_factor366_A_blk_start[] = {0, 3, };
int step100_factor366_B_blk_start[] = {24, 30, };
int step100_factor366_blk_width[] = {3, 3, };

const int step100_factor115_height = 4;
const int step100_factor115_width = 3;
int step100_factor115_ridx[] = {6, 7, 8, 45, };
float step100_factor115_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor115_num_blks = 1;
int step100_factor115_A_blk_start[] = {0, };
int step100_factor115_B_blk_start[] = {6, };
int step100_factor115_blk_width[] = {3, };

const int step100_factor283_height = 7;
const int step100_factor283_width = 3;
int step100_factor283_ridx[] = {9, 10, 11, 12, 13, 14, 66, };
float step100_factor283_data[] = {
-0.9999460, 0.0103586, 0.0051606, 1.0000000, 0.0000000, 0.0000000, 0.0967746, 
-0.0103586, -0.9999460, 0.0963668, 0.0000000, 1.0000000, 0.0000000, 0.0167690, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0230864, 
};

const int step100_factor283_num_blks = 1;
int step100_factor283_A_blk_start[] = {0, };
int step100_factor283_B_blk_start[] = {9, };
int step100_factor283_blk_width[] = {6, };

const int step100_factor367_height = 7;
const int step100_factor367_width = 3;
int step100_factor367_ridx[] = {21, 22, 23, 24, 25, 26, 36, };
float step100_factor367_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999960, -0.0026980, 0.0071812, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, 0.0026980, -0.9999960, 0.9878700, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step100_factor367_num_blks = 1;
int step100_factor367_A_blk_start[] = {0, };
int step100_factor367_B_blk_start[] = {21, };
int step100_factor367_blk_width[] = {6, };

const int step100_factor116_height = 7;
const int step100_factor116_width = 3;
int step100_factor116_ridx[] = {6, 7, 8, 9, 10, 11, 45, };
float step100_factor116_data[] = {
-0.9999990, -0.0015340, 0.0231388, 1.0000000, 0.0000000, 0.0000000, -0.0189734, 
0.0015340, -0.9999990, 0.9722780, 0.0000000, 1.0000000, 0.0000000, -0.0414220, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0224241, 
};

const int step100_factor116_num_blks = 1;
int step100_factor116_A_blk_start[] = {0, };
int step100_factor116_B_blk_start[] = {6, };
int step100_factor116_blk_width[] = {6, };

const int step100_factor284_height = 4;
const int step100_factor284_width = 3;
int step100_factor284_ridx[] = {18, 19, 20, 66, };
float step100_factor284_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor284_num_blks = 1;
int step100_factor284_A_blk_start[] = {0, };
int step100_factor284_B_blk_start[] = {18, };
int step100_factor284_blk_width[] = {3, };

const int step100_factor368_height = 4;
const int step100_factor368_width = 3;
int step100_factor368_ridx[] = {12, 13, 14, 36, };
float step100_factor368_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor368_num_blks = 1;
int step100_factor368_A_blk_start[] = {0, };
int step100_factor368_B_blk_start[] = {12, };
int step100_factor368_blk_width[] = {3, };

const int step100_factor117_height = 7;
const int step100_factor117_width = 3;
int step100_factor117_ridx[] = {6, 7, 8, 12, 13, 14, 45, };
float step100_factor117_data[] = {
-0.9998500, -0.0173263, 0.0194215, 1.0000000, 0.0000000, 0.0000000, 0.0415175, 
0.0173263, -0.9998500, 1.0176400, 0.0000000, 1.0000000, 0.0000000, 0.0645150, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0071982, 
};

const int step100_factor117_num_blks = 2;
int step100_factor117_A_blk_start[] = {0, 3, };
int step100_factor117_B_blk_start[] = {6, 12, };
int step100_factor117_blk_width[] = {3, 3, };

const int step100_factor285_height = 7;
const int step100_factor285_width = 3;
int step100_factor285_ridx[] = {9, 10, 11, 18, 19, 20, 66, };
float step100_factor285_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9995220, -0.0309070, 0.0799625, -0.0791977, 
0.0000000, 1.0000000, 0.0000000, 0.0309070, -0.9995220, 0.9099140, 0.0015700, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0087063, 
};

const int step100_factor285_num_blks = 2;
int step100_factor285_A_blk_start[] = {0, 3, };
int step100_factor285_B_blk_start[] = {9, 18, };
int step100_factor285_blk_width[] = {3, 3, };

const int step100_factor369_height = 7;
const int step100_factor369_width = 3;
int step100_factor369_ridx[] = {12, 13, 14, 27, 28, 29, 36, };
float step100_factor369_data[] = {
0.0184597, 0.9998300, -0.9479900, 1.0000000, 0.0000000, 0.0000000, 0.0445953, 
-0.9998300, 0.0184597, -0.0430522, 0.0000000, 1.0000000, 0.0000000, -0.0789008, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0223471, 
};

const int step100_factor369_num_blks = 2;
int step100_factor369_A_blk_start[] = {0, 3, };
int step100_factor369_B_blk_start[] = {12, 27, };
int step100_factor369_blk_width[] = {3, 3, };

const int step100_factor118_height = 7;
const int step100_factor118_width = 3;
int step100_factor118_ridx[] = {3, 4, 5, 6, 7, 8, 45, };
float step100_factor118_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999740, 0.0072299, 0.0370137, 0.0580264, 
0.0000000, 1.0000000, 0.0000000, -0.0072299, -0.9999740, -0.0090266, 0.0384560, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0350715, 
};

const int step100_factor118_num_blks = 1;
int step100_factor118_A_blk_start[] = {0, };
int step100_factor118_B_blk_start[] = {3, };
int step100_factor118_blk_width[] = {6, };

const int step100_factor286_height = 7;
const int step100_factor286_width = 3;
int step100_factor286_ridx[] = {18, 19, 20, 24, 25, 26, 66, };
float step100_factor286_data[] = {
-0.9992620, -0.0384129, 0.0905051, 1.0000000, 0.0000000, 0.0000000, -0.0441742, 
0.0384129, -0.9992620, 0.0209163, 0.0000000, 1.0000000, 0.0000000, -0.0247151, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0478587, 
};

const int step100_factor286_num_blks = 2;
int step100_factor286_A_blk_start[] = {0, 3, };
int step100_factor286_B_blk_start[] = {18, 24, };
int step100_factor286_blk_width[] = {3, 3, };

const int step100_factor370_height = 7;
const int step100_factor370_width = 3;
int step100_factor370_ridx[] = {12, 13, 14, 24, 25, 26, 36, };
float step100_factor370_data[] = {
-0.0058103, -0.9999830, 0.9200310, 1.0000000, 0.0000000, 0.0000000, -0.0620714, 
0.9999830, -0.0058103, -0.0039829, 0.0000000, 1.0000000, 0.0000000, 0.0528599, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0072640, 
};

const int step100_factor370_num_blks = 2;
int step100_factor370_A_blk_start[] = {0, 3, };
int step100_factor370_B_blk_start[] = {12, 24, };
int step100_factor370_blk_width[] = {3, 3, };

const int step100_factor119_height = 7;
const int step100_factor119_width = 3;
int step100_factor119_ridx[] = {6, 7, 8, 21, 22, 23, 45, };
float step100_factor119_data[] = {
0.0023676, -0.9999970, 0.0266132, 1.0000000, 0.0000000, 0.0000000, 0.0422020, 
0.9999970, 0.0023676, -0.9010950, 0.0000000, 1.0000000, 0.0000000, -0.0184796, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0120160, 
};

const int step100_factor119_num_blks = 2;
int step100_factor119_A_blk_start[] = {0, 3, };
int step100_factor119_B_blk_start[] = {6, 21, };
int step100_factor119_blk_width[] = {3, 3, };

const int step100_factor161_height = 7;
const int step100_factor161_width = 3;
int step100_factor161_ridx[] = {0, 1, 2, 39, 40, 41, 45, };
float step100_factor161_data[] = {
-0.9998970, -0.0143360, -0.0037846, 1.0000000, 0.0000000, 0.0000000, 0.0424818, 
0.0143360, -0.9998970, 1.0528800, 0.0000000, 1.0000000, 0.0000000, 0.0055388, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0313010, 
};

const int step100_factor161_num_blks = 2;
int step100_factor161_A_blk_start[] = {0, 3, };
int step100_factor161_B_blk_start[] = {0, 39, };
int step100_factor161_blk_width[] = {3, 3, };

const int step100_factor287_height = 7;
const int step100_factor287_width = 3;
int step100_factor287_ridx[] = {18, 19, 20, 21, 22, 23, 66, };
float step100_factor287_data[] = {
-0.9999860, 0.0053305, 0.1438450, 1.0000000, 0.0000000, 0.0000000, -0.0844550, 
-0.0053305, -0.9999860, -0.0234482, 0.0000000, 1.0000000, 0.0000000, -0.2528540, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0043631, 
};

const int step100_factor287_num_blks = 1;
int step100_factor287_A_blk_start[] = {0, };
int step100_factor287_B_blk_start[] = {18, };
int step100_factor287_blk_width[] = {6, };

const int step100_factor371_height = 4;
const int step100_factor371_width = 3;
int step100_factor371_ridx[] = {0, 1, 2, 30, };
float step100_factor371_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor371_num_blks = 1;
int step100_factor371_A_blk_start[] = {0, };
int step100_factor371_B_blk_start[] = {0, };
int step100_factor371_blk_width[] = {3, };

const int step100_factor120_height = 4;
const int step100_factor120_width = 3;
int step100_factor120_ridx[] = {24, 25, 26, 45, };
float step100_factor120_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor120_num_blks = 1;
int step100_factor120_A_blk_start[] = {0, };
int step100_factor120_B_blk_start[] = {24, };
int step100_factor120_blk_width[] = {3, };

const int step100_factor162_height = 7;
const int step100_factor162_width = 3;
int step100_factor162_ridx[] = {0, 1, 2, 36, 37, 38, 45, };
float step100_factor162_data[] = {
-0.9999950, 0.0031163, 0.0098992, 1.0000000, 0.0000000, 0.0000000, 0.1493080, 
-0.0031163, -0.9999950, 1.0425600, 0.0000000, 1.0000000, 0.0000000, -0.0298108, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0303130, 
};

const int step100_factor162_num_blks = 2;
int step100_factor162_A_blk_start[] = {0, 3, };
int step100_factor162_B_blk_start[] = {0, 36, };
int step100_factor162_blk_width[] = {3, 3, };

const int step100_factor288_height = 7;
const int step100_factor288_width = 3;
int step100_factor288_ridx[] = {15, 16, 17, 18, 19, 20, 66, };
float step100_factor288_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999590, -0.0090900, 0.0526363, 0.0638970, 
0.0000000, 1.0000000, 0.0000000, 0.0090900, -0.9999590, 1.0060200, -0.0184301, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0355013, 
};

const int step100_factor288_num_blks = 1;
int step100_factor288_A_blk_start[] = {0, };
int step100_factor288_B_blk_start[] = {15, };
int step100_factor288_blk_width[] = {6, };

const int step100_factor372_height = 7;
const int step100_factor372_width = 3;
int step100_factor372_ridx[] = {0, 1, 2, 27, 28, 29, 30, };
float step100_factor372_data[] = {
-0.9999980, 0.0018636, 0.0146272, 1.0000000, 0.0000000, 0.0000000, 0.0252628, 
-0.0018636, -0.9999980, 0.9443840, 0.0000000, 1.0000000, 0.0000000, 0.0214565, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0104710, 
};

const int step100_factor372_num_blks = 2;
int step100_factor372_A_blk_start[] = {0, 3, };
int step100_factor372_B_blk_start[] = {0, 27, };
int step100_factor372_blk_width[] = {3, 3, };

const int step100_factor121_height = 7;
const int step100_factor121_width = 3;
int step100_factor121_ridx[] = {6, 7, 8, 24, 25, 26, 45, };
float step100_factor121_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.0041259, 0.9999910, -0.9014600, 0.0212284, 
0.0000000, 1.0000000, 0.0000000, -0.9999910, -0.0041259, -0.0109510, -0.0724150, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0270096, 
};

const int step100_factor121_num_blks = 2;
int step100_factor121_A_blk_start[] = {0, 3, };
int step100_factor121_B_blk_start[] = {6, 24, };
int step100_factor121_blk_width[] = {3, 3, };

const int step100_factor163_height = 7;
const int step100_factor163_width = 3;
int step100_factor163_ridx[] = {0, 1, 2, 42, 43, 44, 45, };
float step100_factor163_data[] = {
-0.9999530, -0.0097316, 0.0333535, 1.0000000, 0.0000000, 0.0000000, -0.0478463, 
0.0097316, -0.9999530, 0.9900370, 0.0000000, 1.0000000, 0.0000000, -0.0071392, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0054736, 
};

const int step100_factor163_num_blks = 2;
int step100_factor163_A_blk_start[] = {0, 3, };
int step100_factor163_B_blk_start[] = {0, 42, };
int step100_factor163_blk_width[] = {3, 3, };

const int step100_factor289_height = 7;
const int step100_factor289_width = 3;
int step100_factor289_ridx[] = {12, 13, 14, 18, 19, 20, 66, };
float step100_factor289_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9997890, -0.0205517, 0.0756934, -0.0401095, 
0.0000000, 1.0000000, 0.0000000, 0.0205517, -0.9997890, 1.0070600, -0.0690387, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0425236, 
};

const int step100_factor289_num_blks = 2;
int step100_factor289_A_blk_start[] = {0, 3, };
int step100_factor289_B_blk_start[] = {12, 18, };
int step100_factor289_blk_width[] = {3, 3, };

const int step100_factor373_height = 4;
const int step100_factor373_width = 3;
int step100_factor373_ridx[] = {3, 4, 5, 30, };
float step100_factor373_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor373_num_blks = 1;
int step100_factor373_A_blk_start[] = {0, };
int step100_factor373_B_blk_start[] = {3, };
int step100_factor373_blk_width[] = {3, };

const int step100_factor122_height = 7;
const int step100_factor122_width = 3;
int step100_factor122_ridx[] = {3, 4, 5, 24, 25, 26, 45, };
float step100_factor122_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0031041, 0.9999950, -0.8643440, -0.0259931, 
0.0000000, 1.0000000, 0.0000000, -0.9999950, 0.0031041, -0.0264948, -0.1438550, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0009304, 
};

const int step100_factor122_num_blks = 2;
int step100_factor122_A_blk_start[] = {0, 3, };
int step100_factor122_B_blk_start[] = {3, 24, };
int step100_factor122_blk_width[] = {3, 3, };

const int step100_factor290_height = 7;
const int step100_factor290_width = 3;
int step100_factor290_ridx[] = {18, 19, 20, 48, 49, 50, 66, };
float step100_factor290_data[] = {
-0.9999000, -0.0141727, 0.0736338, 1.0000000, 0.0000000, 0.0000000, -0.1071780, 
0.0141727, -0.9999000, -1.0064800, 0.0000000, 1.0000000, 0.0000000, -0.1304930, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0151384, 
};

const int step100_factor290_num_blks = 2;
int step100_factor290_A_blk_start[] = {0, 3, };
int step100_factor290_B_blk_start[] = {18, 48, };
int step100_factor290_blk_width[] = {3, 3, };

const int step100_factor374_height = 7;
const int step100_factor374_width = 3;
int step100_factor374_ridx[] = {0, 1, 2, 3, 4, 5, 30, };
float step100_factor374_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999810, -0.0061541, -0.0976188, 0.0002262, 
0.0000000, 1.0000000, 0.0000000, 0.0061541, -0.9999810, 1.0818200, -0.0002649, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000008, 
};

const int step100_factor374_num_blks = 1;
int step100_factor374_A_blk_start[] = {0, };
int step100_factor374_B_blk_start[] = {0, };
int step100_factor374_blk_width[] = {6, };

const int step100_factor123_height = 7;
const int step100_factor123_width = 3;
int step100_factor123_ridx[] = {21, 22, 23, 24, 25, 26, 45, };
float step100_factor123_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999790, -0.0064935, 0.0177966, -0.0019362, 
0.0000000, 1.0000000, 0.0000000, 0.0064935, -0.9999790, 0.0003883, 0.0859626, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0096105, 
};

const int step100_factor123_num_blks = 1;
int step100_factor123_A_blk_start[] = {0, };
int step100_factor123_B_blk_start[] = {21, };
int step100_factor123_blk_width[] = {6, };

const int step100_factor291_height = 7;
const int step100_factor291_width = 3;
int step100_factor291_ridx[] = {18, 19, 20, 51, 52, 53, 66, };
float step100_factor291_data[] = {
-0.9999050, -0.0138060, 0.0938148, 1.0000000, 0.0000000, 0.0000000, 0.0041882, 
0.0138060, -0.9999050, -1.0566500, 0.0000000, 1.0000000, 0.0000000, -0.0082277, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, -0.0240175, 
};

const int step100_factor291_num_blks = 2;
int step100_factor291_A_blk_start[] = {0, 3, };
int step100_factor291_B_blk_start[] = {18, 51, };
int step100_factor291_blk_width[] = {3, 3, };

const int step100_factor375_height = 4;
const int step100_factor375_width = 3;
int step100_factor375_ridx[] = {6, 7, 8, 30, };
float step100_factor375_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor375_num_blks = 1;
int step100_factor375_A_blk_start[] = {0, };
int step100_factor375_B_blk_start[] = {6, };
int step100_factor375_blk_width[] = {3, };

const int step100_factor124_height = 7;
const int step100_factor124_width = 3;
int step100_factor124_ridx[] = {24, 25, 26, 30, 31, 32, 45, };
float step100_factor124_data[] = {
-0.9999170, -0.0128987, 0.0017416, 1.0000000, 0.0000000, 0.0000000, 0.0189287, 
0.0128987, -0.9999170, -1.0045000, 0.0000000, 1.0000000, 0.0000000, -0.0372418, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0000010, 
};

const int step100_factor124_num_blks = 2;
int step100_factor124_A_blk_start[] = {0, 3, };
int step100_factor124_B_blk_start[] = {24, 30, };
int step100_factor124_blk_width[] = {3, 3, };

const int step100_factor292_height = 4;
const int step100_factor292_width = 3;
int step100_factor292_ridx[] = {54, 55, 56, 66, };
float step100_factor292_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor292_num_blks = 1;
int step100_factor292_A_blk_start[] = {0, };
int step100_factor292_B_blk_start[] = {54, };
int step100_factor292_blk_width[] = {3, };

const int step100_factor376_height = 7;
const int step100_factor376_width = 3;
int step100_factor376_ridx[] = {3, 4, 5, 6, 7, 8, 30, };
float step100_factor376_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9988600, 0.0477457, -0.1302330, 0.0080366, 
0.0000000, 1.0000000, 0.0000000, -0.0477457, -0.9988600, 1.0133600, 0.0704164, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0403407, 
};

const int step100_factor376_num_blks = 1;
int step100_factor376_A_blk_start[] = {0, };
int step100_factor376_B_blk_start[] = {3, };
int step100_factor376_blk_width[] = {6, };

const int step100_factor125_height = 4;
const int step100_factor125_width = 3;
int step100_factor125_ridx[] = {15, 16, 17, 66, };
float step100_factor125_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor125_num_blks = 1;
int step100_factor125_A_blk_start[] = {0, };
int step100_factor125_B_blk_start[] = {15, };
int step100_factor125_blk_width[] = {3, };

const int step100_factor293_height = 7;
const int step100_factor293_width = 3;
int step100_factor293_ridx[] = {24, 25, 26, 54, 55, 56, 66, };
float step100_factor293_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999870, -0.0051101, 0.0416245, 0.0111571, 
0.0000000, 1.0000000, 0.0000000, 0.0051101, -0.9999870, 1.0377000, -0.0707439, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0008512, 
};

const int step100_factor293_num_blks = 2;
int step100_factor293_A_blk_start[] = {0, 3, };
int step100_factor293_B_blk_start[] = {24, 54, };
int step100_factor293_blk_width[] = {3, 3, };

const int step100_factor377_height = 4;
const int step100_factor377_width = 3;
int step100_factor377_ridx[] = {9, 10, 11, 30, };
float step100_factor377_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step100_factor377_num_blks = 1;
int step100_factor377_A_blk_start[] = {0, };
int step100_factor377_B_blk_start[] = {9, };
int step100_factor377_blk_width[] = {3, };

const int step100_factor126_height = 7;
const int step100_factor126_width = 3;
int step100_factor126_ridx[] = {24, 25, 26, 33, 34, 35, 45, };
float step100_factor126_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999990, 0.0014360, -0.0031924, -0.0090362, 
0.0000000, 1.0000000, 0.0000000, -0.0014360, -0.9999990, 1.0062500, -0.0069320, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0044064, 
};

const int step100_factor126_num_blks = 2;
int step100_factor126_A_blk_start[] = {0, 3, };
int step100_factor126_B_blk_start[] = {24, 33, };
int step100_factor126_blk_width[] = {3, 3, };

const int step100_factor294_height = 7;
const int step100_factor294_width = 3;
int step100_factor294_ridx[] = {18, 19, 20, 54, 55, 56, 66, };
float step100_factor294_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9994450, 0.0333060, -0.0879021, 0.1678060, 
0.0000000, 1.0000000, 0.0000000, -0.0333060, -0.9994450, 1.0141500, 0.0395438, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0754473, 
};

const int step100_factor294_num_blks = 2;
int step100_factor294_A_blk_start[] = {0, 3, };
int step100_factor294_B_blk_start[] = {18, 54, };
int step100_factor294_blk_width[] = {3, 3, };

const int step100_factor378_height = 7;
const int step100_factor378_width = 3;
int step100_factor378_ridx[] = {6, 7, 8, 9, 10, 11, 30, };
float step100_factor378_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999500, 0.0099691, -0.0271660, -0.0012178, 
0.0000000, 1.0000000, 0.0000000, -0.0099691, -0.9999500, 1.0307500, 0.0003715, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0081570, 
};

const int step100_factor378_num_blks = 1;
int step100_factor378_A_blk_start[] = {0, };
int step100_factor378_B_blk_start[] = {6, };
int step100_factor378_blk_width[] = {6, };

const int step100_factor127_height = 7;
const int step100_factor127_width = 3;
int step100_factor127_ridx[] = {21, 22, 23, 33, 34, 35, 45, };
float step100_factor127_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999870, -0.0050575, 0.0211384, -0.0059093, 
0.0000000, 1.0000000, 0.0000000, 0.0050575, -0.9999870, 1.0066400, -0.0774746, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0173117, 
};

const int step100_factor127_num_blks = 2;
int step100_factor127_A_blk_start[] = {0, 3, };
int step100_factor127_B_blk_start[] = {21, 33, };
int step100_factor127_blk_width[] = {3, 3, };

const int step100_factor128_height = 7;
const int step100_factor128_width = 3;
int step100_factor128_ridx[] = {15, 16, 17, 21, 22, 23, 66, };
float step100_factor128_data[] = {
-0.9998960, 0.0144202, 0.1057210, 1.0000000, 0.0000000, 0.0000000, 0.0053362, 
-0.0144202, -0.9998960, -1.0301200, 0.0000000, 1.0000000, 0.0000000, -0.0482456, 
-0.0000000, -0.0000000, -1.0000000, 0.0000000, 0.0000000, 1.0000000, 0.0192452, 
};

const int step100_factor128_num_blks = 2;
int step100_factor128_A_blk_start[] = {0, 3, };
int step100_factor128_B_blk_start[] = {15, 21, };
int step100_factor128_blk_width[] = {3, 3, };

const int step100_node0_num_factors = 9;
const bool step100_node0_marked = false;
const bool step100_node0_fixed = true;
int step100_node0_factor_height[] = {step100_factor46_height, step100_factor5_height, step100_factor53_height, step100_factor54_height, step100_factor150_height, step100_factor151_height, step100_factor161_height, step100_factor162_height, step100_factor163_height, };
int step100_node0_factor_width[] = {step100_factor46_width, step100_factor5_width, step100_factor53_width, step100_factor54_width, step100_factor150_width, step100_factor151_width, step100_factor161_width, step100_factor162_width, step100_factor163_width, };
int* step100_node0_factor_ridx[] = {step100_factor46_ridx, step100_factor5_ridx, step100_factor53_ridx, step100_factor54_ridx, step100_factor150_ridx, step100_factor151_ridx, step100_factor161_ridx, step100_factor162_ridx, step100_factor163_ridx, };
float* step100_node0_factor_data[] = {step100_factor46_data, step100_factor5_data, step100_factor53_data, step100_factor54_data, step100_factor150_data, step100_factor151_data, step100_factor161_data, step100_factor162_data, step100_factor163_data, };
int step100_node0_factor_num_blks[] = {step100_factor46_num_blks, step100_factor5_num_blks, step100_factor53_num_blks, step100_factor54_num_blks, step100_factor150_num_blks, step100_factor151_num_blks, step100_factor161_num_blks, step100_factor162_num_blks, step100_factor163_num_blks, };
int* step100_node0_factor_A_blk_start[] = {step100_factor46_A_blk_start, step100_factor5_A_blk_start, step100_factor53_A_blk_start, step100_factor54_A_blk_start, step100_factor150_A_blk_start, step100_factor151_A_blk_start, step100_factor161_A_blk_start, step100_factor162_A_blk_start, step100_factor163_A_blk_start, };
int* step100_node0_factor_B_blk_start[] = {step100_factor46_B_blk_start, step100_factor5_B_blk_start, step100_factor53_B_blk_start, step100_factor54_B_blk_start, step100_factor150_B_blk_start, step100_factor151_B_blk_start, step100_factor161_B_blk_start, step100_factor162_B_blk_start, step100_factor163_B_blk_start, };
int* step100_node0_factor_blk_width[] = {step100_factor46_blk_width, step100_factor5_blk_width, step100_factor53_blk_width, step100_factor54_blk_width, step100_factor150_blk_width, step100_factor151_blk_width, step100_factor161_blk_width, step100_factor162_blk_width, step100_factor163_blk_width, };
const int step100_node0_parent = 1;
const int step100_node0_height = 46;
const int step100_node0_width = 27;
float step100_node0_data[] = {
2.82843, -3.29017e-10, 0.00394813, -0.353497, -0.0063244, 0.0, -0.353482, 0.00708236, 0.0, -0.353151, -0.0168566, 0.0117629, -0.353446, 0.0087165, 0.0, -0.353032, 0.0192, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.353552, -0.00110176, 0.0, -0.353517, 0.00506854, 0.0, -0.353537, 0.00344066, 0.0, -0.170741, 
0.0, 2.82843, -0.47705, 0.0063244, -0.353497, 0.0, -0.00708236, -0.353482, 0.0, 0.0168566, -0.353151, 0.329503, -0.0087165, -0.353446, 0.0, -0.0192, -0.353032, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00110176, -0.353552, 0.0, -0.00506854, -0.353517, 0.0, -0.00344066, -0.353537, 0.0, -0.0064445, 
0.0, 0.0, 3.54464, 0.0164827, -0.0454259, -0.282116, -0.00659078, -0.0336086, -0.282116, 0.00266197, -0.0475096, -0.237784, -0.0184154, -0.291976, -0.282116, -0.021928, -0.307631, -0.282116, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00333481, 0.246542, -0.282116, -0.00135608, 0.249452, -0.282116, 0.0093403, 0.231721, -0.282116, -0.00071138, 
0.0, 0.0, 0.0, 2.80619, 0.000266819, 0.103486, -0.400572, 0.0153968, 0.00165707, -0.400736, -0.0116686, 0.0272968, -0.400428, 0.0187663, 0.0300311, -0.399725, 0.0307353, 0.00165707, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.400875, 0.00447407, 0.00165707, -0.400683, 0.0114517, 0.00165707, -0.400801, 0.0097107, 0.0187671, -0.203751, 
0.0, 0.0, 0.0, 0.0, 2.80588, -0.428161, -0.0152697, -0.401202, -0.0045675, 0.0120303, -0.401534, 0.372703, -0.0173133, -0.40531, 0.30755, -0.0292486, -0.404882, -0.0045675, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00583075, -0.39691, -0.0045675, -0.0129023, -0.396699, -0.0045675, -0.0108837, -0.397041, -0.354901, -0.155059, 
0.0, 0.0, 0.0, 0.0, 0.0, 3.2834, -0.0129695, -0.0422934, -0.32945, 0.0144279, -0.0560751, -0.277253, 0.00878074, -0.0785318, -0.289644, -0.0309813, -0.362109, -0.32945, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00130666, 0.284741, -0.32945, -0.00683908, 0.28823, -0.32945, 0.0120158, -0.0321709, -0.375674, 0.0405917, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.77743, -0.000262383, -0.0104883, -0.461779, -0.0316778, 0.0174652, -0.462896, 0.0012913, 0.0173681, -0.46282, 0.0136761, 0.00409983, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.462789, -0.0089981, -0.0219434, -0.462939, -0.000898969, -0.00199399, -0.462816, -0.00455524, -0.0250457, -0.00105337, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.77685, -0.370433, 0.0315869, -0.463588, 0.441665, -0.0022871, -0.468525, 0.366354, -0.0166836, -0.472803, 0.341417, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0107349, -0.455078, -0.366532, 0.00250118, -0.455099, -0.00910156, 0.00507558, -0.460219, -0.399074, 0.0210192, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.94649, 0.00443946, -0.0698297, -0.337003, -0.00251833, -0.0962736, -0.352204, -0.00912904, -0.129979, -0.360305, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.18537e-05, -0.0024195, -0.449401, 0.0040443, 0.338839, -0.404394, 0.00143699, -0.0399064, -0.459224, -0.0361902, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.73858, 0.000516776, -0.0870213, -0.546293, 0.0406981, 0.00411761, -0.544674, 0.0582933, -0.000390078, -0.364304, 0.0248922, -0.0435798, -0.362796, 0.0414253, 0.0, -0.364222, 0.0260612, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.182389, 0.00642818, 0.00352847, -0.18219, 0.00903527, 0.00269676, -0.182344, 0.010334, 0.00768283, 0.0596702, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.73632, -0.148331, -0.0398161, -0.557963, 0.0877049, -0.0572016, -0.564315, 0.0363828, -0.0248439, -0.364609, 0.40217, -0.041391, -0.363103, 0.0, -0.0260139, -0.364527, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00807188, -0.171012, -0.0861341, -0.0113956, -0.161988, -0.0241984, -0.00994672, -0.179507, -0.144218, 0.0275092, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.49864, -0.00829076, 0.0958997, -0.437389, -0.00318636, 0.0530506, -0.406927, -0.0101146, -0.0148391, -0.269859, -0.00938369, -0.309144, -0.285825, 0.00328538, -0.323913, -0.285825, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00104201, 0.165039, -0.0452798, 0.0029025, 0.198693, -0.0835606, 0.00423715, 0.135627, -0.0109379, 0.204807, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6832, -0.00152579, -0.0771736, -0.670601, 0.0189813, -0.000777036, -0.447257, -0.00192758, -0.020793, -0.446878, 0.0174929, -0.000883166, -0.44722, -0.00144737, -0.0203852, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.223483, -0.00508818, -0.00585977, -0.223562, -0.000737868, -0.0014398, -0.223537, -0.00146861, -0.00589774, 0.265118, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.65857, -0.145982, -0.0244997, -0.738665, 0.0280159, 0.00202449, -0.452508, 0.535167, -0.0185959, -0.441499, 0.0103098, 8.72665e-05, -0.441362, 0.441381, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00662614, -0.194282, -0.138782, 0.00197208, -0.1809, -0.0597766, 0.00484633, -0.208387, -0.21326, 0.0710039, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.17417, -0.00455526, -0.0102921, -0.504969, -0.0110158, -0.0128606, -0.339178, -0.00872664, -0.397819, -0.353977, -0.00922528, -0.0549294, -0.334626, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00131267, 0.157015, -0.07254, 0.00259595, 0.200435, -0.112153, 0.00476245, 0.118768, -0.0373871, 0.00168908, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.59771, -0.0100246, -0.0244123, -0.57714, -0.0206269, 0.00125431, -0.577474, 0.00445501, -0.0022708, -0.577177, -0.0193691, -0.00206398, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.288208, -0.0106866, -0.0181111, -0.288562, -0.00395144, -0.00914392, -0.288164, -0.0112127, -0.0217868, 0.100727, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.52446, -0.399382, 0.0180787, -0.610191, 0.69312, -0.0097076, -0.602645, 0.418773, 0.0157032, -0.600654, 0.565407, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0163953, -0.225622, -0.233371, 0.00954864, -0.202001, -0.126592, 0.0156075, -0.281604, -0.338446, 0.0233413, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.81608, -0.00574913, -0.0819522, -0.36714, -0.00875739, -0.192343, -0.40061, -0.00379457, -0.132906, -0.380637, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.41688e-05, 0.136295, -0.130154, -5.46244e-05, 0.196453, -0.166758, 0.00397694, 0.0747513, -0.135623, -0.0482748, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.70794, -0.000580548, 0.0418302, -0.614985, 0.0240378, -0.00679144, -0.615537, -0.000395809, -0.0111485, -0.369152, -0.00988435, 0.0311275, -0.369041, 0.0134074, 0.0, -0.369114, -0.0112147, 0.0, -0.123053, -0.000626081, -0.00422213, -0.123084, 0.00222378, -0.00227839, -0.123023, 0.000295312, -0.00396894, -0.169281, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.69848, -0.312927, -0.0296283, -0.639331, 0.0809786, -0.00278377, -0.636133, 0.187108, 0.00983958, -0.370448, 0.387804, -0.0135338, -0.370331, 0.0, 0.0111746, -0.37041, 0.0, 0.00303181, -0.101054, -0.0924048, 0.000265527, -0.089999, -0.0480737, 0.0024579, -0.119476, -0.136378, -0.096998, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.4993, 0.00795591, 0.110788, -0.461361, 0.000820056, 0.134621, -0.542933, 0.0052927, -0.0330093, -0.251464, -0.0087394, -0.295494, -0.285771, 0.0049498, -0.30556, -0.285771, -0.0048842, 0.127327, 0.0449729, -0.00241241, 0.133691, -0.00205644, -0.00328928, 0.127529, 0.0854506, 0.0192848, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.63698, -0.00635899, -0.00527337, -0.775145, -0.0373897, 0.000390308, -0.46423, -0.0337384, 0.0665719, -0.465398, -0.00361413, 0.0241189, -0.464104, -0.0345889, 0.0331061, -0.154742, -0.00730912, -0.0106556, -0.15495, -0.00318241, -0.00543041, -0.154748, -0.00714081, -0.0130559, 0.14355, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.56818, -0.38326, 0.0281905, -0.879483, 0.183971, 0.0326307, -0.479153, 0.54224, 0.0028742, -0.468943, 0.398928, 0.0343773, -0.467272, 0.412104, 0.0108688, -0.0868379, -0.14215, 0.00761661, -0.0600582, -0.0952132, 0.0111207, -0.122364, -0.191415, 0.0295945, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.85801, -0.00314526, -0.0464923, -0.626026, 0.00321762, -0.0591727, -0.328564, -0.00237754, -0.100068, -0.342485, 0.00335897, -0.101582, -0.340701, -0.00245846, 0.100565, -0.00629124, -0.00105441, 0.118558, -0.0386185, -0.000718572, 0.0883068, 0.0175624, -0.13319, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.52044, -0.00347321, 0.0268781, -0.629854, -0.0197954, 0.0594831, -0.629842, 0.0201025, 0.00262128, -0.629778, -0.0219081, 0.0211838, -0.209954, -0.00366603, -0.00735272, -0.210046, 0.000874293, -0.00323352, -0.209943, -0.00187414, -0.00762476, -0.019796, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.44643, -0.263692, 0.0182623, -0.677008, 0.742208, -0.0236465, -0.659079, 0.153002, 0.0207333, -0.658504, 0.557667, 0.00594678, -0.146009, -0.187947, 0.00119939, -0.11516, -0.115652, 0.00575822, -0.189505, -0.261827, 0.00421695, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.11701, 0.00476558, -0.0242504, -0.423515, -0.014954, -0.379771, -0.45001, 0.00475953, -0.0793666, -0.416357, -0.00560887, 0.158277, 0.038757, -0.0027319, 0.172282, -0.0180267, -0.00342897, 0.153218, 0.085758, -0.000297623, 
};
const int step100_node0_num_blks = 2;
int step100_node0_A_blk_start[] = {0, 9, };
int step100_node0_B_blk_start[] = {0, 36, };
int step100_node0_blk_width[] = {9, 9, };
const float step100_node0_H_correct_cond = 6.057467301007514;
float step100_node0_H_correct_data[] = {
8.0000162649, -9.3060155331e-10, 0.0111670093359, -0.99984151971, -0.017888122692, 0.0, -0.99979909326, 0.0200319594948, 0.0, -0.99886288293, -0.047677713138, 0.033270539247, -0.99969726978, 0.024654010095, 0.0, -0.9985262997600001, 0.05430585599999999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999970833599999, -0.0031162510368, 0.0, -0.99989808831, 0.014336010592199999, 0.0, -0.99995465691, 0.0097316659638, 0.0, -0.48292896663, 
-9.3060155331e-10, 8.0000162649, -1.349302531501299, 0.017888122808306522, -0.9998415197079192, 0.0, -0.020031959378498415, -0.9997990932623303, 0.0, 0.04767771325419268, -0.9988628829244539, 0.9319761702861298, -0.02465400997871026, -0.9996972697828679, 0.0, -0.05430585588384647, -0.9985262997663171, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0031162511531246185, -0.9999970833596374, 0.0, -0.014336010475886897, -0.9998980883116677, 0.0, -0.009731665847480317, -0.9999546569111321, 0.0, -0.018227817078823306, 
0.0111670093359, -1.349302531501299, 12.792065019830495, 0.054012530597389995, 0.007592312120628007, -0.9999996582399998, -0.02137889546986, 0.049526162273986804, -0.9999996582399998, -1.7468299987861613e-09, -2.9604215799015344e-07, -1.000001642451623, -0.06251320788697999, -0.866303980464855, -0.9999996582399998, -0.06996132215016, -0.9219514281439999, -0.9999996582399998, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00989923705264, 1.0425602665882912, -0.9999996582399998, -0.00378459947741, 1.0528828333848301, -0.9999996582399998, 0.03335355780919, 0.9900359354629658, -0.9999996582399998, -0.00012134494252999984, 
-0.99984151971, 0.017888122808306522, 0.054012530597389995, 7.99997412254365, 3.327680000274133e-09, 0.2857513449468, -0.9992797396530899, 0.03791323114706, 1.9870100001068758e-08, -0.9995530524590409, -0.02980210577212, 0.0706064437671, -0.99909361080418, 0.0425326600989, 0.0796229391158, -0.9973914059715999, 0.0721586440425, 1.9870100001068758e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9998899102622689, 0.014772232902620001, 1.9870100001068758e-08, -0.999479836155192, 0.03221979190422, 1.9870100001068758e-08, -0.9996172960482941, 0.027617284568879998, 0.048014014955799995, -0.511460070471926, 
-0.017888122692, -0.9998415197079192, 0.007592312120628007, 3.327680000274133e-09, 8.00002628502755, -1.188525401444566, -0.037913279369546006, -0.9992838238220648, -4.15578396726748e-08, 0.029802442456393005, -0.9995567400575035, 0.9400160138747192, -0.042532757400772, -0.9990959689868004, 0.8757717800724709, -0.072158758876775, -0.9973933659310894, -4.15578396726748e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.014772297208124001, -0.9998934899559727, -4.15578396726748e-08, -0.032220117607725, -0.9994831727210338, -4.15578396726748e-08, -0.027617416620969, -0.9996204362757407, -0.9829892372567453, -0.43174105068442703, 
0.0, 0.0, -0.9999996582399998, 0.2857513449468, -1.188525401444566, 11.054336191572999, -0.07564039577981999, 0.0439877770044, -0.99999958363048, 1.1155718000753419e-07, -1.0279199998486401e-07, -1.0000018817942, 1.4853569999771362e-07, -2.2667219998710622e-07, -1.0000007892794, -0.12438059229739999, -0.9256257081462, -0.99999958363048, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.044219541201209994, 1.03576954264602, -0.99999958363048, -0.05801368267442, 1.0470361127332, -0.99999958363048, 3.1323490000024224e-07, 2.584051999983842e-07, -1.0000016749724, 0.17878431997308, 
-0.99979909326, -0.020031959378498415, -0.02137889546986, -0.9992797396530899, -0.037913279369546006, -0.07564039577981999, 8.000019826280518, -1.206588199992527e-08, -0.02359238429281, -0.9977104558851725, -0.06767741536650199, 0.03055435619744, -0.9999906011614679, 0.00462317686334, 0.03712877030728, -0.9994121192223899, 0.03429248274, 0.016925125613089998, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9997342852358603, -0.02314750103526, -0.05540812268580999, -0.9999858313517331, -0.0056967643554899985, -3.286950999975904e-08, -0.9999472588278864, -0.01030131451153, -0.06492935309902, 0.14093673547214638, 
0.0200319594948, -0.9997990932623303, 0.049526162273986804, 0.03791323114706, -0.9992838238220648, 0.0439877770044, -1.206588199992527e-08, 8.000014051423769, -1.003361035960405, 0.06767729653059501, -0.9977079662669586, 0.9806514560617123, -0.004623214333868, -0.9999910476906679, 0.9161098088934978, -0.03429247904404, -0.9994135987519063, 0.9733358088622812, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.023147501320325, -0.9997331426381053, -0.9925255384869018, 0.005696788449357, -0.9999848362935024, -5.555894583012575e-08, 0.010301300372627999, -0.9999486457764855, -0.9401160664976168, 0.11681622242890871, 
0.0, 0.0, -0.9999996582399998, 1.9870100001068758e-08, -4.15578396726748e-08, -0.99999958363048, -0.02359238429281, -1.003361035960405, 9.007284279919125, 1.9071109999696452e-08, -1.4201266196907346e-07, -0.9999998571222839, -1.92654100012696e-08, 1.3134295103362363e-07, -0.999999654819353, -2.4457049995667798e-08, 1.2372739410149563e-06, -0.999999855364754, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.5441071999895837e-08, 1.8594140488193425e-07, -0.999999507278545, 0.01787609125748, 1.0034779666525817, -1.000000097425968, -3.000635999954893e-08, 3.504608410087258e-07, -0.999998712430793, -0.127210861223019, 
-0.99886288293, 0.04767771325419268, -1.7468299987861613e-09, -0.9995530524590409, 0.029802442456393005, 1.1155718000753419e-07, -0.9977104558851725, 0.06767729653059501, 1.9071109999696452e-08, 8.000026796259041, -1.8868400144320939e-10, -0.24361315109985998, -0.9973866793768739, 0.072289300621704, 9.01594000040424e-09, -0.9948033588497682, 0.10185172362928999, 1.7812900001415273e-08, -0.99767564832, 0.068169281076, -0.119346768684, -0.9935458696799999, 0.113446498074, 0.0, -0.9974510847599999, 0.07137068109599999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.9858311030348975e-07, 1.2048310001386799e-08, 3.930464999709154e-08, 6.217689563999726e-07, 4.6601091000784644e-08, 4.2673915999724114e-08, -1.591581727650264e-06, 1.6758521599845582e-07, 1.6453039999514125e-08, 0.3049587431812294, 
-0.047677713138, -0.9988628829244539, -2.9604215799015344e-07, -0.02980210577212, -0.9995567400575035, -1.0279199998486401e-07, -0.06767741536650199, -0.9977079662669586, -1.4201266196907346e-07, -1.8868400144320939e-10, 8.000007975295055, -0.8273871130517088, -0.072289269899001, -0.9973848772041943, 4.3014318536174456e-07, -0.101851415382706, -0.9948014009199593, -9.515262452885863e-08, -0.068169124011904, -0.9976740351884529, 1.1004432934052752, -0.11344650538569599, -0.9935445933591672, 0.0, -0.071370576036272, -0.9974490528373088, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.1498848896324128e-08, -1.0648414084203422e-06, -3.137545693028189e-07, -9.45197739962984e-08, -3.842326062652581e-07, -9.04850542288123e-08, -4.439538699659901e-08, 8.161075499111802e-07, -8.353356439506419e-07, 0.1356716381620792, 
0.033270539247, 0.9319761702861298, -1.000001642451623, 0.0706064437671, 0.9400160138747192, -1.0000018817942, 0.03055435619744, 0.9806514560617123, -0.9999998571222839, -0.24361315109985998, -0.8273871130517088, 12.96077436024938, -0.00627569783893, 0.06456950461712008, -0.999999545438393, 0.013872185206819996, 0.006843752621470033, -0.9999998381713465, -1.5937899997639638e-08, -2.8488599994109705e-09, -1.00000139918026, 0.004880394794199994, -1.03132901652589, -0.999998778, 0.047048101612700004, -1.0814522033865601, -0.999998778, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.260878889983e-08, -6.24261582054127e-07, 5.2771885002070285e-08, -1.011266000618749e-08, -1.8319309036743468e-06, 1.485257400123656e-07, 5.238427000317966e-08, -7.827956740294868e-07, 1.0398836104509137e-07, 0.650164558596036, 
-0.99969726978, -0.02465400997871026, -0.06251320788697999, -0.99909361080418, -0.042532757400772, 1.4853569999771362e-07, -0.9999906011614679, -0.004623214333868, -1.92654100012696e-08, -0.9973866793768739, -0.072289269899001, -0.00627569783893, 7.9999952341792335, 6.113483996989947e-09, -0.23187595963061997, -0.999558022719925, 0.029671632859853997, -1.059544600156307e-08, -0.9999902124001139, -0.004130181448983999, -0.04575994265275999, -0.9991443082551955, 0.041326981934839996, -4.534199999951921e-09, -1.0000002412072988, -0.0009211058870200005, -0.05232786216299999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.693628547645005e-07, 3.914719500133362e-08, -3.252293200239196e-08, 2.774992757891665e-07, 1.7456824001598453e-08, 3.5037419982765845e-09, 2.3761958534579435e-07, -2.9423593999297236e-08, -3.790292599670741e-08, 0.821550167797586, 
0.024654010095, -0.9996972697828679, -0.866303980464855, 0.0425326600989, -0.9990959689868004, -2.2667219998710622e-07, 0.00462317686334, -0.9999910476906679, 1.3134295103362363e-07, 0.072289300621704, -0.9973848772041943, 0.06456950461712008, 6.113483996989947e-09, 8.000004169836656, -0.6353873845122551, -0.029671615352718006, -0.9995609284532571, -3.8517777336139643e-07, 0.004130177885009998, -0.9999929210041619, 1.17076166503079, -0.041327014289873, -0.999145533587761, 1.4075935113632707e-07, 0.0009210851665909999, -0.9999995036587077, 1.146062856951808, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.1357997322679753e-08, 1.295574591105676e-06, 4.777905363200411e-07, 3.494721400011954e-08, -6.02151746965594e-07, 2.7478319517352676e-09, -1.0695298998215768e-08, -9.82573700261171e-07, -7.428637238239353e-08, 0.245552178176759, 
0.0, 0.0, -0.9999996582399998, 0.0796229391158, 0.8757717800724709, -1.0000007892794, 0.03712877030728, 0.9161098088934978, -0.999999654819353, 9.01594000040424e-09, 4.3014318536174456e-07, -0.999999545438393, -0.23187595963061997, -0.6353873845122551, 10.819176454766904, 0.018229177697319996, -0.05788358324632698, -1.000003329567404, -1.0694913000024926e-07, 1.0039329998152129e-08, -1.000002517425478, 0.008482288637749996, -1.096103372338607, -1.0000033512889823, -2.868415300767696e-08, -1.5842813601944095e-07, -1.00000358136628, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.0417946802586e-08, 2.243583464776559e-06, -4.330751243252446e-07, -3.154358000372361e-08, 1.0170401705797549e-06, -1.5070041850139705e-07, 5.175182001834175e-09, 1.6378012619934301e-06, -4.843901597140676e-07, -0.15732112004541499, 
-0.9985262997600001, -0.05430585588384647, -0.06996132215016, -0.9973914059715999, -0.072158758876775, -0.12438059229739999, -0.9994121192223899, -0.03429247904404, -2.4457049995667798e-08, -0.9948033588497682, -0.101851415382706, 0.013872185206819996, -0.999558022719925, -0.029671615352718006, 0.018229177697319996, 8.0000163748683, -1.196040100012275e-07, -0.05029324350169201, -0.9994305210244491, -0.033799806952788, 0.007227637685920003, -0.9999347250325754, 0.011662662610880002, -0.003036016256274, -0.9995325779772742, -0.030592469680506006, -6.993828654000019e-05, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.054747913440085e-07, 8.801869992335268e-09, -7.484813200296439e-08, -1.9643234089136243e-06, -4.7945452000455573e-08, -5.611925800394748e-08, 7.787375923670572e-07, -9.929348400084056e-08, -2.2620402999859002e-07, 0.19300254552408716, 
0.05430585599999999, -0.9985262997663171, -0.9219514281439999, 0.0721586440425, -0.9973933659310894, -0.9256257081462, 0.03429248274, -0.9994135987519063, 1.2372739410149563e-06, 0.10185172362928999, -0.9948014009199593, 0.006843752621470033, 0.029671632859853997, -0.9995609284532571, -0.05788358324632698, -1.196040100012275e-07, 8.00001321632981, -0.9721830651278902, 0.033799706627769995, -0.9994302458524539, 1.1137210291411337, -0.011662695778470003, -0.9999325544464859, 1.0380461783225843, 0.0305923616813935, -0.999532833359421, 1.089229228341748, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.7965936707941928e-08, 5.790401809771823e-07, -4.110045390291547e-07, 4.01353450029891e-08, -3.641238432948798e-08, 2.1876095199192454e-07, 5.522764997958452e-09, -1.2684132697514394e-07, 2.6973408687876303e-07, 0.045087866831215, 
0.0, 0.0, -0.9999996582399998, 1.9870100001068758e-08, -4.15578396726748e-08, -0.99999958363048, 0.016925125613089998, 0.9733358088622812, -0.999999855364754, 1.7812900001415273e-08, -9.515262452885863e-08, -0.9999998381713465, -1.059544600156307e-08, -3.8517777336139643e-07, -1.000003329567404, -0.05029324350169201, -0.9721830651278902, 8.947653555152995, 7.823034999947899e-09, 4.0812103129836917e-07, -1.0000001825949407, 1.5579076003578156e-08, -6.113653407714638e-07, -0.999997925569564, -3.2083986646588966e-08, -8.066660482529286e-07, -1.0000000425738789, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.4454845499601494e-08, 3.434225683793228e-07, 1.0880941839573969e-06, 1.3000719995800415e-09, -7.027707961243576e-07, -3.340776652887639e-07, -4.795779499930562e-08, -2.2866336232347074e-07, 7.199534439997659e-07, -0.2217505231014907, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99767564832, -0.068169124011904, -1.5937899997639638e-08, -0.9999902124001139, 0.004130177885009998, -1.0694913000024926e-07, -0.9994305210244491, 0.033799706627769995, 7.823034999947899e-09, 7.999990714464216, -1.767345400167567e-08, 0.14992511553763, -0.9989652324814542, 0.04545354469798, 7.527064001567063e-09, -0.9999949571186931, 0.0032091338060499974, 6.490679999892108e-08, -0.9996414668799999, -0.026766226738999997, 0.08429140234999999, -0.9993408855399999, 0.036306434756, 0.0, -0.99953856516, -0.030368734717999994, 0.0, 1.2142384517775385e-06, -9.394130000537105e-09, -1.6809799982526576e-09, 8.914653140086748e-07, 1.0547605999809895e-08, -4.0611139997165325e-09, 1.1167971752744756e-07, -3.658304899993807e-08, 2.8857370001320776e-08, -0.6587806639035989, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.068169281076, -0.9976740351884529, -2.8488599994109705e-09, -0.004130181448983999, -0.9999929210041619, 1.0039329998152129e-08, -0.033799806952788, -0.9994302458524539, 4.0812103129836917e-07, -1.767345400167567e-08, 7.999981480057097, -1.6188054331568087, -0.045453268212358997, -0.9989627689536054, -5.521931526084215e-07, -0.0032091352971420004, -0.9999926457548419, -2.441482440668268e-07, 0.026766220293696002, -0.9996407807003762, 1.0464632669121299, -0.036306442609532, -0.9993385805192553, 0.0, 0.030368723002472, -0.9995374661283445, 0.0, -1.793817764350458e-08, -4.0867108727076074e-07, -7.923012121781478e-09, 2.1489705679665842e-08, 3.2035329800658534e-07, 6.623042173806386e-08, -5.104109900267047e-08, 4.1705554282587605e-07, 4.7615044434783467e-07, -0.318259520596, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.119346768684, 1.1004432934052752, -1.00000139918026, -0.04575994265275999, 1.17076166503079, -1.000002517425478, 0.007227637685920003, 1.1137210291411337, -1.0000001825949407, 0.14992511553763, -1.6188054331568087, 13.598323820425655, 0.011145528780890007, 0.07554985927851314, -0.999998488094598, 0.006544966491145504, 0.024703247862397203, -0.9999969156578538, -2.7131060000405195e-08, 2.7346863001760545e-07, -1.0000002479575, -0.04178374982559999, -0.9175747511395199, -0.9999984603, -0.0016161113570000011, -0.9538039310739399, -0.9999984603, 3.350941200071028e-08, -1.0087617162341648e-06, 3.6641337033261014e-08, -6.023772999353205e-09, 3.3691722760807487e-07, 2.5795737880663745e-07, 2.4258620002134226e-08, 5.759868153908052e-07, -2.4867621000662665e-07, 0.10989120468126999, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9935458696799999, -0.11344650538569599, 0.004880394794199994, -0.9991443082551955, -0.041327014289873, 0.008482288637749996, -0.9999347250325754, -0.011662695778470003, 1.5579076003578156e-08, -0.9989652324814542, -0.045453268212358997, 0.011145528780890007, 8.000002468104705, -2.215517000414355e-08, -0.009070526662331999, -0.9991054773297261, -0.042247524838339004, 0.003562787371250001, -0.9973917044632569, -0.072175633588813, 0.14291522506906001, -0.9999590850483139, -0.009154384118639999, 0.06132748856538999, -0.997125096867862, -0.07576975449909999, 0.08502655522139, -1.354436809199791e-06, -2.3294444997964573e-08, -1.2667530899765438e-07, 3.9435884810374586e-07, 1.4476513998790088e-08, -1.785828639820721e-08, -4.914040798900175e-07, -4.378110700024834e-08, -4.983864900152915e-08, 0.2831809068151288, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.113446498074, -0.9935445933591672, -1.03132901652589, 0.041326981934839996, -0.999145533587761, -1.096103372338607, 0.011662662610880002, -0.9999325544464859, -6.113653407714638e-07, 0.04545354469798, -0.9989627689536054, 0.07554985927851314, -2.215517000414355e-08, 7.999998728413259, -1.038010173907365, 0.042247292677904495, -0.9991063644650812, 0.051145533484411275, 0.07217556223471999, -0.997392351460614, 1.117100517017119, 0.009154347674819999, -0.9999578678347513, 0.992705541648089, 0.07576974874956, -0.9971260167764491, 1.026486731813161, -7.754740159940325e-08, -5.040517069552912e-07, -3.194041230186881e-07, 4.9935162198084586e-08, 1.4148072927669323e-07, -4.591307073066807e-07, 6.785085999665288e-08, 6.643279794410822e-07, -1.2637624059409172e-06, 0.032625833224309994, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.999998778, -4.534199999951921e-09, 1.4075935113632707e-07, -1.0000033512889823, -0.003036016256274, 1.0380461783225843, -0.999997925569564, 7.527064001567063e-09, -5.521931526084215e-07, -0.999998488094598, -0.009070526662331999, -1.038010173907365, 9.077561899041255, 5.674336998453077e-10, -1.046029826276884e-07, -1.0000005292447307, 2.831646800054823e-08, -1.0226612803091339e-07, -1.000001051350503, 6.819620000370286e-09, 2.7400946207745434e-07, -1.000002293682693, -7.667899997371347e-09, 1.042863760961665e-06, -1.000000830433557, -4.115495997166853e-09, 1.3810875389811692e-06, -1.0827872899760756e-07, -1.3354277800456658e-08, 1.9021434606739903e-06, -6.520555391113008e-08, -1.1564743999754318e-08, 2.1201879691098868e-08, 1.5359294141870584e-07, -0.438113707794688, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9974510847599999, -0.071370576036272, 0.047048101612700004, -1.0000002412072988, 0.0009210851665909999, -2.868415300767696e-08, -0.9995325779772742, 0.0305923616813935, -3.2083986646588966e-08, -0.9999949571186931, -0.0032091352971420004, 0.006544966491145504, -0.9991054773297261, 0.042247292677904495, 5.674336998453077e-10, 7.999996684198172, 4.155365599663309e-08, 0.1033110516784585, -0.9995502331063566, -0.0299740593277088, 0.09419424539457598, -0.9994506364474199, 0.033099466061435996, -2.9845376000229573e-08, -0.9994349429833852, -0.03357614545994, 0.040185131803584, -9.318056813021042e-07, 6.122960018445555e-10, 3.5302913805280136e-08, 1.1568973607579122e-06, -7.547364000031598e-09, 9.118366459939951e-09, -4.6447438363514574e-07, -3.3966074498158716e-08, 4.1984895602838594e-08, -0.2533679431666683, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.07137068109599999, -0.9974490528373088, -1.0814522033865601, -0.0009211058870200005, -0.9999995036587077, -1.5842813601944095e-07, -0.030592469680506006, -0.999532833359421, -8.066660482529286e-07, 0.0032091338060499974, -0.9999926457548419, 0.024703247862397203, -0.042247524838339004, -0.9991063644650812, -1.046029826276884e-07, 4.155365599663309e-08, 7.999992737935376, -1.34281840380495, 0.029974074455441993, -0.9995501014616869, 1.0708894732893715, -0.033099254820069, -0.9994507735127505, -4.764807387930863e-07, 0.03357612436557499, -0.9994343488498765, 0.977912608956132, 3.288603979773335e-08, -5.204944226806247e-07, 7.87222535304632e-07, 3.620292439833791e-08, -3.589579163451123e-07, 4.878519637130004e-07, -3.906319740594802e-08, -8.100589153112014e-07, 9.427162181111221e-08, -0.066633214452383, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.999998778, -0.05232786216299999, 1.146062856951808, -1.00000358136628, -6.993828654000019e-05, 1.089229228341748, -1.0000000425738789, 6.490679999892108e-08, -2.441482440668268e-07, -0.9999969156578538, 0.003562787371250001, 0.051145533484411275, -1.0000005292447307, 0.1033110516784585, -1.34281840380495, 11.395148307758676, 2.9073080001105587e-08, -7.351800922091483e-07, -1.0000016743164948, -0.049142928182244, -0.9420519027905022, -1.000001000617411, 5.6123348001425144e-08, -1.1612220412255837e-06, -1.0000015817105412, -5.717332040258857e-08, 6.316387806004261e-07, 2.10094670192782e-07, 1.3059988020186518e-09, -6.789504422222047e-08, -2.584638169218116e-08, -8.860991997726702e-09, 7.265317824438519e-07, 4.4567642882319354e-07, 0.05777271484122999, 
};
float step100_node0_M_correct_data[] = {
2.82843, -3.29017e-10, 0.00394813, -0.353497, -0.0063244, 0.0, -0.353482, 0.00708236, 0.0, -0.353151, -0.0168566, 0.0117629, -0.353446, 0.0087165, 0.0, -0.353032, 0.0192, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.353552, -0.00110176, 0.0, -0.353517, 0.00506854, 0.0, -0.353537, 0.00344066, 0.0, -0.170741, 
0.0, 2.82843, -0.47705, 0.0063244, -0.353497, 0.0, -0.00708236, -0.353482, 0.0, 0.0168566, -0.353151, 0.329503, -0.0087165, -0.353446, 0.0, -0.0192, -0.353032, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00110176, -0.353552, 0.0, -0.00506854, -0.353517, 0.0, -0.00344066, -0.353537, 0.0, -0.0064445, 
0.0, 0.0, 3.54464, 0.0164827, -0.0454259, -0.282116, -0.00659078, -0.0336086, -0.282116, 0.00266197, -0.0475096, -0.237784, -0.0184154, -0.291976, -0.282116, -0.021928, -0.307631, -0.282116, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00333481, 0.246542, -0.282116, -0.00135608, 0.249452, -0.282116, 0.0093403, 0.231721, -0.282116, -0.00071138, 
0.0, 0.0, 0.0, 2.80619, 0.000266819, 0.103486, -0.400572, 0.0153968, 0.00165707, -0.400736, -0.0116686, 0.0272968, -0.400428, 0.0187663, 0.0300311, -0.399725, 0.0307353, 0.00165707, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.400875, 0.00447407, 0.00165707, -0.400683, 0.0114517, 0.00165707, -0.400801, 0.0097107, 0.0187671, -0.203751, 
0.0, 0.0, 0.0, 0.0, 2.80588, -0.428161, -0.0152697, -0.401202, -0.0045675, 0.0120303, -0.401534, 0.372703, -0.0173133, -0.40531, 0.30755, -0.0292486, -0.404882, -0.0045675, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00583075, -0.39691, -0.0045675, -0.0129023, -0.396699, -0.0045675, -0.0108837, -0.397041, -0.354901, -0.155059, 
0.0, 0.0, 0.0, 0.0, 0.0, 3.2834, -0.0129695, -0.0422934, -0.32945, 0.0144279, -0.0560751, -0.277253, 0.00878074, -0.0785318, -0.289644, -0.0309813, -0.362109, -0.32945, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00130666, 0.284741, -0.32945, -0.00683908, 0.28823, -0.32945, 0.0120158, -0.0321709, -0.375674, 0.0405917, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.77743, -0.000262383, -0.0104883, -0.461779, -0.0316778, 0.0174652, -0.462896, 0.0012913, 0.0173681, -0.46282, 0.0136761, 0.00409983, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.462789, -0.0089981, -0.0219434, -0.462939, -0.000898969, -0.00199399, -0.462816, -0.00455524, -0.0250457, -0.00105337, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.77685, -0.370433, 0.0315869, -0.463588, 0.441665, -0.0022871, -0.468525, 0.366354, -0.0166836, -0.472803, 0.341417, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0107349, -0.455078, -0.366532, 0.00250118, -0.455099, -0.00910156, 0.00507558, -0.460219, -0.399074, 0.0210192, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.94649, 0.00443946, -0.0698297, -0.337003, -0.00251833, -0.0962736, -0.352204, -0.00912904, -0.129979, -0.360305, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.18537e-05, -0.0024195, -0.449401, 0.0040443, 0.338839, -0.404394, 0.00143699, -0.0399064, -0.459224, -0.0361902, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.73858, 0.000516776, -0.0870213, -0.546293, 0.0406981, 0.00411761, -0.544674, 0.0582933, -0.000390078, -0.364304, 0.0248922, -0.0435798, -0.362796, 0.0414253, 0.0, -0.364222, 0.0260612, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.182389, 0.00642818, 0.00352847, -0.18219, 0.00903527, 0.00269676, -0.182344, 0.010334, 0.00768283, 0.0596702, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.73632, -0.148331, -0.0398161, -0.557963, 0.0877049, -0.0572016, -0.564315, 0.0363828, -0.0248439, -0.364609, 0.40217, -0.041391, -0.363103, 0.0, -0.0260139, -0.364527, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00807188, -0.171012, -0.0861341, -0.0113956, -0.161988, -0.0241984, -0.00994672, -0.179507, -0.144218, 0.0275092, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.49864, -0.00829076, 0.0958997, -0.437389, -0.00318636, 0.0530506, -0.406927, -0.0101146, -0.0148391, -0.269859, -0.00938369, -0.309144, -0.285825, 0.00328538, -0.323913, -0.285825, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00104201, 0.165039, -0.0452798, 0.0029025, 0.198693, -0.0835606, 0.00423715, 0.135627, -0.0109379, 0.204807, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6832, -0.00152579, -0.0771736, -0.670601, 0.0189813, -0.000777036, -0.447257, -0.00192758, -0.020793, -0.446878, 0.0174929, -0.000883166, -0.44722, -0.00144737, -0.0203852, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.223483, -0.00508818, -0.00585977, -0.223562, -0.000737868, -0.0014398, -0.223537, -0.00146861, -0.00589774, 0.265118, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.65857, -0.145982, -0.0244997, -0.738665, 0.0280159, 0.00202449, -0.452508, 0.535167, -0.0185959, -0.441499, 0.0103098, 8.72665e-05, -0.441362, 0.441381, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00662614, -0.194282, -0.138782, 0.00197208, -0.1809, -0.0597766, 0.00484633, -0.208387, -0.21326, 0.0710039, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.17417, -0.00455526, -0.0102921, -0.504969, -0.0110158, -0.0128606, -0.339178, -0.00872664, -0.397819, -0.353977, -0.00922528, -0.0549294, -0.334626, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00131267, 0.157015, -0.07254, 0.00259595, 0.200435, -0.112153, 0.00476245, 0.118768, -0.0373871, 0.00168908, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.59771, -0.0100246, -0.0244123, -0.57714, -0.0206269, 0.00125431, -0.577474, 0.00445501, -0.0022708, -0.577177, -0.0193691, -0.00206398, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.288208, -0.0106866, -0.0181111, -0.288562, -0.00395144, -0.00914392, -0.288164, -0.0112127, -0.0217868, 0.100727, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.52446, -0.399382, 0.0180787, -0.610191, 0.69312, -0.0097076, -0.602645, 0.418773, 0.0157032, -0.600654, 0.565407, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0163953, -0.225622, -0.233371, 0.00954864, -0.202001, -0.126592, 0.0156075, -0.281604, -0.338446, 0.0233413, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.81608, -0.00574913, -0.0819522, -0.36714, -0.00875739, -0.192343, -0.40061, -0.00379457, -0.132906, -0.380637, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.41688e-05, 0.136295, -0.130154, -5.46244e-05, 0.196453, -0.166758, 0.00397694, 0.0747513, -0.135623, -0.0482748, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.70794, -0.000580548, 0.0418302, -0.614985, 0.0240378, -0.00679144, -0.615537, -0.000395809, -0.0111485, -0.369152, -0.00988435, 0.0311275, -0.369041, 0.0134074, 0.0, -0.369114, -0.0112147, 0.0, -0.123053, -0.000626081, -0.00422213, -0.123084, 0.00222378, -0.00227839, -0.123023, 0.000295312, -0.00396894, -0.169281, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.69848, -0.312927, -0.0296283, -0.639331, 0.0809786, -0.00278377, -0.636133, 0.187108, 0.00983958, -0.370448, 0.387804, -0.0135338, -0.370331, 0.0, 0.0111746, -0.37041, 0.0, 0.00303181, -0.101054, -0.0924048, 0.000265527, -0.089999, -0.0480737, 0.0024579, -0.119476, -0.136378, -0.096998, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.4993, 0.00795591, 0.110788, -0.461361, 0.000820056, 0.134621, -0.542933, 0.0052927, -0.0330093, -0.251464, -0.0087394, -0.295494, -0.285771, 0.0049498, -0.30556, -0.285771, -0.0048842, 0.127327, 0.0449729, -0.00241241, 0.133691, -0.00205644, -0.00328928, 0.127529, 0.0854506, 0.0192848, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.63698, -0.00635899, -0.00527337, -0.775145, -0.0373897, 0.000390308, -0.46423, -0.0337384, 0.0665719, -0.465398, -0.00361413, 0.0241189, -0.464104, -0.0345889, 0.0331061, -0.154742, -0.00730912, -0.0106556, -0.15495, -0.00318241, -0.00543041, -0.154748, -0.00714081, -0.0130559, 0.14355, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.56818, -0.38326, 0.0281905, -0.879483, 0.183971, 0.0326307, -0.479153, 0.54224, 0.0028742, -0.468943, 0.398928, 0.0343773, -0.467272, 0.412104, 0.0108688, -0.0868379, -0.14215, 0.00761661, -0.0600582, -0.0952132, 0.0111207, -0.122364, -0.191415, 0.0295945, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.85801, -0.00314526, -0.0464923, -0.626026, 0.00321762, -0.0591727, -0.328564, -0.00237754, -0.100068, -0.342485, 0.00335897, -0.101582, -0.340701, -0.00245846, 0.100565, -0.00629124, -0.00105441, 0.118558, -0.0386185, -0.000718572, 0.0883068, 0.0175624, -0.13319, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.52044, -0.00347321, 0.0268781, -0.629854, -0.0197954, 0.0594831, -0.629842, 0.0201025, 0.00262128, -0.629778, -0.0219081, 0.0211838, -0.209954, -0.00366603, -0.00735272, -0.210046, 0.000874293, -0.00323352, -0.209943, -0.00187414, -0.00762476, -0.019796, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.44643, -0.263692, 0.0182623, -0.677008, 0.742208, -0.0236465, -0.659079, 0.153002, 0.0207333, -0.658504, 0.557667, 0.00594678, -0.146009, -0.187947, 0.00119939, -0.11516, -0.115652, 0.00575822, -0.189505, -0.261827, 0.00421695, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.11701, 0.00476558, -0.0242504, -0.423515, -0.014954, -0.379771, -0.45001, 0.00475953, -0.0793666, -0.416357, -0.00560887, 0.158277, 0.038757, -0.0027319, 0.172282, -0.0180267, -0.00342897, 0.153218, 0.085758, -0.000297623, 
};


const int step100_node1_num_factors = 0;
const bool step100_node1_marked = false;
const bool step100_node1_fixed = true;
int step100_node1_factor_height[] = {};
int step100_node1_factor_width[] = {};
int* step100_node1_factor_ridx[] = {};
float* step100_node1_factor_data[] = {};
int step100_node1_factor_num_blks[] = {};
int* step100_node1_factor_A_blk_start[] = {};
int* step100_node1_factor_B_blk_start[] = {};
int* step100_node1_factor_blk_width[] = {};
const int step100_node1_parent = 2;
const int step100_node1_height = 46;
const int step100_node1_width = 27;
float step100_node1_data[] = {
2.69257, 0.000128176, -0.910679, -0.648602, 0.04221, 0.000666755, -0.649952, -0.00161917, 0.00359243, -0.0112243, 0.371222, -0.414834, 0.0212243, 0.370785, 0.0, 0.00681664, 0.37133, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0928234, -0.000442213, -0.000950326, -0.0928153, 0.00108911, 0.000191029, -0.0928266, 0.00094837, -0.00032554, -0.210428, 
0.0, 2.67732, -1.03483, -0.0430332, -0.683736, 0.0952389, 0.00262938, -0.682269, 0.200518, -0.373337, -0.011306, -0.00407053, -0.372899, 0.0213275, 0.0, -0.373445, 0.00683769, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.000249131, -0.0613398, -0.0851894, -0.00233026, -0.0465178, -0.0540794, -0.000253176, -0.0815411, -0.117352, 0.206098, 
0.0, 0.0, 3.27639, -0.141281, 0.0224947, -0.490616, -0.150309, 0.0406327, -0.546392, -0.121036, 0.0996111, -0.421804, -0.107389, -0.231352, -0.305214, -0.0936785, -0.225456, -0.305214, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0226054, 0.0804493, 0.0580893, -0.0206107, 0.0767373, 0.0244492, -0.0219603, 0.0904562, 0.0898244, 0.0506065, 
0.0, 0.0, 0.0, 2.60902, -0.00409699, -0.0428188, -0.838886, -0.0569883, -0.00445694, -0.0512153, 0.479113, -0.522735, -0.00895268, 0.463281, -0.414133, -0.026676, 0.46312, -0.401986, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.119991, 0.000630821, -0.00442788, -0.120007, 0.00371572, -0.0029302, -0.119936, 0.001288, -0.00395929, 0.0957346, 
0.0, 0.0, 0.0, 0.0, 2.54884, -0.360532, 0.0585666, -0.936026, 0.183243, -0.489605, -0.0458454, 0.0810945, -0.491777, 5.06032e-05, 0.0479418, -0.491449, -0.0191237, 0.041422, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00604018, -0.043256, -0.100728, 0.00400723, -0.0212716, -0.073549, 0.00652549, -0.0704758, -0.131572, 0.0185349, 
0.0, 0.0, 0.0, 0.0, 0.0, 2.83249, -0.0309625, -0.0440487, -0.655813, -0.0715023, 0.0189537, -0.423452, -0.0687985, -0.033867, -0.40607, -0.0666281, -0.0348016, -0.406716, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00695152, 0.0808354, 0.0402425, -0.00520249, 0.082104, 0.00861247, -0.00608467, 0.0848773, 0.0682869, -0.139948, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.46917, 0.00591123, -0.475534, -0.0273895, 0.672743, -0.75145, 0.0318086, 0.644712, -0.596391, 0.0071403, 0.646269, -0.161235, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.168027, 0.00689295, 0.00407601, -0.167819, 0.00921039, 0.00287289, -0.167974, 0.0104049, 0.00826741, 0.133847, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.39803, -0.557085, -0.714609, -0.0235737, 0.0522755, -0.714011, 0.0443881, 0.0131241, -0.715271, 0.0164817, 0.00471345, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00137641, -0.0812606, -0.150993, -0.00466361, -0.0507596, -0.104778, -0.000924111, -0.12007, -0.201196, 0.0648754, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.98186, -0.120649, 0.12915, -0.620846, -0.107873, 0.0600759, -0.576819, -0.115847, -0.287618, -0.508717, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0340833, 0.11043, 0.0678179, -0.0315099, 0.108825, 0.0231539, -0.0330544, 0.120435, 0.10897, 0.00728206, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6594, 0.0122626, -0.242603, -0.720724, 0.0561681, -0.0527423, -0.722406, 0.0130259, -0.0484148, -0.37594, 0.00795395, -0.0617914, -0.375291, 0.0234759, 0.0, -0.375166, 0.0253892, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0064879, -0.0274843, -0.0643218, -0.00778121, -0.0132781, -0.0469186, -0.00617666, -0.0446874, -0.0838853, -0.0511558, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.67398, -0.10302, -0.0452906, -0.663052, 0.267535, -0.0195649, -0.648334, 0.152388, -0.00618657, -0.373927, 0.346732, -0.0216269, -0.373353, 0.0, -0.0235303, -0.373237, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0793174, -0.0122807, -0.00894823, 0.0789891, -0.0127789, -0.00451262, 0.0792257, -0.015175, -0.0145597, 0.158915, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.40792, -0.0438958, 0.219179, -0.678788, -0.0481472, 0.165356, -0.571535, -0.0269494, -0.0107375, -0.287351, -0.0121962, -0.300059, -0.293434, -0.000754455, -0.294924, -0.293434, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0748124, 0.0415571, 0.0244108, -0.0738406, 0.0421563, 0.00833798, -0.0744168, 0.0460717, 0.0402958, 0.227568, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.56055, 0.00578811, -0.114808, -0.95382, -0.0502007, -0.0560228, -0.496072, -0.0304142, -0.0221305, -0.496645, -0.0148765, -0.00503037, -0.496492, -0.012257, -0.00657248, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00109928, -0.0370227, -0.0853847, -0.00282626, -0.0183564, -0.0621772, -0.000694521, -0.0599337, -0.111563, -0.105878, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.5847, -0.110788, 0.0427471, -0.87888, 0.180098, 0.0355922, -0.481161, 0.476544, 0.0143995, -0.45758, 0.0248941, 0.0109656, -0.458078, 0.401124, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.102273, -0.000167291, 0.00458523, 0.102303, -0.00297194, 0.00308552, 0.102223, -0.000510912, 0.00444303, 0.107775, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.08571, -0.081471, 0.176532, -0.724042, -0.0289967, 0.0117869, -0.402118, -0.0303451, -0.370899, -0.387917, -0.0226173, -0.0489853, -0.374466, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0780033, 0.0500258, 0.0281536, -0.0768542, 0.0509278, 0.00885112, -0.0775114, 0.054858, 0.0469089, -0.0996713, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.37427, -0.0159418, -0.141262, -0.736931, -0.0155805, -0.0683188, -0.736574, -0.00663335, -0.014396, -0.735896, 0.00830872, -0.039805, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.010327, -0.0530383, -0.125634, -0.0128444, -0.0252227, -0.0918755, -0.00970818, -0.0867512, -0.16371, -0.0722426, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.41667, -0.195465, 0.0134546, -0.689842, 0.714653, -0.0164144, -0.633179, 0.480189, -0.0216239, -0.657018, 0.608338, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.145217, 0.00947731, 0.0077327, 0.14542, 0.00667017, 0.00225973, 0.145294, 0.00831854, 0.0101739, 0.090778, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.71008, -0.0698604, 0.00283238, -0.541768, -0.0669687, -0.156872, -0.502388, -0.0624909, -0.0706098, -0.515911, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0759486, 0.0627206, 0.0306628, -0.0745786, 0.0648667, 0.0068573, -0.0752747, 0.066929, 0.0530345, -0.00107926, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.65736, 0.000287838, 0.0250697, -0.728437, 0.0114998, -0.0281122, -0.727732, 0.0242803, -0.0413431, -0.375753, 0.020512, -0.0284132, -0.375974, 0.0159684, 0.0, -0.374883, 0.0327731, 0.0, -0.00951384, -0.0229661, -0.05864, -0.0106611, -0.00963506, -0.0434252, -0.00919547, -0.0388131, -0.0759233, 0.10972, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.67419, 0.0660967, -0.0287034, -0.671182, 0.129276, -0.0328238, -0.678701, 0.229818, -0.0203425, -0.373391, 0.365639, -0.0158275, -0.37361, 0.0, -0.0325265, -0.372528, 0.0, 0.0670248, -6.84191e-05, 4.5407e-06, 0.0670037, -0.00104003, -0.000603913, 0.0670287, -0.00124563, -0.000678045, -0.0610693, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.3779, -0.0469003, 0.138974, -0.555507, -0.0294104, 0.202273, -0.638658, 0.00318677, 0.00715406, -0.302985, 0.0058145, -0.297885, -0.296042, -0.00540048, -0.29693, -0.296042, -0.0826999, 0.0171828, 0.00513975, -0.0823512, 0.0195908, -0.000377117, -0.082481, 0.0184018, 0.0112336, 0.0811708, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.55535, -0.0176622, -0.0504834, -0.965713, 0.000109488, -0.0686621, -0.498585, 0.00695637, -0.0445823, -0.498583, -0.00467027, -0.0307889, -0.498254, 0.0176572, -0.03353, -0.00986625, -0.0303583, -0.0776744, -0.0113858, -0.0127295, -0.0575671, -0.00944328, -0.0514044, -0.10058, -0.00534668, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.55481, -0.33419, -0.0278173, -0.92662, 0.189944, -0.0124462, -0.489913, 0.474462, -0.00667065, -0.473471, 0.397739, -0.0279614, -0.472748, 0.396381, 0.0632328, 0.0153589, 0.00948331, 0.0635711, 0.0141472, 0.00262841, 0.0633805, 0.0155648, 0.0145421, 0.143179, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.80788, -0.0477128, 0.0274451, -0.754627, -0.0126404, -0.039372, -0.377533, -0.0116432, -0.0980081, -0.367924, -0.0156103, -0.0972133, -0.368135, -0.0701732, 0.0249734, 0.00992831, -0.0696473, 0.027053, 0.00112109, -0.0698806, 0.0266359, 0.0187781, 0.0170134, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.36611, -0.0157116, -0.0637716, -0.742329, 0.000934192, -0.0448171, -0.742223, -0.0151012, -0.025587, -0.742106, 0.0181414, -0.0201282, -0.0133274, -0.0450664, -0.115505, -0.0155863, -0.0188587, -0.0856425, -0.0126971, -0.076395, -0.14956, 0.0295702, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.40046, -0.0188056, -0.0150971, -0.711615, 0.709143, -0.00678521, -0.679025, 0.596252, -0.0373843, -0.67814, 0.182035, 0.109817, 0.0130242, 0.00971104, 0.110111, 0.0107138, 0.00315332, 0.109927, 0.0127312, 0.0137752, -0.0225826, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.97228, -0.032923, 0.0476836, -0.553888, -0.0327716, -0.034251, -0.51637, -0.0396738, -0.365535, -0.518903, -0.118821, 0.0257336, 0.00519832, -0.118335, 0.0299841, -0.00278737, -0.118463, 0.0266812, 0.0137756, 0.046031, 
};
const int step100_node1_num_blks = 2;
int step100_node1_A_blk_start[] = {0, 9, };
int step100_node1_B_blk_start[] = {0, 36, };
int step100_node1_blk_width[] = {9, 9, };
const float step100_node1_H_correct_cond = 14.143066403463743;
float step100_node1_H_correct_data[] = {
7.2499332049, 0.00034512285232, -2.45206695503, -1.74640628714, 0.11365337969999999, 0.00179528451035, -1.7500412566399999, -0.0043597285669, 0.0096728692451, -0.030222213451, 0.9995412205399999, -1.11696958338, 0.057147913451, 0.9983645674499999, 0.0, 0.0183542803648, 0.9998320181, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.249933502138, -0.00119068945741, -0.00255881927782, -0.249911692321, 0.0029325049126999996, 0.00051435895453, -0.24994211836199998, 0.0025535526109, -0.0008765392377999999, -0.56659211996, 
0.00034512285232, 7.168042398829087, -2.7706877827915037, -0.115296782233952, -1.83057465721104, 0.25498509720998885, 0.006956383414048, -1.8266526466187338, 0.5368513122233076, -0.9995440555258767, -0.030222198168928, -0.010951283142384, -0.9983672302341231, 0.05714806803816, 0.0, -0.9998308936703514, 0.01835427978488, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0006789011410383999, -0.16422633001709347, -0.22807940621698536, -0.006250748397092799, -0.12454289669823664, -0.1447878347226669, -0.0006897313106016, -0.2183114962937269, -0.314188898366415, 0.551763325540672, 
-2.45206695503, -2.7706877827915037, 12.634940802041001, 0.17230861152400004, 0.742812174423, -1.706612626903645, 0.09670577159259992, 0.84063554533943, -2.00096687737997, 9.219696999242198e-07, 5.201709999694807e-07, -1.0000014887141002, 0.014710302160299947, -1.11773582912, -1.00000009746, 0.07331701783644001, -1.0839200636527, -1.00000009746, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01072602281532999, 0.327462261353627, 0.279345190360354, 0.019407676171500014, 0.29856750771531, 0.135894133791309, 0.012846722064480004, 0.37988730498777, 0.41603559851766, 0.14416259780700003, 
-1.74640628714, -0.115296782233952, 0.17230861152400004, 7.2494820920672405, -0.011821344945299997, -0.04693127973799, -1.745987529422416, -0.12401382772356, 0.05460757407273999, -0.09317566567300001, 0.9956534451561001, -1.034995848776404, -0.005904782046400002, 0.9999853533890001, -1.037360340526, -0.04471397832478, 0.9990023631946919, -1.0056685745860001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.24964904151165082, -0.006793664830293999, -0.015476986038568001, -0.249888295078068, 0.0001482761798400027, -0.008895849984578, -0.24959443618905683, -0.006525464846419997, -0.017759169870719998, 0.3702387143679, 
0.11365337969999999, -1.83057465721104, 0.742812174423, -0.011821344945299997, 6.966384744251151, -0.9948893352216381, 0.12010036875116002, -1.9182094771297933, 0.3178346852585106, -0.9956474788082531, -0.09317518885870002, 0.18462321576893, -0.9999795446108669, -0.005904816688302003, 0.11702697890587001, -0.9989973267143101, -0.04471355010984, 0.10035928573634001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.011630816746326001, -0.0665239609565488, -0.19720776682526883, 0.0079173729172, -0.02065507983547281, -0.14991855476817204, 0.012884710923366002, -0.12180941366568003, -0.2530951363491829, -0.101810139155304, 
0.00179528451035, 0.25498509720998885, -1.706612626903645, -0.04693127973799, -0.9948893352216381, 8.40459132484888, 0.000665047657721989, 0.13022531279204666, -1.6362897223306632, 2.0692919351139405e-07, -2.0057498999890545e-07, -0.999998306515287, 4.757443051878281e-08, 1.0383872259424095e-07, -0.9999982174131999, 1.2318210321866783e-07, 4.0027269099172607e-07, -0.9999975293832001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0057249649318229, 0.1992216796450164, 0.11387822423807187, -0.0012140570881254995, 0.19799062366998205, 0.0338914669597409, -0.0037638295508094005, 0.21362322263064937, 0.18578142945302928, -0.41252309149022, 
-1.7500412566399999, 0.006956383414048, 0.09670577159259992, -1.745987529422416, 0.12010036875116002, 0.000665047657721989, 7.249956244361995, 0.002097494167369995, -1.0590779266313801, -0.02661973227191, 0.99964512810793, -1.0660697391624714, 0.060745849279309996, 0.9981530682688231, -1.0639232479071201, 0.021957517070969993, 0.9997600454909122, -8.963727999758855e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.24993157383468081, -0.0005116667292539988, -0.001704130351590001, -0.2498883396619958, 0.0034725137784360005, 0.0010362893165449991, -0.24994015856650192, 0.0034282618939119993, 0.0003165824969099974, 0.38530264436548, 
-0.0043597285669, -1.8266526466187338, 0.84063554533943, -0.12401382772356, -1.9182094771297933, 0.13022531279204666, 0.002097494167369995, 7.099060076906471, -1.6401104565032012, -0.999648043705454, -0.026619806318569993, 0.07976179994695, -0.9981554726159587, 0.06074595870212679, 0.012157732220369998, -0.9997624664020996, 0.02195740358408, -3.070234999833173e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0034016429296290004, -0.11281268155321258, -0.2088139644972942, -0.007955527504936, -0.070732222099925, -0.1447225838840602, -0.002783306699405, -0.16640800200569586, -0.2783367097212269, 0.0015067039941399423, 
0.0096728692451, 0.5368513122233076, -2.00096687737997, 0.05460757407273999, 0.3178346852585106, -1.6362897223306632, -1.0590779266313801, -1.6401104565032012, 10.23041848585447, -1.304739669449862e-07, 1.1189082399889604e-06, -0.9999987471802602, 4.984077481742739e-07, -1.7300291238288563e-07, -0.99999730680608, -0.020281140671424818, -1.03099382877428, -0.99999789439841, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0027937966780299927, 0.2540777755849047, 0.19074666570421503, 0.003585408580230992, 0.23938677908528055, 0.08273127988392848, -0.000836040255150992, 0.28670645166301917, 0.2915979935048704, 0.029593021117135986, 
-0.030222213451, -0.9995440555258767, 9.219696999242198e-07, -0.09317566567300001, -0.9956474788082531, 2.0692919351139405e-07, -0.02661973227191, -0.999648043705454, -1.304739669449862e-07, 7.999985604452121, -7.630280999371986e-08, -0.5124737533690901, -0.9961802266536363, 0.08729436394806402, 2.3573950000247813e-07, -0.998817202643772, 0.048563180882850006, 1.7688105000479294e-07, -0.9997748360000001, 0.02115273463, -0.16432804916000002, -0.9980488854, 0.06243180846000001, 0.0, -0.9977164604000001, 0.06752003848, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.239695299937044e-08, -6.6976304079710344e-09, 1.6171594079032556e-07, 4.46283769993036e-08, -3.6822793996196364e-08, 4.7628341929036654e-07, 6.646781999496875e-09, -2.9143063101685603e-07, 2.7016729399835773e-07, -0.27162741735511997, 
0.9995412205399999, -0.030222198168928, 5.201709999694807e-07, 0.9956534451561001, -0.09317518885870002, -2.0057498999890545e-07, 0.99964512810793, -0.026619806318569993, 1.1189082399889604e-06, -7.630280999371986e-08, 8.000004278016508, -1.3235544505300698, -0.08729484401568999, -0.9961842060499552, -5.92648269924781e-07, -0.04856295030163999, -0.9988193060776298, -6.059914508564903e-08, -0.0211527662926, -0.99977578335273, 0.9263967101383599, -0.0624319414786, -0.9980505793686599, 0.0, -0.0675200621856, -0.9977169356560799, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.437944269922449e-07, -9.885821299845857e-08, 2.5466718002193e-08, 2.1002954601334832e-07, -3.326371999593166e-08, 2.046350699925331e-08, 3.808348656848997e-07, 9.657335000414575e-08, 7.833570003500352e-09, 0.48072472696582996, 
-1.11696958338, -0.010951283142384, -1.0000014887141002, -1.034995848776404, 0.18462321576893, -0.999998306515287, -1.0660697391624714, 0.07976179994695, -0.9999987471802602, -0.5124737533690901, -1.3235544505300698, 13.445409874170979, 0.06760971023707005, -0.001964620254522409, -1.0000000919884497, 0.08286883314129002, 0.033067547083924356, -1.0000012021711249, 1.1301340000897725e-07, -2.335918499956454e-07, -0.9999987715458001, 0.051711051806999996, -0.9898095649877, -0.9999995972799999, 0.0908693663204, -0.9727860184276, -0.9999995972799999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.3128999553814482e-07, 3.402644009835272e-07, -1.4000533994759117e-08, -4.785357222638851e-08, -1.0743190600830638e-07, -6.248994400107279e-08, -3.1575045226782023e-07, -8.228097017299305e-09, -1.8691930014365252e-08, 0.74569194335445, 
0.057147913451, -0.9983672302341231, 0.014710302160299947, -0.005904782046400002, -0.9999795446108669, 4.757443051878281e-08, 0.060745849279309996, -0.9981554726159587, 4.984077481742739e-07, -0.9961802266536363, -0.08729484401568999, 0.06760971023707005, 7.999992079908883, 7.496003360380409e-08, -0.16355322110726, -0.9992456089693379, -0.03881379118171, 2.614792998685928e-08, -0.9978050201002381, -0.0662029731311, -0.015221905094800004, -0.9996882668329001, -0.024930955392600006, 6.273699998019489e-09, -0.999802631605031, -0.019833214539400002, -0.003948643486800003, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.1303778999017393e-08, 3.888308382779916e-08, 2.569184306316361e-07, 2.0612634998585412e-08, 4.872809740044177e-08, 3.0328068772422863e-07, 4.799619999373087e-09, -3.040169190132286e-07, -8.034293688177576e-07, -0.381371549226708, 
0.9983645674499999, 0.05714806803816, -1.11773582912, 0.9999853533890001, -0.005904816688302003, 1.0383872259424095e-07, 0.9981530682688231, 0.06074595870212679, -1.7300291238288563e-07, 0.08729436394806402, -0.9961842060499552, -0.001964620254522409, 7.496003360380409e-08, 8.000009204142337, -1.142210475022906, 0.03881414536996322, -0.9992468081760582, -7.805283925239119e-07, 0.06620327959112, -0.9978065084846671, 0.9352418266043052, 0.024930977720950008, -0.9996887143246251, 9.324909930806632e-08, 0.019833126388435006, -0.9998046964117501, 0.9724325898767873, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 8.24334532254734e-07, 1.1491789802591647e-08, -9.132826595996946e-09, -4.179259794339375e-07, 2.8966446880798578e-08, -5.37078379968595e-09, 6.109344951527061e-07, -2.3588349566798583e-08, -3.7046603977818263e-09, 0.2729557142973857, 
0.0, 0.0, -1.00000009746, -1.037360340526, 0.11702697890587001, -0.9999982174131999, -1.0639232479071201, 0.012157732220369998, -0.99999730680608, 2.3573950000247813e-07, -5.92648269924781e-07, -1.0000000919884497, -0.16355322110726, -1.142210475022906, 11.20259855150134, 0.015234397891499944, 0.03240356915933996, -0.9999998811648151, 1.8394964999563133e-07, 3.012851498140597e-08, -1.00000175524378, -0.015926259143600015, -0.98953115836157, -1.00000032890984, 2.1772039986404563e-08, 1.435708399786497e-07, -0.9999991552961601, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.314566470692489e-07, 1.6904539501645252e-07, -2.6077819994494315e-08, -1.1340702399603291e-07, 9.648596001045176e-08, 6.312690004957249e-09, -2.456704070466419e-07, 3.463425360070974e-07, -2.2395890007666405e-08, -0.49714782497864, 
0.0183542803648, -0.9998308936703514, 0.07331701783644001, -0.04471397832478, -0.9989973267143101, 1.2318210321866783e-07, 0.021957517070969993, -0.9997624664020996, -0.020281140671424818, -0.998817202643772, -0.04856295030163999, 0.08286883314129002, -0.9992456089693379, 0.03881414536996322, 0.015234397891499944, 8.0000072737041, 1.2763409985467778e-08, -0.05529191265645, -0.999626027436607, -0.027424325685400004, -0.0362770868968, -0.9999050234089999, 0.0138899175156, 0.01741423856731, -0.9998215325736942, 0.018988290655800003, -0.0264558217652, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0852344100011175e-07, -1.9744992144950288e-07, -4.970568416948361e-07, -8.92236429995745e-08, 7.634801338312307e-08, -7.87148634270349e-08, -2.5450546003096165e-08, -5.47325478378779e-07, 7.150357704605385e-07, -0.16668927076269002, 
0.9998320181, 0.01835427978488, -1.0839200636527, 0.9990023631946919, -0.04471355010984, 4.0027269099172607e-07, 0.9997600454909122, 0.02195740358408, -1.03099382877428, 0.048563180882850006, -0.9988193060776298, 0.033067547083924356, -0.03881379118171, -0.9992468081760582, 0.03240356915933996, 1.2763409985467778e-08, 7.999990511179216, -1.0091474027336949, 0.02742414010978, -0.9996240411590548, 0.9663506262099298, -0.013890023055999994, -0.99990308492161, 1.022060613922059, -0.018988336287580003, -0.9998192149779159, 1.003950535369736, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.2152663923811e-06, -7.344301997831646e-09, -8.9835185996494e-08, -8.744718404212027e-07, -1.2081422199816117e-07, -4.477175799972478e-08, -4.72549518445981e-07, -8.431562900712691e-08, -1.5765000000215e-07, 0.09365422090785, 
0.0, 0.0, -1.00000009746, -1.0056685745860001, 0.10035928573634001, -0.9999975293832001, -8.963727999758855e-07, -3.070234999833173e-08, -0.99999789439841, 1.7688105000479294e-07, -6.059914508564903e-08, -1.0000012021711249, 2.614792998685928e-08, -7.805283925239119e-07, -0.9999998811648151, -0.05529191265645, -1.0091474027336949, 9.021418083041782, 2.520514400012498e-07, 2.0021539995946023e-07, -0.99999809684228, 2.2797579996864598e-07, -5.395374200557656e-07, -0.9999970114347639, 1.9680532500079326e-07, 5.999234000157861e-07, -0.9999991844934562, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.153405694415171e-07, 8.695300596428628e-08, -8.931862000870319e-08, 3.744980814884836e-07, -3.604398599419869e-07, -3.0973620001010525e-08, -1.5662861886143248e-09, -1.6410689599645707e-07, -2.0660172997789685e-07, -0.037547936839449986, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9997748360000001, -0.0211527662926, 1.1301340000897725e-07, -0.9978050201002381, 0.06620327959112, 1.8394964999563133e-07, -0.999626027436607, 0.02742414010978, 2.520514400012498e-07, 7.999981440014776, -1.668491199965053e-08, 0.23285733896536004, -0.9991440497146771, 0.041306438175360005, 4.5044759986839285e-08, -0.9989189276857022, 0.04640048774440001, 1.8895135999264917e-07, -0.99851099208, 0.054507768320000004, -0.075504101152, -0.99909826864, 0.042433787424, 0.0, -0.9961990888800001, 0.087089925016, 0.0, 1.3957352000429484e-08, 7.087845478919486e-08, 3.595245371033202e-07, 6.424952998537768e-09, 1.687452699656291e-08, 1.9235817939590735e-07, 3.296662299534787e-08, 1.0772736756977139e-07, 4.889935849871985e-07, 0.417464880851664, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.02115273463, -0.99977578335273, -2.335918499956454e-07, -0.0662029731311, -0.9978065084846671, 3.012851498140597e-08, -0.027424325685400004, -0.9996240411590548, 2.0021539995946023e-07, -1.668491199965053e-08, 8.00000482132153, -0.6771248981177616, -0.041306463605251996, -0.9991466503067473, 6.310139904131877e-07, -0.0464005786545655, -0.9989225218871225, -1.4534500818330675e-06, -0.054507866067013994, -0.9985125741569438, 0.9777799790113383, -0.042433961829212004, -0.9990995295876808, 0.0, -0.087089946607954, -0.9962012189764422, 0.0, 3.242361550563412e-07, 5.140713202140208e-09, -9.509072999784481e-09, 3.0620786270711307e-07, 1.700450720102781e-09, -7.109855599813289e-09, 5.7141241333083043e-08, -2.7784245799267477e-08, 5.6765795992083254e-09, -0.3368640469365588, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16432804916000002, 0.9263967101383599, -0.9999987715458001, -0.015221905094800004, 0.9352418266043052, -1.00000175524378, -0.0362770868968, 0.9663506262099298, -0.99999809684228, 0.23285733896536004, -0.6771248981177616, 12.820009291304629, -0.054459753502979984, -0.054960606311370105, -0.9999959537516548, -0.010533293067254998, -0.03740716365830592, -0.9999982686708299, 3.27914999840549e-09, 1.6050700003398306e-08, -0.9999978106087399, 0.009169098642950001, -1.03051980658952, -1.0000002718, -0.02979038004965, -1.02680110667253, -1.0000002718, 6.907761201543614e-08, 3.377493903246526e-08, 4.1205215688291737e-08, -9.807543597472123e-08, -2.3309573301139402e-07, 1.7346102900455833e-08, 9.449252947546442e-08, 8.368907099511321e-08, 3.9467578494891934e-08, 0.42994831831377, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9980488854, -0.0624319414786, 0.051711051806999996, -0.9996882668329001, 0.024930977720950008, -0.015926259143600015, -0.9999050234089999, -0.013890023055999994, 2.2797579996864598e-07, -0.9991440497146771, -0.041306463605251996, -0.054459753502979984, 7.999997337062009, 1.5793290001566526e-07, -0.031609098497799984, -0.9999855454763988, 0.0050990093563100004, -0.0441172835606, -0.9999123532435309, 0.013216324004681998, -0.08951114921369999, -0.9999990951428499, 0.001128625304200001, -0.0647919570024, -0.9989478057567559, 0.0458661136495, -0.07179642688739998, -1.1700099997239418e-08, 1.6907864644466796e-07, 2.255840585672162e-07, 1.0352560001330152e-08, -1.1260721599763604e-07, 1.105827472892189e-07, 1.7480294998779333e-08, 1.6652054197592938e-07, -7.276290719560401e-07, 0.026299675055571986, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.06243180846000001, -0.9980505793686599, -0.9898095649877, -0.024930955392600006, -0.9996887143246251, -0.98953115836157, 0.0138899175156, -0.99990308492161, -5.395374200557656e-07, 0.041306438175360005, -0.9991466503067473, -0.054960606311370105, 1.5793290001566526e-07, 8.000011675190162, -1.0217224994981748, -0.0050989945894549865, -0.9999885290187452, -0.017501227261290015, -0.013216254575419997, -0.9999140659341739, 0.9251035849136999, -0.0011285990410999994, -1.0000002878308858, 0.97554923339158, -0.04586620704312, -0.99894776050646, 0.9721282152679999, 7.898037796786821e-08, -4.0132368798871736e-08, 3.798929259748278e-08, 2.6434567097492854e-07, 8.674259699758817e-08, -1.6217570015278513e-09, 9.53067754881948e-08, 7.099806999814774e-08, 2.006228000580695e-08, 0.223001619826206, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999995972799999, 6.273699998019489e-09, 9.324909930806632e-08, -1.00000032890984, 0.01741423856731, 1.022060613922059, -0.9999970114347639, 4.5044759986839285e-08, 6.310139904131877e-07, -0.9999959537516548, -0.031609098497799984, -1.0217224994981748, 9.044922786352545, 3.660727000133833e-08, 3.213351073716758e-08, -1.0000002962084222, 1.0862920999820251e-07, -2.698700780018028e-07, -0.99999975641614, 6.607099999924824e-08, -4.497489620064308e-07, -0.9999991058817399, 2.158755999621991e-08, -5.823342999956041e-07, -0.9999993584939999, -3.1529186843535573e-07, 3.833857430382558e-08, 6.767412519577363e-08, -2.0975544381611315e-07, 2.397493960028909e-07, 2.9150417000357054e-08, -1.6172573117717375e-07, 7.333580981018722e-08, -2.148132700206005e-08, -0.035601319742348, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9977164604000001, -0.0675200621856, 0.0908693663204, -0.999802631605031, 0.019833126388435006, 2.1772039986404563e-08, -0.9998215325736942, -0.018988336287580003, 1.9680532500079326e-07, -0.9989189276857022, -0.0464005786545655, -0.010533293067254998, -0.9999855454763988, -0.0050989945894549865, 3.660727000133833e-08, 8.000020174163836, -1.3056114000096935e-08, 0.05219526861623003, -0.999971249361528, 0.008117618303385997, -0.04058713357309999, -0.9999952658140948, -0.003970532904310002, -0.015611042804999992, -0.9991706118202481, 0.04077223308023999, 3.7661500010878e-08, -3.1210117995720046e-08, -1.385121045058251e-07, -9.389956466406596e-07, -4.4318046998673525e-08, -1.0456848949540453e-07, -3.4831009468045656e-07, -1.6862699399928648e-07, -4.082740427194308e-07, -4.1829791998809655e-07, 0.11265771244612402, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.06752003848, -0.9977169356560799, -0.9727860184276, -0.019833214539400002, -0.9998046964117501, 1.435708399786497e-07, 0.018988290655800003, -0.9998192149779159, 5.999234000157861e-07, 0.04640048774440001, -0.9989225218871225, -0.03740716365830592, 0.0050990093563100004, -0.9999885290187452, 3.213351073716758e-08, -1.3056114000096935e-08, 8.00001519695309, -0.9694020106367147, -0.008117739567309996, -0.9999686875462085, 0.9428261426592374, 0.003970400673176002, -0.9999946373623916, 0.9931457909957166, -0.040772105678322, -0.9991713736106261, 9.43619979955699e-07, -5.445379020976085e-07, 1.5402155069908333e-07, 2.0294503099815955e-08, 1.670715709618397e-06, -5.4372468001022014e-08, 5.6515902005923275e-09, 4.489627937684821e-07, -4.210138521089865e-08, 1.556135550001463e-07, -0.35743193434277387, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999995972799999, -0.003948643486800003, 0.9724325898767873, -0.9999991552961601, -0.0264558217652, 1.003950535369736, -0.9999991844934562, 1.8895135999264917e-07, -1.4534500818330675e-06, -0.9999982686708299, -0.0441172835606, -0.017501227261290015, -1.0000002962084222, 0.05219526861623003, -0.9694020106367147, 10.936629266776292, 1.0792130000862638e-07, 2.829761958092912e-07, -1.0000001988056901, -3.474552399361106e-08, 3.435383470238421e-07, -1.00000023315131, -0.017740591476280012, -0.98985655343987, -0.99999804355888, 2.3195228346260398e-07, -1.3100557179864485e-07, 4.539995460023081e-08, -2.7198570515977876e-07, 7.37091079870597e-08, 1.6832359999347936e-09, -2.764650129647245e-07, -1.3220950200606667e-07, 4.6710260005061766e-08, 0.15279939661556802, 
};
float step100_node1_M_correct_data[] = {
2.69257, 0.000128176, -0.910679, -0.648602, 0.04221, 0.000666755, -0.649952, -0.00161917, 0.00359243, -0.0112243, 0.371222, -0.414834, 0.0212243, 0.370785, 0.0, 0.00681664, 0.37133, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0928234, -0.000442213, -0.000950326, -0.0928153, 0.00108911, 0.000191029, -0.0928266, 0.00094837, -0.00032554, -0.210428, 
0.0, 2.67732, -1.03483, -0.0430332, -0.683736, 0.0952389, 0.00262938, -0.682269, 0.200518, -0.373337, -0.011306, -0.00407053, -0.372899, 0.0213275, 0.0, -0.373445, 0.00683769, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.000249131, -0.0613398, -0.0851894, -0.00233026, -0.0465178, -0.0540794, -0.000253176, -0.0815411, -0.117352, 0.206098, 
0.0, 0.0, 3.27639, -0.141281, 0.0224947, -0.490616, -0.150309, 0.0406327, -0.546392, -0.121036, 0.0996111, -0.421804, -0.107389, -0.231352, -0.305214, -0.0936785, -0.225456, -0.305214, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0226054, 0.0804493, 0.0580893, -0.0206107, 0.0767373, 0.0244492, -0.0219603, 0.0904562, 0.0898244, 0.0506065, 
0.0, 0.0, 0.0, 2.60902, -0.00409699, -0.0428188, -0.838886, -0.0569883, -0.00445694, -0.0512153, 0.479113, -0.522735, -0.00895268, 0.463281, -0.414133, -0.026676, 0.46312, -0.401986, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.119991, 0.000630821, -0.00442788, -0.120007, 0.00371572, -0.0029302, -0.119936, 0.001288, -0.00395929, 0.0957346, 
0.0, 0.0, 0.0, 0.0, 2.54884, -0.360532, 0.0585666, -0.936026, 0.183243, -0.489605, -0.0458454, 0.0810945, -0.491777, 5.06032e-05, 0.0479418, -0.491449, -0.0191237, 0.041422, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00604018, -0.043256, -0.100728, 0.00400723, -0.0212716, -0.073549, 0.00652549, -0.0704758, -0.131572, 0.0185349, 
0.0, 0.0, 0.0, 0.0, 0.0, 2.83249, -0.0309625, -0.0440487, -0.655813, -0.0715023, 0.0189537, -0.423452, -0.0687985, -0.033867, -0.40607, -0.0666281, -0.0348016, -0.406716, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00695152, 0.0808354, 0.0402425, -0.00520249, 0.082104, 0.00861247, -0.00608467, 0.0848773, 0.0682869, -0.139948, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.46917, 0.00591123, -0.475534, -0.0273895, 0.672743, -0.75145, 0.0318086, 0.644712, -0.596391, 0.0071403, 0.646269, -0.161235, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.168027, 0.00689295, 0.00407601, -0.167819, 0.00921039, 0.00287289, -0.167974, 0.0104049, 0.00826741, 0.133847, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.39803, -0.557085, -0.714609, -0.0235737, 0.0522755, -0.714011, 0.0443881, 0.0131241, -0.715271, 0.0164817, 0.00471345, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00137641, -0.0812606, -0.150993, -0.00466361, -0.0507596, -0.104778, -0.000924111, -0.12007, -0.201196, 0.0648754, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.98186, -0.120649, 0.12915, -0.620846, -0.107873, 0.0600759, -0.576819, -0.115847, -0.287618, -0.508717, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0340833, 0.11043, 0.0678179, -0.0315099, 0.108825, 0.0231539, -0.0330544, 0.120435, 0.10897, 0.00728206, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6594, 0.0122626, -0.242603, -0.720724, 0.0561681, -0.0527423, -0.722406, 0.0130259, -0.0484148, -0.37594, 0.00795395, -0.0617914, -0.375291, 0.0234759, 0.0, -0.375166, 0.0253892, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0064879, -0.0274843, -0.0643218, -0.00778121, -0.0132781, -0.0469186, -0.00617666, -0.0446874, -0.0838853, -0.0511558, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.67398, -0.10302, -0.0452906, -0.663052, 0.267535, -0.0195649, -0.648334, 0.152388, -0.00618657, -0.373927, 0.346732, -0.0216269, -0.373353, 0.0, -0.0235303, -0.373237, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0793174, -0.0122807, -0.00894823, 0.0789891, -0.0127789, -0.00451262, 0.0792257, -0.015175, -0.0145597, 0.158915, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.40792, -0.0438958, 0.219179, -0.678788, -0.0481472, 0.165356, -0.571535, -0.0269494, -0.0107375, -0.287351, -0.0121962, -0.300059, -0.293434, -0.000754455, -0.294924, -0.293434, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0748124, 0.0415571, 0.0244108, -0.0738406, 0.0421563, 0.00833798, -0.0744168, 0.0460717, 0.0402958, 0.227568, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.56055, 0.00578811, -0.114808, -0.95382, -0.0502007, -0.0560228, -0.496072, -0.0304142, -0.0221305, -0.496645, -0.0148765, -0.00503037, -0.496492, -0.012257, -0.00657248, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00109928, -0.0370227, -0.0853847, -0.00282626, -0.0183564, -0.0621772, -0.000694521, -0.0599337, -0.111563, -0.105878, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.5847, -0.110788, 0.0427471, -0.87888, 0.180098, 0.0355922, -0.481161, 0.476544, 0.0143995, -0.45758, 0.0248941, 0.0109656, -0.458078, 0.401124, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.102273, -0.000167291, 0.00458523, 0.102303, -0.00297194, 0.00308552, 0.102223, -0.000510912, 0.00444303, 0.107775, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.08571, -0.081471, 0.176532, -0.724042, -0.0289967, 0.0117869, -0.402118, -0.0303451, -0.370899, -0.387917, -0.0226173, -0.0489853, -0.374466, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0780033, 0.0500258, 0.0281536, -0.0768542, 0.0509278, 0.00885112, -0.0775114, 0.054858, 0.0469089, -0.0996713, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.37427, -0.0159418, -0.141262, -0.736931, -0.0155805, -0.0683188, -0.736574, -0.00663335, -0.014396, -0.735896, 0.00830872, -0.039805, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.010327, -0.0530383, -0.125634, -0.0128444, -0.0252227, -0.0918755, -0.00970818, -0.0867512, -0.16371, -0.0722426, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.41667, -0.195465, 0.0134546, -0.689842, 0.714653, -0.0164144, -0.633179, 0.480189, -0.0216239, -0.657018, 0.608338, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.145217, 0.00947731, 0.0077327, 0.14542, 0.00667017, 0.00225973, 0.145294, 0.00831854, 0.0101739, 0.090778, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.71008, -0.0698604, 0.00283238, -0.541768, -0.0669687, -0.156872, -0.502388, -0.0624909, -0.0706098, -0.515911, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0759486, 0.0627206, 0.0306628, -0.0745786, 0.0648667, 0.0068573, -0.0752747, 0.066929, 0.0530345, -0.00107926, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.65736, 0.000287838, 0.0250697, -0.728437, 0.0114998, -0.0281122, -0.727732, 0.0242803, -0.0413431, -0.375753, 0.020512, -0.0284132, -0.375974, 0.0159684, 0.0, -0.374883, 0.0327731, 0.0, -0.00951384, -0.0229661, -0.05864, -0.0106611, -0.00963506, -0.0434252, -0.00919547, -0.0388131, -0.0759233, 0.10972, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.67419, 0.0660967, -0.0287034, -0.671182, 0.129276, -0.0328238, -0.678701, 0.229818, -0.0203425, -0.373391, 0.365639, -0.0158275, -0.37361, 0.0, -0.0325265, -0.372528, 0.0, 0.0670248, -6.84191e-05, 4.5407e-06, 0.0670037, -0.00104003, -0.000603913, 0.0670287, -0.00124563, -0.000678045, -0.0610693, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.3779, -0.0469003, 0.138974, -0.555507, -0.0294104, 0.202273, -0.638658, 0.00318677, 0.00715406, -0.302985, 0.0058145, -0.297885, -0.296042, -0.00540048, -0.29693, -0.296042, -0.0826999, 0.0171828, 0.00513975, -0.0823512, 0.0195908, -0.000377117, -0.082481, 0.0184018, 0.0112336, 0.0811708, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.55535, -0.0176622, -0.0504834, -0.965713, 0.000109488, -0.0686621, -0.498585, 0.00695637, -0.0445823, -0.498583, -0.00467027, -0.0307889, -0.498254, 0.0176572, -0.03353, -0.00986625, -0.0303583, -0.0776744, -0.0113858, -0.0127295, -0.0575671, -0.00944328, -0.0514044, -0.10058, -0.00534668, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.55481, -0.33419, -0.0278173, -0.92662, 0.189944, -0.0124462, -0.489913, 0.474462, -0.00667065, -0.473471, 0.397739, -0.0279614, -0.472748, 0.396381, 0.0632328, 0.0153589, 0.00948331, 0.0635711, 0.0141472, 0.00262841, 0.0633805, 0.0155648, 0.0145421, 0.143179, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.80788, -0.0477128, 0.0274451, -0.754627, -0.0126404, -0.039372, -0.377533, -0.0116432, -0.0980081, -0.367924, -0.0156103, -0.0972133, -0.368135, -0.0701732, 0.0249734, 0.00992831, -0.0696473, 0.027053, 0.00112109, -0.0698806, 0.0266359, 0.0187781, 0.0170134, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.36611, -0.0157116, -0.0637716, -0.742329, 0.000934192, -0.0448171, -0.742223, -0.0151012, -0.025587, -0.742106, 0.0181414, -0.0201282, -0.0133274, -0.0450664, -0.115505, -0.0155863, -0.0188587, -0.0856425, -0.0126971, -0.076395, -0.14956, 0.0295702, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.40046, -0.0188056, -0.0150971, -0.711615, 0.709143, -0.00678521, -0.679025, 0.596252, -0.0373843, -0.67814, 0.182035, 0.109817, 0.0130242, 0.00971104, 0.110111, 0.0107138, 0.00315332, 0.109927, 0.0127312, 0.0137752, -0.0225826, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.97228, -0.032923, 0.0476836, -0.553888, -0.0327716, -0.034251, -0.51637, -0.0396738, -0.365535, -0.518903, -0.118821, 0.0257336, 0.00519832, -0.118335, 0.0299841, -0.00278737, -0.118463, 0.0266812, 0.0137756, 0.046031, 
};


const int step100_node2_num_factors = 0;
const bool step100_node2_marked = false;
const bool step100_node2_fixed = true;
int step100_node2_factor_height[] = {};
int step100_node2_factor_width[] = {};
int* step100_node2_factor_ridx[] = {};
float* step100_node2_factor_data[] = {};
int step100_node2_factor_num_blks[] = {};
int* step100_node2_factor_A_blk_start[] = {};
int* step100_node2_factor_B_blk_start[] = {};
int* step100_node2_factor_blk_width[] = {};
const int step100_node2_parent = 3;
const int step100_node2_height = 46;
const int step100_node2_width = 27;
float step100_node2_data[] = {
2.65652, -0.00433571, 0.0857622, -0.731223, -0.0168596, -0.0154716, -0.731294, 0.0117551, -0.0168534, -0.376242, 0.011953, 0.00759848, -0.376429, 0.00143369, 0.0, -0.376396, 0.00517282, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00719527, -0.0209768, -0.0549436, -0.00826273, -0.00842571, -0.0408814, -0.00688778, -0.0359141, -0.0710207, 0.0593311, 
0.0, 2.66642, 0.104135, 0.00294307, -0.695705, 0.236866, -0.0281699, -0.689231, 0.126115, -0.0125205, -0.374826, 0.365599, -0.00204046, -0.375029, 0.0, -0.00576565, -0.374991, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0517144, 0.00638828, 0.00497945, 0.0518619, 0.00522392, 0.0017551, 0.0517654, 0.00635091, 0.00703741, 0.00949769, 
0.0, 0.0, 3.4056, -0.010444, 0.211297, -0.631903, 0.000540259, 0.15839, -0.54244, 0.00985763, 0.0111603, -0.305004, -0.0144043, -0.30862, -0.293634, -0.00591394, -0.297276, -0.293634, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0751185, 0.00278887, -0.00273518, -0.0750928, 0.00508557, -0.00258767, -0.0750449, 0.00295175, -0.00184499, 0.0309707, 
0.0, 0.0, 0.0, 2.55397, -0.011675, 0.0195529, -0.96956, 0.026066, -0.0257278, -0.498837, 0.0210625, -0.00590475, -0.499329, 0.00580469, -0.00120076, -0.499199, 0.0108101, -0.000776741, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0104106, -0.0279269, -0.0729602, -0.0118289, -0.0112592, -0.0542554, -0.0100036, -0.0477394, -0.0943185, 0.0460328, 
0.0, 0.0, 0.0, 0.0, 2.55853, -0.0712914, -0.0589873, -0.955868, 0.14483, -0.0261062, -0.493142, 0.485989, -0.0103373, -0.467253, 0.0242444, -0.0159322, -0.468051, 0.415725, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0568602, 0.0106536, 0.00580856, 0.0570803, 0.00984735, 0.00103126, 0.0569728, 0.0103234, 0.0090347, 0.0530737, 
0.0, 0.0, 0.0, 0.0, 0.0, 3.0921, -0.00360259, 0.154887, -0.685893, 0.00364356, 0.0195505, -0.402461, -0.0198549, -0.381468, -0.382845, 0.000139122, -0.0428596, -0.373822, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0836006, 0.0041496, -0.00290015, -0.0835547, 0.00682855, -0.0030972, -0.0835031, 0.00426267, -0.00162233, 0.0587803, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.36141, -0.0318548, -0.0177461, -0.745604, -0.00479698, 0.0295042, -0.745199, -0.0260482, 0.0390268, -0.745392, -0.0181352, 0.0320265, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.011595, -0.0408049, -0.108337, -0.0136925, -0.0160065, -0.0808165, -0.0109793, -0.0703646, -0.139926, -0.0787065, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.34633, -0.237885, -0.0175287, -0.739604, 0.748249, 0.00708538, -0.680947, 0.499185, -0.00241781, -0.704447, 0.642059, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0724865, 0.0205797, 0.0127065, 0.0729434, 0.0191314, 0.00363667, 0.0726834, 0.0210721, 0.0196066, -0.0382193, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.7215, -0.00858721, -0.0136419, -0.506885, -0.0185218, -0.175036, -0.479872, -0.0121506, -0.0893278, -0.485984, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.093266, 0.00821592, -0.00339048, -0.0931641, 0.0118118, -0.00476497, -0.0930954, 0.00790344, -0.0011097, -0.0744712, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.65563, -0.00730616, 0.0948889, -0.732807, -0.0262966, 0.0143285, -0.733092, -0.0192577, 0.0172021, -0.376536, -0.00414211, 0.0320211, -0.376408, -0.0106734, 0.0, -0.376346, -0.0126731, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00485723, -0.0193931, -0.0517388, -0.00585772, -0.00754505, -0.0386329, -0.00456153, -0.0335322, -0.0668083, 0.155317, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.65856, 0.180514, 0.0126793, -0.701949, 0.145074, 0.00458477, -0.710836, 0.257332, 0.00310276, -0.376132, 0.40038, 0.00962718, -0.376022, 0.0, 0.0116249, -0.375965, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0385359, 0.00879062, 0.00581721, 0.0387342, 0.00795194, 0.00182129, 0.0386159, 0.00898989, 0.00876701, -0.163268, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.40739, 0.00298975, 0.162026, -0.557871, 0.0219963, 0.232612, -0.650891, 0.0103214, 0.0200418, -0.315582, -0.022501, -0.29461, -0.29348, -0.00365488, -0.306477, -0.29348, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.061857, -0.00433612, -0.00317798, -0.0619462, -0.00322057, -0.000764007, -0.0618961, -0.00377357, -0.0042685, -0.119407, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.55252, -0.0167911, -0.0188959, -0.973223, -0.0036946, -0.00983725, -0.499841, 0.00729596, 0.00663707, -0.499854, -0.0010073, 0.0212731, -0.499862, -0.00364926, -0.00170487, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00967677, -0.0259769, -0.0689533, -0.0110111, -0.0101615, -0.0514137, -0.00928512, -0.0447494, -0.0890373, -0.065917, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.52691, -0.324253, -0.0304835, -0.989539, 0.22237, -0.0137473, -0.501449, 0.508151, -0.00296398, -0.481423, 0.397863, -0.00151429, -0.480678, 0.41369, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0239321, 0.012001, 0.00413562, 0.0241587, 0.0123569, -0.000556495, 0.0240848, 0.0115791, 0.00768824, -0.0173439, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.8178, 0.00582223, 0.0459185, -0.753479, -0.00113544, -0.0343003, -0.379623, -0.00672941, -0.0943189, -0.367064, -0.00293465, -0.0965931, -0.365397, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0597606, -0.000936256, -0.00274013, -0.0597944, 0.000557395, -0.00151625, -0.0597481, -0.000641977, -0.00292407, 0.00148048, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.35945, -0.0298109, 0.0312793, -0.74726, -0.00115365, 0.0420216, -0.746767, -0.0106204, 0.0609073, -0.746892, -0.0144574, 0.00827922, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0116348, -0.0385481, -0.102826, -0.0136226, -0.0149738, -0.0767584, -0.0110474, -0.0666125, -0.132757, -0.0320692, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.34594, 0.067876, -0.0222246, -0.753097, 0.796764, -0.004933, -0.712417, 0.629039, -0.00339566, -0.710904, 0.210853, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0556255, 0.0174121, 0.00689746, 0.0559605, 0.0173722, -0.00022314, 0.0558378, 0.0167132, 0.0120231, -0.14346, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.98834, 0.0115661, 0.0825858, -0.590079, 0.00124369, -0.00339591, -0.535569, -0.00331941, -0.353451, -0.526353, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0911551, -0.00614082, -0.00478024, -0.0912843, -0.00443001, -0.00129191, -0.0912074, -0.00536951, -0.0063451, -0.0161754, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.655, -0.00845187, -0.755542, -0.734247, -0.0181234, 0.0317903, -0.734268, -0.0203985, 0.00919392, -0.0101081, 0.376512, -0.396389, -0.0115221, 0.376471, 0.0, -0.0163276, 0.376293, 0.0, -0.00462876, -0.0182495, -0.0491554, -0.00557671, -0.00696536, -0.0367611, -0.0043449, -0.0317014, -0.063429, 0.068652, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.65167, -0.646082, 0.00411253, -0.722737, 0.26811, 0.00715867, -0.711161, 0.152038, -0.377017, -0.00892071, 0.0269054, -0.37698, -0.0103366, 0.0, -0.376818, -0.0151487, 0.0, 0.0283227, 0.00863971, 0.00361111, 0.0284913, 0.00855557, 4.66805e-05, 0.0284259, 0.00833972, 0.00618487, 0.0475792, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.22677, -0.176181, 0.107113, -0.637423, -0.156717, 0.0305311, -0.562573, -0.077855, 0.0863732, -0.397333, -0.103448, -0.22823, -0.309907, -0.0923243, -0.221993, -0.309907, -0.0472287, -0.0107326, -0.0133758, -0.0475577, -0.00790886, -0.00768206, -0.0472513, -0.012953, -0.0182275, -0.110325, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54557, -0.00490905, -0.514865, -0.988485, -0.0148478, -0.0368485, -0.0114237, 0.507414, -0.577678, -0.0150782, 0.485614, -0.0214489, -0.0207092, 0.485904, -0.432052, -0.0113515, -0.0253209, -0.066502, -0.0126417, -0.0100809, -0.0494793, -0.0109783, -0.0433613, -0.085918, 0.0917854, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54739, -0.411065, -0.00136658, -0.980539, 0.155797, -0.496327, -0.00623237, 0.0399835, -0.495241, 0.00507777, 0.0129896, -0.495609, -0.00156136, 0.0362699, 0.0261736, 0.0103625, 0.00353021, 0.0263671, 0.0106026, -0.000567799, 0.0263064, 0.0098878, 0.00653487, 0.175288, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.01599, -0.157213, 0.0280889, -0.714335, -0.0524298, 0.100851, -0.506922, -0.0829186, -0.322444, -0.398955, -0.0569272, 0.0331992, -0.465877, -0.0547561, -0.0116336, -0.0144142, -0.0551104, -0.00854602, -0.00821991, -0.0547818, -0.0139507, -0.0196209, -0.00368609, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.34198, -0.0151337, -0.0927875, -0.0176416, 0.771769, -0.877424, -0.0249898, 0.713089, -0.488003, -0.0318356, 0.737379, -0.655635, -0.0201019, -0.0389099, -0.101207, -0.0220701, -0.0157351, -0.0751512, -0.0195405, -0.0662741, -0.13082, -0.0151813, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.32892, -0.285043, -0.752097, 0.00205675, 0.025204, -0.750999, 0.0134826, 0.0293638, -0.751608, -0.000476547, 0.0246883, 0.0242779, 0.0139922, 0.00303891, 0.0245185, 0.0149698, -0.00216647, 0.0244769, 0.0130016, 0.00686119, -0.00233514, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.70516, -0.0602365, 0.0777746, -0.623931, -0.0738558, -0.101106, -0.554148, -0.0650264, -0.00587651, -0.584996, -0.0661357, -0.0114121, -0.013428, -0.0664698, -0.00840933, -0.00732717, -0.0661705, -0.0132406, -0.0182701, -0.0369953, 
};
const int step100_node2_num_blks = 2;
int step100_node2_A_blk_start[] = {0, 9, };
int step100_node2_B_blk_start[] = {0, 36, };
int step100_node2_blk_width[] = {9, 9, };
const float step100_node2_H_correct_cond = 16.72403805858374;
float step100_node2_H_correct_data[] = {
7.0570985104, -0.011517900329200002, 0.227828999544, -1.94250852396, -0.044787864591999994, -0.041100614832, -1.94269713688, 0.031227658252, -0.044771394168, -0.99949439784, 0.03175338356, 0.0201855140896, -0.99999116708, 0.0038086261588, 0.0, -0.99990350192, 0.0137416997864, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0191143786604, -0.055725288736, -0.145958772272, -0.021950107499599997, -0.022383067129199997, -0.108602256728, -0.0182975253256, -0.095406524932, -0.188667909964, 0.157614253772, 
-0.011517900329200002, 7.109814414781204, 0.277295806671838, 0.01101783158273, -1.854968627763684, 0.631651320090836, -0.07194210604926, -1.837830289724621, 0.33634862975491403, -0.03175363540818, -0.9994953676616299, 0.9748075407742792, -0.00380863637361, -0.9999910422440699, 0.0, -0.01374170057184, -0.9999059300674022, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.1379235070520917, 0.017124786879128, 0.013515524584956, 0.1383214321990883, 0.0139656962015041, 0.004857083636794, 0.1380581612846238, 0.017089906564711002, 0.019072615931397, 0.025067588126219, 
0.227828999544, 0.277295806671838, 11.616310613173841, -0.09797290297615, 0.6456999066378801, -2.12866969434352, -0.0638109487729, 0.46864805705222, -1.8356460631364802, -1.919189999856476e-08, 1.2774660000241732e-07, -0.9999983081735441, -0.0815511465659, -1.0899669605064821, -0.9999999504000001, -0.05302146905795001, -1.0510092009615961, -0.9999999504000001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.25105536674079404, 0.008364002692840001, -0.01350847799417, -0.25104403062630604, 0.017140802675038, -0.01213588041658, -0.25077303267691603, 0.007633759585830001, -0.01164134873119, 0.11155122353257, 
-1.94250852396, 0.01101783158273, -0.09797290297615, 7.057567575426025, -0.02174376684155, 0.06854741793042, -1.941576709090589, 0.05429350229353, -0.047348027024749995, -0.999037730719655, 0.043832987276980005, -0.01637529247361, -0.9998733101704124, 0.0158961476974, 8.478800000255247e-09, -0.9996650612441855, 0.02582731191977, 0.0010829402842300003, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.020390276453582004, -0.0559960719696604, -0.14611891688136852, -0.023231855108977, -0.022632325411515605, -0.10864105297816301, -0.019576273005682, -0.0956759163780063, -0.18891466946309132, 0.0738866196564083, 
-0.044787864591999994, -1.854968627763684, 0.6456999066378801, -0.02174376684155, 7.075148181871161, -0.48067668948314, -0.10755974396117701, -1.93315067618896, 0.16878163279263997, -0.043832822189190004, -0.9990395685072002, 0.9245627843098421, -0.015896210878400003, -0.999873688980674, 6.030700000244278e-08, -0.025827383586330004, -0.999666357940572, 1.001609969403175, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.09387110028859201, 0.02408218374977, 0.012597348879650002, 0.09437160218810801, 0.022908504076506003, 0.00219338674075, 0.094129325387388, 0.02378091953556, 0.020128297896140002, 0.13418934768389001, 
-0.041100614832, 0.631651320090836, -2.12866969434352, 0.06854741793042, -0.48067668948314, 10.022193463383928, -0.021591585629657, 0.28405655010543995, -1.7587753638891799, 8.449689999910799e-09, 2.3183349997482478e-08, -0.999998594578043, -0.05597694200394, -1.0399484804849028, -0.9999987145563639, 1.818069999989279e-08, 1.5692577800926768e-07, -0.9999996055020988, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.20293030502778797, 0.0116008318877, -0.0070503414309640005, -0.20279658761096198, 0.018346519385375997, -0.008027841878974, -0.20266807991621197, 0.011705932111349997, -0.0035731214680799995, 0.16063219653962, 
-1.94269713688, -0.07194210604926, -0.0638109487729, -1.941576709090589, -0.10755974396117701, -0.021591585629657, 7.055381011497794, -0.03376401023841999, -0.014554226359990001, -0.9999959878672842, -0.0009066281730772987, 0.032158854107034, -0.9995796802420784, -0.02885286370972, 0.09311296811482399, -0.9998180848698415, -0.018922212161999994, 0.05304638806423399, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.016575213746777496, -0.05476191266919866, -0.1453827901736661, -0.019389806819742197, -0.021469646877904872, -0.1084412154141465, -0.015749160246180102, -0.09441130751184103, -0.18776452689208664, -0.27747160753950667, 
0.031227658252, -1.837830289724621, 0.46864805705222, 0.05429350229353, -1.93315067618896, 0.28405655010543995, -0.03376401023841999, 6.94489719556905, -0.97597385851686, 0.0009067920625200022, -0.9999965683736959, 0.9274655751705881, 0.02885301409806, -0.9995814087027809, 1.0409974022169999, 0.018922423288064007, -0.9998183985742581, 1.0036547675128942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05524998350582298, 0.03511008474946, 0.020850418900760004, 0.05603845143597701, 0.033855836948209, 0.00612744033428, 0.05559056378886199, 0.03689970970515, 0.033137619527109995, -0.12853837672328, 
-0.044771394168, 0.33634862975491403, -1.8356460631364802, -0.047348027024749995, 0.16878163279263997, -1.7587753638891799, -0.014554226359990001, -0.97597385851686, 8.26598348724861, -2.7499479996251046e-08, -2.271794219708287e-07, -0.999999612156402, -1.4154680000023318e-07, 3.820015919893213e-07, -1.000001103310352, -1.1248644598952802e-07, -2.6959847968988545e-08, -0.9999998510935503, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.157626627627102, 0.017249822864929997, -0.0025821252303, -0.15736123807094798, 0.022953205002674, -0.00641522940372, -0.15731981745243798, 0.017349877360159995, 0.002732083696719999, -0.24260137030297999, 
-0.99949439784, -0.03175363540818, -1.919189999856476e-08, -0.999037730719655, -0.043832822189190004, 8.449689999910799e-09, -0.9999959878672842, 0.0009067920625200022, -2.7499479996251046e-08, 8.000022157345654, -2.2507211998551593e-08, 0.19957708043536, -0.9996127845157908, -0.027946632168829998, -4.5899360002733695e-08, -0.9998418874895697, -0.018015731988357996, 2.329817001581291e-09, -0.9999402976799999, -0.0109999115793, 0.085036193793, -0.99960037704, -0.028344601241999997, 0.0, -0.99943572798, -0.033655064553, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.9541781000021154e-08, -6.301717910058505e-08, -3.9921594358618777e-07, -1.8675664999712532e-08, 1.076856910379367e-08, -2.0032861139391832e-07, 1.0840831001116523e-08, -4.495634969223908e-08, -4.3347609650670735e-07, 0.42618708363018604, 
0.03175338356, -0.9994953676616299, 1.2774660000241732e-07, 0.043832987276980005, -0.9990395685072002, 2.3183349997482478e-08, -0.0009066281730772987, -0.9999965683736959, -2.271794219708287e-07, -2.2507211998551593e-08, 7.9999946827442665, -0.455423975916575, 0.02794675867736, -0.9996075898424132, 1.0182917604410062e-07, 0.018015814045338998, -0.999836156923942, 3.220401814958886e-07, 0.01099990588736, -0.9999392270016024, 1.064200301520024, 0.028344532734080004, -0.9995990667518561, 0.0, 0.03365513823536, -0.999432918703704, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.979257679149166e-08, -1.480141899919943e-08, 1.6457530997225855e-08, -7.025734815072768e-09, 1.817965399926214e-08, -5.85952400073316e-09, -3.3153161188482527e-08, -3.714977599506195e-08, -2.101773400071289e-08, -0.43209119027655, 
0.0201855140896, 0.9748075407742792, -0.9999983081735441, -0.01637529247361, 0.9245627843098421, -0.999998594578043, 0.032158854107034, 0.9274655751705881, -0.999999612156402, 0.19957708043536, -0.455423975916575, 13.094518123112723, -0.057653151487089986, -0.11524152507766626, -1.0000011847725798, -0.019442465156572, -0.07657010579843165, -1.0000015627385903, 3.991423999645987e-08, 9.679242099123984e-08, -0.9999983087042099, -0.11064878269068, -1.07274119039326, -1.0000008172000001, -0.046066202324, -1.11335614755859, -1.0000008172000001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.7705048658972676e-07, 7.617361003545037e-09, -1.417619799721832e-08, -7.327858336475511e-08, 4.313894200745127e-09, -1.0719701999682406e-08, -2.719568513826664e-07, 2.193716200093777e-08, 2.8724288999556157e-08, -0.418430280656262, 
-0.99999116708, -0.00380863637361, -0.0815511465659, -0.9998733101704124, -0.015896210878400003, -0.05597694200394, -0.9995796802420784, 0.02885301409806, -1.4154680000023318e-07, -0.9996127845157908, 0.02794675867736, -0.057653151487089986, 7.999989928631338, -8.699284000068856e-08, -0.06303847545923, -0.9999492429385485, 0.009933323284399997, -0.038972227810941, -0.9998557335374819, 0.01694928052592, -0.002391005461799997, -0.999998121285376, -0.0003981171543000004, 0.053422581382, -0.9999823006009099, -0.00571113537875, -0.0052291466024, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.9128639990227223e-09, 1.0474956196144669e-08, -1.3002704399929157e-07, 7.509469800507618e-08, 7.324631229489287e-08, -6.582448364780762e-08, 7.511907300608919e-08, 9.130682888240425e-08, -6.577065860790495e-08, -0.2722390844689514, 
0.0038086261588, -0.9999910422440699, -1.0899669605064821, 0.0158961476974, -0.999873688980674, -1.0399484804849028, -0.02885286370972, -0.9995814087027809, 3.820015919893213e-07, -0.027946632168829998, -0.9996075898424132, -0.11524152507766626, -8.699284000068856e-08, 8.000009356583023, -1.0432528398161345, -0.009933325465756001, -0.9999529092012054, -0.038481900544400295, -0.016949337173140004, -0.99985730241933, 0.950919523893663, 0.00039810201057999934, -1.0000012181065299, 0.95745540410059, 0.005711105990919998, -0.9999844970659539, 0.997834634062657, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.835680471215801e-08, 5.786003700189723e-08, 3.953216799666941e-08, 2.328094729098043e-08, -2.8719547890570672e-08, 7.787226000216225e-09, 2.433809977966549e-07, 1.0026964500218265e-07, -1.0603978002055092e-08, 0.029575960506181016, 
0.0, 0.0, -0.9999999504000001, 8.478800000255247e-09, 6.030700000244278e-08, -0.9999987145563639, 0.09311296811482399, 1.0409974022169999, -1.000001103310352, -4.5899360002733695e-08, 1.0182917604410062e-07, -1.0000011847725798, -0.06303847545923, -1.0432528398161345, 9.092332071539238, 5.1819060004536465e-08, -1.893421459891198e-07, -0.9999965330101519, 2.997564000150059e-08, 3.052750102029966e-08, -0.999999000640663, 8.596186000044564e-08, 5.153091699856286e-07, -0.99999920382929, 4.731325000023846e-08, 4.999496839746503e-07, -0.9999996940369671, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.2326992399250126e-07, -7.642396000144194e-09, 2.5266076000788922e-08, 3.542205539849362e-07, 1.307265699860358e-08, 1.456039000012861e-08, 1.418954190001368e-07, 2.1580984000646317e-08, 5.347988999834166e-08, 0.03941444026225201, 
-0.99990350192, -0.01374170057184, -0.05302146905795001, -0.9996650612441855, -0.025827383586330004, 1.818069999989279e-08, -0.9998180848698415, 0.018922423288064007, -1.1248644598952802e-07, -0.9998418874895697, 0.018015814045338998, -0.019442465156572, -0.9999492429385485, -0.009933325465756001, 5.1819060004536465e-08, 8.000017568881638, -1.7134311620215262e-07, 0.022391315956464996, -0.9999766070664959, 0.007016555224071001, 0.046407643140399996, -0.9999479232007055, -0.010331383735887, 0.10228339686647998, -0.9998789140342254, -0.015644132959583, 5.710699999885703e-09, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.2641270319728805e-07, -1.9049487706863904e-07, -1.085892302821148e-06, 6.925460159858118e-08, 6.02362189519944e-08, -2.2397246207984685e-07, -1.0742940619969161e-07, -3.6814252016084335e-07, -1.2353966945315015e-06, -0.11493548617923649, 
0.0137416997864, -0.9999059300674022, -1.0510092009615961, 0.02582731191977, -0.999666357940572, 1.5692577800926768e-07, -0.018922212161999994, -0.9998183985742581, -2.6959847968988545e-08, -0.018015731988357996, -0.999836156923942, -0.07657010579843165, 0.009933323284399997, -0.9999529092012054, -1.893421459891198e-07, -1.7134311620215262e-07, 7.999997272680313, -0.9317048466054741, -0.007016475321700004, -0.999974719758234, 0.9889870334097681, 0.010331407927954998, -0.99994566193253, 0.9949705014341702, 0.015643984535125003, -0.999876158344824, 1.338187040544532e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.3956628425310945e-08, 5.976338200476119e-08, 4.200921700002917e-08, 8.570555539420197e-08, -1.1820399696901952e-08, 7.61983399970805e-09, -1.598292166169942e-07, -7.345768048795955e-08, -1.3929691000542417e-08, -0.23714952059276803, 
0.0, 0.0, -0.9999999504000001, 0.0010829402842300003, 1.001609969403175, -0.9999996055020988, 0.05304638806423399, 1.0036547675128942, -0.9999998510935503, 2.329817001581291e-09, 3.220401814958886e-07, -1.0000015627385903, -0.038972227810941, -0.038481900544400295, -0.9999965330101519, 0.022391315956464996, -0.9317048466054741, 11.091449654793294, -1.2027827000334714e-07, -3.583914860158095e-07, -1.0000000137066676, 1.6707749998223715e-08, -2.623422350332384e-07, -0.9999984437440849, -0.027824090755330006, -1.036491602684495, -0.9999994242104463, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.6605111408437803e-07, 2.7014491903093496e-08, 3.5135231999911002e-09, 5.1948747883109926e-08, 1.3121162202421557e-08, -3.975716598660684e-09, 1.3377310465261752e-07, 4.4672508404814834e-08, 5.315027350563256e-08, -0.02493041938268481, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999402976799999, 0.01099990588736, 3.991423999645987e-08, -0.9998557335374819, -0.016949337173140004, 2.997564000150059e-08, -0.9999766070664959, -0.007016475321700004, -1.2027827000334714e-07, 7.999977035590231, -1.6742879983960521e-09, -2.08584195145695, -0.9998479555121297, -0.017347246105755, 1.7810859989363e-08, -0.9997401148105599, -0.022659245731775995, -4.20679500027197e-08, -0.026837005499999997, 0.99963936, -1.052412795, -0.030591175499999998, 0.999530505, 0.0, -0.043349778, 0.9990579149999999, 0.0, 3.73340580015686e-08, 1.504549938481745e-07, 3.0080682879195393e-07, -1.487677199961894e-08, 5.391726601325673e-09, 2.6849561711492356e-07, 4.8745948001766555e-08, 2.490909022945084e-07, 3.9988506640842416e-07, 0.1821996444698388, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0109999115793, -0.9999392270016024, 9.679242099123984e-08, 0.01694928052592, -0.99985730241933, 3.052750102029966e-08, 0.007016555224071001, -0.999974719758234, -3.583914860158095e-07, -1.6742879983960521e-09, 7.999977013145364, -2.754427117402484, 0.017347342131465, -0.999845438564824, -1.745537830020523e-06, 0.022659290037863, -0.9997409086375137, -2.1522540854252682e-07, -0.9996392360428531, -0.026837009563140002, 0.07469447031543, -0.9995291733086731, -0.03059113607277, 0.0, -0.9990589873073881, -0.04334973284691, 0.0, -2.2996929270233226e-07, -8.236208820266581e-08, -3.2804389991373482e-09, -2.455881091009276e-07, 9.700262015304198e-10, -1.2032160000719195e-10, -9.772718390223735e-08, -5.542910989863246e-08, -4.3154053999403445e-08, 0.298863754060186, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.085036193793, 1.064200301520024, -0.9999983087042099, -0.002391005461799997, 0.950919523893663, -0.999999000640663, 0.046407643140399996, 0.9889870334097681, -1.0000000137066676, -2.08584195145695, -2.754427117402484, 13.048398815788957, -0.05580944030890003, -0.006557768252601097, -0.9999956790291029, 0.0031068214333900973, -0.046897455930018095, -0.999995466841019, 8.13134200027741e-07, -6.687817800159953e-07, -0.9999967612148001, -0.08153748012179998, -1.0142070781808, -0.99999861039, -0.0421177668758, -0.9908382160226, -0.99999861039, 2.9582022311973226e-07, 5.686283499707743e-08, 8.237283900258909e-08, 2.294246910019866e-07, 5.865085002173856e-09, 1.3649918996467474e-08, 2.116945785838796e-07, 1.3229288299626676e-07, 2.1837656900314696e-07, -0.57723549391495, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99960037704, 0.028344532734080004, -0.11064878269068, -0.999998121285376, 0.00039810201057999934, 8.596186000044564e-08, -0.9999479232007055, 0.010331407927954998, 1.6707749998223715e-08, -0.9998479555121297, 0.017347342131465, -0.05580944030890003, 7.999978824627958, -5.462198890151475e-08, -1.2725540758384102, -0.999980711030115, -0.005312988076668999, 1.041140004271477e-09, -0.009491907876310003, 0.9999510460793039, -1.1093591778393381, -0.0132473156867, 0.999909007695402, 4.879399999675345e-08, -0.02601211475804, 0.999659288158789, -1.045218884473, -6.361169800104466e-08, 1.473087210641713e-07, 3.883645461864732e-07, -2.685471400895832e-08, -1.050835145554343e-07, 1.1872452055688632e-07, 2.0418731999432252e-07, 1.0703110547605104e-07, 5.553919373885434e-07, 0.20314999210011522, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.028344601241999997, -0.9995990667518561, -1.07274119039326, -0.0003981171543000004, -1.0000012181065299, 5.153091699856286e-07, -0.010331383735887, -0.99994566193253, -2.623422350332384e-07, -0.017347246105755, -0.999845438564824, -0.006557768252601097, -5.462198890151475e-08, 7.999999333958411, -1.82468563247593, 0.0053129245906481, -0.9999848520481122, -3.0444981001848655e-07, -0.9999543109619751, -0.009491855536930001, 0.049868276944699995, -0.99991236308915, -0.0132475341236, -1.9762445499472288e-07, -0.9996606582658001, -0.026012238654900002, 0.061319476940600005, -9.538053698944615e-08, 1.208246959796857e-08, -2.5071324599843346e-08, -3.0752709989635246e-08, -6.079264739611556e-08, -5.450415400017299e-09, 1.018667370027137e-07, -3.895542560059367e-08, -1.7579556000013228e-08, 0.604416091321152, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0000008172000001, 0.053422581382, 0.95745540410059, -0.99999920382929, 0.10228339686647998, 0.9949705014341702, -0.9999984437440849, 1.7810859989363e-08, -1.745537830020523e-06, -0.9999956790291029, -1.2725540758384102, -1.82468563247593, 11.07530567727699, 0.05888131785448007, -0.04004376381137612, -0.9999981060002153, -2.3068292999379523e-07, -7.588340499914902e-07, -0.9999998423112, -0.07424045361762999, -1.0699249936997501, -0.9999987228145, -1.1088379999277956e-08, -2.938637000173063e-07, -0.9999993570325, 1.080297449860861e-07, 4.165899400027635e-08, -2.219851999816651e-08, 2.680646970122097e-07, 3.9763292002125143e-08, 2.687315499635174e-08, 2.6298723801449087e-07, 8.212230799568542e-08, 7.712361999626568e-08, -0.10250120289918002, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99943572798, 0.03365513823536, -0.046066202324, -0.9999823006009099, 0.005711105990919998, 4.731325000023846e-08, -0.9998789140342254, 0.015643984535125003, -0.027824090755330006, -0.9997401148105599, 0.022659290037863, 0.0031068214333900973, -0.999980711030115, 0.0053129245906481, 0.05888131785448007, 7.9999796121103, 1.9040621500612217e-07, 0.010928113738940022, -0.0041788854560300005, 0.999989141179739, -1.050726133062612, -0.00793467484722, 0.9999663871967512, -1.010420493617068, -0.020700513877339996, 0.9997825667865198, -0.986647085679942, 6.133013300484016e-08, 2.870785499187414e-07, 2.443842427913439e-07, 3.376645900743916e-08, 1.2430635863222659e-08, 3.643782490329821e-07, 1.3332069800663854e-07, 3.739361721257813e-07, 5.118558281246783e-07, -0.16117149786703303, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.033655064553, -0.999432918703704, -1.11335614755859, -0.00571113537875, -0.9999844970659539, 4.999496839746503e-07, -0.015644132959583, -0.999876158344824, -1.036491602684495, -0.022659245731775995, -0.9997409086375137, -0.046897455930018095, -0.005312988076668999, -0.9999848520481122, -0.04004376381137612, 1.9040621500612217e-07, 8.000016231054728, -0.9977896402825018, -0.9999928828770901, -0.004178970574340001, 0.003930412495700003, -0.9999703761062699, -0.007934696400029993, 0.04268488297292, -0.9997881342467302, -0.020700553042919997, 0.015722455171999997, 2.2431001320045852e-07, 6.864312760201448e-08, 2.4726131001393433e-08, 1.3650643299206568e-07, 5.132804649870923e-08, 1.118421499086066e-09, 2.3261014196557906e-08, 5.4203332700255543e-08, 4.158611499868062e-08, -0.004545171030498988, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0000008172000001, -0.0052291466024, 0.997834634062657, -0.9999996940369671, 5.710699999885703e-09, 1.338187040544532e-07, -0.9999994242104463, -4.20679500027197e-08, -2.1522540854252682e-07, -0.999995466841019, 1.041140004271477e-09, -3.0444981001848655e-07, -0.9999981060002153, 0.010928113738940022, -0.9977896402825018, 8.99570594332199, -5.8229301991407415e-08, 2.3430182001395154e-07, -1.00000033207018, 3.140156802805534e-08, -1.0606500899700939e-06, -1.0000014398220498, -8.365809195600677e-08, -3.5897053898994295e-07, -1.0000015066560999, 6.507857472484179e-08, -2.5827446995837806e-08, 1.1232591300014863e-07, -1.745968181817107e-07, -4.278587193129163e-09, -1.1447024996537008e-08, -1.2376701599813004e-08, -4.407600999478192e-09, -1.2998229900343893e-07, 0.003926707699865988, 
};
float step100_node2_M_correct_data[] = {
2.65652, -0.00433571, 0.0857622, -0.731223, -0.0168596, -0.0154716, -0.731294, 0.0117551, -0.0168534, -0.376242, 0.011953, 0.00759848, -0.376429, 0.00143369, 0.0, -0.376396, 0.00517282, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00719527, -0.0209768, -0.0549436, -0.00826273, -0.00842571, -0.0408814, -0.00688778, -0.0359141, -0.0710207, 0.0593311, 
0.0, 2.66642, 0.104135, 0.00294307, -0.695705, 0.236866, -0.0281699, -0.689231, 0.126115, -0.0125205, -0.374826, 0.365599, -0.00204046, -0.375029, 0.0, -0.00576565, -0.374991, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0517144, 0.00638828, 0.00497945, 0.0518619, 0.00522392, 0.0017551, 0.0517654, 0.00635091, 0.00703741, 0.00949769, 
0.0, 0.0, 3.4056, -0.010444, 0.211297, -0.631903, 0.000540259, 0.15839, -0.54244, 0.00985763, 0.0111603, -0.305004, -0.0144043, -0.30862, -0.293634, -0.00591394, -0.297276, -0.293634, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0751185, 0.00278887, -0.00273518, -0.0750928, 0.00508557, -0.00258767, -0.0750449, 0.00295175, -0.00184499, 0.0309707, 
0.0, 0.0, 0.0, 2.55397, -0.011675, 0.0195529, -0.96956, 0.026066, -0.0257278, -0.498837, 0.0210625, -0.00590475, -0.499329, 0.00580469, -0.00120076, -0.499199, 0.0108101, -0.000776741, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0104106, -0.0279269, -0.0729602, -0.0118289, -0.0112592, -0.0542554, -0.0100036, -0.0477394, -0.0943185, 0.0460328, 
0.0, 0.0, 0.0, 0.0, 2.55853, -0.0712914, -0.0589873, -0.955868, 0.14483, -0.0261062, -0.493142, 0.485989, -0.0103373, -0.467253, 0.0242444, -0.0159322, -0.468051, 0.415725, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0568602, 0.0106536, 0.00580856, 0.0570803, 0.00984735, 0.00103126, 0.0569728, 0.0103234, 0.0090347, 0.0530737, 
0.0, 0.0, 0.0, 0.0, 0.0, 3.0921, -0.00360259, 0.154887, -0.685893, 0.00364356, 0.0195505, -0.402461, -0.0198549, -0.381468, -0.382845, 0.000139122, -0.0428596, -0.373822, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0836006, 0.0041496, -0.00290015, -0.0835547, 0.00682855, -0.0030972, -0.0835031, 0.00426267, -0.00162233, 0.0587803, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.36141, -0.0318548, -0.0177461, -0.745604, -0.00479698, 0.0295042, -0.745199, -0.0260482, 0.0390268, -0.745392, -0.0181352, 0.0320265, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.011595, -0.0408049, -0.108337, -0.0136925, -0.0160065, -0.0808165, -0.0109793, -0.0703646, -0.139926, -0.0787065, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.34633, -0.237885, -0.0175287, -0.739604, 0.748249, 0.00708538, -0.680947, 0.499185, -0.00241781, -0.704447, 0.642059, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0724865, 0.0205797, 0.0127065, 0.0729434, 0.0191314, 0.00363667, 0.0726834, 0.0210721, 0.0196066, -0.0382193, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.7215, -0.00858721, -0.0136419, -0.506885, -0.0185218, -0.175036, -0.479872, -0.0121506, -0.0893278, -0.485984, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.093266, 0.00821592, -0.00339048, -0.0931641, 0.0118118, -0.00476497, -0.0930954, 0.00790344, -0.0011097, -0.0744712, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.65563, -0.00730616, 0.0948889, -0.732807, -0.0262966, 0.0143285, -0.733092, -0.0192577, 0.0172021, -0.376536, -0.00414211, 0.0320211, -0.376408, -0.0106734, 0.0, -0.376346, -0.0126731, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00485723, -0.0193931, -0.0517388, -0.00585772, -0.00754505, -0.0386329, -0.00456153, -0.0335322, -0.0668083, 0.155317, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.65856, 0.180514, 0.0126793, -0.701949, 0.145074, 0.00458477, -0.710836, 0.257332, 0.00310276, -0.376132, 0.40038, 0.00962718, -0.376022, 0.0, 0.0116249, -0.375965, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0385359, 0.00879062, 0.00581721, 0.0387342, 0.00795194, 0.00182129, 0.0386159, 0.00898989, 0.00876701, -0.163268, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.40739, 0.00298975, 0.162026, -0.557871, 0.0219963, 0.232612, -0.650891, 0.0103214, 0.0200418, -0.315582, -0.022501, -0.29461, -0.29348, -0.00365488, -0.306477, -0.29348, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.061857, -0.00433612, -0.00317798, -0.0619462, -0.00322057, -0.000764007, -0.0618961, -0.00377357, -0.0042685, -0.119407, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.55252, -0.0167911, -0.0188959, -0.973223, -0.0036946, -0.00983725, -0.499841, 0.00729596, 0.00663707, -0.499854, -0.0010073, 0.0212731, -0.499862, -0.00364926, -0.00170487, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00967677, -0.0259769, -0.0689533, -0.0110111, -0.0101615, -0.0514137, -0.00928512, -0.0447494, -0.0890373, -0.065917, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.52691, -0.324253, -0.0304835, -0.989539, 0.22237, -0.0137473, -0.501449, 0.508151, -0.00296398, -0.481423, 0.397863, -0.00151429, -0.480678, 0.41369, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0239321, 0.012001, 0.00413562, 0.0241587, 0.0123569, -0.000556495, 0.0240848, 0.0115791, 0.00768824, -0.0173439, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.8178, 0.00582223, 0.0459185, -0.753479, -0.00113544, -0.0343003, -0.379623, -0.00672941, -0.0943189, -0.367064, -0.00293465, -0.0965931, -0.365397, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0597606, -0.000936256, -0.00274013, -0.0597944, 0.000557395, -0.00151625, -0.0597481, -0.000641977, -0.00292407, 0.00148048, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.35945, -0.0298109, 0.0312793, -0.74726, -0.00115365, 0.0420216, -0.746767, -0.0106204, 0.0609073, -0.746892, -0.0144574, 0.00827922, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0116348, -0.0385481, -0.102826, -0.0136226, -0.0149738, -0.0767584, -0.0110474, -0.0666125, -0.132757, -0.0320692, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.34594, 0.067876, -0.0222246, -0.753097, 0.796764, -0.004933, -0.712417, 0.629039, -0.00339566, -0.710904, 0.210853, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0556255, 0.0174121, 0.00689746, 0.0559605, 0.0173722, -0.00022314, 0.0558378, 0.0167132, 0.0120231, -0.14346, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.98834, 0.0115661, 0.0825858, -0.590079, 0.00124369, -0.00339591, -0.535569, -0.00331941, -0.353451, -0.526353, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0911551, -0.00614082, -0.00478024, -0.0912843, -0.00443001, -0.00129191, -0.0912074, -0.00536951, -0.0063451, -0.0161754, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.655, -0.00845187, -0.755542, -0.734247, -0.0181234, 0.0317903, -0.734268, -0.0203985, 0.00919392, -0.0101081, 0.376512, -0.396389, -0.0115221, 0.376471, 0.0, -0.0163276, 0.376293, 0.0, -0.00462876, -0.0182495, -0.0491554, -0.00557671, -0.00696536, -0.0367611, -0.0043449, -0.0317014, -0.063429, 0.068652, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.65167, -0.646082, 0.00411253, -0.722737, 0.26811, 0.00715867, -0.711161, 0.152038, -0.377017, -0.00892071, 0.0269054, -0.37698, -0.0103366, 0.0, -0.376818, -0.0151487, 0.0, 0.0283227, 0.00863971, 0.00361111, 0.0284913, 0.00855557, 4.66805e-05, 0.0284259, 0.00833972, 0.00618487, 0.0475792, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.22677, -0.176181, 0.107113, -0.637423, -0.156717, 0.0305311, -0.562573, -0.077855, 0.0863732, -0.397333, -0.103448, -0.22823, -0.309907, -0.0923243, -0.221993, -0.309907, -0.0472287, -0.0107326, -0.0133758, -0.0475577, -0.00790886, -0.00768206, -0.0472513, -0.012953, -0.0182275, -0.110325, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54557, -0.00490905, -0.514865, -0.988485, -0.0148478, -0.0368485, -0.0114237, 0.507414, -0.577678, -0.0150782, 0.485614, -0.0214489, -0.0207092, 0.485904, -0.432052, -0.0113515, -0.0253209, -0.066502, -0.0126417, -0.0100809, -0.0494793, -0.0109783, -0.0433613, -0.085918, 0.0917854, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54739, -0.411065, -0.00136658, -0.980539, 0.155797, -0.496327, -0.00623237, 0.0399835, -0.495241, 0.00507777, 0.0129896, -0.495609, -0.00156136, 0.0362699, 0.0261736, 0.0103625, 0.00353021, 0.0263671, 0.0106026, -0.000567799, 0.0263064, 0.0098878, 0.00653487, 0.175288, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.01599, -0.157213, 0.0280889, -0.714335, -0.0524298, 0.100851, -0.506922, -0.0829186, -0.322444, -0.398955, -0.0569272, 0.0331992, -0.465877, -0.0547561, -0.0116336, -0.0144142, -0.0551104, -0.00854602, -0.00821991, -0.0547818, -0.0139507, -0.0196209, -0.00368609, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.34198, -0.0151337, -0.0927875, -0.0176416, 0.771769, -0.877424, -0.0249898, 0.713089, -0.488003, -0.0318356, 0.737379, -0.655635, -0.0201019, -0.0389099, -0.101207, -0.0220701, -0.0157351, -0.0751512, -0.0195405, -0.0662741, -0.13082, -0.0151813, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.32892, -0.285043, -0.752097, 0.00205675, 0.025204, -0.750999, 0.0134826, 0.0293638, -0.751608, -0.000476547, 0.0246883, 0.0242779, 0.0139922, 0.00303891, 0.0245185, 0.0149698, -0.00216647, 0.0244769, 0.0130016, 0.00686119, -0.00233514, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.70516, -0.0602365, 0.0777746, -0.623931, -0.0738558, -0.101106, -0.554148, -0.0650264, -0.00587651, -0.584996, -0.0661357, -0.0114121, -0.013428, -0.0664698, -0.00840933, -0.00732717, -0.0661705, -0.0132406, -0.0182701, -0.0369953, 
};


const int step100_node3_num_factors = 9;
const bool step100_node3_marked = false;
const bool step100_node3_fixed = true;
int step100_node3_factor_height[] = {step100_factor29_height, step100_factor250_height, step100_factor251_height, step100_factor254_height, step100_factor255_height, step100_factor256_height, step100_factor109_height, step100_factor111_height, step100_factor112_height, };
int step100_node3_factor_width[] = {step100_factor29_width, step100_factor250_width, step100_factor251_width, step100_factor254_width, step100_factor255_width, step100_factor256_width, step100_factor109_width, step100_factor111_width, step100_factor112_width, };
int* step100_node3_factor_ridx[] = {step100_factor29_ridx, step100_factor250_ridx, step100_factor251_ridx, step100_factor254_ridx, step100_factor255_ridx, step100_factor256_ridx, step100_factor109_ridx, step100_factor111_ridx, step100_factor112_ridx, };
float* step100_node3_factor_data[] = {step100_factor29_data, step100_factor250_data, step100_factor251_data, step100_factor254_data, step100_factor255_data, step100_factor256_data, step100_factor109_data, step100_factor111_data, step100_factor112_data, };
int step100_node3_factor_num_blks[] = {step100_factor29_num_blks, step100_factor250_num_blks, step100_factor251_num_blks, step100_factor254_num_blks, step100_factor255_num_blks, step100_factor256_num_blks, step100_factor109_num_blks, step100_factor111_num_blks, step100_factor112_num_blks, };
int* step100_node3_factor_A_blk_start[] = {step100_factor29_A_blk_start, step100_factor250_A_blk_start, step100_factor251_A_blk_start, step100_factor254_A_blk_start, step100_factor255_A_blk_start, step100_factor256_A_blk_start, step100_factor109_A_blk_start, step100_factor111_A_blk_start, step100_factor112_A_blk_start, };
int* step100_node3_factor_B_blk_start[] = {step100_factor29_B_blk_start, step100_factor250_B_blk_start, step100_factor251_B_blk_start, step100_factor254_B_blk_start, step100_factor255_B_blk_start, step100_factor256_B_blk_start, step100_factor109_B_blk_start, step100_factor111_B_blk_start, step100_factor112_B_blk_start, };
int* step100_node3_factor_blk_width[] = {step100_factor29_blk_width, step100_factor250_blk_width, step100_factor251_blk_width, step100_factor254_blk_width, step100_factor255_blk_width, step100_factor256_blk_width, step100_factor109_blk_width, step100_factor111_blk_width, step100_factor112_blk_width, };
const int step100_node3_parent = 8;
const int step100_node3_height = 46;
const int step100_node3_width = 27;
float step100_node3_data[] = {
2.65196, 0.0131997, -0.0296621, -0.74297, -0.00521282, -0.0221525, -0.742187, -0.00637291, -0.0240291, -0.377012, -0.0071683, -0.0218479, -0.376908, -0.0113802, 0.0, -0.377004, -0.00756898, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0116387, 0.00589408, -9.38334e-05, 0.0117206, 0.00667929, -0.00212169, 0.0117391, 0.00501811, 0.00122801, -0.094258, 
0.0, 2.64219, -0.0731402, 0.0238344, -0.710929, 0.188451, 0.0308126, -0.734603, 0.319799, 0.00907826, -0.37837, 0.338052, 0.0133052, -0.378245, 0.0, 0.00948037, -0.37836, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0143722, 0.0199727, 0.0507392, 0.0153645, 0.00836579, 0.0374835, 0.0140989, 0.0335649, 0.0656577, -0.0830695, 
0.0, 0.0, 3.33715, -0.0524151, 0.217491, -0.62923, -0.0408914, 0.303311, -0.757698, -0.00315209, -0.00835644, -0.292442, 0.00248565, -0.279763, -0.299657, -0.00304471, -0.297706, -0.299657, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0344129, -0.0217694, -0.0492364, -0.0354048, -0.010588, -0.0353986, -0.0341891, -0.0343374, -0.0640997, -0.0259354, 
0.0, 0.0, 0.0, 2.54348, 0.00191901, -0.0702572, -0.993342, 0.007276, -0.0755865, -0.503395, -0.00471813, -0.0550363, -0.503196, -0.0159346, -0.0194, -0.503387, -0.0112159, -0.0154717, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0131063, 0.00675331, -0.00241277, 0.0131683, 0.00831668, -0.00443521, 0.013249, 0.00502602, -0.00135604, -0.0477192, 
0.0, 0.0, 0.0, 0.0, 2.52876, -0.252036, 0.0171081, -1.00141, 0.302483, 0.00846073, -0.501072, 0.489019, 0.0135818, -0.477602, 0.399797, 0.00898478, -0.476172, 0.423398, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00159688, 0.0230777, 0.0635389, 0.002816, 0.0084742, 0.0477268, 0.00122107, 0.0405991, 0.0819062, 0.049989, 
0.0, 0.0, 0.0, 0.0, 0.0, 2.77857, -0.0677634, 0.139913, -0.864881, -0.0162964, -0.0218574, -0.406259, -0.014836, -0.0815164, -0.391983, -0.0162516, -0.0852926, -0.389743, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0385154, -0.0163424, -0.0334662, -0.0392078, -0.00876837, -0.0234121, -0.0383903, -0.0244493, -0.0438003, -0.0126289, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.34194, 0.0333067, -0.130739, -0.760698, 0.00252486, -0.0917855, -0.760495, -0.0149764, -0.0277232, -0.760697, -0.00788164, -0.0304414, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.019784, 0.00961881, -0.00526654, 0.0198466, 0.0123538, -0.00792035, 0.0200092, 0.00656118, -0.00413776, -0.104652, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.3179, 0.211741, 0.0204763, -0.765445, 0.794923, 0.0280196, -0.715836, 0.236057, 0.0212719, -0.712822, 0.690257, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0176064, 0.0398171, 0.105112, 0.0196428, 0.0157014, 0.0782767, 0.0170132, 0.0683597, 0.135754, 0.0870565, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.8555, -0.0605298, 0.143306, -0.705298, -0.0487739, -0.293523, -0.610076, -0.060647, 0.0401217, -0.645598, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0570142, -0.0361099, -0.0836393, -0.0586868, -0.0169998, -0.0604314, -0.0566194, -0.0575797, -0.108687, -0.00702362, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64977, 0.0107491, 0.0909991, -0.746422, -0.0123491, -0.0314485, -0.746759, 0.0024915, -0.0358654, -0.377206, -0.0118229, 0.00702057, -0.37737, -0.00404236, 0.0, -0.377318, -0.00745352, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00805487, 0.00348188, -0.00534762, 0.00802959, 0.00544494, -0.0058705, 0.00817769, 0.00127298, -0.00563471, 0.188035, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64548, 0.166179, 0.0211734, -0.715311, 0.173007, 0.0145965, -0.732418, 0.310866, 0.0133748, -0.377769, 0.389652, 0.00558223, -0.377965, 0.0, 0.00899871, -0.377899, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0101171, 0.0205053, 0.0538258, 0.0111613, 0.00815866, 0.0400355, 0.00981538, 0.0350893, 0.0695343, -0.0963058, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.31023, -0.0546182, 0.214832, -0.631321, -0.0575582, 0.265824, -0.757983, 0.00969805, 0.0192896, -0.321847, 0.0168885, -0.295716, -0.302093, 0.0123216, -0.288201, -0.302093, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0257326, -0.0273406, -0.0688296, -0.0270805, -0.0115448, -0.0507083, -0.0253664, -0.0456418, -0.0890662, -0.0160851, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54206, 0.00421355, -0.0317525, -0.998695, 0.023765, -0.0625063, -0.503964, -0.00784057, -0.0314174, -0.503872, -0.00421082, -0.0416327, -0.503969, -0.00860762, -0.0322881, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0104038, 0.00391884, -0.00908007, 0.0103326, 0.0069861, -0.00928424, 0.0105789, 0.000442698, -0.0100275, 0.0894743, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.5272, -0.245763, -0.00510271, -1.00533, 0.330595, 0.00993491, -0.504225, 0.539834, -0.00104228, -0.47755, 0.432209, 0.00389037, -0.478165, 0.422485, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00109148, 0.0197626, 0.0541594, 0.00213206, 0.00733304, 0.040654, 0.00077265, 0.0346923, 0.0698407, 0.0192408, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.7518, -0.0650712, 0.112047, -0.880866, -0.00785464, -0.0170818, -0.413805, -0.00669627, -0.0868253, -0.394585, -0.0075188, -0.0852501, -0.395346, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0295546, -0.0250398, -0.0614938, -0.0307658, -0.0109297, -0.0450413, -0.0292382, -0.0412076, -0.0796598, 0.00949376, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.33632, 0.0267176, -0.142143, -0.763862, -0.0188266, -0.0567274, -0.763817, -0.015607, -0.0352849, -0.763933, -0.0222184, -0.0589206, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01463, 0.00525846, -0.0153422, 0.0144904, 0.0102694, -0.015213, 0.0149027, -0.000414754, -0.0172505, -0.0990123, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.3222, 0.144834, 0.0351722, -0.768942, 0.826438, 0.0182036, -0.718291, 0.241565, 0.0258737, -0.719293, 0.643837, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0111523, 0.0367825, 0.0989798, 0.0130611, 0.0140399, 0.0739939, 0.0105815, 0.0638332, 0.127712, 0.123321, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.8464, -0.058218, 0.137536, -0.715827, -0.0187707, -0.313085, -0.619045, -0.0557674, 0.028887, -0.639595, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0427896, -0.0467121, -0.119344, -0.045117, -0.0192408, -0.0881682, -0.042143, -0.0785524, -0.154279, 0.0152657, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64862, 0.00830668, -0.0388154, -0.748137, 0.00908922, -0.0365978, -0.749173, 0.00995665, -0.0473957, -0.377536, 0.00383442, 0.0, -0.377428, 0.00979619, 0.0, -0.377544, -0.00281986, 0.0232741, 0.00620877, 0.00109104, -0.0112569, 0.00606702, 0.0043982, -0.0102132, 0.00636233, -0.00269078, -0.0132958, -0.0187056, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64416, 0.0414261, -0.00736559, -0.714351, 0.184263, 0.0016668, -0.732716, 0.30035, -0.00265486, -0.378185, 0.0, -0.00862703, -0.378096, 0.0, 0.00401069, -0.378173, 0.357858, 0.00727078, 0.0199235, 0.0529899, 0.00829567, 0.00776568, 0.0395253, 0.00696912, 0.0343572, 0.0684161, 0.0068895, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.3211, -0.0248777, 0.199151, -0.647063, -0.0438221, 0.281625, -0.751999, 0.0120018, -0.297576, -0.301105, 0.00155901, -0.283923, -0.301105, -0.00446258, 0.00468422, -0.305297, -0.0192255, -0.0307253, -0.080934, -0.0207928, -0.0120862, -0.0601959, -0.0187703, -0.0525948, -0.104487, 0.0759097, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54143, 0.00163226, -0.00562584, -1.00069, -0.00179376, -0.0434069, -0.504486, -0.00699814, -0.00839338, -0.504589, 0.00110498, -0.000794057, -0.504496, -0.0129319, 0.0486543, 0.00899176, 0.00242284, -0.0125489, 0.00885087, 0.00626927, -0.0118, 0.00918325, -0.00196075, -0.0145442, -0.0305007, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.52385, -0.279188, 0.00840191, -1.01091, 0.269244, 0.00413403, -0.479768, 0.417441, -0.00299013, -0.480863, 0.39931, 0.0143018, -0.503453, 0.495302, -0.000776748, 0.0155218, 0.0428081, 4.47766e-05, 0.00570526, 0.0321811, -0.00103053, 0.0273621, 0.0551947, -0.0193749, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.76638, -0.0538612, 0.112719, -0.886897, -0.00261925, -0.0927963, -0.389801, -0.00538182, -0.0896239, -0.391615, -0.00588828, -0.024588, -0.406336, -0.0223612, -0.0301116, -0.0787452, -0.0238881, -0.0119583, -0.0584624, -0.0219222, -0.0513014, -0.101679, 0.0095603, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.33419, 0.0163057, -0.0820134, -0.765711, -0.00811125, -0.0197484, -0.765907, 0.00437531, -0.0280599, -0.766067, -0.0130073, 0.0449359, 0.0121586, 0.00160498, -0.0244483, 0.0118399, 0.00868661, -0.0219185, 0.0124792, -0.00650202, -0.0290521, 0.019379, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.31693, 0.200661, 0.00686872, -0.719812, 0.237831, -0.00353996, -0.722139, 0.649666, 0.0231823, -0.770065, 0.79978, 0.00706757, 0.0334371, 0.0904652, 0.00881041, 0.0126672, 0.0677174, 0.00654255, 0.0582358, 0.116712, -0.00364074, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.85008, -0.0173137, -0.328882, -0.60849, -0.0358236, 0.0336164, -0.636461, -0.0424219, 0.134597, -0.696256, -0.031322, -0.0512358, -0.136354, -0.033955, -0.0197657, -0.101599, -0.0305462, -0.0881571, -0.175916, 0.0219205, 
};
const int step100_node3_num_blks = 2;
int step100_node3_A_blk_start[] = {0, 9, };
int step100_node3_B_blk_start[] = {9, 36, };
int step100_node3_blk_width[] = {9, 9, };
const float step100_node3_H_correct_cond = 15.479906628271237;
float step100_node3_H_correct_data[] = {
7.0328918416, 0.035005076412, -0.078662702716, -1.9703267212, -0.013824190127199999, -0.05874754389999999, -1.96825023652, -0.016900702403599997, -0.063724212036, -0.9998207435199999, -0.019010044868, -0.057939756884, -0.99954493968, -0.030179835191999998, 0.0, -0.9997995278399999, -0.0200726322008, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.030865366852, 0.0156308643968, -0.00024884242346399996, 0.031082562375999996, 0.017713209908399998, -0.0056266370124, 0.031131623636, 0.0133078269956, 0.0032566333996, -0.24996844567999998, 
0.035005076412, 6.981342228180089, -0.19364183585937, 0.05316803222699999, -1.8784783021701539, 0.49763094133575, 0.0716160978501, -1.941044821070127, 0.8446525428987299, 0.019010042492999996, -0.9998200497095099, 0.89290922815437, 0.030179793860399998, -0.9995453717759399, 0.0, 0.020072599111499997, -0.9997989166653058, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.03812771046639, 0.052849468300776, 0.13406136827527002, 0.04075063665882, 0.022192171304313, 0.099010523193507, 0.037406925189269996, 0.088751080677567, 0.17349632772659698, -0.2207295795276, 
-0.078662702716, -0.19364183585937, 11.142799451532449, -0.15462225331087998, 0.777952203083922, -2.1129611486599496, -0.11669955022381999, 1.0661123478843109, -2.5512292899526896, -1.5250351998213042e-08, -9.440569998530506e-09, -0.9999999565958099, 0.01850172469526, -0.90560861987058, -1.00000035755, 0.0003286802140260013, -0.9655917399863421, -1.00000035755, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.11623742310071, -0.074283391272908, -0.16801754420014586, -0.11962254853215999, -0.036143741521667, -0.120809054895751, -0.11547355778889, -0.11719284558961099, -0.21874895651996099, -0.07767871004429999, 
-1.9703267212, 0.05316803222699999, -0.15462225331087998, 7.024610352631371, -0.0195904462415, -0.12476637024360003, -1.97224510811642, -0.010165656716599995, -0.12706281686760001, -0.9998849169672972, -0.015254855731156, -0.10036575079800002, -0.999650789454435, -0.026425626220700004, -0.0336369603793, -0.9998665571701512, -0.0163175860848, -0.0236454078953, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.02683471534347, 0.014414866900020001, -0.002277047620282, 0.027007203273280003, 0.016945161819076, -0.006955698020240001, 0.027104831310570003, 0.0116550736702, 0.000563268861449999, -0.051962469662260036, 
-0.013824190127199999, -1.8784783021701539, 0.777952203083922, -0.0195904462415, 6.9473803718137335, -0.9081850455433219, 0.01442585057912, -1.9440603791625337, 0.37274024021469704, 0.01525488173996, -0.9998857625630854, 0.932685487070015, 0.02642578194595, -0.9996526842705821, 0.9457807323390001, 0.01631753459087, -0.9998680536199354, 1.005469535545983, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.013699502866271, 0.039406379329617505, 0.11389004518166648, -0.011538133096009, 0.013160082420679, 0.0863451874596237, -0.014407114304772, 0.07131853033897001, 0.1464930478065914, 0.180225760489668, 
-0.05874754389999999, 0.49763094133575, -2.1129611486599496, -0.12476637024360003, -0.9081850455433219, 8.220844369905091, -0.07482972144510001, 0.311490369188575, -1.9364934511834502, -1.8404319998727022e-08, 6.29139859748217e-08, -0.99999926326089, -3.788790000227717e-08, 1.1837861993792338e-07, -0.9999992772120001, -1.458975100001771e-07, -7.78110700195596e-08, -0.99999957340676, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.08423675993859, -0.034368115974032006, -0.06828780347436252, -0.08566294100676002, -0.018992774192631, -0.04738476015156301, -0.08399901832817001, -0.05069934287081901, -0.08957072905853701, -0.04158384115626, 
-1.96825023652, 0.0716160978501, -0.11669955022381999, -1.97224510811642, 0.01442585057912, -0.07482972144510001, 7.02975892391089, 0.01385358473177, -0.10864620570299997, -0.999994608132225, -0.0024881086844639987, -0.08580073726960004, -0.9999056987799102, -0.013660931790640004, 2.5919699999229716e-08, -0.999992221588686, -0.003550826714500002, -0.010016002514800003, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.029163101416368003, 0.014451644123130002, -0.0029360076275642007, 0.02932624626874, 0.017143150529042, -0.0075631526027899985, 0.029441761650867003, 0.01143862447822, -0.00024125959775000093, -0.12751821551458, 
-0.016900702403599997, -1.941044821070127, 1.0661123478843109, -0.010165656716599995, -1.9440603791625337, 0.311490369188575, 0.01385358473177, 7.027900066421758, -0.40261789209161897, 0.002487918775049993, -0.999992002877605, 0.955649419093739, 0.013660984235329994, -0.9999035628322981, -1.4979814401226096e-06, 0.0035507380612200016, -0.9999892501888561, 1.02940585776742, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.013506394254482999, 0.0459523439615142, 0.12292877986187518, 0.015881064526373993, 0.017753736146926102, 0.09181298470971289, 0.012801806098458997, 0.07952516223402588, 0.1586842823090589, 0.19988632145657997, 
-0.063724212036, 0.8446525428987299, -2.5512292899526896, -0.12706281686760001, 0.37274024021469704, -1.9364934511834502, -0.10864620570299997, -0.40261789209161897, 9.737990672886061, 7.385654998812765e-08, 5.687527549853969e-07, -0.9999986824886601, 0.03248822270189999, -0.9692418682082801, -0.9999982366582, -5.4955650016956885e-08, 6.063522805161756e-08, -0.9999985293133501, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.09846785115228, -0.052593825471533004, -0.11400594657428308, -0.10079110581431, -0.026777772528179, -0.081071892681006, -0.0979875922799, -0.08112489079315101, -0.14877432218719103, 0.03706041952969999, 
-0.9998207435199999, 0.019010042492999996, -1.5250351998213042e-08, -0.9998849169672972, 0.01525488173996, -1.8404319998727022e-08, -0.999994608132225, 0.002487918775049993, 7.385654998812765e-08, 7.99999971690382, 9.98929599597982e-10, 0.42060702324937005, -0.9999387575607427, -0.011173077459330001, -6.17713599954943e-08, -0.9999983345888005, -0.0010626963342599987, 6.460906999718127e-08, -0.99950914262, -0.03132796573300001, 0.0186028957689, -0.9999437049000001, -0.0107113242572, 0.0, -0.9998059168600001, -0.0197501136904, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.050789540347241e-08, -4.880811000728641e-09, -3.710844199250137e-09, 1.2348199977481542e-10, -6.899140600164985e-09, 3.5422479999217785e-09, 2.1059414097718353e-08, -1.2803987000039653e-08, -2.9360319001006565e-08, 0.639580179384672, 
-0.019010044868, -0.9998200497095099, -9.440569998530506e-09, -0.015254855731156, -0.9998857625630854, 6.29139859748217e-08, -0.0024881086844639987, -0.999992002877605, 5.687527549853969e-07, 9.98929599597982e-10, 7.99998723351365, -0.6303762805099511, 0.011172933618293997, -0.999936151841076, -1.4392278219771028e-06, 0.0010626342049024056, -0.9999988319852395, -1.4824921430783122e-06, 0.0313281408894, -0.99950741965439, 1.030892037768987, 0.0107112899534, -0.999942299931876, 0.0, 0.019750078417, -0.999804365151832, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -9.990359600127632e-08, -1.4743285369848258e-07, 5.636585092689501e-08, -2.9421081993567975e-08, 2.5335564602909435e-08, -2.0297164268687654e-07, -4.7260624999292435e-08, -1.878696268030433e-07, -3.4130616441245114e-07, -0.312885085894108, 
-0.057939756884, 0.89290922815437, -0.9999999565958099, -0.10036575079800002, 0.932685487070015, -0.99999926326089, -0.08580073726960004, 0.955649419093739, -0.9999986824886601, 0.42060702324937005, -0.6303762805099511, 12.738785132447159, -0.06635933543279997, -0.014854885593450188, -0.9999973123867499, -0.07552231101021999, -0.07402736184601802, -0.9999980961467299, -1.95739000020947e-08, -1.353023900010178e-07, -0.9999967495505129, 0.022492138387170003, -1.042065671536876, -0.9999973113899999, 0.00794712818329, -1.0174887377628319, -0.9999973113899999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.1758341700887097e-07, -4.6147231991596815e-08, 4.5206018907961424e-08, -1.3718660992585283e-08, -1.5726237099427537e-07, 3.3115054900423705e-07, 2.0415073901197587e-07, 2.3319032989264287e-08, 1.8406129205661166e-07, 0.04538872136562, 
-0.99954493968, 0.030179793860399998, 0.01850172469526, -0.999650789454435, 0.02642578194595, -3.788790000227717e-08, -0.9999056987799102, 0.013660984235329994, 0.03248822270189999, -0.9999387575607427, 0.011172933618293997, -0.06635933543279997, 8.000016576523374, -8.625944999713603e-08, 0.05861780135114997, -0.9999523398900038, 0.010110391409310016, 0.008410494933750005, -0.99979836895219, -0.02015854408572, -0.05927626227234, -0.9999998108620181, 0.00046182084691999973, -0.08933304546940002, -0.9999634302708061, -0.008578002020160002, -0.0655785115934, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.787852100103062e-08, 1.653859000148082e-08, -3.839590280099255e-08, 9.809222000315235e-08, 3.0419172004445366e-08, -4.103197999698179e-08, 1.8320296300171638e-07, 7.3981000007078175e-09, -9.323156500008928e-08, 0.22753946180740803, 
-0.030179835191999998, -0.9995453717759399, -0.90560861987058, -0.026425626220700004, -0.9996526842705821, 1.1837861993792338e-07, -0.013660931790640004, -0.9999035628322981, -0.9692418682082801, -0.011173077459330001, -0.999936151841076, -0.014854885593450188, -8.625944999713603e-08, 8.000002562697533, -0.9445597453373451, -0.010110429480089996, -0.9999432046577281, 0.059931488624754996, 0.0201584915692, -0.9997981099531337, 1.0161840118172432, -0.00046180030612999993, -0.9999989205897349, 1.027203919960915, 0.00857797992024, -0.9999622980164191, 1.0026688011002451, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.2754700212736777e-10, 1.4504080034933222e-09, 3.3269053020275747e-07, -2.1425559000855845e-08, 2.1487052997205085e-08, 5.546968198756547e-08, -1.6198984001052475e-08, 4.782993912550202e-09, -1.2914249797616795e-07, 0.071088088250505, 
0.0, 0.0, -1.00000035755, -0.0336369603793, 0.9457807323390001, -0.9999992772120001, 2.5919699999229716e-08, -1.4979814401226096e-06, -0.9999982366582, -6.17713599954943e-08, -1.4392278219771028e-06, -0.9999973123867499, 0.05861780135114997, -0.9445597453373451, 8.895640748657739, -2.2976793995959186e-07, 1.674823980270139e-07, -1.00000172953587, -4.377799983877334e-10, 3.1065997499995375e-07, -1.0000017342931449, -2.564424999900183e-08, 2.2041151002812178e-07, -1.00000038630725, -2.705943999717468e-08, -7.357922995540916e-08, -1.0000014211067498, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.4675157500794203e-07, -2.135827720139526e-07, -2.7278652697847144e-07, 2.495348499709412e-08, -7.479838999926535e-08, -1.004658300013935e-07, -1.7908635500243129e-07, 1.5413490090438233e-09, -4.319793829923823e-07, 0.06750485402737, 
-0.9997995278399999, 0.020072599111499997, 0.0003286802140260013, -0.9998665571701512, 0.01631753459087, -1.458975100001771e-07, -0.999992221588686, 0.0035507380612200016, -5.4955650016956885e-08, -0.9999983345888005, 0.0010626342049024056, -0.07552231101021999, -0.9999523398900038, -0.010110429480089996, -2.2976793995959186e-07, 7.999983106805414, 6.196126001625242e-08, -0.04325417634284001, -0.9995403266535483, -0.030265699764060003, -0.058014971728370016, -0.9999515804335023, -0.009648412478300008, 1.6333670999982208e-07, -0.9998234672809478, -0.01868733041145, -0.06445366264905, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.24530085912819e-08, -6.854086994766281e-09, 8.464744960101457e-08, -1.102775296016436e-07, -1.4095878097335067e-08, 5.0343604991531464e-08, -1.1247147290387998e-07, 1.191442199989859e-08, 1.3545500447709798e-10, -0.320905664899091, 
-0.0200726322008, -0.9997989166653058, -0.9655917399863421, -0.0163175860848, -0.9998680536199354, -7.78110700195596e-08, -0.003550826714500002, -0.9999892501888561, 6.063522805161756e-08, -0.0010626963342599987, -0.9999988319852395, -0.07402736184601802, 0.010110391409310016, -0.9999432046577281, 1.674823980270139e-07, 6.196126001625242e-08, 8.000009031605801, -1.125946216059274, 0.030265888518219996, -0.99954489299176, 0.956889841337915, 0.00964868868537, -0.9999556969635401, 1.8049432600073818e-06, 0.018687533899120003, -0.9998280688049198, 0.94343898973694, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.411551099899519e-08, 2.9106341021180334e-07, 7.092745065434419e-07, 5.054026300461742e-08, 1.8492370380154884e-07, 3.7759961918935494e-07, 1.2817196900296958e-07, 4.1393617864106706e-07, 1.2750782475853843e-06, 0.290467172664626, 
0.0, 0.0, -1.00000035755, -0.0236454078953, 1.005469535545983, -0.99999957340676, -0.010016002514800003, 1.02940585776742, -0.9999985293133501, 6.460906999718127e-08, -1.4824921430783122e-06, -0.9999980961467299, 0.008410494933750005, 0.059931488624754996, -1.00000172953587, -0.04325417634284001, -1.125946216059274, 11.0201390527777, -2.49040259998602e-07, -5.01632948979774e-07, -1.0000009692184582, 0.0972965935739, -0.96731444765869, -1.0000010518292899, -2.8717229002575016e-07, -1.1711598600429331e-07, -1.00000072280117, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.903119200313793e-08, -5.639958500054826e-08, 7.248843539773397e-07, 5.660008401743883e-08, 7.430728799807749e-08, -4.52822410005469e-08, -8.272998598882125e-08, 1.1844754659061e-07, 1.2193112160092148e-06, 0.14571166127335, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99950914262, 0.0313281408894, -1.95739000020947e-08, -0.99979836895219, 0.0201584915692, -4.377799983877334e-10, -0.9995403266535483, 0.030265888518219996, -2.49040259998602e-07, 7.999996893607921, -2.7633837999471603e-08, 0.035155077607969994, -0.9997865210260534, 0.020620186434932002, 1.3195539984260646e-08, -0.9999320945632234, 0.011581527586064002, 9.183113999223018e-08, -0.99994940032, 0.010155921500400001, 0.0, -0.99966334936, 0.025946384757800003, 0.0, -0.99997058928, -0.007468737593200001, 0.061644246742, 3.886400800153903e-09, 8.151879995500383e-10, 3.899260600100202e-08, -6.017178397337185e-09, -1.5462297600489375e-08, -6.590610300466789e-08, -8.555876499641618e-09, 1.0900442999627409e-08, -4.909130100434968e-08, -0.0878107961196134, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.03132796573300001, -0.99950741965439, -1.353023900010178e-07, -0.02015854408572, -0.9997981099531337, 3.1065997499995375e-07, -0.030265699764060003, -0.99954489299176, -5.01632948979774e-07, -2.7633837999471603e-08, 8.000010898107917, -1.0420247611833673, -0.020620257161104, -0.9997895470718586, -4.947911250060428e-07, -0.011581538135150001, -0.9999359060138066, 7.433901019050687e-09, -0.010155945358080001, -0.9999497983000744, 0.0, -0.02594642126384, -0.9996649455444507, 0.0, 0.0074687688764799995, -0.9999733433546647, 0.9464271397809879, 5.6767914596573214e-08, 1.6135530039026938e-07, 1.9076124588370358e-07, 1.617130059897113e-08, -1.1007227001045465e-08, -2.0706149218878814e-08, -1.9389479600638428e-08, 1.714077461271578e-07, -6.5701900098383055e-09, -0.04951893000120701, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0186028957689, 1.030892037768987, -0.9999967495505129, -0.05927626227234, 1.0161840118172432, -1.0000017342931449, -0.058014971728370016, 0.956889841337915, -1.0000009692184582, 0.035155077607969994, -1.0420247611833673, 12.950659866242015, 0.03005175442559099, -0.011032709018865206, -0.99999975607734, 0.006186249377919999, 0.013568799242331583, -0.9999986686518398, 0.054403408338554, -1.0040952177745681, -0.9999998155, 0.019470262694716998, -0.9589799610389259, -0.9999998155, -5.815390999761264e-09, -1.5479455999713348e-08, -1.00000059890734, -3.317582408707483e-08, 1.3406885578917605e-08, 3.432140461997936e-08, -1.0145971469758317e-07, -3.24797362009733e-08, 1.7363360102300453e-07, 1.120740532905998e-07, 9.206684503341037e-08, 1.573318545320535e-06, 0.32233997511893997, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999437049000001, 0.0107112899534, 0.022492138387170003, -0.9999998108620181, -0.00046180030612999993, -2.564424999900183e-08, -0.9999515804335023, 0.00964868868537, 0.0972965935739, -0.9997865210260534, -0.020620257161104, 0.03005175442559099, 8.000006105650323, -3.609512900227878e-08, 0.08885860939645998, -0.9999698491271867, -0.009039798663712998, 0.02374315030592002, -0.9999462271175925, -0.01046539230639, -0.013840387874900002, -0.9999850120511792, 0.005327588457109999, 0.00547275957699, -0.9996051561236913, -0.028086942369004, 0.11119853416797999, 1.984730039633271e-08, -3.2047279996382976e-09, -1.1183689300565902e-07, 1.74080029027062e-08, -1.2430011599802515e-08, 4.4667908998545784e-08, 8.627688598731232e-09, -9.184190000848096e-10, -7.942860005669961e-09, -0.10480987413826823, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0107113242572, -0.999942299931876, -1.042065671536876, 0.00046182084691999973, -0.9999989205897349, 2.2041151002812178e-07, -0.009648412478300008, -0.9999556969635401, -0.96731444765869, 0.020620186434932002, -0.9997895470718586, -0.011032709018865206, -3.609512900227878e-08, 8.000002529830446, -1.0272441396267005, 0.00903973582489, -0.9999567824144989, -0.024543979508705942, 0.01046538390288, -0.9999447627380439, 0.9935794058165612, -0.00532758025976, -0.9999855328862733, 0.9478318855375212, 0.028086781131589997, -0.9996054647807833, 0.93392248957792, 1.5963327798681263e-08, 1.194341415941014e-07, -9.57731514015681e-08, -1.8825293801906637e-08, -2.5059476199190686e-08, 5.455524278283212e-08, -3.471957879998522e-08, 3.716284623907916e-08, -1.2571226236754753e-07, -0.100730480236468, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999973113899999, -0.08933304546940002, 1.027203919960915, -1.00000038630725, 1.6333670999982208e-07, 1.8049432600073818e-06, -1.0000010518292899, 1.3195539984260646e-08, -4.947911250060428e-07, -0.99999975607734, 0.08885860939645998, -1.0272441396267005, 9.063129461604845, -7.47073499871628e-08, 3.2747822237809446e-07, -1.000001495757434, 1.8974819999942556e-08, -4.042973383376571e-07, -1.0000010838600608, 5.244800001318132e-10, -3.557800652210245e-07, -1.000000092127367, -2.521094999670735e-08, -3.874825598721354e-08, -1.0000012792550919, -1.6125716040126957e-07, 4.7567980400670936e-08, -2.1430423499521e-07, 7.999273239699717e-08, 1.5323589320056355e-07, -2.999699195530507e-08, -3.8875663996554424e-08, -8.4916245972297e-08, -6.382893319724618e-07, 0.01440157216342799, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9998059168600001, 0.019750078417, 0.00794712818329, -0.9999634302708061, 0.00857797992024, -2.705943999717468e-08, -0.9998234672809478, 0.018687533899120003, -2.8717229002575016e-07, -0.9999320945632234, -0.011581538135150001, 0.006186249377919999, -0.9999698491271867, 0.00903973582489, -7.47073499871628e-08, 8.00000956352559, -9.4733870006196e-08, 0.08550033982549002, -0.9999956455263308, -0.0014256748672799979, 1.583902100038193e-07, -0.9998943770214893, 0.01436699620168, -0.02705965914107, -0.999816500469716, -0.019049362323512, 0.07878719040282, 4.2515693918388485e-08, -7.434170000100991e-10, -1.0716429958171778e-09, 4.253963450061206e-08, -3.8546186001431293e-08, 9.194982599783296e-08, -7.109382600327647e-08, 2.7400050009268348e-09, 4.4877169002521594e-08, 0.046652581443060996, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0197501136904, -0.999804365151832, -1.0174887377628319, -0.008578002020160002, -0.9999622980164191, -7.357922995540916e-08, -0.01868733041145, -0.9998280688049198, -1.1711598600429331e-07, 0.011581527586064002, -0.9999359060138066, 0.013568799242331583, -0.009039798663712998, -0.9999567824144989, 3.2747822237809446e-07, -9.4733870006196e-08, 7.9999798309246755, -0.9020655321088791, 0.0014257163865700028, -0.9999958236073259, -1.1328005711643081e-06, -0.014366958169809999, -0.9998945428045943, 0.9721669145062544, 0.019049354436600004, -0.9998169344322352, 0.9592163622782272, -3.375531550213688e-08, -2.3278133879944887e-07, -2.8923041519432357e-07, -5.8099733002995573e-08, -1.1302592899937567e-07, -2.196270311802291e-07, -6.418852229977861e-08, -2.5693789575250106e-07, 1.2453961236615126e-08, -0.028471709749529995, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999973113899999, -0.0655785115934, 1.0026688011002451, -1.0000014211067498, -0.06445366264905, 0.94343898973694, -1.00000072280117, 9.183113999223018e-08, 7.433901019050687e-09, -0.9999986686518398, 0.02374315030592002, -0.024543979508705942, -1.000001495757434, 0.08550033982549002, -0.9020655321088791, 10.943043011782631, 0.048236511945289995, -1.0176758481949781, -1.000000327878118, -1.6909473000085992e-07, -4.307115989954093e-07, -1.000001733108547, -2.582254200005361e-07, 4.952197520055084e-07, -1.0000000563541, -6.42179950051302e-08, -7.081813600957512e-08, 4.994656469585629e-07, -6.852037661695546e-08, -1.019664869926597e-07, -4.816248159454801e-07, 2.24708398981979e-09, -3.3199677241252114e-07, -3.7208007001480245e-07, 0.07546994986740002, 
};
float step100_node3_M_correct_data[] = {
2.65196, 0.0131997, -0.0296621, -0.74297, -0.00521282, -0.0221525, -0.742187, -0.00637291, -0.0240291, -0.377012, -0.0071683, -0.0218479, -0.376908, -0.0113802, 0.0, -0.377004, -0.00756898, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0116387, 0.00589408, -9.38334e-05, 0.0117206, 0.00667929, -0.00212169, 0.0117391, 0.00501811, 0.00122801, -0.094258, 
0.0, 2.64219, -0.0731402, 0.0238344, -0.710929, 0.188451, 0.0308126, -0.734603, 0.319799, 0.00907826, -0.37837, 0.338052, 0.0133052, -0.378245, 0.0, 0.00948037, -0.37836, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0143722, 0.0199727, 0.0507392, 0.0153645, 0.00836579, 0.0374835, 0.0140989, 0.0335649, 0.0656577, -0.0830695, 
0.0, 0.0, 3.33715, -0.0524151, 0.217491, -0.62923, -0.0408914, 0.303311, -0.757698, -0.00315209, -0.00835644, -0.292442, 0.00248565, -0.279763, -0.299657, -0.00304471, -0.297706, -0.299657, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0344129, -0.0217694, -0.0492364, -0.0354048, -0.010588, -0.0353986, -0.0341891, -0.0343374, -0.0640997, -0.0259354, 
0.0, 0.0, 0.0, 2.54348, 0.00191901, -0.0702572, -0.993342, 0.007276, -0.0755865, -0.503395, -0.00471813, -0.0550363, -0.503196, -0.0159346, -0.0194, -0.503387, -0.0112159, -0.0154717, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0131063, 0.00675331, -0.00241277, 0.0131683, 0.00831668, -0.00443521, 0.013249, 0.00502602, -0.00135604, -0.0477192, 
0.0, 0.0, 0.0, 0.0, 2.52876, -0.252036, 0.0171081, -1.00141, 0.302483, 0.00846073, -0.501072, 0.489019, 0.0135818, -0.477602, 0.399797, 0.00898478, -0.476172, 0.423398, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00159688, 0.0230777, 0.0635389, 0.002816, 0.0084742, 0.0477268, 0.00122107, 0.0405991, 0.0819062, 0.049989, 
0.0, 0.0, 0.0, 0.0, 0.0, 2.77857, -0.0677634, 0.139913, -0.864881, -0.0162964, -0.0218574, -0.406259, -0.014836, -0.0815164, -0.391983, -0.0162516, -0.0852926, -0.389743, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0385154, -0.0163424, -0.0334662, -0.0392078, -0.00876837, -0.0234121, -0.0383903, -0.0244493, -0.0438003, -0.0126289, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.34194, 0.0333067, -0.130739, -0.760698, 0.00252486, -0.0917855, -0.760495, -0.0149764, -0.0277232, -0.760697, -0.00788164, -0.0304414, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.019784, 0.00961881, -0.00526654, 0.0198466, 0.0123538, -0.00792035, 0.0200092, 0.00656118, -0.00413776, -0.104652, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.3179, 0.211741, 0.0204763, -0.765445, 0.794923, 0.0280196, -0.715836, 0.236057, 0.0212719, -0.712822, 0.690257, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0176064, 0.0398171, 0.105112, 0.0196428, 0.0157014, 0.0782767, 0.0170132, 0.0683597, 0.135754, 0.0870565, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.8555, -0.0605298, 0.143306, -0.705298, -0.0487739, -0.293523, -0.610076, -0.060647, 0.0401217, -0.645598, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0570142, -0.0361099, -0.0836393, -0.0586868, -0.0169998, -0.0604314, -0.0566194, -0.0575797, -0.108687, -0.00702362, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64977, 0.0107491, 0.0909991, -0.746422, -0.0123491, -0.0314485, -0.746759, 0.0024915, -0.0358654, -0.377206, -0.0118229, 0.00702057, -0.37737, -0.00404236, 0.0, -0.377318, -0.00745352, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00805487, 0.00348188, -0.00534762, 0.00802959, 0.00544494, -0.0058705, 0.00817769, 0.00127298, -0.00563471, 0.188035, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64548, 0.166179, 0.0211734, -0.715311, 0.173007, 0.0145965, -0.732418, 0.310866, 0.0133748, -0.377769, 0.389652, 0.00558223, -0.377965, 0.0, 0.00899871, -0.377899, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0101171, 0.0205053, 0.0538258, 0.0111613, 0.00815866, 0.0400355, 0.00981538, 0.0350893, 0.0695343, -0.0963058, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.31023, -0.0546182, 0.214832, -0.631321, -0.0575582, 0.265824, -0.757983, 0.00969805, 0.0192896, -0.321847, 0.0168885, -0.295716, -0.302093, 0.0123216, -0.288201, -0.302093, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0257326, -0.0273406, -0.0688296, -0.0270805, -0.0115448, -0.0507083, -0.0253664, -0.0456418, -0.0890662, -0.0160851, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54206, 0.00421355, -0.0317525, -0.998695, 0.023765, -0.0625063, -0.503964, -0.00784057, -0.0314174, -0.503872, -0.00421082, -0.0416327, -0.503969, -0.00860762, -0.0322881, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0104038, 0.00391884, -0.00908007, 0.0103326, 0.0069861, -0.00928424, 0.0105789, 0.000442698, -0.0100275, 0.0894743, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.5272, -0.245763, -0.00510271, -1.00533, 0.330595, 0.00993491, -0.504225, 0.539834, -0.00104228, -0.47755, 0.432209, 0.00389037, -0.478165, 0.422485, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00109148, 0.0197626, 0.0541594, 0.00213206, 0.00733304, 0.040654, 0.00077265, 0.0346923, 0.0698407, 0.0192408, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.7518, -0.0650712, 0.112047, -0.880866, -0.00785464, -0.0170818, -0.413805, -0.00669627, -0.0868253, -0.394585, -0.0075188, -0.0852501, -0.395346, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0295546, -0.0250398, -0.0614938, -0.0307658, -0.0109297, -0.0450413, -0.0292382, -0.0412076, -0.0796598, 0.00949376, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.33632, 0.0267176, -0.142143, -0.763862, -0.0188266, -0.0567274, -0.763817, -0.015607, -0.0352849, -0.763933, -0.0222184, -0.0589206, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01463, 0.00525846, -0.0153422, 0.0144904, 0.0102694, -0.015213, 0.0149027, -0.000414754, -0.0172505, -0.0990123, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.3222, 0.144834, 0.0351722, -0.768942, 0.826438, 0.0182036, -0.718291, 0.241565, 0.0258737, -0.719293, 0.643837, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0111523, 0.0367825, 0.0989798, 0.0130611, 0.0140399, 0.0739939, 0.0105815, 0.0638332, 0.127712, 0.123321, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.8464, -0.058218, 0.137536, -0.715827, -0.0187707, -0.313085, -0.619045, -0.0557674, 0.028887, -0.639595, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0427896, -0.0467121, -0.119344, -0.045117, -0.0192408, -0.0881682, -0.042143, -0.0785524, -0.154279, 0.0152657, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64862, 0.00830668, -0.0388154, -0.748137, 0.00908922, -0.0365978, -0.749173, 0.00995665, -0.0473957, -0.377536, 0.00383442, 0.0, -0.377428, 0.00979619, 0.0, -0.377544, -0.00281986, 0.0232741, 0.00620877, 0.00109104, -0.0112569, 0.00606702, 0.0043982, -0.0102132, 0.00636233, -0.00269078, -0.0132958, -0.0187056, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64416, 0.0414261, -0.00736559, -0.714351, 0.184263, 0.0016668, -0.732716, 0.30035, -0.00265486, -0.378185, 0.0, -0.00862703, -0.378096, 0.0, 0.00401069, -0.378173, 0.357858, 0.00727078, 0.0199235, 0.0529899, 0.00829567, 0.00776568, 0.0395253, 0.00696912, 0.0343572, 0.0684161, 0.0068895, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.3211, -0.0248777, 0.199151, -0.647063, -0.0438221, 0.281625, -0.751999, 0.0120018, -0.297576, -0.301105, 0.00155901, -0.283923, -0.301105, -0.00446258, 0.00468422, -0.305297, -0.0192255, -0.0307253, -0.080934, -0.0207928, -0.0120862, -0.0601959, -0.0187703, -0.0525948, -0.104487, 0.0759097, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54143, 0.00163226, -0.00562584, -1.00069, -0.00179376, -0.0434069, -0.504486, -0.00699814, -0.00839338, -0.504589, 0.00110498, -0.000794057, -0.504496, -0.0129319, 0.0486543, 0.00899176, 0.00242284, -0.0125489, 0.00885087, 0.00626927, -0.0118, 0.00918325, -0.00196075, -0.0145442, -0.0305007, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.52385, -0.279188, 0.00840191, -1.01091, 0.269244, 0.00413403, -0.479768, 0.417441, -0.00299013, -0.480863, 0.39931, 0.0143018, -0.503453, 0.495302, -0.000776748, 0.0155218, 0.0428081, 4.47766e-05, 0.00570526, 0.0321811, -0.00103053, 0.0273621, 0.0551947, -0.0193749, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.76638, -0.0538612, 0.112719, -0.886897, -0.00261925, -0.0927963, -0.389801, -0.00538182, -0.0896239, -0.391615, -0.00588828, -0.024588, -0.406336, -0.0223612, -0.0301116, -0.0787452, -0.0238881, -0.0119583, -0.0584624, -0.0219222, -0.0513014, -0.101679, 0.0095603, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.33419, 0.0163057, -0.0820134, -0.765711, -0.00811125, -0.0197484, -0.765907, 0.00437531, -0.0280599, -0.766067, -0.0130073, 0.0449359, 0.0121586, 0.00160498, -0.0244483, 0.0118399, 0.00868661, -0.0219185, 0.0124792, -0.00650202, -0.0290521, 0.019379, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.31693, 0.200661, 0.00686872, -0.719812, 0.237831, -0.00353996, -0.722139, 0.649666, 0.0231823, -0.770065, 0.79978, 0.00706757, 0.0334371, 0.0904652, 0.00881041, 0.0126672, 0.0677174, 0.00654255, 0.0582358, 0.116712, -0.00364074, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.85008, -0.0173137, -0.328882, -0.60849, -0.0358236, 0.0336164, -0.636461, -0.0424219, 0.134597, -0.696256, -0.031322, -0.0512358, -0.136354, -0.033955, -0.0197657, -0.101599, -0.0305462, -0.0881571, -0.175916, 0.0219205, 
};


const int step100_node4_num_factors = 17;
const bool step100_node4_marked = true;
const bool step100_node4_fixed = false;
int step100_node4_factor_height[] = {step100_factor381_height, step100_factor382_height, step100_factor383_height, step100_factor384_height, step100_factor379_height, step100_factor385_height, step100_factor386_height, step100_factor380_height, step100_factor388_height, step100_factor371_height, step100_factor372_height, step100_factor373_height, step100_factor374_height, step100_factor375_height, step100_factor376_height, step100_factor377_height, step100_factor378_height, };
int step100_node4_factor_width[] = {step100_factor381_width, step100_factor382_width, step100_factor383_width, step100_factor384_width, step100_factor379_width, step100_factor385_width, step100_factor386_width, step100_factor380_width, step100_factor388_width, step100_factor371_width, step100_factor372_width, step100_factor373_width, step100_factor374_width, step100_factor375_width, step100_factor376_width, step100_factor377_width, step100_factor378_width, };
int* step100_node4_factor_ridx[] = {step100_factor381_ridx, step100_factor382_ridx, step100_factor383_ridx, step100_factor384_ridx, step100_factor379_ridx, step100_factor385_ridx, step100_factor386_ridx, step100_factor380_ridx, step100_factor388_ridx, step100_factor371_ridx, step100_factor372_ridx, step100_factor373_ridx, step100_factor374_ridx, step100_factor375_ridx, step100_factor376_ridx, step100_factor377_ridx, step100_factor378_ridx, };
float* step100_node4_factor_data[] = {step100_factor381_data, step100_factor382_data, step100_factor383_data, step100_factor384_data, step100_factor379_data, step100_factor385_data, step100_factor386_data, step100_factor380_data, step100_factor388_data, step100_factor371_data, step100_factor372_data, step100_factor373_data, step100_factor374_data, step100_factor375_data, step100_factor376_data, step100_factor377_data, step100_factor378_data, };
int step100_node4_factor_num_blks[] = {step100_factor381_num_blks, step100_factor382_num_blks, step100_factor383_num_blks, step100_factor384_num_blks, step100_factor379_num_blks, step100_factor385_num_blks, step100_factor386_num_blks, step100_factor380_num_blks, step100_factor388_num_blks, step100_factor371_num_blks, step100_factor372_num_blks, step100_factor373_num_blks, step100_factor374_num_blks, step100_factor375_num_blks, step100_factor376_num_blks, step100_factor377_num_blks, step100_factor378_num_blks, };
int* step100_node4_factor_A_blk_start[] = {step100_factor381_A_blk_start, step100_factor382_A_blk_start, step100_factor383_A_blk_start, step100_factor384_A_blk_start, step100_factor379_A_blk_start, step100_factor385_A_blk_start, step100_factor386_A_blk_start, step100_factor380_A_blk_start, step100_factor388_A_blk_start, step100_factor371_A_blk_start, step100_factor372_A_blk_start, step100_factor373_A_blk_start, step100_factor374_A_blk_start, step100_factor375_A_blk_start, step100_factor376_A_blk_start, step100_factor377_A_blk_start, step100_factor378_A_blk_start, };
int* step100_node4_factor_B_blk_start[] = {step100_factor381_B_blk_start, step100_factor382_B_blk_start, step100_factor383_B_blk_start, step100_factor384_B_blk_start, step100_factor379_B_blk_start, step100_factor385_B_blk_start, step100_factor386_B_blk_start, step100_factor380_B_blk_start, step100_factor388_B_blk_start, step100_factor371_B_blk_start, step100_factor372_B_blk_start, step100_factor373_B_blk_start, step100_factor374_B_blk_start, step100_factor375_B_blk_start, step100_factor376_B_blk_start, step100_factor377_B_blk_start, step100_factor378_B_blk_start, };
int* step100_node4_factor_blk_width[] = {step100_factor381_blk_width, step100_factor382_blk_width, step100_factor383_blk_width, step100_factor384_blk_width, step100_factor379_blk_width, step100_factor385_blk_width, step100_factor386_blk_width, step100_factor380_blk_width, step100_factor388_blk_width, step100_factor371_blk_width, step100_factor372_blk_width, step100_factor373_blk_width, step100_factor374_blk_width, step100_factor375_blk_width, step100_factor376_blk_width, step100_factor377_blk_width, step100_factor378_blk_width, };
const int step100_node4_parent = 7;
const int step100_node4_height = 31;
const int step100_node4_width = 24;
float step100_node4_data[] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};
const int step100_node4_num_blks = 2;
int step100_node4_A_blk_start[] = {0, 3, };
int step100_node4_B_blk_start[] = {0, 12, };
int step100_node4_blk_width[] = {3, 3, };
const float step100_node4_H_correct_cond = 42.46471369682641;
float step100_node4_H_correct_data[] = {
1.9999899240999999, 3.8335697574999996e-11, -0.016387016953999998, -0.9999779915299999, -0.006154090378099999, -0.097618532249, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999949620499999, -0.0018635893696, 0.0, -0.025076488877999997, 
3.8335697574999996e-11, 1.9999899240999999, -0.9443528696003141, 0.006154090358932476, -0.9999779915301179, 1.0818154958081287, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0018635893504321513, -0.9999949620500357, 0.0, -0.021674182460480664, 
-0.016387016953999998, -0.9443528696003141, 2.89207112583876, 3.4709999993366306e-09, 1.0820571402393123e-07, -0.99999919313894, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.014627138174199998, 0.944383853872224, -0.99999942812, 0.031104422959319998, 
-0.9999779915299999, 0.006154090358932476, 3.4709999993366306e-09, 1.9999989447024644, 4.5807999988954314e-10, 0.10427447376962999, -0.9988587523199999, 0.047745754056, -0.13023272789999998, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.6387073963800975e-07, -3.707110000257196e-09, -2.324319999801102e-09, 0.007808798185279999, 
-0.006154090378099999, -0.9999779915301179, 1.0820571402393123e-07, 4.5807999988954314e-10, 1.9999908457868334, -1.0811947555337351, -0.04774562012904, -0.9988555586678681, 1.0133531923524501, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.2243399995347634e-09, 3.9369963940999094e-07, 4.680788846801642e-07, 0.07067961087849829, 
-0.097618532249, 1.0818154958081287, -0.99999919313894, 0.10427447376962999, -1.0811947555337351, 3.1798591068086504, 3.8704099999840817e-08, -5.156501200719112e-07, -0.99999877564, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.4815404993420564e-08, 8.86906899943864e-07, 8.956589480092636e-07, 0.04003125300477199, 
0.0, 0.0, 0.0, -0.9988587523199999, -0.04774562012904, 3.8704099999840817e-08, 2.0000072673157736, -8.456001996268316e-09, 0.08170084796956999, -0.99995229972, 0.0099690874776, -0.027166125924, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -7.990520884992243e-07, 2.5472090001233403e-08, 6.466319999831316e-09, -0.012607406099927, 
0.0, 0.0, 0.0, 0.047745754056, -0.9988555586678681, -5.156501200719112e-07, -8.456001996268316e-09, 1.9999905671327967, -1.0184168816264167, -0.0099690212577216, -0.9999458651862464, 1.0307485164498413, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.978509620130988e-08, 6.779308146877949e-07, 1.5648219954515373e-06, -0.06958085153666176, 
0.0, 0.0, 0.0, -0.13023272789999998, 1.0133531923524501, -0.99999877564, 0.08170084796956999, -1.0184168816264167, 3.04383984321664, -6.331600000606078e-08, 1.0201158720920455e-06, -0.99999695693528, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.963171000735746e-08, -1.2820492700453046e-06, -6.848053380050886e-07, 0.03812651735170999, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99995229972, -0.0099690212577216, -6.331600000606078e-08, 2.0000062313041296, 1.3301399999351758e-08, 0.016889150727840002, -0.00106370977096, 1.00000178976, -0.94259865176, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.8407338152574965e-07, -1.0423691999932784e-07, -1.9166053999437072e-08, -0.0011062111941307975, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0099690874776, -0.9999458651862464, 1.0201158720920455e-06, 1.3301399999351758e-08, 2.00000436214117, -1.030972502455824, -1.00000114662071, -0.00106371661856, 0.02276424717476, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.022199986351555e-10, 1.9072007399247078e-07, -1.1154826714177697e-06, 0.0015179318687100006, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.027166125924, 1.0307485164498413, -0.99999695693528, 0.016889150727840002, -1.030972502455824, 3.0631920330145603, -3.0456071205441304e-07, 2.5047959999118015e-08, -1.0000006742008, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.298400001554003e-09, 2.880164399987549e-07, 6.289573759979264e-07, 9.162851183999949e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00106370977096, -1.00000114662071, -3.0456071205441304e-07, 1.9999968320571777, 9.148016000187385e-09, -0.021761863777015982, -0.99989866004, 0.014080605044, -0.09155276936, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.9340640000630995e-09, -1.8204658298964128e-07, 4.679799929008166e-07, 0.0007190164534468, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00000178976, -0.00106371661856, 2.5047959999118015e-08, 9.148016000187385e-09, 2.0000034954804042, -0.942620386791008, -0.014080631265279999, -0.9999020289986921, 1.1570166860744802, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.519490382247708e-07, -7.206794599940133e-08, 1.141169499987558e-08, 0.00017381723751716023, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.94259865176, 0.02276424717476, -1.0000006742008, -0.021761863777015982, -0.942620386791008, 2.88901544202409, 9.55145000061911e-08, -1.801711000181311e-07, -1.000001853666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -9.553625376237321e-07, 1.9263030001777155e-07, 1.4135182000642074e-07, -8.003996047600045e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99989866004, -0.014080631265279999, 9.55145000061911e-08, 1.9999966429816902, -1.001580000072508e-08, 0.07525238970399999, -0.99948782818, -0.031961165788000005, 0.11496765442000001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.6204873600152755e-08, 1.6035459991807288e-08, -3.932473999217945e-08, -6.819009923900003e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.014080605044, -0.9999020289986921, -1.801711000181311e-07, -1.001580000072508e-08, 2.00000595266945, -1.15819049240054, 0.0319612288642, -0.99949162444708, 1.0419109776522, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.7383117102836838e-07, 6.662347999582864e-08, 2.3045839998352867e-08, -0.0003772024163729008, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.09155276936, 1.1570166860744802, -1.000001853666, 0.07525238970399999, -1.15819049240054, 3.34707160929521, -2.0944899998219955e-08, -2.0717478002091687e-07, -1.0000003299933, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.3553156943584135e-07, 9.345525999738974e-08, 5.503295000036709e-08, -0.00015960635417369847, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99948782818, 0.0319612288642, -2.0944899998219955e-08, 2.00001062537281, -6.66554999999761e-08, -0.0816086509354, -0.9999997859600002, 0.0030142624358000004, 0.065536673286, 0.0, 0.0, 0.0, -1.5021331000275048e-07, -1.5253722000094454e-07, -6.395251850130045e-07, 8.010791725799991e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.031961165788000005, -0.99949162444708, -2.0717478002091687e-07, -6.66554999999761e-08, 2.00000496108768, -1.0450516898322002, -0.003014294258600001, -0.9999972908964121, 1.08091519292196, 0.0, 0.0, 0.0, 1.2928794027122716e-08, 3.354020000272886e-08, 2.031904000061026e-08, 3.562162411360065e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.11496765442000001, 1.0419109776522, -1.0000003299933, -0.0816086509354, -1.0450516898322002, 3.0988006609450003, -2.4113999999908127e-08, -2.2692552003091462e-07, -1.0000013937884, 0.0, 0.0, 0.0, -1.294907710017797e-06, 2.3002399995701938e-08, 4.996733999977258e-08, -0.00010957353469900075, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999997859600002, -0.003014294258600001, -2.4113999999908127e-08, 2.0000107379715297, -9.267822000233468e-08, -0.068794145737, -0.9999696374799999, 0.008378552727599999, 0.036527911288, -4.3628789997960225e-08, -2.1850047398716933e-07, -5.377384159828819e-07, -0.00048691648778599974, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0030142624358000004, -0.9999972908964121, -2.2692552003091462e-07, -9.267822000233468e-08, 2.00000278998346, -1.0807113096381, -0.008378483215200003, -0.999965218434256, 0.9186423569347201, 8.33748480091186e-08, 3.763907600190861e-08, 9.733220000119432e-09, 0.00010332262106310078, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.065536673286, 1.08091519292196, -1.0000013937884, -0.068794145737, -1.0807113096381, 3.1726767649040437, -8.827240000944763e-09, -1.233552266225664e-06, -1.000001447435756, -9.413917140106938e-07, -1.0222874599776993e-07, -1.688734000026333e-08, -0.0001137040846115999, 
};
float step100_node4_M_correct_data[] = {
1.41421, 2.71075e-11, -0.0115874, -0.707093, -0.00435161, -0.0690269, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.707105, -0.00131776, 0.0, -0.0177318, 
0.0, 1.41421, -0.66776, 0.00435161, -0.707093, 0.764961, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00131776, -0.707105, 0.0, -0.015326, 
0.0, 0.0, 1.56398, -0.00338082, -0.301934, -0.313296, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00467626, 0.301917, -0.639394, 0.013213, 
0.0, 0.0, 0.0, 1.22474, -0.00083347, 0.0417052, -0.815568, 0.0389844, -0.106335, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.408233, 0.00258503, -0.00176501, -0.00377049, 
0.0, 0.0, 0.0, 0.0, 1.18694, -0.535121, -0.0407985, -0.841511, 0.853678, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.000904505, -0.344443, -0.16265, 0.0537111, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.48448, 0.00820579, -0.304441, -0.362917, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0214289, 0.303797, -0.193524, 0.0562957, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.15461, -3.44592e-05, 0.0283942, -0.866052, 0.00863416, -0.0235284, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.288239, -0.0125041, -0.00561864, -0.0120847, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.09437, -0.371335, -0.00913664, -0.913718, 0.941864, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00787644, -0.180437, -0.178841, -0.00648508, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.42596, 0.0148658, -0.238113, -0.45554, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0275639, 0.236979, 0.00152797, 0.00718061, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.11788, 0.00238762, 0.010636, -0.000951542, 0.894552, -0.843202, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.222876, -0.0143135, -0.00583495, -0.0105004, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.05278, -0.264696, -0.949865, -0.00303916, 0.0235353, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00347116, -0.102869, -0.154814, -0.00243963, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.37762, -0.1825, -0.00749037, -0.714858, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0170348, 0.181857, 0.0929805, 0.00628064, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.03172, -0.00329796, -0.126653, -0.969157, 0.0136477, -0.088738, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.30648e-05, -0.0625524, -0.126089, -0.000447871, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.09531, -0.177149, -0.0157735, -0.912853, 1.05607, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.181919, 0.0124598, 0.00459212, 0.00876932, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.27241, -0.0986638, -0.125732, -0.647715, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.132006, 0.0900958, 0.0393234, -0.00227133, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.02506, -0.0132454, -0.0565789, -0.975053, -0.0311798, 0.112157, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00992823, -0.0502774, -0.115357, -0.000573647, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.07263, -0.256501, 0.0177566, -0.932199, 0.972746, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.139225, 0.0213398, 0.00869735, 0.00684377, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.31734, -0.0384205, -0.182849, -0.564884, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.184063, 0.0320922, 0.00389879, -0.00699027, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.02347, -0.0203958, -0.010968, -0.977068, 0.00294514, 0.0640338, 0.0, 0.0, 0.0, -0.0187838, -0.0470646, -0.109905, -0.000849385, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.04699, -0.22758, -0.0219127, -0.955059, 1.03365, 0.0, 0.0, 0.0, 0.0911537, 0.0221907, 0.00284832, 0.00487302, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.33003, -0.0118068, -0.163395, -0.574469, 0.0, 0.0, 0.0, -0.163721, 0.00567138, 0.00460364, -0.00718141, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.02212, -0.0195472, 0.00943006, -0.978329, 0.00819723, 0.0357374, -0.0178929, -0.0444491, -0.104947, -0.00126681, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.02994, -0.181937, -0.0267026, -0.970741, 0.892616, 0.0582671, 0.0207681, 0.00169408, 0.00345814, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.31793, 0.00331391, -0.134068, -0.635799, -0.133772, -0.00946038, 0.00609742, -0.00651074, 
};


const int step100_node5_num_factors = 17;
const bool step100_node5_marked = true;
const bool step100_node5_fixed = false;
int step100_node5_factor_height[] = {step100_factor326_height, step100_factor327_height, step100_factor328_height, step100_factor329_height, step100_factor330_height, step100_factor331_height, step100_factor332_height, step100_factor333_height, step100_factor334_height, step100_factor335_height, step100_factor336_height, step100_factor337_height, step100_factor338_height, step100_factor339_height, step100_factor340_height, step100_factor341_height, step100_factor343_height, };
int step100_node5_factor_width[] = {step100_factor326_width, step100_factor327_width, step100_factor328_width, step100_factor329_width, step100_factor330_width, step100_factor331_width, step100_factor332_width, step100_factor333_width, step100_factor334_width, step100_factor335_width, step100_factor336_width, step100_factor337_width, step100_factor338_width, step100_factor339_width, step100_factor340_width, step100_factor341_width, step100_factor343_width, };
int* step100_node5_factor_ridx[] = {step100_factor326_ridx, step100_factor327_ridx, step100_factor328_ridx, step100_factor329_ridx, step100_factor330_ridx, step100_factor331_ridx, step100_factor332_ridx, step100_factor333_ridx, step100_factor334_ridx, step100_factor335_ridx, step100_factor336_ridx, step100_factor337_ridx, step100_factor338_ridx, step100_factor339_ridx, step100_factor340_ridx, step100_factor341_ridx, step100_factor343_ridx, };
float* step100_node5_factor_data[] = {step100_factor326_data, step100_factor327_data, step100_factor328_data, step100_factor329_data, step100_factor330_data, step100_factor331_data, step100_factor332_data, step100_factor333_data, step100_factor334_data, step100_factor335_data, step100_factor336_data, step100_factor337_data, step100_factor338_data, step100_factor339_data, step100_factor340_data, step100_factor341_data, step100_factor343_data, };
int step100_node5_factor_num_blks[] = {step100_factor326_num_blks, step100_factor327_num_blks, step100_factor328_num_blks, step100_factor329_num_blks, step100_factor330_num_blks, step100_factor331_num_blks, step100_factor332_num_blks, step100_factor333_num_blks, step100_factor334_num_blks, step100_factor335_num_blks, step100_factor336_num_blks, step100_factor337_num_blks, step100_factor338_num_blks, step100_factor339_num_blks, step100_factor340_num_blks, step100_factor341_num_blks, step100_factor343_num_blks, };
int* step100_node5_factor_A_blk_start[] = {step100_factor326_A_blk_start, step100_factor327_A_blk_start, step100_factor328_A_blk_start, step100_factor329_A_blk_start, step100_factor330_A_blk_start, step100_factor331_A_blk_start, step100_factor332_A_blk_start, step100_factor333_A_blk_start, step100_factor334_A_blk_start, step100_factor335_A_blk_start, step100_factor336_A_blk_start, step100_factor337_A_blk_start, step100_factor338_A_blk_start, step100_factor339_A_blk_start, step100_factor340_A_blk_start, step100_factor341_A_blk_start, step100_factor343_A_blk_start, };
int* step100_node5_factor_B_blk_start[] = {step100_factor326_B_blk_start, step100_factor327_B_blk_start, step100_factor328_B_blk_start, step100_factor329_B_blk_start, step100_factor330_B_blk_start, step100_factor331_B_blk_start, step100_factor332_B_blk_start, step100_factor333_B_blk_start, step100_factor334_B_blk_start, step100_factor335_B_blk_start, step100_factor336_B_blk_start, step100_factor337_B_blk_start, step100_factor338_B_blk_start, step100_factor339_B_blk_start, step100_factor340_B_blk_start, step100_factor341_B_blk_start, step100_factor343_B_blk_start, };
int* step100_node5_factor_blk_width[] = {step100_factor326_blk_width, step100_factor327_blk_width, step100_factor328_blk_width, step100_factor329_blk_width, step100_factor330_blk_width, step100_factor331_blk_width, step100_factor332_blk_width, step100_factor333_blk_width, step100_factor334_blk_width, step100_factor335_blk_width, step100_factor336_blk_width, step100_factor337_blk_width, step100_factor338_blk_width, step100_factor339_blk_width, step100_factor340_blk_width, step100_factor341_blk_width, step100_factor343_blk_width, };
const int step100_node5_parent = 6;
const int step100_node5_height = 31;
const int step100_node5_width = 24;
float step100_node5_data[] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};
const int step100_node5_num_blks = 2;
int step100_node5_A_blk_start[] = {0, 3, };
int step100_node5_B_blk_start[] = {0, 27, };
int step100_node5_blk_width[] = {3, 3, };
const float step100_node5_H_correct_cond = 40.93284930897365;
float step100_node5_H_correct_data[] = {
1.9999899240999999, -1.4413628319999998e-10, 0.0120375151043, -0.99929351389, 0.037523941035, -0.133887786172, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.999987891, -0.0043822408112, 0.0, -0.0061188482649, 
-1.4413628319999998e-10, 1.9999899240999999, -1.0168268894708674, -0.037523940962982415, -0.9992935138927044, 0.997139672069649, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.004382240883267632, -0.9999878909996841, 0.0, 0.07001640573244099, 
0.0120375151043, -1.0168268894708674, 3.0340892276989484, -4.220837000056291e-08, -2.656156949262084e-07, -0.999999720465956, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.016493447324039998, 1.0167679427221423, -0.9999994212, 0.030931171573857295, 
-0.99929351389, -0.037523940962982415, -4.220837000056291e-08, 2.0000071813418168, 1.4515200007241521e-09, 0.09637710808708001, -0.99917801424, 0.0405719118, -0.028615827744, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.001690400241509e-07, -4.9250320001595576e-08, -1.2592799999865697e-08, 0.005219821254762001, 
0.037523941035, -0.9992935138927044, -2.656156949262084e-07, 1.4515200007241521e-09, 2.000006136250616, -1.001465717509144, -0.040571851239359996, -0.9991787276847999, 1.030472711571584, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.119487999560517e-08, -7.048921439297553e-07, 8.851908802539406e-08, -0.07085137093443981, 
-0.133887786172, 0.997139672069649, -0.999999720465956, 0.09637710808708001, -1.001465717509144, 3.0122305260957303, 6.116179999916123e-08, 2.3547124991872664e-07, -1.00000235967564, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.989558001156766e-08, 8.072393440897468e-07, -1.6077393550102362e-06, 0.03761225569811599, 
0.0, 0.0, 0.0, -0.99917801424, -0.040571851239359996, 6.116179999916123e-08, 2.000004838763648, -1.0168079998945205e-08, -0.013215846518980001, -1.00000021128, -0.0018618295248, 0.05280644817, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.5875465420288998e-06, -1.0176065999911602e-07, -3.8458300000413116e-08, 0.0153983901962324, 
0.0, 0.0, 0.0, 0.0405719118, -0.9991787276847999, 2.3547124991872664e-07, -1.0168079998945205e-08, 2.0000093664667697, -1.0307857938731757, 0.0018618271423039999, -1.0000015637293853, 0.9507228218318564, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.908516499877521e-08, 3.6770338641252357e-07, -6.558407616259773e-07, -0.0326139486490991, 
0.0, 0.0, 0.0, -0.028615827744, 1.030472711571584, -1.00000235967564, -0.013215846518980001, -1.0307857938731757, 3.0626896437611686, 1.8956500000770434e-09, -9.666316773324582e-09, -0.99999950989203, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.211400000402895e-09, -1.1691014079631227e-06, 4.121257706254278e-07, -0.008537115867326, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.00000021128, 0.0018618271423039999, 1.8956500000770434e-09, 1.9999948085562713, 1.880585199969253e-09, -0.051036222871750005, -0.012174137216, 0.9999235472800001, -0.94985682664, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.615223099850207e-07, 9.43773700007383e-08, 1.858835439981525e-08, -0.0157886767542382, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0018618295248, -1.0000015637293853, -9.666316773324582e-09, 1.880585199969253e-09, 2.0000098264979993, -0.9508172894761471, -0.9999301446971002, -0.012174248969056839, 0.11824370080837492, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.567881637968318e-08, -8.281423095024115e-07, -8.505720039379052e-07, 0.0326202879727682, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05280644817, 0.9507228218318564, -0.99999950989203, -0.051036222871750005, -0.9508172894761471, 2.9066614202622603, -1.1816004004708761e-07, -2.3021999999214184e-08, -1.0000006900956, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.1578699989097731e-09, 6.667072000127471e-07, 3.1227584400453417e-07, -0.021764770882970998, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.012174137216, -0.9999301446971002, -1.1816004004708761e-07, 1.99999381855416, 2.557289999885678e-08, -0.1066709455656, -0.99952078431, 0.030842696103, -0.11827537494, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.11037900001271e-08, 3.157315999925536e-07, 7.667775840117697e-07, 1.3792819764000923e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9999235472800001, -0.012174248969056839, -2.3021999999214184e-08, 2.557289999885678e-08, 1.9999968634334846, -0.9512285592284451, -0.030842688520945, -0.9995223584012216, 0.98638629389407, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.125785798114475e-07, -6.120691000190314e-08, -5.980205999492119e-09, 3.847577581375009e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.94985682664, 0.11824370080837492, -1.0000006900956, -0.1066709455656, -0.9512285592284451, 2.916215871288, -8.875999906823906e-10, 7.303014999851569e-07, -1.000000111984, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.758272700102019e-07, 3.041212000249945e-07, 9.382602000290146e-08, 9.159438520000163e-06, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99952078431, -0.030842688520945, -8.875999906823906e-10, 1.9999983802956403, -5.1418300003123196e-08, 0.08779695633060002, -0.9994751971700001, -0.03235543861600001, 0.08743745821100002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.1148395999818766e-07, 8.085331999644908e-08, -4.036834399493857e-08, 3.561042201399942e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.030842696103, -0.9995223584012216, 7.303014999851569e-07, -5.1418300003123196e-08, 1.9999982999807158, -0.989566646401432, 0.03235553661164, -0.999474950455728, 1.0052620250334878, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.726795895895575e-07, -8.616592003532965e-09, 1.7577619999230902e-08, -3.310221023900006e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.11827537494, 0.98638629389407, -1.000000111984, 0.08779695633060002, -0.989566646401432, 2.98695980615329, -1.5691829999517814e-07, -1.3328518400130108e-06, -1.00000170016761, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.988304079651651e-07, 1.0713463999868087e-07, 1.9361180000428604e-08, 1.6272427187000085e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9994751971700001, 0.03235553661164, -1.5691829999517814e-07, 1.9999945026800603, 2.9780000034233753e-09, -0.05486589613880002, -0.9996929031, -0.02467245093, 0.059798118011999996, 0.0, 0.0, 0.0, 8.78231600009417e-08, 1.141074100002909e-07, 3.0627908400472827e-07, 4.6674891980959744e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.03235543861600001, -0.999474950455728, -1.3328518400130108e-06, 2.9780000034233753e-09, 2.00000953836913, -1.0075663477906298, 0.0246726040839, -0.99970015643555, 0.92586660231562, 0.0, 0.0, 0.0, 6.208207180007217e-07, 1.706814700058294e-07, 1.773682000004722e-08, -5.599040635799642e-06, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.08743745821100002, 1.0052620250334878, -1.00000170016761, -0.05486589613880002, -1.0075663477906298, 3.0181979132413796, 5.6622220001957976e-08, -6.624794998130663e-08, -1.00000002030022, 0.0, 0.0, 0.0, 2.3078502198828025e-07, -5.6230670004170006e-08, 4.7325399974676675e-09, 1.3236895002000267e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9996929031, 0.0246726040839, 5.6622220001957976e-08, 1.9999937653421345, 3.618390000091115e-08, -0.03693676588676, -0.9999659508799998, 0.007807130697599999, 0.013586939495999999, 5.5814588001147526e-08, 2.1942013401333283e-07, 1.333682924166536e-07, 0.00013950643040779986, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.02467245093, -0.99970015643555, -6.624794998130663e-08, 3.618390000091115e-08, 2.00000310805541, -0.927056965491804, -0.007807180820600001, -0.9999703850609281, 1.00808697805512, 2.8882030008643412e-08, 6.467029995990685e-09, 3.4100470000472693e-09, 1.7428719350000028e-06, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.059798118011999996, 0.92586660231562, -1.00000002030022, -0.03693676588676, -0.927056965491804, 2.8608022517604277, 1.4294080000237432e-08, 6.299602631980313e-07, -1.000001094249978, -9.824148199727355e-08, 7.972574002837806e-09, -5.288947999984283e-09, 1.3416447017199767e-05, 
};
float step100_node5_M_correct_data[] = {
1.41421, -1.0192e-10, 0.00851183, -0.706609, 0.0265335, -0.0946732, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.7071, -0.00309872, 0.0, -0.00432669, 
0.0, 1.41421, -0.719007, -0.0265335, -0.706609, 0.705086, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00309872, -0.7071, 0.0, 0.0495092, 
0.0, 0.0, 1.58652, -0.00823392, -0.320376, -0.310259, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.005198, 0.32044, -0.63031, 0.0419569, 
0.0, 0.0, 0.0, 1.22472, -0.00215392, 0.0372607, -0.815842, 0.0331275, -0.0233652, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.407933, -0.0149528, -0.00423765, 0.00312044, 
0.0, 0.0, 0.0, 0.0, 1.1821, -0.507616, -0.0358084, -0.845197, 0.871688, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0155719, -0.335786, -0.170836, -0.0188683, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.46656, 0.00833378, -0.293387, -0.379561, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0324819, 0.291703, -0.19237, 0.00383058, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.15458, -0.000687119, 0.00181778, -0.866116, -0.00161256, 0.0457365, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.287535, -0.0230856, -0.00690423, 0.0149289, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.09475, -0.369601, 0.00115707, -0.913453, 0.868467, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.015481, -0.180629, -0.183324, -0.0434169, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.42184, 0.00140808, -0.237446, -0.477618, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0205295, 0.23656, 0.00566643, -0.00466794, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.11796, -4.82138e-06, -0.0105151, -0.0108896, 0.894418, -0.849634, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.222751, -0.017996, -0.00516629, -0.00250609, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0532, -0.257167, -0.949421, -0.0115552, 0.112267, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00835719, -0.103365, -0.157733, -0.007713, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.36234, -0.179305, 0.00472221, -0.719397, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0075548, 0.179207, 0.0892694, 0.00808844, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.03263, -0.000372015, -0.133955, -0.967937, 0.0298681, -0.114538, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00402292, -0.064108, -0.129576, -0.00570009, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.09538, -0.170403, -0.0284858, -0.912479, 0.900458, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.182006, 0.0128096, 0.00212568, 0.00196327, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.2717, -0.105775, -0.119122, -0.677756, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.129022, 0.0934426, 0.0476086, 0.00325203, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.02523, -0.00944416, -0.0674073, -0.974879, -0.0315592, 0.0852857, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00445624, -0.0505288, -0.117364, -0.00495675, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.07341, -0.229054, 0.0215655, -0.931399, 0.937263, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.140249, 0.0225982, 0.00966329, 0.00211398, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.28322, -0.0473609, -0.167913, -0.60751, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.170703, 0.0360221, 0.00764779, -3.91744e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.02318, -0.0182107, -0.0202383, -0.977045, -0.0241135, 0.0584434, 0.0, 0.0, 0.0, -0.0151033, -0.0469523, -0.111673, -0.00472351, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.05023, -0.223081, 0.00655088, -0.952305, 0.882598, 0.0, 0.0, 0.0, 0.0966926, 0.0234682, 0.00432953, 0.00163234, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.3089, -0.0139906, -0.162678, -0.612672, 0.0, 0.0, 0.0, -0.163121, 0.00710347, 0.00328849, -0.000993681, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.02232, -0.0191696, 0.00568474, -0.978134, 0.00763668, 0.0132903, -0.0172863, -0.0449259, -0.10671, -0.00440192, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.03233, -0.17892, -0.0257259, -0.968512, 0.976763, 0.0628182, 0.0208374, -7.78951e-05, 0.00115883, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.29267, 0.000740772, -0.134086, -0.638457, -0.133878, -0.00745218, 0.00410991, -0.00118179, 
};


const int step100_node6_num_factors = 16;
const bool step100_node6_marked = true;
const bool step100_node6_fixed = false;
int step100_node6_factor_height[] = {step100_factor342_height, step100_factor344_height, step100_factor345_height, step100_factor346_height, step100_factor347_height, step100_factor348_height, step100_factor349_height, step100_factor350_height, step100_factor351_height, step100_factor352_height, step100_factor353_height, step100_factor354_height, step100_factor355_height, step100_factor356_height, step100_factor357_height, step100_factor359_height, };
int step100_node6_factor_width[] = {step100_factor342_width, step100_factor344_width, step100_factor345_width, step100_factor346_width, step100_factor347_width, step100_factor348_width, step100_factor349_width, step100_factor350_width, step100_factor351_width, step100_factor352_width, step100_factor353_width, step100_factor354_width, step100_factor355_width, step100_factor356_width, step100_factor357_width, step100_factor359_width, };
int* step100_node6_factor_ridx[] = {step100_factor342_ridx, step100_factor344_ridx, step100_factor345_ridx, step100_factor346_ridx, step100_factor347_ridx, step100_factor348_ridx, step100_factor349_ridx, step100_factor350_ridx, step100_factor351_ridx, step100_factor352_ridx, step100_factor353_ridx, step100_factor354_ridx, step100_factor355_ridx, step100_factor356_ridx, step100_factor357_ridx, step100_factor359_ridx, };
float* step100_node6_factor_data[] = {step100_factor342_data, step100_factor344_data, step100_factor345_data, step100_factor346_data, step100_factor347_data, step100_factor348_data, step100_factor349_data, step100_factor350_data, step100_factor351_data, step100_factor352_data, step100_factor353_data, step100_factor354_data, step100_factor355_data, step100_factor356_data, step100_factor357_data, step100_factor359_data, };
int step100_node6_factor_num_blks[] = {step100_factor342_num_blks, step100_factor344_num_blks, step100_factor345_num_blks, step100_factor346_num_blks, step100_factor347_num_blks, step100_factor348_num_blks, step100_factor349_num_blks, step100_factor350_num_blks, step100_factor351_num_blks, step100_factor352_num_blks, step100_factor353_num_blks, step100_factor354_num_blks, step100_factor355_num_blks, step100_factor356_num_blks, step100_factor357_num_blks, step100_factor359_num_blks, };
int* step100_node6_factor_A_blk_start[] = {step100_factor342_A_blk_start, step100_factor344_A_blk_start, step100_factor345_A_blk_start, step100_factor346_A_blk_start, step100_factor347_A_blk_start, step100_factor348_A_blk_start, step100_factor349_A_blk_start, step100_factor350_A_blk_start, step100_factor351_A_blk_start, step100_factor352_A_blk_start, step100_factor353_A_blk_start, step100_factor354_A_blk_start, step100_factor355_A_blk_start, step100_factor356_A_blk_start, step100_factor357_A_blk_start, step100_factor359_A_blk_start, };
int* step100_node6_factor_B_blk_start[] = {step100_factor342_B_blk_start, step100_factor344_B_blk_start, step100_factor345_B_blk_start, step100_factor346_B_blk_start, step100_factor347_B_blk_start, step100_factor348_B_blk_start, step100_factor349_B_blk_start, step100_factor350_B_blk_start, step100_factor351_B_blk_start, step100_factor352_B_blk_start, step100_factor353_B_blk_start, step100_factor354_B_blk_start, step100_factor355_B_blk_start, step100_factor356_B_blk_start, step100_factor357_B_blk_start, step100_factor359_B_blk_start, };
int* step100_node6_factor_blk_width[] = {step100_factor342_blk_width, step100_factor344_blk_width, step100_factor345_blk_width, step100_factor346_blk_width, step100_factor347_blk_width, step100_factor348_blk_width, step100_factor349_blk_width, step100_factor350_blk_width, step100_factor351_blk_width, step100_factor352_blk_width, step100_factor353_blk_width, step100_factor354_blk_width, step100_factor355_blk_width, step100_factor356_blk_width, step100_factor357_blk_width, step100_factor359_blk_width, };
const int step100_node6_parent = 7;
const int step100_node6_height = 31;
const int step100_node6_width = 24;
float step100_node6_data[] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};
const int step100_node6_num_blks = 1;
int step100_node6_A_blk_start[] = {0, };
int step100_node6_B_blk_start[] = {15, };
int step100_node6_blk_width[] = {6, };
const float step100_node6_H_correct_cond = 90.97208476472878;
float step100_node6_H_correct_data[] = {
1.0425839448999998, -0.017346754015999995, 0.0171437653, 0.0058237646413, 0.9999787780799999, -0.9719453012299999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.015193011065, -0.043401805634, -0.10438092288999999, 0.038053645187999995, 
-0.017346754015999995, 1.04395517932544, -0.147653085152, -0.999985853949792, 0.005823835532800003, -0.0222889276768, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0430211494096, 0.019525188130560003, 0.0012905506895999998, 0.06256527812608001, 
0.0171437653, -0.147653085152, 1.6545534685040002, -8.503079000298088e-07, 6.700640000014887e-08, -1.0000000965956, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.1466042780482, -0.024513994013, 0.004118295281760001, 0.0067166289146, 
0.0058237646413, -0.999985853949792, -8.503079000298088e-07, 1.9999988984788881, 2.5230560001897924e-08, 0.01662839325009, -0.9993662067900001, 0.035584423182, -0.095777402385, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.0880205002272565e-08, -4.0498458003421256e-08, -1.7054199999679152e-09, -0.05998565278494399, 
0.9999787780799999, 0.005823835532800003, 6.700640000014887e-08, 2.5230560001897924e-08, 1.9999918393224, -0.97206273698576, -0.0355843589224, -0.9993626497476801, 1.0838365677924002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -6.420755999915375e-08, -2.1371323999755006e-07, -5.39104123194695e-07, 0.043020333648632, 
-0.9719453012299999, -0.0222889276768, -1.0000000965956, 0.01662839325009, -0.97206273698576, 2.94518132133105, 4.764470003348341e-09, 7.989920000085499e-08, -0.9999986091095001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.2609327999474498e-07, 1.1446295999952329e-07, 7.142759699908022e-08, -0.05159590307479, 
0.0, 0.0, 0.0, -0.9993662067900001, -0.0355843589224, 4.764470003348341e-09, 1.99999520883798, -7.71527400050347e-08, 0.05714917054290001, -0.9998323897299999, -0.018162799639, 0.088436274426, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.514961999762314e-08, -6.782779999196238e-09, 1.553863299928549e-08, 0.00014040932112599995, 
0.0, 0.0, 0.0, 0.035584423182, -0.9993626497476801, 7.989920000085499e-08, -7.71527400050347e-08, 2.00000851184169, -1.0865638727860503, 0.018162968567700003, -0.9998382743610901, 1.0277552803340602, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.8801139999887454e-08, 1.1775854001138318e-07, 3.260029145886903e-07, -0.00019279173624399924, 
0.0, 0.0, 0.0, -0.095777402385, 1.0838365677924002, -0.9999986091095001, 0.05714917054290001, -1.0865638727860503, 3.18387560587654, 3.2802844000818494e-07, 2.2364574999953258e-07, -0.9999961081197, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.1644845000634705e-07, 8.047364000496512e-08, 1.4391316450176078e-07, 2.201957377300119e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9998323897299999, 0.018162968567700003, 3.2802844000818494e-07, 2.00000262067134, -1.5937400001295366e-08, -0.06975506979880002, -0.9999462430199999, -0.010432714562, 0.019716775286, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -8.116017500094925e-08, -4.5424210001411214e-08, 3.9382560002052806e-08, 0.0002673299755929998, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.018162799639, -0.9998382743610901, 2.2364574999953258e-07, -1.5937400001295366e-08, 2.000001788113991, -1.029188839722706, 0.010432681813179998, -0.999946313928342, 1.0711084950206262, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.5121200008243186e-09, 2.774531660111478e-08, -1.7214096008138506e-08, 4.906717255749967e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.088436274426, 1.0277552803340602, -0.9999961081197, -0.06975506979880002, -1.029188839722706, 3.06409247241329, 4.9318170004400065e-08, 1.411420800020352e-07, -0.9999986285582401, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -7.614470003626217e-10, 1.0678043599881235e-07, 7.368685795328417e-08, 2.212972984999735e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999462430199999, 0.010432681813179998, 4.9318170004400065e-08, 2.00000353022905, 3.521476000190741e-08, -0.0085412970174, -0.99894677256, -0.04591081512, 0.06865721208, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.201436900006395e-08, 1.8908000016641275e-10, -5.2470669994613083e-08, -0.066988878902332, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.010432714562, -0.999946313928342, 1.411420800020352e-07, 3.521476000190741e-08, 2.000005282374781, -1.071256242701212, 0.04591082546281, -0.9989474403456301, 0.9579054178221701, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.3922650003675664e-09, 3.476254239898874e-08, 9.18460660168914e-08, 0.045290423118412006, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.019716775286, 1.0711084950206262, -0.9999986285582401, -0.0085412970174, -1.071256242701212, 3.1476557540140004, 1.9696289999062726e-07, 1.7372639998979492e-07, -0.9999977859106002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.66337500050556e-08, 2.4303831993856165e-08, 1.7781475999153323e-07, -0.02118751423789, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99894677256, 0.04591082546281, 1.9696289999062726e-07, 2.0000101686371803, 1.269109000229471e-08, -0.024606852557800006, 0.003006849891, 0.9999996619500001, -0.95992886165, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.831946500051765e-08, -2.337900000369013e-09, -1.1800074000116738e-07, 0.06841607000846, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.04591081512, -0.9989474403456301, 1.7372639998979492e-07, 1.269109000229471e-08, 1.9999961068257732, -0.9600457956706325, -0.9999931726819888, 0.003006823830237, -0.042774814755139, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -8.2574690002948e-10, -8.657380019989805e-08, -1.3823540940019223e-07, -0.04192760615908256, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.06865721208, 0.9579054178221701, -0.9999977859106002, -0.024606852557800006, -0.9600457956706325, 2.92228759129726, 1.7618355001071708e-07, -4.984218900229336e-08, -0.9999970912456099, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.2744184180387364e-07, 2.7767540151088165e-07, 6.489117100377791e-07, 0.060399935223448, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.003006849891, -0.9999931726819888, 1.7618355001071708e-07, 2.0000094430494966, 9.516419999942511e-09, 0.03988818626794001, -1.00000237896, -0.0016959539868000003, 0.059386725016, 0.0, 0.0, 0.0, -7.150538000148188e-09, 2.746199614946487e-08, 1.6783596401268482e-07, 0.00017482429573071581, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9999996619500001, 0.003006823830237, -4.984218900229336e-08, 9.516419999942511e-09, 1.9999917192372936, -0.9600488960821388, 0.0016959361082799997, -0.9999943514258756, 1.042852743847272, 0.0, 0.0, 0.0, 6.019252878304037e-08, -6.727396400112835e-09, -1.259047430101204e-07, -9.272076059895e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.95992886165, -0.042774814755139, -0.9999970912456099, 0.03988818626794001, -0.9600488960821388, 2.923295176109436, -1.8094494189708156e-07, 3.34417579998267e-08, -1.00000368679586, 0.0, 0.0, 0.0, -9.216552579994354e-08, -2.64594372191601e-07, -3.748732549789967e-07, -2.6014989681289014e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.00000237896, 0.0016959361082799997, -1.8094494189708156e-07, 1.9999935585049102, -1.589943599940741e-08, -0.0576176621397, -0.9999914458600001, -0.0032026622826000005, -0.055752755014000004, 4.520356999879179e-09, -3.7375186000308964e-08, -1.9656681500201105e-07, 3.2770185635310183e-06, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0016959539868000003, -0.9999943514258756, 3.34417579998267e-08, -1.589943599940741e-08, 1.999995620662462, -1.0429567844270429, 0.00320266200801, -0.9999921668455959, 0.938142624744399, 1.579779190029666e-08, -5.11235599999512e-09, -1.6546769799707662e-07, 0.00010753216879932, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.059386725016, 1.042852743847272, -1.00000368679586, -0.0576176621397, -1.0429567844270429, 3.0910733935818056, 9.001603900494234e-08, 1.7743068999650385e-08, -0.9999974807941701, -6.338029700080104e-08, 1.0599725959669728e-07, 5.80928870023367e-07, -3.4396150809321995e-05, 
};
float step100_node6_M_correct_data[] = {
1.02107, -0.0169888, 0.01679, 0.00570359, 0.979344, -0.951889, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0148795, -0.0425062, -0.102227, 0.0372684, 
0.0, 1.0216, -0.144252, -0.978748, 0.0219868, -0.0376472, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0418641, 0.0184055, -0.00043673, 0.0618622, 
0.0, 0.0, 1.27807, -0.110544, -0.010384, -0.774174, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.109787, -0.0165447, 0.00451594, 0.0117479, 
0.0, 0.0, 0.0, 1.01479, 0.0145704, -0.098907, -0.984801, 0.0350658, -0.0943815, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0285014, 0.0161884, 0.000645277, 0.00162393, 
0.0, 0.0, 0.0, 0.0, 1.01984, -0.0447189, -0.0208223, -0.980422, 1.0641, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.011861, 0.0400216, 0.0982134, 0.0051576, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.19438, -0.0823313, -0.0338042, -0.805228, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0788964, -0.041181, -0.0748281, -0.00360472, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01141, 0.0112071, -0.0790345, -0.988553, -0.0179579, 0.0874386, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0215734, 0.0132342, -0.00344092, 0.00153278, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01798, -0.0651502, 0.0287253, -0.981981, 1.00864, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00758425, 0.0364743, 0.092121, 0.00458541, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.17634, -0.0648265, -0.0555922, -0.788354, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.060579, -0.060184, -0.135141, -0.00662704, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00883, 0.00679153, -0.0628422, -0.991194, -0.0103414, 0.0195442, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.017031, 0.00806222, -0.0146788, 0.00121055, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.016, -0.0792843, 0.0168941, -0.98413, 1.05411, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00428309, 0.03214, 0.0816793, 0.00413656, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.18632, -0.0513768, -0.0663192, -0.771458, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.047107, -0.0694062, -0.163195, -0.00805629, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00728, 0.00294697, -0.0462756, -0.991727, -0.045579, 0.068161, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0142845, 0.00385432, -0.0241382, -0.0657938, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0134, -0.083579, 0.0481877, -0.985606, 0.945041, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00120885, 0.0267407, 0.0685608, 0.0483851, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.1966, -0.0349867, -0.0706042, -0.767055, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0337846, -0.0711744, -0.173071, -0.025729, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00645, -0.000176893, -0.0291975, 0.00298758, 0.993591, -0.953777, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0128433, 4.34206e-05, -0.0330842, -6.47398e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0107, -0.0788201, -0.989406, 0.00314889, -0.0424889, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.000534818, 0.0212785, 0.0536739, 0.000935625, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.19545, -0.0651618, 0.0244749, -0.862599, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0231693, -0.0656236, -0.161142, -0.000422518, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00838, 0.00172746, -0.0550483, -0.991692, -0.00168186, 0.0588932, 0.0, 0.0, 0.0, -0.00206002, 0.0166374, 0.0423491, 0.00106428, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00606, 0.00890231, 0.00338851, -0.993968, 1.03647, 0.0, 0.0, 0.0, -0.0121152, 0.0014584, 0.0363535, -2.27019e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.12455, -0.0485717, 0.00778628, -0.89457, 0.0, 0.0, 0.0, -0.00690457, -0.0486939, -0.147853, -0.000314511, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00706, 0.00206379, -0.0458529, -0.992981, -0.00318021, -0.0553619, -0.00232083, 0.01403, 0.0344492, 0.0010362, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00596, -0.00554666, 0.00522085, -0.994061, 0.932698, -0.011916, 0.00181694, 0.0370645, 8.65517e-05, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.10043, -0.0413493, -0.00514301, -0.906339, 0.00575154, -0.0412548, -0.155078, -0.000278895, 
};


const int step100_node7_num_factors = 24;
const bool step100_node7_marked = true;
const bool step100_node7_fixed = false;
int step100_node7_factor_height[] = {step100_factor387_height, step100_factor389_height, step100_factor390_height, step100_factor391_height, step100_factor392_height, step100_factor393_height, step100_factor394_height, step100_factor400_height, step100_factor322_height, step100_factor323_height, step100_factor324_height, step100_factor325_height, step100_factor358_height, step100_factor360_height, step100_factor361_height, step100_factor362_height, step100_factor363_height, step100_factor364_height, step100_factor365_height, step100_factor366_height, step100_factor367_height, step100_factor368_height, step100_factor369_height, step100_factor370_height, };
int step100_node7_factor_width[] = {step100_factor387_width, step100_factor389_width, step100_factor390_width, step100_factor391_width, step100_factor392_width, step100_factor393_width, step100_factor394_width, step100_factor400_width, step100_factor322_width, step100_factor323_width, step100_factor324_width, step100_factor325_width, step100_factor358_width, step100_factor360_width, step100_factor361_width, step100_factor362_width, step100_factor363_width, step100_factor364_width, step100_factor365_width, step100_factor366_width, step100_factor367_width, step100_factor368_width, step100_factor369_width, step100_factor370_width, };
int* step100_node7_factor_ridx[] = {step100_factor387_ridx, step100_factor389_ridx, step100_factor390_ridx, step100_factor391_ridx, step100_factor392_ridx, step100_factor393_ridx, step100_factor394_ridx, step100_factor400_ridx, step100_factor322_ridx, step100_factor323_ridx, step100_factor324_ridx, step100_factor325_ridx, step100_factor358_ridx, step100_factor360_ridx, step100_factor361_ridx, step100_factor362_ridx, step100_factor363_ridx, step100_factor364_ridx, step100_factor365_ridx, step100_factor366_ridx, step100_factor367_ridx, step100_factor368_ridx, step100_factor369_ridx, step100_factor370_ridx, };
float* step100_node7_factor_data[] = {step100_factor387_data, step100_factor389_data, step100_factor390_data, step100_factor391_data, step100_factor392_data, step100_factor393_data, step100_factor394_data, step100_factor400_data, step100_factor322_data, step100_factor323_data, step100_factor324_data, step100_factor325_data, step100_factor358_data, step100_factor360_data, step100_factor361_data, step100_factor362_data, step100_factor363_data, step100_factor364_data, step100_factor365_data, step100_factor366_data, step100_factor367_data, step100_factor368_data, step100_factor369_data, step100_factor370_data, };
int step100_node7_factor_num_blks[] = {step100_factor387_num_blks, step100_factor389_num_blks, step100_factor390_num_blks, step100_factor391_num_blks, step100_factor392_num_blks, step100_factor393_num_blks, step100_factor394_num_blks, step100_factor400_num_blks, step100_factor322_num_blks, step100_factor323_num_blks, step100_factor324_num_blks, step100_factor325_num_blks, step100_factor358_num_blks, step100_factor360_num_blks, step100_factor361_num_blks, step100_factor362_num_blks, step100_factor363_num_blks, step100_factor364_num_blks, step100_factor365_num_blks, step100_factor366_num_blks, step100_factor367_num_blks, step100_factor368_num_blks, step100_factor369_num_blks, step100_factor370_num_blks, };
int* step100_node7_factor_A_blk_start[] = {step100_factor387_A_blk_start, step100_factor389_A_blk_start, step100_factor390_A_blk_start, step100_factor391_A_blk_start, step100_factor392_A_blk_start, step100_factor393_A_blk_start, step100_factor394_A_blk_start, step100_factor400_A_blk_start, step100_factor322_A_blk_start, step100_factor323_A_blk_start, step100_factor324_A_blk_start, step100_factor325_A_blk_start, step100_factor358_A_blk_start, step100_factor360_A_blk_start, step100_factor361_A_blk_start, step100_factor362_A_blk_start, step100_factor363_A_blk_start, step100_factor364_A_blk_start, step100_factor365_A_blk_start, step100_factor366_A_blk_start, step100_factor367_A_blk_start, step100_factor368_A_blk_start, step100_factor369_A_blk_start, step100_factor370_A_blk_start, };
int* step100_node7_factor_B_blk_start[] = {step100_factor387_B_blk_start, step100_factor389_B_blk_start, step100_factor390_B_blk_start, step100_factor391_B_blk_start, step100_factor392_B_blk_start, step100_factor393_B_blk_start, step100_factor394_B_blk_start, step100_factor400_B_blk_start, step100_factor322_B_blk_start, step100_factor323_B_blk_start, step100_factor324_B_blk_start, step100_factor325_B_blk_start, step100_factor358_B_blk_start, step100_factor360_B_blk_start, step100_factor361_B_blk_start, step100_factor362_B_blk_start, step100_factor363_B_blk_start, step100_factor364_B_blk_start, step100_factor365_B_blk_start, step100_factor366_B_blk_start, step100_factor367_B_blk_start, step100_factor368_B_blk_start, step100_factor369_B_blk_start, step100_factor370_B_blk_start, };
int* step100_node7_factor_blk_width[] = {step100_factor387_blk_width, step100_factor389_blk_width, step100_factor390_blk_width, step100_factor391_blk_width, step100_factor392_blk_width, step100_factor393_blk_width, step100_factor394_blk_width, step100_factor400_blk_width, step100_factor322_blk_width, step100_factor323_blk_width, step100_factor324_blk_width, step100_factor325_blk_width, step100_factor358_blk_width, step100_factor360_blk_width, step100_factor361_blk_width, step100_factor362_blk_width, step100_factor363_blk_width, step100_factor364_blk_width, step100_factor365_blk_width, step100_factor366_blk_width, step100_factor367_blk_width, step100_factor368_blk_width, step100_factor369_blk_width, step100_factor370_blk_width, };
const int step100_node7_parent = 9;
const int step100_node7_height = 37;
const int step100_node7_width = 30;
float step100_node7_data[] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};
const int step100_node7_num_blks = 2;
int step100_node7_A_blk_start[] = {0, 3, };
int step100_node7_B_blk_start[] = {6, 30, };
int step100_node7_blk_width[] = {3, 3, };
const float step100_node7_H_correct_cond = 58.424166918697935;
float step100_node7_H_correct_data[] = {
1.0421551396000002, -0.017457522688, 0.016681873260000004, -0.0032961221422000003, 0.9999977050400001, -0.9874513356400001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.015505944626000003, -0.04290011021, -0.10264747300000002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0030129866212000003, 
-0.017457522688, 1.0396115182606402, -0.13733597150280002, -0.9999898040699841, -0.003296159097199997, -0.10311097627080001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.038774404838280006, 0.019256372107800002, 0.0033222452005, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.004279172034936001, 
0.016681873260000004, -0.13733597150280002, 1.6429460330019998, 4.075634299989834e-07, 9.074200000720989e-09, -0.9999971079209999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.136422348708, -0.0229642079178, 0.006115067152149999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00725367781988, 
-0.0032961221422000003, -0.9999898040699841, 4.075634299989834e-07, 2.000002368547713, 4.5195120001831994e-08, 0.10636533215397999, -0.99986118573, -0.016698995511000004, 0.040568717673, 0.0, 0.0, 0.0, 4.459180700136594e-08, -8.117049974910493e-10, -1.710839999925542e-09, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0003111948772866, 
0.9999977050400001, -0.003296159097199997, 9.074200000720989e-09, 4.5195120001831994e-08, 1.9999931182604502, -0.98710335157475, 0.0166987588875, -0.9998563793600501, 0.9366161867571501, 0.0, 0.0, 0.0, -6.214879997236401e-09, -2.6698751999843764e-07, -3.682181039849595e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00022007094997200023, 
-0.9874513356400001, -0.10311097627080001, -0.9999971079209999, 0.10636533215397999, -0.98710335157475, 2.9856975938940895, -3.9965223999113276e-07, -9.17148499977093e-08, -1.00000363560385, 0.0, 0.0, 0.0, -1.7888069999374971e-07, -1.759707800023833e-07, -3.0839441999503667e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0001787156218280004, 
0.0, 0.0, 0.0, -0.99986118573, 0.0166987588875, -3.9965223999113276e-07, 2.00000150573389, 5.664489999883512e-08, -0.024922475205799995, -0.9999957346399999, -0.0030866599512, 0.040207820548, 7.884049998417928e-09, 1.0777352999609013e-07, -1.3777400004333292e-09, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -7.838281295199988e-05, 
0.0, 0.0, 0.0, -0.016698995511000004, -0.9998563793600501, -9.17148499977093e-08, 5.664489999883512e-08, 1.9999976447959402, -0.9371665388870499, 0.003086704406600003, -0.9999940528784621, 1.0373962538697301, -1.2899179999862529e-08, 4.9347389997552654e-08, -1.2129272801320757e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -7.724990598999715e-06, 
0.0, 0.0, 0.0, 0.040568717673, 0.9366161867571501, -1.00000363560385, -0.024922475205799995, -0.9371665388870499, 2.87890494446426, -8.305560008630727e-09, -2.9271783991255053e-08, -1.00000034625814, 3.948606300599071e-08, -3.3458769994840036e-08, -2.4332565969173653e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00015008421742599996, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999957346399999, 0.003086704406600003, -8.305560008630727e-09, 1.99999580808756, -7.195532000076502e-08, -0.037005347303199994, -3.701682799609552e-08, -5.79377599984394e-08, 4.1708760000280443e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99976836783, 0.021419612556, -0.074362837333, -0.0002277357982299992, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0030866599512, -0.9999940528784621, -2.9271783991255053e-08, -7.195532000076502e-08, 2.0000007962864714, -1.037516949416104, -6.627048000622399e-09, -7.078105449774896e-08, -3.1183594384989735e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.021419634290270002, -0.9997705153616361, 1.0027521195155231, 0.00012784272417920052, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.040207820548, 1.0373962538697301, -1.00000034625814, -0.037005347303199994, -1.037516949416104, 3.07782233158274, -2.538818169953133e-07, -3.3200928999493494e-07, -5.339347340028239e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.4140595000733034e-07, -3.4963518001185463e-07, -1.00000364580466, -0.00015023930795299983, 
-0.015505944626000003, 0.038774404838280006, -0.136422348708, 4.459180700136594e-08, -6.214879997236401e-09, -1.7888069999374971e-07, 7.884049998417928e-09, -1.2899179999862529e-08, 3.948606300599071e-08, -3.701682799609552e-08, -6.627048000622399e-09, -2.538818169953133e-07, 2.038040798313693, 0.017268474381464, 0.014826988840505003, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.005810276203200001, 0.99998602956, 0.0, 0.018459770112, -0.99983280348, 0.0, 0.0, 0.0, 0.0, 3.4392714997542024e-08, 1.2897249999933672e-08, -1.1074194000172553e-07, 0.1329989528860252, 
-0.04290011021, 0.019256372107800002, -0.0229642079178, -8.117049974910493e-10, -2.6698751999843764e-07, -1.759707800023833e-07, 1.0777352999609013e-07, 4.9347389997552654e-08, -3.3458769994840036e-08, -5.79377599984394e-08, -7.078105449774896e-08, -3.3200928999493494e-07, 0.017268474381464, 2.04374860051834, -1.765921749518512, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999845142221232, -0.00581027428324, 0.0, 0.9998311579573119, 0.018459714705520002, 0.0, 0.0, 0.0, 0.0, 1.8118801200268855e-08, 1.1252898000217134e-07, -1.0238633099519091e-07, 0.10816230963346199, 
-0.10264747300000002, 0.0033222452005, 0.006115067152149999, -1.710839999925542e-09, -3.682181039849595e-07, -3.0839441999503667e-07, -1.3777400004333292e-09, -1.2129272801320757e-07, -2.4332565969173653e-08, 4.1708760000280443e-08, -3.1183594384989735e-08, -5.339347340028239e-07, 0.014826988840505003, -1.765921749518512, 4.155597691069904, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9200293931692997, -0.003982892927929999, -1.00000342336, -0.947988614734736, -0.043052281023310005, -1.00000342336, 0.0, 0.0, 0.0, -3.1425286097776815e-08, 3.3990450749206395e-07, -5.692269720265928e-07, -0.11074746417603701, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0122573321000001, 0.0018192984075000001, -0.038562083469, -0.0020045131974000003, 0.012216187620000001, 0.027601621740000002, -0.99974937258, 0.022479415119, -0.07584862068, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0011883768876, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0018192984075000001, 1.0117978441680626, -0.015640831765175, -0.011822893824805001, 0.0016385859899000002, 0.0361561730705, -0.022479219863500002, -0.9997429597710751, 1.0103807864490002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00010571129617, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.038562083469, -0.015640831765175, 1.1887842946986602, 0.016198302985386, -0.038308715235790006, -0.17321685913635002, 3.09239499943495e-08, 1.7313589996884924e-08, -0.9999999350298001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.000309561987749, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0020045131974000003, -0.011822893824805001, 0.016198302985386, 2.0118458722707553, -0.001823401834276, 0.01824135454674, 5.361099999556677e-09, 1.2645400179969414e-10, -7.590808000006936e-08, -0.034856963617, -0.9993896285799999, 0.09082402522199999, 0.022211668297, 0.9997498691599999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.06806277662793041, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.012216187620000001, 0.0016385859899000002, -0.038308715235790006, -0.001823401834276, 2.0121930974319207, -1.033845187629638, 2.7891598601248408e-08, -8.276053799918795e-09, -3.16052220005121e-08, 0.9993914132256619, -0.03485691561412, -1.0881067863526919, -0.999752104012142, 0.02221174143224, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0255885413012674, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.027601621740000002, 0.0361561730705, -0.17321685913635002, 0.01824135454674, -1.033845187629638, 3.3388242763260094, -1.1365456200074896e-07, -5.221466399401318e-08, 1.5392620400429617e-06, -2.3830390399526878e-06, -3.089699999898069e-08, -0.9999965573973599, 1.06187448040064, 0.031236749890599998, -0.9999969177399999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.039640332991955, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99974937258, -0.022479219863500002, 3.09239499943495e-08, 5.361099999556677e-09, 2.7891598601248408e-08, -1.1365456200074896e-07, 2.9999879782596093, -4.527433594679926e-08, 0.03177589988757199, -0.9999935257279271, -0.0026979533058410004, 0.007181096413332001, 0.999879512808007, 0.015347776303265, -1.5181899998205853e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0003265350937010005, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.022479415119, -0.9997429597710751, 1.7313589996884924e-08, 1.2645400179969414e-10, -8.276053799918795e-09, -5.221466399401318e-08, -4.527433594679926e-08, 3.000013717183311, -0.058925549482227134, 0.002697945326669001, -0.9999990895278699, 0.9878730137270162, -0.015347912744481001, 0.9998846920005792, 2.4680537697862675e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00018737871406839394, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.07584862068, 1.0103807864490002, -0.9999999350298001, -7.590808000006936e-08, -3.16052220005121e-08, 1.5392620400429617e-06, 0.03177589988757199, -0.058925549482227134, 4.935127303117979, 2.0216908999920297e-07, 2.470239019731709e-07, -1.0000014394347598, -0.03596323056349001, 0.95246762012677, -1.00000063796602, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00023148379241060002, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.005810276203200001, -0.9999845142221232, 0.9200293931692997, 0.0, 0.0, 0.0, -0.034856963617, 0.9993914132256619, -2.3830390399526878e-06, -0.9999935257279271, 0.002697945326669001, 2.0216908999920297e-07, 5.000010964197667, 5.5174183998270756e-08, -1.2308953075927997, 0.999920549835154, 0.01265012856066, -8.483250919588637e-08, 0.99986326389, 0.0166402905949, 0.0, 8.587391599841888e-09, -9.476890000440109e-09, -5.0324208002189674e-08, -0.2888759613852834, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.99998602956, -0.00581027428324, -0.003982892927929999, 0.0, 0.0, 0.0, -0.9993896285799999, -0.03485691561412, -3.089699999898069e-08, -0.0026979533058410004, -0.9999990895278699, 2.470239019731709e-07, 5.5174183998270756e-08, 4.999988368611254, -0.09434693848932406, -0.012650006741887997, 0.9999064391644112, 2.2972309099250827e-07, -0.01664023870047, 0.9998589386674573, 0.0, 9.449624199720355e-09, 2.9723035998957278e-09, -3.9528739999939225e-08, 0.18974286706486537, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.00000342336, 0.0, 0.0, 0.0, 0.09082402522199999, -1.0881067863526919, -0.9999965573973599, 0.007181096413332001, 0.9878730137270162, -1.0000014394347598, -1.2308953075927997, -0.09434693848932406, 8.144915671544199, -0.027981996461440076, -0.035399292529979774, -1.0000073327586896, -0.12365421657, 0.9794979734328799, -0.9999998700999998, -1.7061760000056904e-08, -5.548815200186791e-08, -3.70665999975792e-07, 0.10161686426987919, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.018459770112, 0.9998311579573119, -0.947988614734736, 0.0, 0.0, 0.0, 0.022211668297, -0.999752104012142, 1.06187448040064, 0.999879512808007, -0.015347912744481001, -0.03596323056349001, 0.999920549835154, -0.012650006741887997, -0.027981996461440076, 4.99999953476552, 3.719747999765999e-08, 0.09176154375742601, -0.9999971215893977, -0.0039905132387, -2.9081800000031778e-08, 4.16716900017564e-09, 5.804074510162955e-08, 1.4814739998549508e-08, -0.11289281638673929, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99983280348, 0.018459714705520002, -0.043052281023310005, 0.0, 0.0, 0.0, 0.9997498691599999, 0.02221174143224, 0.031236749890599998, 0.015347776303265, 0.9998846920005792, 0.95246762012677, 0.01265012856066, 0.9999064391644112, -0.035399292529979774, 3.719747999765999e-08, 4.999983379526951, -1.015372128410609, 0.0039906127679599996, -0.9999919195082422, 4.082953141257734e-07, 1.4764424984427685e-09, -1.9361825000676854e-08, 9.121140600472834e-08, -0.10342253807026389, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.00000342336, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999969177399999, -1.5181899998205853e-08, 2.4680537697862675e-08, -1.00000063796602, -8.483250919588637e-08, 2.2972309099250827e-07, -1.0000073327586896, 0.09176154375742601, -1.015372128410609, 6.039409874524788, -0.0958138672404, 1.0149992745331442, -1.0000029698218158, 2.419575999829384e-08, -1.2348958000479266e-07, -2.808369599673366e-07, 0.01794157647272958, 
};
float step100_node7_M_correct_data[] = {
1.02086, -0.0171008, 0.016341, -0.00322877, 0.979564, -0.967274, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0151891, -0.0420235, -0.10055, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00295142, 
0.0, 1.01947, -0.134439, -0.980946, 0.0131982, -0.117367, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0377791, 0.0181837, 0.00157215, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00414794, 
0.0, 0.0, 1.2746, -0.103424, -0.0111664, -0.784536, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.102852, -0.0155601, 0.00625256, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0052156, 
0.0, 0.0, 0.0, 1.01343, 0.0147565, -0.0917955, -0.986611, -0.0164777, 0.0400311, 0.0, 0.0, 0.0, 0.0260234, 0.015879, 0.0018395, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00316624, 
0.0, 0.0, 0.0, 0.0, 1.01977, -0.0445722, 0.0306517, -0.980234, 0.917879, 0.0, 0.0, 0.0, 0.0125985, 0.0397309, 0.0966068, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00246264, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.1876, -0.07511, -0.0380632, -0.804494, 0.0, 0.0, 0.0, -0.0740981, -0.0399909, -0.0738422, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00525272, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00996, 0.0108221, -0.0732578, -0.990134, -0.00305622, 0.0398113, 0.0195288, 0.0113321, -0.00662658, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00255005, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01848, -0.0653911, 0.0135516, -0.981817, 1.01815, 0.00956967, 0.0368809, 0.0903194, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0021904, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.17386, -0.061037, -0.0548839, -0.792689, -0.0597692, -0.0562541, -0.121592, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00548019, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00783, 0.00687527, -0.0593034, 0.0154374, 0.00723025, -0.0150886, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.992001, 0.0212532, -0.0737851, 0.00191796, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01635, -0.0795557, 0.00597121, 0.0325751, 0.0807666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0143645, -0.983831, 0.98712, 0.00194052, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.18381, -0.0477348, -0.0672181, -0.154205, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0506602, -0.0650521, -0.782092, -0.00553964, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.41876, 0.00212476, -0.00596703, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00409532, 0.704831, 0.0, 0.0130112, -0.704723, 0.0, 0.0, 0.0, 0.0, 0.00914987, 0.00172075, -0.0296656, 0.0923725, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.42397, -1.26398, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.702245, -0.00513204, 0.0, 0.702124, 0.0140151, 0.0, 0.0, 0.0, 0.0, 0.00296048, 0.0193252, -0.0590812, 0.0747627, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.57463, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0205644, -0.00397804, -0.635072, -0.0383838, -0.0187616, -0.635072, 0.0, 0.0, 0.0, -0.011319, 0.0598155, -0.175468, -0.0117039, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00611, 0.00180825, -0.0383279, -0.00199234, 0.012142, 0.027434, -0.993678, 0.0223429, -0.075388, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00118116, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00588, -0.0154805, -0.0117502, 0.00160718, 0.0358955, -0.0205615, -0.993939, 1.00461, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00010297, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.08953, 0.0146302, -0.0347108, -0.157508, -0.0352481, -0.0133363, -0.906205, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00024111, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.41827, -0.00089722, 0.0148224, -0.00120263, -0.00806571, 0.0175651, -0.0245771, -0.704654, 0.0640386, 0.0156611, 0.704908, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.047985, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.41804, -0.733188, 0.00766815, 0.000603645, -0.0226641, 0.704754, -0.0250269, -0.767291, -0.705014, 0.0161097, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0180915, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.66559, 0.0168629, 0.0201289, -0.116237, 0.310448, -0.00474594, -0.938715, 0.327052, 0.0195725, -0.600386, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0162183, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.41795, 0.000663554, -0.0368604, -0.712763, -0.00230858, 0.0204318, 0.705095, 0.0111019, 0.00714005, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000917789, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.41808, 0.657025, -0.00261038, -0.709107, 0.710633, -0.0154061, 0.708817, 0.00851884, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.000576707, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.62838, 0.0171535, 0.292975, -0.978752, 0.0134557, 0.29319, -0.66024, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00139179, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.84511, -0.00399153, -0.190168, 1.29631, 0.0133439, 0.117004, 0.541899, 0.00901859, 0.0, 0.00127322, 0.00669228, -0.0205964, -0.12389, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.84859, 0.386536, -0.0170353, 1.30404, 0.10526, -0.0078315, 0.540896, 0.0, -0.00350205, -0.000459267, 0.0107248, 0.0484019, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.1491, -0.0113958, -0.363044, -1.22738, -0.00817794, 0.359284, -0.465311, -0.0026023, 0.0183506, -0.0556035, 0.0270272, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.31252, -0.00575047, 0.0791272, -1.29727, -0.00180778, -0.00404003, -0.00333095, -0.0150619, 0.0467662, -0.0177418, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.25866, -1.12186, -0.00274634, -1.25136, -0.134231, 0.00777032, 0.00726891, -0.0452849, -0.0457297, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.42952, -0.0481721, -0.00400158, -1.20417, -0.000826804, 0.0483533, -0.162925, 0.00968038, 
};


const int step100_node8_num_factors = 45;
const bool step100_node8_marked = true;
const bool step100_node8_fixed = false;
int step100_node8_factor_height[] = {step100_factor28_height, step100_factor30_height, step100_factor31_height, step100_factor32_height, step100_factor33_height, step100_factor35_height, step100_factor252_height, step100_factor253_height, step100_factor257_height, step100_factor258_height, step100_factor259_height, step100_factor260_height, step100_factor261_height, step100_factor262_height, step100_factor263_height, step100_factor264_height, step100_factor265_height, step100_factor266_height, step100_factor267_height, step100_factor268_height, step100_factor269_height, step100_factor270_height, step100_factor271_height, step100_factor272_height, step100_factor273_height, step100_factor274_height, step100_factor275_height, step100_factor277_height, step100_factor110_height, step100_factor278_height, step100_factor279_height, step100_factor113_height, step100_factor114_height, step100_factor115_height, step100_factor116_height, step100_factor117_height, step100_factor118_height, step100_factor119_height, step100_factor120_height, step100_factor121_height, step100_factor122_height, step100_factor123_height, step100_factor124_height, step100_factor126_height, step100_factor127_height, };
int step100_node8_factor_width[] = {step100_factor28_width, step100_factor30_width, step100_factor31_width, step100_factor32_width, step100_factor33_width, step100_factor35_width, step100_factor252_width, step100_factor253_width, step100_factor257_width, step100_factor258_width, step100_factor259_width, step100_factor260_width, step100_factor261_width, step100_factor262_width, step100_factor263_width, step100_factor264_width, step100_factor265_width, step100_factor266_width, step100_factor267_width, step100_factor268_width, step100_factor269_width, step100_factor270_width, step100_factor271_width, step100_factor272_width, step100_factor273_width, step100_factor274_width, step100_factor275_width, step100_factor277_width, step100_factor110_width, step100_factor278_width, step100_factor279_width, step100_factor113_width, step100_factor114_width, step100_factor115_width, step100_factor116_width, step100_factor117_width, step100_factor118_width, step100_factor119_width, step100_factor120_width, step100_factor121_width, step100_factor122_width, step100_factor123_width, step100_factor124_width, step100_factor126_width, step100_factor127_width, };
int* step100_node8_factor_ridx[] = {step100_factor28_ridx, step100_factor30_ridx, step100_factor31_ridx, step100_factor32_ridx, step100_factor33_ridx, step100_factor35_ridx, step100_factor252_ridx, step100_factor253_ridx, step100_factor257_ridx, step100_factor258_ridx, step100_factor259_ridx, step100_factor260_ridx, step100_factor261_ridx, step100_factor262_ridx, step100_factor263_ridx, step100_factor264_ridx, step100_factor265_ridx, step100_factor266_ridx, step100_factor267_ridx, step100_factor268_ridx, step100_factor269_ridx, step100_factor270_ridx, step100_factor271_ridx, step100_factor272_ridx, step100_factor273_ridx, step100_factor274_ridx, step100_factor275_ridx, step100_factor277_ridx, step100_factor110_ridx, step100_factor278_ridx, step100_factor279_ridx, step100_factor113_ridx, step100_factor114_ridx, step100_factor115_ridx, step100_factor116_ridx, step100_factor117_ridx, step100_factor118_ridx, step100_factor119_ridx, step100_factor120_ridx, step100_factor121_ridx, step100_factor122_ridx, step100_factor123_ridx, step100_factor124_ridx, step100_factor126_ridx, step100_factor127_ridx, };
float* step100_node8_factor_data[] = {step100_factor28_data, step100_factor30_data, step100_factor31_data, step100_factor32_data, step100_factor33_data, step100_factor35_data, step100_factor252_data, step100_factor253_data, step100_factor257_data, step100_factor258_data, step100_factor259_data, step100_factor260_data, step100_factor261_data, step100_factor262_data, step100_factor263_data, step100_factor264_data, step100_factor265_data, step100_factor266_data, step100_factor267_data, step100_factor268_data, step100_factor269_data, step100_factor270_data, step100_factor271_data, step100_factor272_data, step100_factor273_data, step100_factor274_data, step100_factor275_data, step100_factor277_data, step100_factor110_data, step100_factor278_data, step100_factor279_data, step100_factor113_data, step100_factor114_data, step100_factor115_data, step100_factor116_data, step100_factor117_data, step100_factor118_data, step100_factor119_data, step100_factor120_data, step100_factor121_data, step100_factor122_data, step100_factor123_data, step100_factor124_data, step100_factor126_data, step100_factor127_data, };
int step100_node8_factor_num_blks[] = {step100_factor28_num_blks, step100_factor30_num_blks, step100_factor31_num_blks, step100_factor32_num_blks, step100_factor33_num_blks, step100_factor35_num_blks, step100_factor252_num_blks, step100_factor253_num_blks, step100_factor257_num_blks, step100_factor258_num_blks, step100_factor259_num_blks, step100_factor260_num_blks, step100_factor261_num_blks, step100_factor262_num_blks, step100_factor263_num_blks, step100_factor264_num_blks, step100_factor265_num_blks, step100_factor266_num_blks, step100_factor267_num_blks, step100_factor268_num_blks, step100_factor269_num_blks, step100_factor270_num_blks, step100_factor271_num_blks, step100_factor272_num_blks, step100_factor273_num_blks, step100_factor274_num_blks, step100_factor275_num_blks, step100_factor277_num_blks, step100_factor110_num_blks, step100_factor278_num_blks, step100_factor279_num_blks, step100_factor113_num_blks, step100_factor114_num_blks, step100_factor115_num_blks, step100_factor116_num_blks, step100_factor117_num_blks, step100_factor118_num_blks, step100_factor119_num_blks, step100_factor120_num_blks, step100_factor121_num_blks, step100_factor122_num_blks, step100_factor123_num_blks, step100_factor124_num_blks, step100_factor126_num_blks, step100_factor127_num_blks, };
int* step100_node8_factor_A_blk_start[] = {step100_factor28_A_blk_start, step100_factor30_A_blk_start, step100_factor31_A_blk_start, step100_factor32_A_blk_start, step100_factor33_A_blk_start, step100_factor35_A_blk_start, step100_factor252_A_blk_start, step100_factor253_A_blk_start, step100_factor257_A_blk_start, step100_factor258_A_blk_start, step100_factor259_A_blk_start, step100_factor260_A_blk_start, step100_factor261_A_blk_start, step100_factor262_A_blk_start, step100_factor263_A_blk_start, step100_factor264_A_blk_start, step100_factor265_A_blk_start, step100_factor266_A_blk_start, step100_factor267_A_blk_start, step100_factor268_A_blk_start, step100_factor269_A_blk_start, step100_factor270_A_blk_start, step100_factor271_A_blk_start, step100_factor272_A_blk_start, step100_factor273_A_blk_start, step100_factor274_A_blk_start, step100_factor275_A_blk_start, step100_factor277_A_blk_start, step100_factor110_A_blk_start, step100_factor278_A_blk_start, step100_factor279_A_blk_start, step100_factor113_A_blk_start, step100_factor114_A_blk_start, step100_factor115_A_blk_start, step100_factor116_A_blk_start, step100_factor117_A_blk_start, step100_factor118_A_blk_start, step100_factor119_A_blk_start, step100_factor120_A_blk_start, step100_factor121_A_blk_start, step100_factor122_A_blk_start, step100_factor123_A_blk_start, step100_factor124_A_blk_start, step100_factor126_A_blk_start, step100_factor127_A_blk_start, };
int* step100_node8_factor_B_blk_start[] = {step100_factor28_B_blk_start, step100_factor30_B_blk_start, step100_factor31_B_blk_start, step100_factor32_B_blk_start, step100_factor33_B_blk_start, step100_factor35_B_blk_start, step100_factor252_B_blk_start, step100_factor253_B_blk_start, step100_factor257_B_blk_start, step100_factor258_B_blk_start, step100_factor259_B_blk_start, step100_factor260_B_blk_start, step100_factor261_B_blk_start, step100_factor262_B_blk_start, step100_factor263_B_blk_start, step100_factor264_B_blk_start, step100_factor265_B_blk_start, step100_factor266_B_blk_start, step100_factor267_B_blk_start, step100_factor268_B_blk_start, step100_factor269_B_blk_start, step100_factor270_B_blk_start, step100_factor271_B_blk_start, step100_factor272_B_blk_start, step100_factor273_B_blk_start, step100_factor274_B_blk_start, step100_factor275_B_blk_start, step100_factor277_B_blk_start, step100_factor110_B_blk_start, step100_factor278_B_blk_start, step100_factor279_B_blk_start, step100_factor113_B_blk_start, step100_factor114_B_blk_start, step100_factor115_B_blk_start, step100_factor116_B_blk_start, step100_factor117_B_blk_start, step100_factor118_B_blk_start, step100_factor119_B_blk_start, step100_factor120_B_blk_start, step100_factor121_B_blk_start, step100_factor122_B_blk_start, step100_factor123_B_blk_start, step100_factor124_B_blk_start, step100_factor126_B_blk_start, step100_factor127_B_blk_start, };
int* step100_node8_factor_blk_width[] = {step100_factor28_blk_width, step100_factor30_blk_width, step100_factor31_blk_width, step100_factor32_blk_width, step100_factor33_blk_width, step100_factor35_blk_width, step100_factor252_blk_width, step100_factor253_blk_width, step100_factor257_blk_width, step100_factor258_blk_width, step100_factor259_blk_width, step100_factor260_blk_width, step100_factor261_blk_width, step100_factor262_blk_width, step100_factor263_blk_width, step100_factor264_blk_width, step100_factor265_blk_width, step100_factor266_blk_width, step100_factor267_blk_width, step100_factor268_blk_width, step100_factor269_blk_width, step100_factor270_blk_width, step100_factor271_blk_width, step100_factor272_blk_width, step100_factor273_blk_width, step100_factor274_blk_width, step100_factor275_blk_width, step100_factor277_blk_width, step100_factor110_blk_width, step100_factor278_blk_width, step100_factor279_blk_width, step100_factor113_blk_width, step100_factor114_blk_width, step100_factor115_blk_width, step100_factor116_blk_width, step100_factor117_blk_width, step100_factor118_blk_width, step100_factor119_blk_width, step100_factor120_blk_width, step100_factor121_blk_width, step100_factor122_blk_width, step100_factor123_blk_width, step100_factor124_blk_width, step100_factor126_blk_width, step100_factor127_blk_width, };
const int step100_node8_parent = 9;
const int step100_node8_height = 46;
const int step100_node8_width = 27;
float step100_node8_data[] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};
const int step100_node8_num_blks = 2;
int step100_node8_A_blk_start[] = {0, 9, };
int step100_node8_B_blk_start[] = {9, 57, };
int step100_node8_blk_width[] = {9, 9, };
const float step100_node8_H_correct_cond = 16.108501582872567;
float step100_node8_H_correct_data[] = {
8.0000162649, 5.995423070999999e-10, -2.4248554654500003, -0.9999914265, -0.0040916068379999995, 0.0, -0.9999970833599999, 0.0031383410751000002, 0.0, -0.9999914265, 0.0046723118013, 0.0, -0.99979060797, 0.0204641153145, 0.0, -0.99991788732, -0.0129522577833, 0.0, 0.0256015624293, 0.99967181391, -1.04433838047, 0.0055059632595000005, 0.99998576964, 0.0, -0.0009875463345, 0.99999991179, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.262459919205, 
5.995423070999999e-10, 8.0000162649, -3.202716142081725, 0.004091606763058006, -0.9999914265003066, 0.0, -0.0031383411500424175, -0.9999970833597648, 0.0, -0.004672311876241993, -0.9999914264996498, 0.0, -0.020464115389426944, -0.9997906079684663, 0.0, 0.012952257708363517, -0.9999178873209706, 0.0, -0.9996718139080814, 0.025601562504218044, -0.08761118501426547, -0.9999857696395873, 0.00550596333444157, 0.0, -0.9999999117900741, -0.0009875462595573706, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.26615893993933054, 
-2.4248554654500003, -3.202716142081725, 13.215017780525, 0.13345064342399998, 0.012254555619000016, -1.00000088352, 0.09658915811010003, 0.020582861155450015, -1.00000088352, 0.11975942908430003, 0.99271350931835, -1.00000088352, 0.11635210749250001, 1.03654551344775, -1.00000088352, -0.024420065904299976, 1.05079096087265, -1.00000088352, -2.394045649945775e-06, 2.391306999764429e-07, -0.9999990954889999, 0.04696922891524998, -0.9977301345345, -1.00000088352, 0.03565153130225003, -0.9979089171755, -1.00000088352, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.007299649055500004, 
-0.9999914265, 0.004091606763058006, 0.13345064342399998, 7.99997815289077, -4.322000000185863e-09, 0.0223967259271, -0.9999733399538521, 0.00722990406498, 0.0370136572795, -0.9999597652786859, 0.0087638180424, 4.0352199999669075e-08, -0.9996963628089, 0.0245545387651, 0.0425859001037, -0.999959488765714, -0.008860877247291, 0.1485592696824, 0.0296915709318, 0.9995566856357859, -0.91051679184752, 0.0095974199565, 0.9999531870707901, -0.8637832301096, 0.0031040752623900003, 0.99999252718461, -0.8643415823196, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.09287206662131, 
-0.0040916068379999995, -0.9999914265003066, 0.012254555619000016, -4.322000000185863e-09, 8.000002392133085, -0.9814693690954289, -0.007229900828189999, -0.9999741709185825, -0.0090267346026797, -0.008763835112670001, -0.9999602870767165, -9.728477059662253e-08, -0.024554687321190004, -0.9996983946085131, -1.0268391037860212, 0.00886086091256, -0.9999611510420067, -1.038710646283614, -0.9995592541562601, 0.029691681412479996, -0.07962753139217, -0.9999542474584299, 0.009597379599349998, -0.04428689045735, -0.9999945767077959, 0.003104032402319996, -0.02649477288828, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.457217822270453, 
0.0, 0.0, -1.00000088352, 0.0223967259271, -0.9814693690954289, 8.963814884234173, -3.03095299978402e-08, -2.5060284186579167e-07, -1.0000002528394083, -0.013794468409710001, 0.9816293576466945, -1.0000007737174534, -2.0809409998563127e-08, -2.17219396992164e-07, -1.0000007749167228, -8.486231996425551e-09, -3.505870624214487e-07, -1.000003106938946, -2.1750676991302287e-07, -1.2079817999914578e-07, -1.00000136376603, -3.643971561330027e-07, -2.2609300999062207e-07, -1.0000013281748499, -4.323984212885051e-07, -5.6840400017209387e-08, -1.00000128824812, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.010229760812467003, 
-0.9999970833599999, -0.0031383411500424175, 0.09658915811010003, -0.9999733399538521, -0.007229900828189999, -3.03095299978402e-08, 7.999978979649796, 3.511505599980512e-08, -0.9614082068538681, -0.9999961277181878, 0.0015339724864200013, 5.204069999765254e-08, -0.9998465681626594, 0.017326259883503004, 4.974066000169618e-08, -0.9998669269338271, -0.0160902125994927, 0.10409837058407001, 0.022464073637468, 0.9997469785933584, -0.9480164777160301, 0.002367616152249999, 0.9999944905846537, 4.1310127400386695e-07, -0.004125841046942, 0.9999893181151801, -0.901458044643276, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.07910771837412, 
0.0031383410751000002, -0.9999970833597648, 0.020582861155450015, 0.00722990406498, -0.9999741709185825, -2.5060284186579167e-07, 3.511505599980512e-08, 7.99997904338057, -2.009587021780466, -0.0015339753720920032, -0.9999983337922704, 3.0792762663782904e-07, -0.017326291493014, -0.9998491667211454, 7.107113114492068e-07, 0.016090266326258, -0.9998690229872957, -1.0304612401672664, -0.9997454145016489, 0.022464140021858002, -0.063748154190682, -0.9999959374819718, 0.0023676789205599943, 2.368363479961195e-07, -0.9999907631509869, -0.004125775758507998, -0.010950544956568003, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.45925812743194383, 
0.0, 0.0, -1.00000088352, 0.0370136572795, -0.0090267346026797, -1.0000002528394083, -0.9614082068538681, -2.009587021780466, 10.795975209936564, 0.023138351789638002, 0.9722775429192312, -1.0000009758942183, 0.019420963370079994, 1.017643145515319, -1.0000003875849817, -5.557382028077064e-07, -5.966036253056815e-08, -1.000001068390058, -1.6852071827451285e-06, 1.744095999638218e-07, -1.00000186909931, 0.02661308382819466, -0.9010938723639141, -1.0000009708509299, -1.1519267137562274e-06, 3.334248479857641e-07, -1.00000242848824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.06963446614410898, 
-0.9999914265, -0.004672311876241993, 0.11975942908430003, -0.9999597652786859, -0.008763835112670001, -0.013794468409710001, -0.9999961277181878, -0.0015339753720920032, 0.023138351789638002, 7.016126231393205, -0.0047359111723600045, -0.006419677538207, -1.9840285676807525, 0.033097714865339994, -0.016640193559989, -1.9843832215866943, -0.026596119919700102, 0.17735056875024, 2.6323849998483255e-08, 1.1525079137997357e-06, -8.574470960159726e-07, -8.6072300010618e-09, -3.1005171115257664e-07, -8.076971094873063e-08, 2.059922900010538e-08, -9.661297881377598e-07, 6.500026970215818e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.015794049868799998, 0.00202501044992, -0.031554323968, 0.015382005887999999, 0.011156208128, -0.028274962048, 0.016207114265600002, -0.0084350647808, -0.037508706432, -0.195006091391863, 
0.0046723118013, -0.9999914264996498, 0.99271350931835, 0.0087638180424, -0.9999602870767165, 0.9816293576466945, 0.0015339724864200013, -0.9999983337922704, 0.9722775429192312, -0.0047359111723600045, 6.903217516618952, -0.9480235082535684, -0.043151433369189994, -1.9751120193307774, 0.2781750707410408, 0.018566454520426004, -1.8955135833911285, 0.533388713260508, -2.1983038528952258e-08, -7.433681000099694e-08, -5.8396502999269e-07, -1.3572564006459748e-07, 4.5486392001036055e-07, 1.5332656397855062e-07, 1.4976628575812143e-07, 1.2930559999042724e-08, 1.232633600268878e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0104952109158312, 0.010287948997799919, 0.029217174041032, -0.009936015017411998, 0.0036827230719279997, 0.022157915342752, -0.0106743048237344, 0.0185787118325192, 0.037694520967068, -0.15691729372786098, 
0.0, 0.0, -1.00000088352, 4.0352199999669075e-08, -9.728477059662253e-08, -1.0000007737174534, 5.204069999765254e-08, 3.0792762663782904e-07, -1.0000009758942183, -0.006419677538207, -0.9480235082535684, 8.143236336739406, -0.04069737265029, 0.272602527850672, -1.9523544583068446, -0.060298874252812995, 0.4666679510668022, -2.0696569355445438, 1.1913594839646347e-07, -2.1597199987663364e-08, 1.0194034003077479e-07, -2.590845537745642e-08, -1.251942249613824e-07, 1.4286810699085837e-06, 1.757181194443768e-07, 1.0527125001101865e-07, -5.031441100091857e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.03460551865585, -0.066545325393943, -0.1780083893628, -0.03803963059657, -0.02549789025008, -0.13280681694833002, -0.03358656664339, -0.11489363417136, -0.22963327989155, -0.010595992953458, 
-0.99979060797, -0.020464115389426944, 0.11635210749250001, -0.9996963628089, -0.024554687321190004, -2.0809409998563127e-08, -0.9998465681626594, -0.017326291493014, 0.019420963370079994, -1.9840285676807525, -0.043151433369189994, -0.04069737265029, 7.014932122524556, 0.001514759199456997, -0.07669794234917998, -1.984636971651404, -0.0537758366829487, 0.15414821073704, 1.1029763200463904e-07, 4.524281803943234e-07, -1.9942685989460557e-07, -1.84518839999988e-07, 6.864662355427634e-07, -1.1048965900029067e-06, 4.840416800360955e-08, 2.945834538554235e-06, -1.579534550026839e-06, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.015065872348809798, 0.0012506527186445999, -0.033582878183295, 0.014614562635876198, 0.0108518684079158, -0.029780021805519693, 0.015490255107944498, -0.0097527544464747, -0.040126051348803995, 0.17980077510376, 
0.0204641153145, -0.9997906079684663, 1.03654551344775, 0.0245545387651, -0.9996983946085131, -2.17219396992164e-07, 0.017326259883503004, -0.9998491667211454, 1.017643145515319, 0.033097714865339994, -1.9751120193307774, 0.272602527850672, 0.001514759199456997, 7.014438268232362, -0.28473004284077497, 0.065785670859615, -1.9459241829897864, 0.8363873511134, -1.711104019409662e-06, -1.3139426998964046e-07, 1.250715249940394e-06, -1.0650480150863535e-07, 2.9350305997575655e-07, 2.903502000133125e-07, -1.730490342549686e-07, 1.1593161999945485e-07, -3.8414450004848217e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0009456182388800012, 0.0294227004633096, 0.08072677085673999, 0.002496349044346, 0.010900241753531999, 0.06061418904222999, 0.00046978159862399896, 0.051691772862216, 0.10409891111191, -0.059746872857149774, 
0.0, 0.0, -1.00000088352, 0.0425859001037, -1.0268391037860212, -1.0000007749167228, 4.974066000169618e-08, 7.107113114492068e-07, -1.0000003875849817, -0.016640193559989, 0.2781750707410408, -1.9523544583068446, -0.07669794234917998, -0.28473004284077497, 9.671500690303528, -0.07331591883312702, 0.7783913259527747, -2.410252694147853, 3.416353682539129e-07, -1.0248185998516141e-07, 9.577682899803841e-07, -1.4769725675498972e-07, -4.349755500571035e-08, 8.200538878155045e-07, 1.5406995430834046e-06, 1.0324470007601457e-08, 1.225885810019682e-06, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.03841411609044101, -0.08152725474819592, -0.21855321712139, -0.042629080690465004, -0.031161088933015002, -0.16315189524795, -0.037159795764767, -0.14097895402354402, -0.28193382155616004, 0.029384604372439005, 
-0.99991788732, 0.012952257708363517, -0.024420065904299976, -0.999959488765714, 0.00886086091256, -8.486231996425551e-09, -0.9998669269338271, 0.016090266326258, -5.557382028077064e-07, -1.9843832215866943, 0.018566454520426004, -0.060298874252812995, -1.984636971651404, 0.065785670859615, -0.07331591883312702, 7.013477417781022, 0.0146014750701716, -0.703756050973118, -7.901050003100053e-09, -2.0274805980260846e-06, 2.128976115767625e-06, 1.4025353600325408e-07, -9.201041883671834e-07, 7.171788944899343e-07, 3.743956300821341e-08, -1.0820113354479634e-06, -1.4605472593128256e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.014466443528783006, -0.0007012406708079996, -0.038841019020109994, 0.013913878523638396, 0.010108638372542, -0.033711461400678995, 0.014921324928986996, -0.013141752435088997, -0.04691020661115, 0.13064817811205, 
-0.0129522577833, -0.9999178873209706, 1.05079096087265, -0.008860877247291, -0.9999611510420067, -3.505870624214487e-07, -0.0160902125994927, -0.9998690229872957, -5.966036253056815e-08, -0.026596119919700102, -1.8955135833911285, 0.4666679510668022, -0.0537758366829487, -1.9459241829897864, 0.7783913259527747, 0.0146014750701716, 6.991464419338585, 0.37598802193256436, -1.8570277337807684e-06, -1.0494708660096969e-07, 3.4529892791358726e-07, -6.320170822541508e-07, 3.7337478503658184e-08, -7.494225114258822e-07, -2.2905922425857522e-06, 9.672402561668617e-08, 1.1057483316190876e-06, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.011849075272177, 0.0474527754584237, 0.12753874571489002, 0.014310204690458997, 0.018193104625935, 0.09534904585505001, 0.011114266181475, 0.08234716860068199, 0.16460016546286996, 0.41720544641229673, 
0.0, 0.0, -1.00000088352, 0.1485592696824, -1.038710646283614, -1.000003106938946, 0.10409837058407001, -1.0304612401672664, -1.000001068390058, 0.17735056875024, 0.533388713260508, -2.0696569355445438, 0.15414821073704, 0.8363873511134, -2.410252694147853, -0.703756050973118, 0.37598802193256436, 11.15358356831477, 2.072637840367078e-07, -1.8486219995675467e-07, 2.380315899864969e-06, 2.445452879932119e-07, -6.26983400245748e-08, 1.2535346597916247e-06, -3.7866198419994533e-07, -3.0260417001675866e-07, 4.384757999841138e-06, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.045761619344719, -0.0990640316093247, -0.26219042280654997, -0.050837111238777, -0.03884442432786699, -0.19531662505091, -0.044277943703147, -0.17025434196211198, -0.33854067714309993, 0.21738730433084477, 
0.0256015624293, -0.9996718139080814, -2.394045649945775e-06, 0.0296915709318, -0.9995592541562601, -2.1750676991302287e-07, 0.022464073637468, -0.9997454145016489, -1.6852071827451285e-06, 2.6323849998483255e-08, -2.1983038528952258e-08, 1.1913594839646347e-07, 1.1029763200463904e-07, -1.711104019409662e-06, 3.416353682539129e-07, -7.901050003100053e-09, -1.8570277337807684e-06, 2.072637840367078e-07, 7.999993095257858, -7.78841800072379e-08, 0.3805679489158, -0.9997967259029125, -0.020096868007569997, 6.541007420022951e-07, -0.9996447225952575, -0.026588686051200013, 1.839957200598039e-07, -0.9999926567399999, -0.0033340506626, 0.07023055879, -0.9999052295099999, -0.013692402379899998, 0.0, -0.9996826874699999, -0.025153184974399997, 0.0, 9.062884001010465e-09, -7.71626196193242e-10, 1.35558439996093e-07, -7.322559991069072e-10, 6.087620004207415e-10, -1.5352813000162852e-07, 3.1254160002312533e-09, -1.9084861994378098e-08, 7.424579999654093e-08, -0.04308887061782759, 
0.99967181391, 0.025601562504218044, 2.391306999764429e-07, 0.9995566856357859, 0.029691681412479996, -1.2079817999914578e-07, 0.9997469785933584, 0.022464140021858002, 1.744095999638218e-07, 1.1525079137997357e-06, -7.433681000099694e-08, -2.1597199987663364e-08, 4.524281803943234e-07, -1.3139426998964046e-07, -1.0248185998516141e-07, -2.0274805980260846e-06, -1.0494708660096969e-07, -1.8486219995675467e-07, -7.78841800072379e-08, 7.999988485775397, -1.0884810384015267, 0.020097003299670003, -0.9997972410364298, -3.6494705591798043e-07, 0.026588544725964006, -0.9996453398829598, -4.2189983504966866e-07, 0.00333405070666, -0.9999943058083026, 1.05298193698479, 0.013692378972090002, -0.99990594539424, 0.0, 0.025153121575530003, -0.9996839633991345, 0.0, -4.5985413399983384e-08, -3.888020379849732e-08, -1.8879315999418442e-07, 2.0295387927945586e-08, 2.4410245000570255e-08, 1.2701667008694997e-08, 8.792657499740923e-09, -6.540744999176224e-08, -4.4497912974466405e-08, -0.271950242108493, 
-1.04433838047, -0.08761118501426547, -0.9999990954889999, -0.91051679184752, -0.07962753139217, -1.00000136376603, -0.9480164777160301, -0.063748154190682, -1.00000186909931, -8.574470960159726e-07, -5.8396502999269e-07, 1.0194034003077479e-07, -1.9942685989460557e-07, 1.250715249940394e-06, 9.577682899803841e-07, 2.128976115767625e-06, 3.4529892791358726e-07, 2.380315899864969e-06, 0.3805679489158, -1.0884810384015267, 12.68811905664305, -0.03489060753927997, 0.047069896455097855, -0.9999985376086798, -0.052988839301201, 0.04634073952883415, -0.9999991094434701, 1.7461823199762008e-07, -3.8127610001032894e-08, -0.9999981493549001, -0.050645408137932, -0.9574793829981151, -0.9999983011399999, -0.051175115202420005, -0.9598368453906401, -0.9999983011399999, 3.8880870001296186e-08, 7.515390299225557e-08, 1.7621319999450263e-07, -1.768868949357343e-08, -4.101876799847662e-08, 7.852670001028853e-08, -1.1840812996954015e-08, -1.388282299966282e-07, 3.116847300081606e-07, -0.214349814277412, 
0.0055059632595000005, -0.9999857696395873, 0.04696922891524998, 0.0095974199565, -0.9999542474584299, -3.643971561330027e-07, 0.002367616152249999, -0.9999959374819718, 0.02661308382819466, -8.6072300010618e-09, -1.3572564006459748e-07, -2.590845537745642e-08, -1.84518839999988e-07, -1.0650480150863535e-07, -1.4769725675498972e-07, 1.4025353600325408e-07, -6.320170822541508e-07, 2.445452879932119e-07, -0.9997967259029125, 0.020097003299670003, -0.03489060753927997, 8.000008028126729, -2.2163034999631475e-07, 0.03599489461941397, -0.9999793278971546, -0.00649361031500001, 0.01779638865145998, -0.999861436114998, 0.016763508022822, 0.014164017771100003, -0.9999811563631602, 0.006405497232580001, 0.00962080384926, -0.9999884990565611, -0.005057499050820001, 0.0211383812912, 9.960682800058578e-09, 3.692277342580022e-08, 2.0758838200741535e-07, 3.5529610003379202e-09, 4.5832284000906895e-08, -1.7258118005483558e-08, -2.7046054010081123e-09, -6.775433079404082e-08, 3.3183684801073163e-07, 0.4152089997903864, 
0.99998576964, 0.00550596333444157, -0.9977301345345, 0.9999531870707901, 0.009597379599349998, -2.2609300999062207e-07, 0.9999944905846537, 0.0023676789205599943, -0.9010938723639141, -3.1005171115257664e-07, 4.5486392001036055e-07, -1.251942249613824e-07, 6.864662355427634e-07, 2.9350305997575655e-07, -4.349755500571035e-08, -9.201041883671834e-07, 3.7337478503658184e-08, -6.26983400245748e-08, -0.020096868007569997, -0.9997972410364298, 0.047069896455097855, -2.2163034999631475e-07, 7.999988318166383, -0.8641699183509131, 0.006493442790828003, -0.9999708476836293, 0.0003874655544248394, -0.016763414505754002, -0.9998591952473642, 1.101250577061624, -0.006405508597810999, -0.9999777093992571, 1.0048533715514807, 0.005057472107896, -0.9999850772696374, 1.0066376639799806, -1.98571720789011e-08, 1.1143155078912649e-08, -8.698025340744537e-08, 3.134820223555317e-08, 1.540666759172247e-08, 3.569051319811726e-08, 2.8067936124191415e-08, -1.169905390021575e-08, -1.5831836159808405e-07, -0.28089481811971734, 
0.0, 0.0, -1.00000088352, -0.8637832301096, -0.04428689045735, -1.0000013281748499, 4.1310127400386695e-07, 2.368363479961195e-07, -1.0000009708509299, -8.076971094873063e-08, 1.5332656397855062e-07, 1.4286810699085837e-06, -1.1048965900029067e-06, 2.903502000133125e-07, 8.200538878155045e-07, 7.171788944899343e-07, -7.494225114258822e-07, 1.2535346597916247e-06, 6.541007420022951e-07, -3.6494705591798043e-07, -0.9999985376086798, 0.03599489461941397, -0.8641699183509131, 8.74809888032974, 3.207127309790685e-07, 4.860902810060698e-07, -1.0000016315270899, -4.766853999949008e-08, 1.9891935998201104e-08, -1.0000015546139, -2.1115439998769075e-08, -1.0361269600006321e-07, -1.000000649237, -3.233877000090906e-08, -5.224644759795196e-07, -1.0000019141495, -2.286955200091447e-08, -2.060900738832942e-08, -2.9991124000540454e-07, -4.6397478799103775e-08, -7.010305999694323e-08, -2.2814314002447384e-07, -1.2077921999553644e-08, -2.5094402401069107e-07, -2.485278799455106e-07, 0.1260521115769, 
-0.0009875463345, -0.9999999117900741, 0.03565153130225003, 0.0031040752623900003, -0.9999945767077959, -4.323984212885051e-07, -0.004125841046942, -0.9999907631509869, -1.1519267137562274e-06, 2.059922900010538e-08, 1.4976628575812143e-07, 1.757181194443768e-07, 4.840416800360955e-08, -1.730490342549686e-07, 1.5406995430834046e-06, 3.743956300821341e-08, -2.2905922425857522e-06, -3.7866198419994533e-07, -0.9996447225952575, 0.026588544725964006, -0.052988839301201, -0.9999793278971546, 0.006493442790828003, 3.207127309790685e-07, 8.000017412555293, -4.074915000030944e-08, 0.005989596753305991, -0.9997320404947172, 0.023255894249998, -0.010781138093280003, -0.9999192786510953, 0.01289871777208, -1.100907060036674e-07, -1.0000022695653834, 0.0014359979936599977, -0.0031924750382100026, -1.3185993199611937e-08, 1.1392034387468776e-07, 2.8560881199973367e-07, -2.05796839996122e-08, 2.007492409995406e-08, -5.4661341008362136e-08, -1.4639993899472076e-08, 6.047143440681245e-08, 2.6156730898945657e-07, 0.2912537124039721, 
0.99999991179, -0.0009875462595573706, -0.9979089171755, 0.99999252718461, 0.003104032402319996, -5.6840400017209387e-08, 0.9999893181151801, -0.004125775758507998, 3.334248479857641e-07, -9.661297881377598e-07, 1.2930559999042724e-08, 1.0527125001101865e-07, 2.945834538554235e-06, 1.1593161999945485e-07, 1.0324470007601457e-08, -1.0820113354479634e-06, 9.672402561668617e-08, -3.0260417001675866e-07, -0.026588686051200013, -0.9996453398829598, 0.04634073952883415, -0.00649361031500001, -0.9999708476836293, 4.860902810060698e-07, -4.074915000030944e-08, 8.000006229060673, -0.761938516710974, -0.023255655625351996, -0.999732982120512, 1.100822494687267, -0.012898660864198002, -0.999919857111478, 7.98422936654619e-07, -0.001435968883412004, -1.0000025492569622, 1.0062519628545046, -3.322017693942751e-08, 1.4341891836138342e-08, 9.896355579378654e-08, -3.545906065825441e-08, -2.7780463177171317e-08, 1.9114793728503664e-07, -1.999567954138046e-08, 1.9173349648513324e-07, 7.48505121894522e-08, -0.00082760913755839, 
0.0, 0.0, -1.00000088352, -0.8643415823196, -0.02649477288828, -1.00000128824812, -0.901458044643276, -0.010950544956568003, -1.00000242848824, 6.500026970215818e-07, 1.232633600268878e-07, -5.031441100091857e-07, -1.579534550026839e-06, -3.8414450004848217e-07, 1.225885810019682e-06, -1.4605472593128256e-08, 1.1057483316190876e-06, 4.384757999841138e-06, 1.839957200598039e-07, -4.2189983504966866e-07, -0.9999991094434701, 0.01779638865145998, 0.0003874655544248394, -1.0000016315270899, 0.005989596753305991, -0.761938516710974, 10.56989478382995, -1.6573675999101788e-07, 4.6828396604375226e-07, -1.000002823776968, 0.0017415223077399979, -1.004500327391991, -1.0000034246641236, -1.913266899879878e-07, -2.3722186595835986e-07, -1.0000006921285498, 1.1672168003328238e-08, -4.9565796005022697e-08, -9.344535099173958e-07, -2.2846427897084712e-08, -7.880929900113742e-08, -3.5906093000552067e-07, -2.8536114001654763e-08, -4.49755319969894e-07, 8.552384799506787e-07, 0.12062426218454203, 
};
float step100_node8_M_correct_data[] = {
2.82843, 2.1197e-10, -0.857315, -0.35355, -0.0014466, 0.0, -0.353552, 0.00110957, 0.0, -0.35355, 0.00165191, 0.0, -0.353479, 0.00723515, 0.0, -0.353524, -0.00457931, 0.0, 0.00905151, 0.353437, -0.369229, 0.00194665, 0.353548, 0.0, -0.00034915, 0.353553, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0927935, 
0.0, 2.82843, -1.13233, 0.0014466, -0.35355, 0.0, -0.00110957, -0.353552, 0.0, -0.00165191, -0.35355, 0.0, -0.00723515, -0.353479, 0.0, 0.00457931, -0.353524, 0.0, -0.353437, 0.00905151, -0.0309752, -0.353548, 0.00194665, 0.0, -0.353553, -0.00034915, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0941013, 
0.0, 0.0, 3.34632, -0.0502089, -0.116343, -0.298836, -0.0620899, -0.1132, -0.298836, -0.0553488, 0.177447, -0.298836, -0.0582381, 0.192, -0.298836, -0.0963196, 0.193215, -0.298836, -0.117278, 0.0936122, -0.403912, -0.105099, -0.206921, -0.298836, -0.109071, -0.20775, -0.298836, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0102501, 
0.0, 0.0, 0.0, 2.80579, -0.00208193, 0.00263473, -0.402057, 0.000873192, 0.00784429, -0.401931, 0.00668928, -0.00534758, -0.401877, 0.0132811, 0.00983027, -0.402664, -9.52929e-05, 0.0475998, 0.00980637, 0.402454, -0.378251, 0.00196743, 0.397235, -0.313205, -0.000707199, 0.397236, -0.313404, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0446579, 
0.0, 0.0, 0.0, 0.0, 2.80383, -0.362444, -0.00577582, -0.405923, -0.0156136, -0.00611148, -0.393853, -0.012404, -0.0125672, -0.393139, -0.37862, -0.000740402, -0.393204, -0.382826, -0.405919, 0.0160966, -0.0495368, -0.405578, -0.00444026, -0.0284277, -0.405761, -0.00708003, -0.0220822, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.150859, 
0.0, 0.0, 0.0, 0.0, 0.0, 2.95688, -0.00662483, -0.061198, -0.370317, -0.01065, 0.301632, -0.369912, -0.00706817, -0.0287971, -0.414815, -0.00946647, -0.0286704, -0.415365, -0.0616176, 0.0110753, -0.384751, -0.060338, -0.0218107, -0.371602, -0.0607595, -0.022218, -0.370824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0208757, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.77658, -0.00339534, -0.352719, -0.46465, 0.00545862, -0.0083653, -0.464651, 0.0123503, -0.00703644, -0.465606, -0.00309882, 0.0359142, 0.00690789, 0.465502, -0.453286, -0.00209368, 0.458005, -0.0529812, -0.00520217, 0.457978, -0.37766, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0468702, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.77374, -0.74759, -0.00445263, -0.449326, -0.0221811, -0.0118415, -0.455851, -0.0767687, 0.00183471, -0.455831, -0.448862, -0.471031, 0.0159748, -0.0594416, -0.470566, -0.00817985, -0.0245211, -0.470765, -0.0112427, -0.0279207, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.175705, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.14419, -0.0513671, 0.253425, -0.396278, -0.0541913, 0.229528, -0.416253, -0.0610648, -0.0956952, -0.500087, -0.131666, 0.0652965, -0.466038, -0.122771, -0.260404, -0.40135, -0.132053, 0.0253151, -0.438458, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0270103, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.55104, 0.00867604, -0.0209585, -0.977112, 0.0250198, -0.0238938, -0.97847, -0.0114607, 0.063574, -0.0034187, 0.200644, -0.213326, -0.00682776, 0.185159, -0.0752248, -0.00840914, 0.190875, -0.135128, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00619122, 0.000793798, -0.0123692, 0.0060297, 0.0043732, -0.0110837, 0.00635314, -0.00330652, -0.0147033, -0.105891, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.49687, -0.279382, -0.00620543, -1.01875, 0.151541, 0.0282149, -0.953772, 0.194207, -0.169733, -0.0109496, 0.102579, -0.171477, 0.0389311, 0.099184, -0.170246, 0.00872693, 0.104164, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00422486, 0.00411758, 0.0117445, -0.00400034, 0.00145974, 0.00891279, -0.00429715, 0.00745229, 0.0151478, -0.0997502, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.77143, -0.0400001, 0.0401865, -0.838781, -0.0488644, 0.0700572, -0.890999, -0.0623797, 0.0237038, -0.155612, -0.0598625, -0.0550689, -0.130867, -0.061579, -0.0173965, -0.137, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0128656, -0.0235901, -0.0631394, -0.0140833, -0.00902004, -0.0471053, -0.012504, -0.0407302, -0.0814415, -0.022532, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.35573, 0.0192728, -0.0766365, -1.46645, -0.0332043, 0.0679547, -0.0102624, 0.301148, -0.322713, -0.0153039, 0.275893, -0.115055, -0.0177145, 0.285335, -0.204902, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00873383, 0.000470439, -0.0204275, 0.00845517, 0.00627119, -0.0180152, 0.00898709, -0.00618346, -0.024475, -0.000858616, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.32291, -0.059185, 0.0849339, -1.47345, 0.375024, -0.266338, -0.0225644, 0.108281, -0.26869, 0.0484387, 0.099728, -0.266875, 0.00483481, 0.109219, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00136237, 0.0148678, 0.0412982, -0.000571204, 0.0053896, 0.0310867, -0.00160902, 0.0263129, 0.0532277, -0.111267, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.88981, -0.106201, 0.247002, -1.31756, -0.120611, 0.0396109, -0.230663, -0.117213, -0.0712587, -0.190311, -0.119651, -0.0187516, -0.200318, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0165508, -0.0349515, -0.0943695, -0.0183671, -0.0131649, -0.0705303, -0.016005, -0.0606502, -0.121675, -0.0245404, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.83491, 0.0806394, -0.430277, -0.0077464, 0.63345, -0.703494, -0.0176253, 0.562664, -0.265829, -0.0230224, 0.589248, -0.454492, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.016993, -0.00298555, -0.0533248, 0.0162054, 0.0115789, -0.0455929, 0.0175834, -0.0197946, -0.0648741, -0.0214476, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.81724, 0.6506, -0.556244, -0.0470651, 0.181917, -0.559971, 0.0597597, 0.165416, -0.557446, 0.0123336, 0.1817, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0053885, 0.0461349, 0.127008, 0.00782481, 0.016913, 0.0953793, 0.00463754, 0.0811191, 0.163702, 0.029917, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.63909, -0.0819207, 0.150258, -0.535634, -0.0757333, -0.0901168, -0.410312, -0.0815258, 0.0259601, -0.452255, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0283739, -0.0772582, -0.213693, -0.0324619, -0.0277585, -0.160414, -0.0271058, -0.135817, -0.275149, 0.0197982, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64931, 0.00768331, 0.0965535, -0.747292, -0.0204055, -0.0238776, -0.747486, -0.0192453, -0.0226705, -0.377454, -0.00125846, 0.026509, -0.377421, -0.00516829, 0.0, -0.377337, -0.00949424, 0.0, -0.00111854, 0.00690342, 0.018929, -0.000754457, 0.0025801, 0.0142241, -0.00123015, 0.0121484, 0.0244237, -0.0713668, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.63113, 0.0646464, 0.0233329, -0.728023, 0.194437, 0.0295886, -0.752005, 0.316073, 0.00236938, -0.380059, 0.400124, 0.00630612, -0.380014, 0.0, 0.0106617, -0.379917, 0.0, -0.00350705, 0.00670487, 0.032932, -0.00295119, -0.00162692, 0.0264991, -0.00378992, 0.0164339, 0.0411962, -0.0615584, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.25426, -0.0285123, 0.246296, -0.670391, -0.0400332, 0.3239, -0.786189, 0.011152, 0.00758726, -0.316024, -0.00449004, -0.286521, -0.307289, -0.00474183, -0.287119, -0.307289, -0.00153294, -0.0204099, -0.069305, -0.00279271, -0.00373675, -0.0536197, -0.0010435, -0.0400424, -0.0881646, -0.100496, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54179, -0.000653647, -0.02475, -0.999499, 0.000600854, -0.0345674, -0.504238, 0.00979911, 0.00614817, -0.504487, 0.00127498, 0.000338064, -0.504508, -0.00451427, 0.00486935, -0.00128036, 0.00926736, 0.0248922, -0.000798854, 0.00360903, 0.0186414, -0.00142396, 0.0161407, 0.0321628, 0.0835769, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.52081, -0.184536, 0.00576469, -1.03302, 0.313861, -0.0102415, -0.507154, 0.583515, -0.00346708, -0.478486, 0.428647, 0.00236345, -0.478439, 0.429356, -0.00787566, -0.00116281, 0.0158166, -0.0076713, -0.00576361, 0.0142209, -0.00808517, 0.00409564, 0.0187643, -0.0792659, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.71596, -0.052733, 0.171414, -0.921222, -0.00602625, -0.00529894, -0.434909, -0.00971075, -0.0760623, -0.414916, -0.00968802, -0.0763046, -0.414827, -0.00466935, -0.0244657, -0.0760431, -0.00608117, -0.00645386, -0.0581262, -0.00416713, -0.045729, -0.0972184, 0.0068353, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.33582, 0.0166693, -0.0900631, -0.764503, 0.0198229, -0.0152449, -0.765097, 0.00378064, -0.0155469, -0.765188, -0.00500536, -0.0149744, -0.00207254, 0.0130677, 0.0345513, -0.0014011, 0.00524997, 0.0258108, -0.00226847, 0.0225912, 0.0446965, 0.0733218, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.28665, 0.352205, -0.0126168, -0.792141, 0.954309, -0.00123584, -0.732206, 0.26839, 0.00787879, -0.732057, 0.708753, -0.0100452, 0.00712457, 0.0510713, -0.00922996, -0.00624422, 0.0422106, -0.0105389, 0.0226497, 0.0631244, 0.00168355, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.74293, -0.0308851, 0.2047, -0.836838, -0.0386835, -0.281227, -0.676019, -0.041725, 0.0843016, -0.732538, -0.00240463, -0.0357124, -0.122716, -0.00462907, -0.00612738, -0.0950851, -0.00153085, -0.0705268, -0.156007, 0.0134527, 
};


const int step100_node9_num_factors = 106;
const bool step100_node9_marked = true;
const bool step100_node9_fixed = false;
int step100_node9_factor_height[] = {step100_factor3_height, step100_factor45_height, step100_factor297_height, step100_factor4_height, step100_factor298_height, step100_factor47_height, step100_factor299_height, step100_factor48_height, step100_factor300_height, step100_factor49_height, step100_factor301_height, step100_factor302_height, step100_factor303_height, step100_factor304_height, step100_factor305_height, step100_factor306_height, step100_factor307_height, step100_factor308_height, step100_factor309_height, step100_factor310_height, step100_factor311_height, step100_factor395_height, step100_factor312_height, step100_factor396_height, step100_factor313_height, step100_factor397_height, step100_factor314_height, step100_factor398_height, step100_factor315_height, step100_factor399_height, step100_factor316_height, step100_factor317_height, step100_factor401_height, step100_factor318_height, step100_factor402_height, step100_factor319_height, step100_factor403_height, step100_factor320_height, step100_factor404_height, step100_factor321_height, step100_factor405_height, step100_factor406_height, step100_factor407_height, step100_factor408_height, step100_factor409_height, step100_factor410_height, step100_factor411_height, step100_factor34_height, step100_factor412_height, step100_factor413_height, step100_factor36_height, step100_factor37_height, step100_factor38_height, step100_factor39_height, step100_factor40_height, step100_factor1_height, step100_factor41_height, step100_factor42_height, step100_factor43_height, step100_factor44_height, step100_factor295_height, step100_factor129_height, step100_factor130_height, step100_factor296_height, step100_factor131_height, step100_factor0_height, step100_factor132_height, step100_factor133_height, step100_factor134_height, step100_factor135_height, step100_factor136_height, step100_factor137_height, step100_factor138_height, step100_factor139_height, step100_factor140_height, step100_factor141_height, step100_factor142_height, step100_factor143_height, step100_factor144_height, step100_factor145_height, step100_factor146_height, step100_factor147_height, step100_factor148_height, step100_factor149_height, step100_factor276_height, step100_factor152_height, step100_factor153_height, step100_factor154_height, step100_factor280_height, step100_factor155_height, step100_factor281_height, step100_factor282_height, step100_factor283_height, step100_factor284_height, step100_factor285_height, step100_factor286_height, step100_factor287_height, step100_factor288_height, step100_factor289_height, step100_factor290_height, step100_factor291_height, step100_factor292_height, step100_factor125_height, step100_factor293_height, step100_factor294_height, step100_factor128_height, };
int step100_node9_factor_width[] = {step100_factor3_width, step100_factor45_width, step100_factor297_width, step100_factor4_width, step100_factor298_width, step100_factor47_width, step100_factor299_width, step100_factor48_width, step100_factor300_width, step100_factor49_width, step100_factor301_width, step100_factor302_width, step100_factor303_width, step100_factor304_width, step100_factor305_width, step100_factor306_width, step100_factor307_width, step100_factor308_width, step100_factor309_width, step100_factor310_width, step100_factor311_width, step100_factor395_width, step100_factor312_width, step100_factor396_width, step100_factor313_width, step100_factor397_width, step100_factor314_width, step100_factor398_width, step100_factor315_width, step100_factor399_width, step100_factor316_width, step100_factor317_width, step100_factor401_width, step100_factor318_width, step100_factor402_width, step100_factor319_width, step100_factor403_width, step100_factor320_width, step100_factor404_width, step100_factor321_width, step100_factor405_width, step100_factor406_width, step100_factor407_width, step100_factor408_width, step100_factor409_width, step100_factor410_width, step100_factor411_width, step100_factor34_width, step100_factor412_width, step100_factor413_width, step100_factor36_width, step100_factor37_width, step100_factor38_width, step100_factor39_width, step100_factor40_width, step100_factor1_width, step100_factor41_width, step100_factor42_width, step100_factor43_width, step100_factor44_width, step100_factor295_width, step100_factor129_width, step100_factor130_width, step100_factor296_width, step100_factor131_width, step100_factor0_width, step100_factor132_width, step100_factor133_width, step100_factor134_width, step100_factor135_width, step100_factor136_width, step100_factor137_width, step100_factor138_width, step100_factor139_width, step100_factor140_width, step100_factor141_width, step100_factor142_width, step100_factor143_width, step100_factor144_width, step100_factor145_width, step100_factor146_width, step100_factor147_width, step100_factor148_width, step100_factor149_width, step100_factor276_width, step100_factor152_width, step100_factor153_width, step100_factor154_width, step100_factor280_width, step100_factor155_width, step100_factor281_width, step100_factor282_width, step100_factor283_width, step100_factor284_width, step100_factor285_width, step100_factor286_width, step100_factor287_width, step100_factor288_width, step100_factor289_width, step100_factor290_width, step100_factor291_width, step100_factor292_width, step100_factor125_width, step100_factor293_width, step100_factor294_width, step100_factor128_width, };
int* step100_node9_factor_ridx[] = {step100_factor3_ridx, step100_factor45_ridx, step100_factor297_ridx, step100_factor4_ridx, step100_factor298_ridx, step100_factor47_ridx, step100_factor299_ridx, step100_factor48_ridx, step100_factor300_ridx, step100_factor49_ridx, step100_factor301_ridx, step100_factor302_ridx, step100_factor303_ridx, step100_factor304_ridx, step100_factor305_ridx, step100_factor306_ridx, step100_factor307_ridx, step100_factor308_ridx, step100_factor309_ridx, step100_factor310_ridx, step100_factor311_ridx, step100_factor395_ridx, step100_factor312_ridx, step100_factor396_ridx, step100_factor313_ridx, step100_factor397_ridx, step100_factor314_ridx, step100_factor398_ridx, step100_factor315_ridx, step100_factor399_ridx, step100_factor316_ridx, step100_factor317_ridx, step100_factor401_ridx, step100_factor318_ridx, step100_factor402_ridx, step100_factor319_ridx, step100_factor403_ridx, step100_factor320_ridx, step100_factor404_ridx, step100_factor321_ridx, step100_factor405_ridx, step100_factor406_ridx, step100_factor407_ridx, step100_factor408_ridx, step100_factor409_ridx, step100_factor410_ridx, step100_factor411_ridx, step100_factor34_ridx, step100_factor412_ridx, step100_factor413_ridx, step100_factor36_ridx, step100_factor37_ridx, step100_factor38_ridx, step100_factor39_ridx, step100_factor40_ridx, step100_factor1_ridx, step100_factor41_ridx, step100_factor42_ridx, step100_factor43_ridx, step100_factor44_ridx, step100_factor295_ridx, step100_factor129_ridx, step100_factor130_ridx, step100_factor296_ridx, step100_factor131_ridx, step100_factor0_ridx, step100_factor132_ridx, step100_factor133_ridx, step100_factor134_ridx, step100_factor135_ridx, step100_factor136_ridx, step100_factor137_ridx, step100_factor138_ridx, step100_factor139_ridx, step100_factor140_ridx, step100_factor141_ridx, step100_factor142_ridx, step100_factor143_ridx, step100_factor144_ridx, step100_factor145_ridx, step100_factor146_ridx, step100_factor147_ridx, step100_factor148_ridx, step100_factor149_ridx, step100_factor276_ridx, step100_factor152_ridx, step100_factor153_ridx, step100_factor154_ridx, step100_factor280_ridx, step100_factor155_ridx, step100_factor281_ridx, step100_factor282_ridx, step100_factor283_ridx, step100_factor284_ridx, step100_factor285_ridx, step100_factor286_ridx, step100_factor287_ridx, step100_factor288_ridx, step100_factor289_ridx, step100_factor290_ridx, step100_factor291_ridx, step100_factor292_ridx, step100_factor125_ridx, step100_factor293_ridx, step100_factor294_ridx, step100_factor128_ridx, };
float* step100_node9_factor_data[] = {step100_factor3_data, step100_factor45_data, step100_factor297_data, step100_factor4_data, step100_factor298_data, step100_factor47_data, step100_factor299_data, step100_factor48_data, step100_factor300_data, step100_factor49_data, step100_factor301_data, step100_factor302_data, step100_factor303_data, step100_factor304_data, step100_factor305_data, step100_factor306_data, step100_factor307_data, step100_factor308_data, step100_factor309_data, step100_factor310_data, step100_factor311_data, step100_factor395_data, step100_factor312_data, step100_factor396_data, step100_factor313_data, step100_factor397_data, step100_factor314_data, step100_factor398_data, step100_factor315_data, step100_factor399_data, step100_factor316_data, step100_factor317_data, step100_factor401_data, step100_factor318_data, step100_factor402_data, step100_factor319_data, step100_factor403_data, step100_factor320_data, step100_factor404_data, step100_factor321_data, step100_factor405_data, step100_factor406_data, step100_factor407_data, step100_factor408_data, step100_factor409_data, step100_factor410_data, step100_factor411_data, step100_factor34_data, step100_factor412_data, step100_factor413_data, step100_factor36_data, step100_factor37_data, step100_factor38_data, step100_factor39_data, step100_factor40_data, step100_factor1_data, step100_factor41_data, step100_factor42_data, step100_factor43_data, step100_factor44_data, step100_factor295_data, step100_factor129_data, step100_factor130_data, step100_factor296_data, step100_factor131_data, step100_factor0_data, step100_factor132_data, step100_factor133_data, step100_factor134_data, step100_factor135_data, step100_factor136_data, step100_factor137_data, step100_factor138_data, step100_factor139_data, step100_factor140_data, step100_factor141_data, step100_factor142_data, step100_factor143_data, step100_factor144_data, step100_factor145_data, step100_factor146_data, step100_factor147_data, step100_factor148_data, step100_factor149_data, step100_factor276_data, step100_factor152_data, step100_factor153_data, step100_factor154_data, step100_factor280_data, step100_factor155_data, step100_factor281_data, step100_factor282_data, step100_factor283_data, step100_factor284_data, step100_factor285_data, step100_factor286_data, step100_factor287_data, step100_factor288_data, step100_factor289_data, step100_factor290_data, step100_factor291_data, step100_factor292_data, step100_factor125_data, step100_factor293_data, step100_factor294_data, step100_factor128_data, };
int step100_node9_factor_num_blks[] = {step100_factor3_num_blks, step100_factor45_num_blks, step100_factor297_num_blks, step100_factor4_num_blks, step100_factor298_num_blks, step100_factor47_num_blks, step100_factor299_num_blks, step100_factor48_num_blks, step100_factor300_num_blks, step100_factor49_num_blks, step100_factor301_num_blks, step100_factor302_num_blks, step100_factor303_num_blks, step100_factor304_num_blks, step100_factor305_num_blks, step100_factor306_num_blks, step100_factor307_num_blks, step100_factor308_num_blks, step100_factor309_num_blks, step100_factor310_num_blks, step100_factor311_num_blks, step100_factor395_num_blks, step100_factor312_num_blks, step100_factor396_num_blks, step100_factor313_num_blks, step100_factor397_num_blks, step100_factor314_num_blks, step100_factor398_num_blks, step100_factor315_num_blks, step100_factor399_num_blks, step100_factor316_num_blks, step100_factor317_num_blks, step100_factor401_num_blks, step100_factor318_num_blks, step100_factor402_num_blks, step100_factor319_num_blks, step100_factor403_num_blks, step100_factor320_num_blks, step100_factor404_num_blks, step100_factor321_num_blks, step100_factor405_num_blks, step100_factor406_num_blks, step100_factor407_num_blks, step100_factor408_num_blks, step100_factor409_num_blks, step100_factor410_num_blks, step100_factor411_num_blks, step100_factor34_num_blks, step100_factor412_num_blks, step100_factor413_num_blks, step100_factor36_num_blks, step100_factor37_num_blks, step100_factor38_num_blks, step100_factor39_num_blks, step100_factor40_num_blks, step100_factor1_num_blks, step100_factor41_num_blks, step100_factor42_num_blks, step100_factor43_num_blks, step100_factor44_num_blks, step100_factor295_num_blks, step100_factor129_num_blks, step100_factor130_num_blks, step100_factor296_num_blks, step100_factor131_num_blks, step100_factor0_num_blks, step100_factor132_num_blks, step100_factor133_num_blks, step100_factor134_num_blks, step100_factor135_num_blks, step100_factor136_num_blks, step100_factor137_num_blks, step100_factor138_num_blks, step100_factor139_num_blks, step100_factor140_num_blks, step100_factor141_num_blks, step100_factor142_num_blks, step100_factor143_num_blks, step100_factor144_num_blks, step100_factor145_num_blks, step100_factor146_num_blks, step100_factor147_num_blks, step100_factor148_num_blks, step100_factor149_num_blks, step100_factor276_num_blks, step100_factor152_num_blks, step100_factor153_num_blks, step100_factor154_num_blks, step100_factor280_num_blks, step100_factor155_num_blks, step100_factor281_num_blks, step100_factor282_num_blks, step100_factor283_num_blks, step100_factor284_num_blks, step100_factor285_num_blks, step100_factor286_num_blks, step100_factor287_num_blks, step100_factor288_num_blks, step100_factor289_num_blks, step100_factor290_num_blks, step100_factor291_num_blks, step100_factor292_num_blks, step100_factor125_num_blks, step100_factor293_num_blks, step100_factor294_num_blks, step100_factor128_num_blks, };
int* step100_node9_factor_A_blk_start[] = {step100_factor3_A_blk_start, step100_factor45_A_blk_start, step100_factor297_A_blk_start, step100_factor4_A_blk_start, step100_factor298_A_blk_start, step100_factor47_A_blk_start, step100_factor299_A_blk_start, step100_factor48_A_blk_start, step100_factor300_A_blk_start, step100_factor49_A_blk_start, step100_factor301_A_blk_start, step100_factor302_A_blk_start, step100_factor303_A_blk_start, step100_factor304_A_blk_start, step100_factor305_A_blk_start, step100_factor306_A_blk_start, step100_factor307_A_blk_start, step100_factor308_A_blk_start, step100_factor309_A_blk_start, step100_factor310_A_blk_start, step100_factor311_A_blk_start, step100_factor395_A_blk_start, step100_factor312_A_blk_start, step100_factor396_A_blk_start, step100_factor313_A_blk_start, step100_factor397_A_blk_start, step100_factor314_A_blk_start, step100_factor398_A_blk_start, step100_factor315_A_blk_start, step100_factor399_A_blk_start, step100_factor316_A_blk_start, step100_factor317_A_blk_start, step100_factor401_A_blk_start, step100_factor318_A_blk_start, step100_factor402_A_blk_start, step100_factor319_A_blk_start, step100_factor403_A_blk_start, step100_factor320_A_blk_start, step100_factor404_A_blk_start, step100_factor321_A_blk_start, step100_factor405_A_blk_start, step100_factor406_A_blk_start, step100_factor407_A_blk_start, step100_factor408_A_blk_start, step100_factor409_A_blk_start, step100_factor410_A_blk_start, step100_factor411_A_blk_start, step100_factor34_A_blk_start, step100_factor412_A_blk_start, step100_factor413_A_blk_start, step100_factor36_A_blk_start, step100_factor37_A_blk_start, step100_factor38_A_blk_start, step100_factor39_A_blk_start, step100_factor40_A_blk_start, step100_factor1_A_blk_start, step100_factor41_A_blk_start, step100_factor42_A_blk_start, step100_factor43_A_blk_start, step100_factor44_A_blk_start, step100_factor295_A_blk_start, step100_factor129_A_blk_start, step100_factor130_A_blk_start, step100_factor296_A_blk_start, step100_factor131_A_blk_start, step100_factor0_A_blk_start, step100_factor132_A_blk_start, step100_factor133_A_blk_start, step100_factor134_A_blk_start, step100_factor135_A_blk_start, step100_factor136_A_blk_start, step100_factor137_A_blk_start, step100_factor138_A_blk_start, step100_factor139_A_blk_start, step100_factor140_A_blk_start, step100_factor141_A_blk_start, step100_factor142_A_blk_start, step100_factor143_A_blk_start, step100_factor144_A_blk_start, step100_factor145_A_blk_start, step100_factor146_A_blk_start, step100_factor147_A_blk_start, step100_factor148_A_blk_start, step100_factor149_A_blk_start, step100_factor276_A_blk_start, step100_factor152_A_blk_start, step100_factor153_A_blk_start, step100_factor154_A_blk_start, step100_factor280_A_blk_start, step100_factor155_A_blk_start, step100_factor281_A_blk_start, step100_factor282_A_blk_start, step100_factor283_A_blk_start, step100_factor284_A_blk_start, step100_factor285_A_blk_start, step100_factor286_A_blk_start, step100_factor287_A_blk_start, step100_factor288_A_blk_start, step100_factor289_A_blk_start, step100_factor290_A_blk_start, step100_factor291_A_blk_start, step100_factor292_A_blk_start, step100_factor125_A_blk_start, step100_factor293_A_blk_start, step100_factor294_A_blk_start, step100_factor128_A_blk_start, };
int* step100_node9_factor_B_blk_start[] = {step100_factor3_B_blk_start, step100_factor45_B_blk_start, step100_factor297_B_blk_start, step100_factor4_B_blk_start, step100_factor298_B_blk_start, step100_factor47_B_blk_start, step100_factor299_B_blk_start, step100_factor48_B_blk_start, step100_factor300_B_blk_start, step100_factor49_B_blk_start, step100_factor301_B_blk_start, step100_factor302_B_blk_start, step100_factor303_B_blk_start, step100_factor304_B_blk_start, step100_factor305_B_blk_start, step100_factor306_B_blk_start, step100_factor307_B_blk_start, step100_factor308_B_blk_start, step100_factor309_B_blk_start, step100_factor310_B_blk_start, step100_factor311_B_blk_start, step100_factor395_B_blk_start, step100_factor312_B_blk_start, step100_factor396_B_blk_start, step100_factor313_B_blk_start, step100_factor397_B_blk_start, step100_factor314_B_blk_start, step100_factor398_B_blk_start, step100_factor315_B_blk_start, step100_factor399_B_blk_start, step100_factor316_B_blk_start, step100_factor317_B_blk_start, step100_factor401_B_blk_start, step100_factor318_B_blk_start, step100_factor402_B_blk_start, step100_factor319_B_blk_start, step100_factor403_B_blk_start, step100_factor320_B_blk_start, step100_factor404_B_blk_start, step100_factor321_B_blk_start, step100_factor405_B_blk_start, step100_factor406_B_blk_start, step100_factor407_B_blk_start, step100_factor408_B_blk_start, step100_factor409_B_blk_start, step100_factor410_B_blk_start, step100_factor411_B_blk_start, step100_factor34_B_blk_start, step100_factor412_B_blk_start, step100_factor413_B_blk_start, step100_factor36_B_blk_start, step100_factor37_B_blk_start, step100_factor38_B_blk_start, step100_factor39_B_blk_start, step100_factor40_B_blk_start, step100_factor1_B_blk_start, step100_factor41_B_blk_start, step100_factor42_B_blk_start, step100_factor43_B_blk_start, step100_factor44_B_blk_start, step100_factor295_B_blk_start, step100_factor129_B_blk_start, step100_factor130_B_blk_start, step100_factor296_B_blk_start, step100_factor131_B_blk_start, step100_factor0_B_blk_start, step100_factor132_B_blk_start, step100_factor133_B_blk_start, step100_factor134_B_blk_start, step100_factor135_B_blk_start, step100_factor136_B_blk_start, step100_factor137_B_blk_start, step100_factor138_B_blk_start, step100_factor139_B_blk_start, step100_factor140_B_blk_start, step100_factor141_B_blk_start, step100_factor142_B_blk_start, step100_factor143_B_blk_start, step100_factor144_B_blk_start, step100_factor145_B_blk_start, step100_factor146_B_blk_start, step100_factor147_B_blk_start, step100_factor148_B_blk_start, step100_factor149_B_blk_start, step100_factor276_B_blk_start, step100_factor152_B_blk_start, step100_factor153_B_blk_start, step100_factor154_B_blk_start, step100_factor280_B_blk_start, step100_factor155_B_blk_start, step100_factor281_B_blk_start, step100_factor282_B_blk_start, step100_factor283_B_blk_start, step100_factor284_B_blk_start, step100_factor285_B_blk_start, step100_factor286_B_blk_start, step100_factor287_B_blk_start, step100_factor288_B_blk_start, step100_factor289_B_blk_start, step100_factor290_B_blk_start, step100_factor291_B_blk_start, step100_factor292_B_blk_start, step100_factor125_B_blk_start, step100_factor293_B_blk_start, step100_factor294_B_blk_start, step100_factor128_B_blk_start, };
int* step100_node9_factor_blk_width[] = {step100_factor3_blk_width, step100_factor45_blk_width, step100_factor297_blk_width, step100_factor4_blk_width, step100_factor298_blk_width, step100_factor47_blk_width, step100_factor299_blk_width, step100_factor48_blk_width, step100_factor300_blk_width, step100_factor49_blk_width, step100_factor301_blk_width, step100_factor302_blk_width, step100_factor303_blk_width, step100_factor304_blk_width, step100_factor305_blk_width, step100_factor306_blk_width, step100_factor307_blk_width, step100_factor308_blk_width, step100_factor309_blk_width, step100_factor310_blk_width, step100_factor311_blk_width, step100_factor395_blk_width, step100_factor312_blk_width, step100_factor396_blk_width, step100_factor313_blk_width, step100_factor397_blk_width, step100_factor314_blk_width, step100_factor398_blk_width, step100_factor315_blk_width, step100_factor399_blk_width, step100_factor316_blk_width, step100_factor317_blk_width, step100_factor401_blk_width, step100_factor318_blk_width, step100_factor402_blk_width, step100_factor319_blk_width, step100_factor403_blk_width, step100_factor320_blk_width, step100_factor404_blk_width, step100_factor321_blk_width, step100_factor405_blk_width, step100_factor406_blk_width, step100_factor407_blk_width, step100_factor408_blk_width, step100_factor409_blk_width, step100_factor410_blk_width, step100_factor411_blk_width, step100_factor34_blk_width, step100_factor412_blk_width, step100_factor413_blk_width, step100_factor36_blk_width, step100_factor37_blk_width, step100_factor38_blk_width, step100_factor39_blk_width, step100_factor40_blk_width, step100_factor1_blk_width, step100_factor41_blk_width, step100_factor42_blk_width, step100_factor43_blk_width, step100_factor44_blk_width, step100_factor295_blk_width, step100_factor129_blk_width, step100_factor130_blk_width, step100_factor296_blk_width, step100_factor131_blk_width, step100_factor0_blk_width, step100_factor132_blk_width, step100_factor133_blk_width, step100_factor134_blk_width, step100_factor135_blk_width, step100_factor136_blk_width, step100_factor137_blk_width, step100_factor138_blk_width, step100_factor139_blk_width, step100_factor140_blk_width, step100_factor141_blk_width, step100_factor142_blk_width, step100_factor143_blk_width, step100_factor144_blk_width, step100_factor145_blk_width, step100_factor146_blk_width, step100_factor147_blk_width, step100_factor148_blk_width, step100_factor149_blk_width, step100_factor276_blk_width, step100_factor152_blk_width, step100_factor153_blk_width, step100_factor154_blk_width, step100_factor280_blk_width, step100_factor155_blk_width, step100_factor281_blk_width, step100_factor282_blk_width, step100_factor283_blk_width, step100_factor284_blk_width, step100_factor285_blk_width, step100_factor286_blk_width, step100_factor287_blk_width, step100_factor288_blk_width, step100_factor289_blk_width, step100_factor290_blk_width, step100_factor291_blk_width, step100_factor292_blk_width, step100_factor125_blk_width, step100_factor293_blk_width, step100_factor294_blk_width, step100_factor128_blk_width, };
const int step100_node9_parent = 10;
const int step100_node9_height = 67;
const int step100_node9_width = 66;
float step100_node9_data[] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};
const int step100_node9_num_blks = 0;
int step100_node9_A_blk_start[] = {};
int step100_node9_B_blk_start[] = {};
int step100_node9_blk_width[] = {};
const float step100_node9_H_correct_cond = 2684.2194506203446;
float step100_node9_H_correct_data[] = {
1.9999899240999999, -5.1665758193e-10, 0.089072744061, -0.9999115236599999, -0.0130505137273, 0.073546698155, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99958766957, 0.028626297398999998, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.029447953408999996, 
-5.1665758193e-10, 1.9999899240999999, -1.0961541710230103, 0.013050513985607234, -0.9999115236566286, 1.0016708008810007, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.028626297140776424, -0.9995876695773951, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.03768473670439271, 
0.089072744061, -1.0961541710230103, 3.20948477325281, -7.570759999091867e-08, 3.955372670505497e-07, -0.9999981913874499, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.057657381919700004, 1.0982569849537902, -0.9999977433600001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.04603761547211, 
-0.9999115236599999, 0.013050513985607234, -7.570759999091867e-08, 2.0000087348093865, 2.750789999950154e-08, -0.060468328547799995, -0.9997915509899999, -0.020550991214999998, 0.066230376216, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.984286396980051e-06, 4.2317290002990576e-08, 7.842539999414523e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0002877846844559997, 
-0.0130505137273, -0.9999115236566286, 3.955372670101964e-07, 2.7507899998912425e-08, 1.9999961992001534, -1.002547165836275, 0.020550875914260004, -0.99978757469159, 1.0484686127896161, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.6078170004596773e-08, 5.31375793350297e-07, 2.3443131802272026e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00022421946801699815, 
0.073546698155, 1.0016708008810007, -0.9999981913874499, -0.060468328547799995, -1.002547165836275, 3.0087663647352496, 1.7279999864720956e-10, -4.844239999883084e-07, -1.0000014112924, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.1138879999092484e-07, -5.357071001075648e-08, -6.317771999778427e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00020702895734999835, 
0.0, 0.0, 0.0, -0.9997915509899999, 0.020550875914260004, 1.7279999864720956e-10, 1.0209901570731026, -0.0036875232139800007, -0.11209113895965, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.787439150189869e-07, 1.7245310000326478e-08, -1.5139249997510095e-08, -0.00507828139412, -0.0206701914008, 0.06348609901, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0007368768811450014, 
0.0, 0.0, 0.0, -0.020550991214999998, -0.9997875746915901, -4.844239999883084e-07, -0.0036875232139800007, 1.0123423644824883, -1.05522845859108, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.284829999957135e-08, -1.958073100117305e-07, -5.248591402342211e-08, 0.012531883699369601, 0.0028572721142440002, -0.0428730185284, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0023484715594360005, 
0.0, 0.0, 0.0, 0.066230376216, 1.0484686127896161, -1.0000014112924, -0.11209113895965, -1.05522845859108, 2.41911292940904, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.29465400009084e-07, 4.38580576054923e-07, 4.234257199806042e-07, -0.0011769545587199998, 0.06767900105624, -0.22795065531680003, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.009306867314079998, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.017412921599999, 0.011538476508800001, -0.19467927412, -1.9829733295199998, -0.027963001336, -0.023891347384799998, -1.9827640553599999, -0.03939678778399999, -0.0173506557016, -0.9995225275999999, -0.030906879488, 0.079962332016, -0.9993423928799999, -0.036234628736, 0.0, -0.9999702153599999, 0.0075103197943999995, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0029366727632, 0.0163082319712, 0.043363990088, -0.00209522639952, 0.006486863190399999, 0.032427428448, -0.00318414608, 0.028276647671999996, 0.056077262855999996, -0.50788189592, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.011538476508800001, 6.928390524696718, -0.24337376271466, 0.03755405224964, -1.9078052954847478, 0.5688116648475636, 0.06147459531952, -1.9820384107434121, 0.9295153092287012, 0.030907112260199997, -0.999523783396384, 0.9099155421704879, 0.03623467755116, -0.9993430266604479, 0.0, -0.00751031727828, -0.9999712583146708, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0127529238746776, 0.0145965630551216, 0.085331033863684, -0.01135240503606536, -0.007375415219692799, 0.069606306777664, -0.01353253503144, 0.040172235835996, 0.10609483232510801, 0.12972393169244, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.19467927412, -0.24337376271466, 10.82940931601474, -0.0307313606953, 0.8675933384908501, -2.349770563674465, -0.059806424027479994, 1.1712055488304498, -2.817704244825805, -2.080871999799109e-08, 1.3106450000417278e-07, -0.9999996356213999, 0.09690512289370999, -0.9356646611035, -1.00000183437, 0.003711110799872998, -0.888371816976355, -1.00000183437, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.011063510137571, -0.05581988408927199, -0.22893946444693997, 0.007067873664654999, 0.000847118254191, -0.18107684585573, 0.012875247768059999, -0.12221909769613999, -0.28853352786418995, -0.004649141665629999, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.9829733295199998, 0.03755405224964, -0.0307313606953, 7.015994236046611, -0.011486250268279999, -0.05752323734559, -1.9840789267551902, -0.0200898133164, -0.028852214476929997, -0.9997864049131331, -0.020551746347220002, 0.0756933294435, -0.9996634625468901, -0.025880742709300006, -0.0674960386683, -0.9998384791782651, 0.017868153437970002, -0.0144235285225, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.002816616882695, 0.015530548284270002, 0.04025066609611, -0.002029785548395, 0.006477310566685801, 0.0299714610995, -0.0030397741348650005, 0.026598688382509998, 0.052149176773069995, 0.16193428580473904, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.027963001336, -1.9078052954847478, 0.86759333849085, -0.01148625026828, 6.923494790681061, -0.9128149688229534, 0.010170303727680009, -1.9736278029446637, 0.40054464565302544, 0.020551796020096005, -0.9997876403815817, 1.0070604160681194, 0.02588082295513, -0.9996640911518891, 1.0342235219761253, -0.017868188891178003, -0.9998407336075017, 0.9845306513999406, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.013923203103601482, -0.01056939112139518, -0.002739583231389794, -0.014112437217318113, -0.01124396424519392, 0.0012086804698820015, -0.014067926334666083, -0.0100393845080674, -0.005759332562143601, 0.07368218212978676, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.023891347384799998, 0.5688116648475636, -2.349770563674465, -0.05752323734559, -0.9128149688229533, 8.030215485195637, -0.04853711711582001, 0.33858147898259505, -2.136237740752223, 6.38086999597352e-09, 1.4325150398717226e-07, -1.0000006755352582, -3.124341000082999e-08, 7.153550079658233e-07, -0.9999995833191601, 5.200639994468695e-09, 4.3303893031056384e-07, -0.9999984059271161, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0020061140463766003, -0.04177897685181461, -0.15576405672321902, -0.0007666747307591399, -0.0037414422656352002, -0.121903146213644, 0.003174888544252, -0.086444352068811, -0.197194564549703, 0.0030823612139359996, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.9827640553599999, 0.06147459531952, -0.059806424027479994, -1.9840789267551902, 0.010170303727680005, -0.04853711711582001, 7.015534460875472, 0.0026758498379000047, -0.16830593922784, -0.9999606767938553, -0.00909007871282, 0.052636456426599997, -0.999898013234875, -0.014420158021460003, -1.970573000039664e-07, -0.9995717101126701, 0.02932794372114, -0.0372164577579, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.002671593047848, 0.0153308555078323, 0.039162548573530014, -0.0019028130076499804, 0.0065558415994818, 0.029088772249120005, -0.0028850195716640004, 0.026074884999383006, 0.05079346429326, 0.2626138619593623, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.03939678778399999, -1.9820384107434121, 1.1712055488304498, -0.0200898133164, -1.9736278029446632, 0.33858147898259505, 0.0026758498379000047, 6.995358953749603, -0.317193619032919, 0.009090069831779998, -0.99996160873859, 1.0060245523584972, 0.0144203109139, -0.9999007878699653, 8.114785069942316e-07, -0.02932811742769, -0.9995723991241142, 0.9824628719927828, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.013074653919899398, 0.0026630597102660983, 0.042574929575871, -0.01244182617238836, -0.0089285250790776, 0.03630568466750999, -0.013541129695170398, 0.016044533414483, 0.05186019400452201, 0.06574860899887477, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0173506557016, 0.9295153092287012, -2.817704244825805, -0.028852214476929997, 0.40054464565302544, -2.136237740752223, -0.16830593922784, -0.317193619032919, 9.608735529790003, 1.7409195999665515e-07, 8.228895178788346e-07, -1.0000037691025059, 0.10572103190387999, -1.030125333813964, -1.0000018833059399, 7.463524999010859e-08, -5.876760028550253e-07, -1.000002258569114, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.006306745755536198, -0.046981537700210206, -0.18532814525558297, 0.00304660340341622, -0.0013527584580443994, -0.145971004293948, 0.007743218387427999, -0.100490064562127, -0.23398739681427097, 0.097058603428834, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9995225275999999, 0.030907112260199997, -2.080871999799109e-08, -0.9997864049131331, 0.020551796020096005, 6.38086999597352e-09, -0.9999606767938553, 0.009090069831779998, 1.7409195999665515e-07, 8.000026586495748, -3.79507340013155e-08, -0.57990914486955, -0.9999893834560278, -0.0053306336909380025, -1.120627700007906e-07, -0.9992646365869957, 0.038412897786044, -1.7925158000293048e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999022079200001, 0.0141727044775, 0.0, -0.9999075039, 0.013806063782100001, 0.0, -0.99944675364, 0.033306153421, -0.08790214644199999, -4.922473499934188e-09, 3.041510680167535e-08, -2.1770157003103068e-08, -1.3759295837160274e-09, 2.4806934611213394e-09, 6.664672400019118e-08, -3.249147299738823e-09, 3.1348644999407316e-08, -2.7821265003265696e-08, 0.45164604200705144, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.030906879488, -0.999523783396384, 1.3106450000417278e-07, -0.020551746347220002, -0.9997876403815819, 1.4325150398717226e-07, -0.00909007871282, -0.99996160873859, 8.228895178788346e-07, -3.79507340013155e-08, 7.999997578590831, -0.866384093202353, 0.005330445523969004, -0.9999843834768612, -2.5121036299144166e-07, -0.03841297997043001, -0.9992625885149831, -1.9642856270128694e-06, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.014172684950140001, -0.9998979861246575, 0.0, -0.013806033138900001, -0.9999042785389654, 0.0, -0.03330605715648, -0.9994441625004531, 1.014154745613706, 1.6155183560028006e-08, -2.6005720197071087e-08, -6.844890999367757e-08, 2.9077423136717396e-08, -6.1566653001972166e-09, -2.6593980549396547e-07, -3.1234890419235516e-08, -1.4877969659555505e-07, -2.731380319867974e-07, 0.5470816797300281, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.079962332016, 0.9099155421704879, -0.9999996356213999, 0.0756933294435, 1.0070604160681194, -1.0000006755352582, 0.052636456426599997, 1.0060245523584972, -1.0000037691025059, -0.57990914486955, -0.866384093202353, 13.042713424272781, 0.14384445720566197, -0.023447560601550038, -1.0000006718486705, 0.09050492033533, 0.020915428553588144, -1.0000010491483193, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.07363381058478999, -1.00647993902225, -1.00000100705, 0.09381475798031999, -1.05665162406579, -1.00000100705, -1.6018110001934826e-07, -1.237718999953202e-07, -0.9999998043012002, -9.626976000236866e-09, -9.227457002855698e-09, 7.566087003485465e-08, -1.632253859754837e-08, 6.456540000257036e-09, 4.127250099798449e-07, 5.54181170040434e-08, 1.2998941000214081e-07, 1.2889264004828173e-07, 0.181432177566405, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9993423928799999, 0.03623467755116, 0.09690512289370999, -0.9996634625468901, 0.02588082295513, -3.124341000082999e-08, -0.999898013234875, 0.0144203109139, 0.10572103190387999, -0.9999893834560278, 0.005330445523969004, 0.14384445720566197, 8.000024269342555, -3.992506799905399e-08, 0.09424030866147498, -0.9990447641677993, 0.04373921474173301, 0.05434092453581899, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.999811838032809, 0.0195025008058, 0.05059595104725, -0.9998181374009077, 0.01913588129074, 0.02982701016225, -0.9992556188525409, 0.03863313720910999, 0.050537766999429995, 1.1484049800693404e-09, 3.366929269513109e-08, 1.8246596699663114e-07, -2.744127739900295e-09, 5.056628748725503e-09, 8.293896300283724e-08, -1.5288368819723284e-08, 5.4554395998033666e-08, 1.1338582799282655e-07, -0.008299264411545045, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.036234628736, -0.999343026660448, -0.9356646611034999, -0.025880742709300006, -0.9996640911518891, 7.153550079930698e-07, -0.014420158021460003, -0.9999007878699651, -1.030125333813964, -0.005330633690938003, -0.999984383476861, -0.02344756060155004, -3.992506799872745e-08, 8.000007942463984, -1.0321308557119637, -0.043738963059856015, -0.9990500514535322, -0.04830107550467609, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.019502539618163, -0.9998113780696618, 0.9814058349339985, -0.019135790076142, -0.9998164599823826, 1.0312143085504224, -0.038633071545995, -0.9992557695217122, 0.990223277863136, 5.619592098678151e-09, 1.797756352867756e-08, 2.1838153899000562e-07, -2.534298273593475e-10, -5.79724651505795e-10, 1.7137290359928568e-07, -5.6888673987702586e-08, 9.527112429629158e-08, 2.0176386389018855e-07, -0.6469719583631005, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.00000183437, -0.0674960386683, 1.0342235219761255, -0.9999995833191601, -1.970573000039664e-07, 8.114785069942316e-07, -1.0000018833059399, -1.120627700007906e-07, -2.5121036299144166e-07, -1.0000006718486705, 0.09424030866147498, -1.0321308557119637, 9.07415033138002, 6.789163001113137e-08, 1.503806804026388e-06, -0.9999917534451646, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.225240001165756e-09, 6.521310850283126e-07, -0.9999971853996998, -3.189759997871394e-09, 1.5138111904687685e-07, -0.99999800037348, 3.801800002536483e-09, 4.1671343001762843e-07, -0.9999976969394939, -1.3126436798667763e-08, 1.312802870105578e-07, 5.023378100003827e-07, -1.609219800018607e-08, -1.1308366999585211e-08, 4.7164358501009164e-07, -4.266500397449657e-09, 1.0363610801040296e-07, 6.787324999718608e-07, 0.313234584228828, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999702153599999, -0.00751031727828, 0.003711110799872998, -0.9998384791782651, -0.017868188891178, 5.200639994468695e-09, -0.9995717101126701, -0.02932811742769, 7.463524999010859e-08, -0.9992646365869957, -0.03841297997043001, 0.09050492033533, -0.9990447641677993, -0.043738963059856, 6.789163001113137e-08, 7.999999190565655, 2.889958080074906e-07, -0.02423342508224001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9997073533920011, -0.024246877473849994, 0.0412967602344, -0.9996974869756782, -0.024613400464089996, 4.8126699998464424e-08, -0.9999882536047402, -0.005110045700899995, 0.0416244814927, -1.0818796298845624e-08, -1.0216095769671294e-07, 8.216568899135262e-08, 4.547243862485779e-09, 2.0563004701756442e-08, -3.4591642995115265e-08, -7.307996600143921e-09, -3.2464449982478773e-09, -5.2103735990859254e-08, -0.01641534911305879, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0075103197943999995, -0.9999712583146708, -0.888371816976355, 0.017868153437970002, -0.9998407336075017, 4.3303893031056384e-07, 0.02932794372114, -0.9995723991241142, -5.876760028550253e-07, 0.038412897786044, -0.9992625885149831, 0.020915428553588144, 0.04373921474173301, -0.9990500514535327, 1.503806804026388e-06, 2.889958080074906e-07, 7.999983310408015, -0.8375716253252168, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.02424676660854001, -0.9997002414684611, 1.028880867429399, 0.024613276938710005, -0.9996923158197639, -8.893976350341182e-07, 0.005110048843000004, -0.9999814573187628, 1.0376948098836383, 4.358706329592252e-08, -4.833314799697136e-08, -3.920695580080346e-07, 1.9790532415854835e-07, 5.585684849759243e-08, -1.524461780008455e-07, 1.3113519600155059e-07, -3.840072399759802e-08, -3.464708620210545e-07, -0.27823684905655294, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.00000183437, -0.0144235285225, 0.9845306513999406, -0.9999984059271161, -0.0372164577579, 0.9824628719927828, -1.000002258569114, -1.7925158000293048e-07, -1.9642856270128694e-06, -1.0000010491483193, 0.05434092453581899, -0.048301075504676216, -0.9999917534451646, -0.02423342508224001, -0.8375716253252168, 11.107348335854597, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.2176233000051813e-07, -3.4958486600203956e-07, -0.9999988068666448, 0.0038520383264000055, -1.0797886902475378, -0.999998554096936, 7.189350007577715e-09, -9.744134299384145e-07, -0.9999997081966051, 4.2265776000845376e-08, 1.4653291438430704e-07, -8.295310698769485e-08, -4.34855543710102e-08, -2.0354270301386037e-08, 1.2278723620306946e-06, 5.5006768098767625e-08, 2.0398741800098123e-07, 1.2872511089979495e-06, -0.09833071508607562, 
-0.99958766957, -0.028626297140776424, -0.057657381919700004, -1.984286396980051e-06, -1.6078170003274578e-08, 1.1138879999092484e-07, 1.787439150189869e-07, 1.284829999957135e-08, -2.29465400009084e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.999980536455321, 1.9074049999983812e-08, -0.0840380770643, 4.757209999825361e-09, 3.75426200016341e-08, -1.6666899999340772e-07, -0.024775348205000002, -0.9996914007200001, 0.0062606083665, 0.011067963962900001, 0.9999376654200001, 0.0, 0.9999958734400001, 0.0018572432941400003, 0.0, -0.026437634930000002, 0.9996488640900001, 0.0, -0.015696374673200002, 0.9998749798600001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.143743258219466, 
0.028626297398999998, -0.9995876695773951, 1.0982569849537902, 4.2317290002990576e-08, 5.313757933667063e-07, -5.357071001075648e-08, 1.7245310000326478e-08, -1.958073100117305e-07, 4.38580576054923e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.9074049999983812e-08, 6.000004239287612, -3.9051645541795925, -1.5865438028418505e-08, -2.898011329880737e-09, -1.3460207993884412e-08, 0.9996940510537664, -0.024775413898663997, -1.0160238104483064, -0.9999387140686696, 0.011067982681354, 0.0, -0.0018572474775719998, 0.9999977928859188, 0.0, -0.9996506797539909, -0.026437688199116998, 0.0, -0.9998775306513807, -0.015696417560617997, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.29335729444728087, 
0.0, 0.0, -0.9999977433600001, 7.842539999414523e-08, 2.3443131802469708e-07, -6.317771999778427e-07, -1.5139249997510095e-08, -5.248591402342211e-08, 4.234257199806042e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0840380770643, -3.9051645541795925, 9.816526682920312, -8.633477629681652e-08, 1.0713322300864942e-07, -2.2684869998786365e-07, 8.582468500917398e-07, 8.041139999603982e-08, -0.9999994814069051, 0.9763079183343469, -0.011311186091499998, -1.0000006003800002, -0.006022698302299999, -0.9877701644201399, -1.0000006003800002, 0.9623077047401, -0.0305060601753, -1.0000006003800002, 0.980057660045124, -0.0043570650623999995, -1.0000006003800002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.24852582903299, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00507828139412, 0.012531883699369601, -0.0011769545587199998, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.757209999825361e-09, -1.5865438028418505e-08, -8.633477629681652e-08, 5.0128685606008885, 0.00423042535904031, -0.186801609266344, -0.9997956161224155, 0.020333842649772, 0.00490606332377415, 0.9999810133041999, -0.0066254403419656, 1.3178999999123554e-08, 0.0062999506248276, -0.9999811265902184, 1.3178999999123554e-08, 0.999524857774197, 0.030878760474975002, 1.3178999999123554e-08, 0.9997997891426946, 0.0201384690748292, 1.3178999999123554e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0080828917058413, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0206701914008, 0.0028572721142440002, 0.06767900105624, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.75426200016341e-08, -2.898011329880737e-09, 1.0713322300864942e-07, 0.00423042535904031, 5.020448701317919, 4.016843614868128, -0.020333692847455002, -0.9997930255609869, 1.0464262334266266, 0.0066254287483541, 0.9999797081660479, -2.4262836899479078e-08, 0.9999815529480668, 0.006299935657476061, -2.4262836899479078e-08, -0.030878741611230002, 0.9995239042231001, -2.4262836899479078e-08, -0.020138441999122802, 0.9997982120076523, -2.4262836899479078e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.059686317390982305, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.06348609901, -0.0428730185284, -0.22795065531680003, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.6666899999340772e-07, -1.3460207993884412e-08, -2.2684869998786365e-07, -0.186801609266344, 4.016843614868128, 9.51320050245799, -2.323299999837506e-08, -1.3501824010848517e-06, -0.9999972631063289, -0.027882539248020005, 1.040047302516571, -1.0000003810941809, 1.0322682853903655, 0.029924897325836, -1.0000003810941809, -0.0806027436016, 0.9824550654492601, -1.0000003810941809, -0.05191016826111, 1.0197500065326721, -1.0000003810941809, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.036168666760497, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.024775348205000002, 0.9996940510537664, 8.582468500917398e-07, -0.9997956161224155, -0.020333692847455002, -2.323299999837506e-08, 11.999973966807952, -3.145233000267314e-08, 1.742700262329405, 0.999903482322124, 0.01370928713742, -5.263893620182112e-07, 0.02663210837823, -0.999644156369552, -5.263893620182112e-07, 0.9986858740271659, 0.05119638532948, -5.263893620182112e-07, 0.9991803586815778, 0.04046399043898, -5.263893620182112e-07, 0.9992383641, 0.038969136495, 0.0, 0.9992248003, 0.039335698190000004, 0.0, 0.9998012618000001, 0.0198388547035, 0.0, 0.035896257605, -0.9993536564, 0.0, 0.018450294588000002, -0.9998283894000001, 0.0, 0.023053983946, -0.9997334428, 0.0, -0.277428557792061, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9996914007200001, -0.024775413898663997, 8.041139999603982e-08, 0.020333842649772, -0.9997930255609869, -1.3501824010848517e-06, -3.145233000267314e-08, 11.999974465489938, 1.6881902003581006, -0.013709262736557998, 0.9999049765814331, -1.6267967027777937e-07, 0.9996435732645406, 0.026631841351536, -1.6267967027777937e-07, -0.051196393345156, 0.9986883615582548, -1.6267967027777937e-07, -0.040463821312156, 0.9991791657626341, -1.6267967027777937e-07, -0.038969363829964, 0.9992407907225102, 0.0, -0.039335798205212, 0.9992239068392123, 0.0, -0.019838871119672, 0.9998034936807327, 0.0, 0.9993554984463258, 0.035896196077856, 0.0, 0.9998269762113445, 0.018450289129175998, 0.0, 0.999732877879518, 0.023053993200911997, 0.0, 0.5144483775722104, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0062606083665, -1.0160238104483064, -0.9999994814069051, 0.00490606332377415, 1.0464262334266266, -0.9999972631063289, 1.742700262329405, 1.6881902003581006, 20.055636841600816, -0.03972210511365349, -0.006326327171220224, -1.0000029057302269, -0.014170785181957224, 0.02823892207711388, -1.0000029057302269, -0.053194736257849984, -0.06362618089737598, -1.0000029057302269, -0.03574278459844797, -0.02656607172061139, -1.0000029057302269, -0.057253480052399976, 1.0081416921171, -0.9999998060399999, -0.03781117101900001, 0.9579196061542, -0.9999998060399999, -0.03823218265680001, 1.00023969327323, -0.9999998060399999, -0.006693638025099985, -0.9813575557131999, -0.9999998060399999, -0.05569681963136, -0.9704365046714399, -0.9999998060399999, -0.00924090894012001, -1.03350188258752, -0.9999998060399999, -0.41806957307306836, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.011067963962900001, -0.9999387140686696, 0.9763079183343469, 0.9999810133041999, 0.0066254287483541, -0.027882539248020005, 0.999903482322124, -0.013709262736557998, -0.03972210511365349, 11.999982350209503, 6.3952770006610796e-09, -2.060487363830997, -0.012925068810815997, 0.9999156657215242, 1.469910300078838e-08, -0.9992971418592367, -0.037500314835917994, 1.469910300078838e-08, -0.9996390792581606, -0.02676206542860801, -0.003281535340697001, -0.9996793120900521, -0.025266819031270003, 1.801100000085313e-08, -0.999671114822695, -0.025633312447720002, 1.801100000085313e-08, -0.999981822116344, -0.006130486648230001, -0.007622352932199996, -0.022192553912449998, 0.999754063502454, 1.801100000085313e-08, -0.004741620592710001, 0.9999885245350949, 1.801100000085313e-08, -0.00934619171311, 0.9999553329875185, -1.0730888765400002, 0.012452824147518112, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9999376654200001, 0.011067982681354, -0.011311186091499998, -0.0066254403419656, 0.9999797081660479, 1.040047302516571, 0.01370928713742, 0.9999049765814331, -0.006326327171220224, 6.3952770006610796e-09, 12.000028905265552, -1.841639597673096, -0.999918057453982, -0.012925140881139, 2.393463290042476e-08, 0.037500155995351996, -0.9992990721894478, 2.393463290042476e-08, 0.0267621067442506, -0.9996429085421111, 0.0192727467623903, 0.02526680985814, -0.9996808305540865, -2.0296022997087556e-08, 0.02563337079131, -0.9996716889281363, -2.0296022997087556e-08, 0.006130422787880001, -0.9999811649416644, -1.0067785638604014, -0.9997546143000005, -0.02219245920965, -2.0296022997087556e-08, -0.9999912589910516, -0.004741662121709997, -2.0296022997087556e-08, -0.9999567099945388, -0.009346162064459998, 0.012573544545540003, 0.1384448589375196, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0000006003800002, 1.3178999999123554e-08, -2.4262836899479078e-08, -1.0000003810941809, -5.263893620182112e-07, -1.6267967027777937e-07, -1.0000029057302269, -2.060487363830997, -1.841639597673096, 16.03174920198473, -0.007331125698255801, -0.011398519833189628, -0.9999989656911183, -0.013736894947941995, -0.05581402623921396, -0.9999989656911183, 4.1509310520910187e-07, 1.931197254434551e-07, -0.9999974027288184, -0.017703880607359945, 1.01546754698742, -0.99999921648906, 0.0017359328951299898, 0.96526326911452, -0.99999921648906, 5.42563378039502e-07, -5.272144759874787e-07, -0.99999883503734, 0.0005123346259600141, -1.02092590736714, -0.99999921648906, -0.049181189361427964, -1.010127890747668, -0.99999921648906, 1.7045646399772978e-07, 1.2469335986621439e-08, -0.9999983047737, -0.1143785799292897, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9999958734400001, -0.0018572474775719998, -0.006022698302299999, 0.0062999506248276, 0.9999815529480668, 1.0322682853903655, 0.02663210837823, 0.9996435732645406, -0.014170785181957224, -0.012925068810815997, -0.999918057453982, -0.007331125698255801, 12.999972188476642, -7.373940200265361e-08, 5.000730340771153e-08, 0.024581145265970997, -0.9996948457611758, 0.048128655074203906, 0.0138393859296358, -0.9999012564358387, 0.011897392233721802, 0.01234370479004, -0.9999217054229596, -1.022938808735628, 0.01271036251557, -0.9999173146814903, -0.9724926544356278, -0.006794895225687001, -0.9999761847801821, -1.0141237849404625, -0.9999545554780156, -0.009268587524319994, 0.0016192327293720065, -0.9999643939663192, 0.008183763329559996, 0.03358221082287201, -0.9999924714253319, 0.0035791799233399974, -0.008628676748409994, 0.1216354566563116, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0018572432941400003, 0.9999977928859188, -0.9877701644201399, -0.9999811265902184, 0.006299935657476061, 0.029924897325836, -0.999644156369552, 0.026631841351536, 0.02823892207711388, 0.9999156657215242, -0.012925140881139, -0.011398519833189628, -7.373940200265361e-08, 12.999995491825016, -1.3486003160089257e-07, 0.9996972863183599, 0.024581079654106, -0.026503627023830426, 0.999902395201626, 0.013839250845971998, -0.0078677162179993, 0.9999225987213042, 0.012343764974889999, -0.016566221702016003, 0.9999184767603974, 0.01271035901891, 0.0026059303659439945, 0.999976988334305, -0.0067949123827999985, -0.016789094171860006, 0.00926878629851, -0.9999581323357011, 1.009490343811387, -0.008183748019379999, -0.9999657152880592, 0.9990993253988446, -0.0035791274471699995, -0.9999925580977262, 1.0617657044946849, 0.15591906065314498, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0000006003800002, 1.3178999999123554e-08, -2.4262836899479078e-08, -1.0000003810941809, -5.263893620182112e-07, -1.6267967027777937e-07, -1.0000029057302269, 1.469910300078838e-08, 2.393463290042476e-08, -0.9999989656911183, 5.000730340771153e-08, -1.3486003160089257e-07, 12.99997337490479, 2.0174391999818829e-07, 3.9313795800545785e-07, -0.9999960024688312, 3.184232645989496e-07, 1.5411681840276332e-07, -0.9999983115403764, 1.5608249759524704e-07, -4.398659442110811e-07, -0.9999994956561038, 1.271029453880204e-07, -4.2002200679321443e-07, -0.9999967656512279, 5.41638963368244e-08, -2.3610487490021492e-07, -0.9999981860447779, -2.255652421044175e-08, 6.186116379899519e-07, -0.9999967583802278, 1.8932415558712273e-07, 4.162035740058243e-07, -0.9999994008211079, 2.266452960022588e-07, 3.3959036440683314e-07, -0.999999845042741, -0.014324002707234298, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.026437634930000002, -0.9996506797539909, 0.9623077047401, 0.999524857774197, -0.030878741611230002, -0.0806027436016, 0.9986858740271659, -0.051196393345156, -0.053194736257849984, -0.9992971418592367, 0.037500155995351996, -0.013736894947941995, 0.024581145265970997, 0.9996972863183599, 2.0174391999818829e-07, 12.000009137405256, 2.1209018000044864e-08, -1.0542604326892795, -0.9999417339474308, 0.010743656936705998, -0.017740026462493515, -0.9999243912486044, 0.012239338167119996, 0.016393842501216, -0.9999312921836655, 0.011872623633910012, -1.96888033989039e-07, -0.9995063978513159, 0.03137337233433, 0.016399631074, 0.015314078213749999, 0.9998818872328851, -1.0345382674017092, 0.03276158562571, 0.999463502477536, -2.9556321503220993e-08, 0.028159025531130002, 0.9996046696678526, -1.08654359382663, -0.7330722133750212, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9996488640900001, -0.026437688199116998, -0.0305060601753, 0.030878760474975002, 0.9995239042231001, 0.9824550654492601, 0.05119638532948, 0.9986883615582548, -0.06362618089737598, -0.037500314835917994, -0.9992990721894478, -0.05581402623921396, -0.9996948457611758, 0.024581079654106, 3.9313795800545785e-07, 2.1209018000044864e-08, 12.000024512879603, -1.1095506995538338, -0.010743679827287593, -0.9999449701200621, -0.036678574030148015, -0.012239380320317999, -0.999927776111935, -1.070990173734608, -0.011872817476569996, -0.999931745992333, -3.4189862003161914e-07, -0.03137352917554301, -0.999509557514364, -1.0621711968424439, -0.9998852633650965, 0.015314081977369996, -0.07196130187232001, -0.999466000584713, 0.03276158784688, 9.967996999337088e-08, -0.999604512881749, 0.02815910616272, -0.0834911115209, 0.44152225237492004, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0000006003800002, 1.3178999999123554e-08, -2.4262836899479078e-08, -1.0000003810941809, -5.263893620182112e-07, -1.6267967027777937e-07, -1.0000029057302269, 1.469910300078838e-08, 2.393463290042476e-08, -0.9999989656911183, 0.048128655074203906, -0.026503627023830426, -0.9999960024688312, -1.0542604326892795, -1.1095506995538338, 14.097587385411693, 1.6196307595892286e-07, 6.615351552816172e-07, -0.9999988294973529, -1.0732093456324866e-07, 1.644376126298799e-08, -0.9999973534983703, 0.016135290669921507, 1.0209092564746494, -0.9999984593103349, 1.87787353330847e-07, 5.60724905534097e-08, -0.999998944351186, 4.2852373914658984e-07, 4.64923273189448e-07, -0.9999982812520541, 0.0061531248945343505, -1.025687141179923, -0.9999987234904322, 3.2234661854404565e-07, 2.8502542179601326e-07, -0.9999989049688209, 0.33083596307475793, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.015696374673200002, -0.9998775306513807, 0.980057660045124, 0.9997997891426946, -0.020138441999122802, -0.05191016826111, 0.9991803586815778, -0.040463821312156, -0.03574278459844797, -0.9996390792581606, 0.0267621067442506, 4.1509310520910187e-07, 0.0138393859296358, 0.999902395201626, 3.184232645989496e-07, -0.9999417339474308, -0.010743679827287593, 1.6196307595892286e-07, 12.000003282080256, 1.690959607974379e-07, -3.0300166996104627, -1.0000006628181768, 0.0014958040328990015, -1.460711958096038e-07, -0.9999981917681122, 0.0011290113605800032, 2.719514201039553e-09, -0.9997884527835437, 0.02063320020261, -8.047700998818939e-08, 0.0045708643219199985, 0.9999915828197601, -3.210787068236708e-07, 0.022021871094789997, 0.9997572210409396, -1.5719868067330444e-10, 0.017418084986749998, 0.9998504251959182, -5.880423934353528e-07, -0.03901589673653457, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9998749798600001, -0.015696417560617997, -0.0043570650623999995, 0.0201384690748292, 0.9997982120076523, 1.0197500065326721, 0.04046399043898, 0.9991791657626341, -0.02656607172061139, -0.02676206542860801, -0.9996429085421111, 1.931197254434551e-07, -0.9999012564358387, 0.013839250845971998, 1.5411681840276332e-07, 0.010743656936705998, -0.9999449701200621, 6.615351552816172e-07, 1.690959607974379e-07, 12.000004994584838, -3.0914965066901976, -0.0014958336044380107, -0.9999990399686454, -9.071980870012287e-07, -0.0011289261403700003, -0.9999990473909981, -1.047621000134963e-07, -0.02063345175293201, -0.999786779596295, -5.98960184075017e-07, -0.9999899546671651, 0.004570757476969993, -1.3652305003623129e-07, -0.999756487424806, 0.02202192383152399, 5.0376909992400155e-08, -0.9998492620080969, 0.017418119621249995, -4.9086240015861933e-08, 0.21226121650438018, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0000006003800002, 1.3178999999123554e-08, -2.4262836899479078e-08, -1.0000003810941809, -5.263893620182112e-07, -1.6267967027777937e-07, -1.0000029057302269, -0.003281535340697001, 0.0192727467623903, -0.9999974027288184, 0.011897392233721802, -0.0078677162179993, -0.9999983115403764, -0.017740026462493515, -0.036678574030148015, -0.9999988294973529, -3.0300166996104627, -3.0914965066901976, 18.289290596432927, -0.021473265113088363, 1.0346536524506915, -1.0000001758634933, -0.0020386180656209087, 0.9844450214995935, -1.0000027840750334, -0.001951176067366575, 1.0260577935953412, -1.0000020513886934, 0.019705395951605413, -1.017217475774889, -1.0000029849606045, -0.02992613157055526, -1.0067529927364445, -1.0000023890702312, 0.016698557032191898, -1.0697011699730161, -1.000001910461483, 0.06977882733057658, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999022079200001, -0.014172684950140001, 0.07363381058478999, -0.999811838032809, -0.019502539618163, 7.225240001165756e-09, -0.9997073533920011, 0.02424676660854001, 1.2176233000051813e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9992383641, -0.038969363829964, -0.057253480052399976, -0.9996793120900521, 0.02526680985814, -0.017703880607359945, 0.01234370479004, 0.9999225987213042, 1.5608249759524704e-07, -0.9999243912486044, -0.012239380320317999, -1.0732093456324866e-07, -1.0000006628181768, -0.0014958336044380107, -0.021473265113088363, 10.000013728758336, 1.0463655996299298e-08, -0.13833280844215318, -1.0000024425410012, -0.00036657412615801046, -4.157279719859303e-08, -0.9998256425131533, 0.019137905705804013, 0.00011384411879800539, 9.918685270012096e-08, 1.1024664609521213e-06, -8.784120084914131e-07, -7.760768510011163e-08, 2.232669863567655e-06, 3.4879709924514146e-07, -2.039827719963468e-08, 1.2313517942682494e-06, 1.2348161809240561e-07, 0.20601392097260562, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0141727044775, -0.9998979861246575, -1.00647993902225, 0.0195025008058, -0.9998113780696619, 6.521310850283126e-07, -0.024246877473849994, -0.9997002414684611, -3.4958486600203956e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.038969136495, 0.9992407907225102, 1.0081416921171, -0.025266819031270003, -0.9996808305540865, 1.01546754698742, -0.9999217054229596, 0.012343764974889999, -4.398659442110811e-07, 0.012239338167119996, -0.999927776111935, 1.644376126298799e-08, 0.0014958040328990015, -0.9999990399686454, 1.0346536524506915, 1.0463655996299298e-08, 10.000002065715128, 0.13415856768343934, 0.0003665798923309967, -0.9999933096439537, -4.771649079553059e-07, -0.019138154920728, -0.999815756344377, 0.008818234421815348, 9.032582974168774e-07, -1.483846795161939e-07, -2.199968520135519e-07, -1.0616708861641169e-06, 3.965769852269273e-08, -4.0884598947993513e-07, -1.204979282823572e-06, -1.768515780142413e-07, -3.0479999997604626e-07, 0.05155442288019801, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.00000100705, 0.05059595104725, 0.9814058349339985, -0.9999971853996998, 0.0412967602344, 1.028880867429399, -0.9999988068666448, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999998060399999, 1.801100000085313e-08, -2.0296022997087556e-08, -0.99999921648906, -1.022938808735628, -0.016566221702016003, -0.9999994956561038, 0.016393842501216, -1.070990173734608, -0.9999973534983703, -1.460711958096038e-07, -9.071980870012287e-07, -1.0000001758634933, -0.13833280844215318, 0.13415856768343934, 14.222932482977804, 0.01981099877083219, -0.05019778416954726, -1.0000027913436378, -2.0110007740226014e-07, 2.0974289677701327e-06, -0.9999918777306729, -1.7536833933219507e-06, -3.394679110480563e-07, -2.252923682502582e-06, -1.1097094265915454e-06, -2.496775900361411e-07, -8.384942025328689e-07, 4.780382139880064e-07, 1.7268815115012516e-07, -3.4424194317218726e-07, -0.23998812111492976, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999075039, -0.013806033138900001, 0.09381475798031999, -0.9998181374009077, -0.019135790076142, -3.189759997871394e-09, -0.9996974869756782, 0.024613276938710005, 0.0038520383264000055, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9992248003, -0.039335798205212, -0.03781117101900001, -0.999671114822695, 0.02563337079131, 0.0017359328951299898, 0.01271036251557, 0.9999184767603974, 1.271029453880204e-07, -0.9999312921836655, -0.011872817476569996, 0.016135290669921507, -0.9999981917681122, -0.0011289261403700003, -0.0020386180656209087, -1.0000024425410012, 0.0003665798923309967, 0.01981099877083219, 10.000006505289504, 4.0361121298880615e-07, -0.059310842098647766, -0.9998112560511785, 0.019504612706335998, 0.01992201400166001, -1.326505428959924e-07, 1.038567947880322e-06, -3.2920676867706625e-07, -1.630888449165702e-07, -9.361955358027583e-07, 5.4643104294161395e-08, -3.177566713938212e-07, -5.443488579831908e-07, 1.163854473696629e-07, -0.05935095763209254, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.013806063782100001, -0.9999042785389654, -1.05665162406579, 0.01913588129074, -0.9998164599823827, 1.5138111904687685e-07, -0.024613400464089996, -0.9996923158197639, -1.0797886902475378, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.039335698190000004, 0.9992239068392123, 0.9579196061542, -0.025633312447720002, -0.9996716889281363, 0.96526326911452, -0.9999173146814903, 0.01271035901891, -4.2002200679321443e-07, 0.011872623633910012, -0.999931745992333, 1.0209092564746494, 0.0011290113605800032, -0.9999990473909981, 0.9844450214995935, -0.00036657412615801046, -0.9999933096439537, -0.05019778416954726, 4.0361121298880615e-07, 10.000013531549651, -0.05800564664776002, -0.019504220210298993, -0.9998287707696303, -0.041377249676468365, -1.6987732831839539e-06, 6.731814843297663e-08, 1.8738057759549778e-06, -1.952577928640647e-06, 3.520740001270657e-07, 1.6505637675473098e-06, -1.8125229549364943e-06, -2.8543959800526432e-08, 2.115485820136661e-07, -0.181498052212712, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.00000100705, 0.02982701016225, 1.0312143085504222, -0.99999800037348, 4.8126699998464424e-08, -8.893976350341182e-07, -0.999998554096936, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999998060399999, 1.801100000085313e-08, -2.0296022997087556e-08, -0.99999921648906, -0.9724926544356278, 0.0026059303659439945, -0.9999967656512279, -1.96888033989039e-07, -3.4189862003161914e-07, -0.9999984593103349, 2.719514201039553e-09, -1.047621000134963e-07, -1.0000027840750334, -4.157279719859303e-08, -4.771649079553059e-07, -1.0000027913436378, -0.059310842098647766, -0.05800564664776002, 12.01006329049809, -6.413894673310133e-07, -1.5052755200192716e-06, -0.9999917276089588, -1.2640738364111782e-06, -5.72930032992753e-07, 7.872060007320797e-07, 8.465908311346002e-07, -2.2371592257027396e-07, -1.5882450624520556e-06, -2.3015567194398912e-06, -3.0884005748472874e-08, -1.2190756179152833e-06, 0.0919900784900202, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99944675364, -0.03330605715648, -1.6018110001934826e-07, -0.9992556188525409, -0.038633071545995, 3.801800002536483e-09, -0.9999882536047402, 0.005110048843000004, 7.189350007577715e-09, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9998012618000001, -0.019838871119672, -0.03823218265680001, -0.999981822116344, 0.006130422787880001, 5.42563378039502e-07, -0.006794895225687001, 0.999976988334305, 5.41638963368244e-08, -0.9995063978513159, -0.03137352917554301, 1.87787353330847e-07, -0.9997884527835437, -0.02063345175293201, -0.001951176067366575, -0.9998256425131533, -0.019138154920728, -2.0110007740226014e-07, -0.9998112560511785, -0.019504220210298993, -6.413894673310133e-07, 9.999997500982683, -1.25516561302637e-06, -0.08190834104035907, 7.131737003972138e-07, -3.919904016298169e-06, 1.6741906084442707e-06, 3.7603459502118456e-07, -2.060321436114999e-06, 1.4394151802545668e-06, 2.719680689874901e-07, -2.761202378086662e-06, 2.985967853289081e-06, -0.18668035811277842, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.033306153421, -0.9994441625004531, -1.237718999953202e-07, 0.03863313720910999, -0.9992557695217124, 4.1671343001762843e-07, -0.005110045700899995, -0.9999814573187628, -9.744134299384145e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0198388547035, 0.9998034936807327, 1.00023969327323, -0.006130486648230001, -0.9999811649416644, -5.272144759874787e-07, -0.9999761847801821, -0.0067949123827999985, -2.3610487490021492e-07, 0.03137337233433, -0.999509557514364, 5.60724905534097e-08, 0.02063320020261, -0.999786779596295, 1.0260577935953412, 0.019137905705804013, -0.999815756344377, 2.0974289677701327e-06, 0.019504612706335998, -0.9998287707696303, -1.5052755200192716e-06, -1.25516561302637e-06, 10.000006377260807, 0.07417958307153388, 1.2362858482621044e-06, -3.082187750163714e-07, -1.0112760620732772e-06, 1.516052096529713e-06, -4.726021360956056e-07, -1.1769254539995347e-06, 2.9196355827578167e-06, -5.76048478996142e-07, -5.528576149727834e-07, 0.229363078163679, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.08790214644199999, 1.014154745613706, -0.9999998043012002, 0.050537766999429995, 0.9902232778631361, -0.9999976969394939, 0.0416244814927, 1.0376948098836383, -0.9999997081966051, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999998060399999, -0.007622352932199996, -1.0067785638604014, -0.99999883503734, -1.0141237849404625, -0.016789094171860006, -0.9999981860447779, 0.016399631074, -1.0621711968424439, -0.999998944351186, -8.047700998818939e-08, -5.98960184075017e-07, -1.0000020513886934, 0.00011384411879800539, 0.008818234421815348, -0.9999918777306729, 0.01992201400166001, -0.041377249676468365, -0.9999917276089588, -0.08190834104035907, 0.07417958307153388, 16.270933689035953, 9.677271589694573e-07, -4.018557120857627e-07, -6.208138478124026e-06, -1.1766908827458047e-06, -5.957153645297672e-07, -3.1245318503942485e-06, -4.5451239985866655e-07, 6.890766150146119e-07, -2.4368606830049434e-06, -0.167259943831565, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0029366727632, -0.0127529238746776, 0.011063510137571, -0.002816616882695, -0.013923203103601482, 0.0020061140463766003, -0.002671593047848, -0.013074653919899398, 0.006306745755536198, -4.922473499934188e-09, 1.6155183560028006e-08, -9.626976000236866e-09, 1.1484049800693404e-09, 5.619592100686299e-09, -1.3126436798667763e-08, -1.0818796298845624e-08, 4.358706329592252e-08, 4.2265776000845376e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.035896257605, 0.9993554984463258, -0.006693638025099985, -0.022192553912449998, -0.9997546143000005, 0.0005123346259600141, -0.9999545554780156, 0.00926878629851, -2.255652421044175e-08, 0.015314078213749999, -0.9998852633650965, 4.2852373914658984e-07, 0.0045708643219199985, -0.9999899546671651, 0.019705395951605413, 9.918685270012096e-08, 9.032582974168774e-07, -1.7536833933219507e-06, -1.326505428959924e-07, -1.6987732831839539e-06, -1.2640738364111782e-06, 7.131737003972138e-07, 1.2362858482621044e-06, 9.677271589694573e-07, 9.013295564764977, -0.0022187851630066126, 0.07639996224484925, -1.987005747517372, 0.044007735320588076, -0.035217098585543644, -1.986077317535025, 0.01010420966673455, -0.06399784292871738, 0.12430417591665582, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0163082319712, 0.0145965630551216, -0.05581988408927199, 0.015530548284270002, -0.01056939112139518, -0.04177897685181461, 0.0153308555078323, 0.0026630597102660983, -0.046981537700210206, 3.041510680167535e-08, -2.6005720197071087e-08, -9.227457002855698e-09, 3.366929269513109e-08, 1.7977563527464893e-08, 1.312802870105578e-07, -1.0216095769671294e-07, -4.833314799697136e-08, 1.4653291438430704e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9993536564, 0.035896196077856, -0.9813575557131999, 0.999754063502454, -0.02219245920965, -1.02092590736714, -0.009268587524319994, -0.9999581323357011, 6.186116379899519e-07, 0.9998818872328851, 0.015314081977369996, 4.64923273189448e-07, 0.9999915828197601, 0.004570757476969993, -1.017217475774889, 1.1024664609521213e-06, -1.483846795161939e-07, -3.394679110480563e-07, 1.038567947880322e-06, 6.731814843297663e-08, -5.72930032992753e-07, -3.919904016298169e-06, -3.082187750163714e-07, -4.018557120857627e-07, -0.0022187851630066126, 8.993536497572187, -1.3510426659387895, -0.03505165835819604, -1.9827485247887708, 0.031250499221929254, -0.029401600141064306, -1.9632427161270523, -0.5277612104959616, 0.020991052713082287, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.043363990088, 0.085331033863684, -0.22893946444693997, 0.04025066609611, -0.0027395832313898, -0.15576405672321902, 0.039162548573530014, 0.042574929575871, -0.18532814525558297, -2.1770157003103068e-08, -6.844890999367757e-08, 7.566087003485465e-08, 1.8246596699663114e-07, 2.1838153898764978e-07, 5.023378100003827e-07, 8.216568899135262e-08, -3.920695580080346e-07, -8.295310698769485e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999998060399999, 1.801100000085313e-08, -2.0296022997087556e-08, -0.99999921648906, 0.0016192327293720065, 1.009490343811387, -0.9999967583802278, -1.0345382674017092, -0.07196130187232001, -0.9999982812520541, -3.210787068236708e-07, -1.3652305003623129e-07, -1.0000029849606045, -8.784120084914131e-07, -2.199968520135519e-07, -2.252923682502582e-06, -3.2920676867706625e-07, 1.8738057759549778e-06, 7.872060007320797e-07, 1.6741906084442707e-06, -1.0112760620732772e-06, -6.208138478124026e-06, 0.07639996224484925, -1.3510426659387895, 12.002749755747468, -0.10011999828689684, -0.008162066587059801, -1.7648930093352677, -0.045373908777130406, -0.5615083105590469, -2.2959239919825127, 0.1393227750024143, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00209522639952, -0.01135240503606536, 0.007067873664654999, -0.002029785548395, -0.014112437217318113, -0.0007666747307591399, -0.0019028130076499804, -0.01244182617238836, 0.00304660340341622, -1.3759295837160274e-09, 2.9077423136717396e-08, -1.632253859754837e-08, -2.744127739900295e-09, -2.534298274708968e-10, -1.609219800018607e-08, 4.547243862485779e-09, 1.9790532415854835e-07, -4.34855543710102e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.018450294588000002, 0.9998269762113445, -0.05569681963136, -0.004741620592710001, -0.9999912589910516, -0.049181189361427964, -0.9999643939663192, -0.008183748019379999, 1.8932415558712273e-07, 0.03276158562571, -0.999466000584713, 0.0061531248945343505, 0.022021871094789997, -0.999756487424806, -0.02992613157055526, -7.760768510011163e-08, -1.0616708861641169e-06, -1.1097094265915454e-06, -1.630888449165702e-07, -1.952577928640647e-06, 8.465908311346002e-07, 3.7603459502118456e-07, 1.516052096529713e-06, -1.1766908827458047e-06, -1.987005747517372, -0.03505165835819604, -0.10011999828689684, 9.011859947839792, 0.011820549996606618, -0.08593771352337196, -1.9866117792932423, -0.027184276736261163, -0.11896193532500739, 0.0930044502503059, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.006486863190399999, -0.007375415219692799, 0.000847118254191, 0.006477310566685801, -0.01124396424519392, -0.0037414422656352002, 0.0065558415994818, -0.0089285250790776, -0.0013527584580443994, 2.4806934611213394e-09, -6.1566653001972166e-09, 6.456540000257036e-09, 5.056628748725503e-09, -5.797246484945395e-10, -1.1308366999585211e-08, 2.0563004701756442e-08, 5.585684849759243e-08, -2.0354270301386037e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9998283894000001, 0.018450289129175998, -0.9704365046714399, 0.9999885245350949, -0.004741662121709997, -1.010127890747668, 0.008183763329559996, -0.9999657152880592, 4.162035740058243e-07, 0.999463502477536, 0.03276158784688, -1.025687141179923, 0.9997572210409396, 0.02202192383152399, -1.0067529927364445, 2.232669863567655e-06, 3.965769852269273e-08, -2.496775900361411e-07, -9.361955358027583e-07, 3.520740001270657e-07, -2.2371592257027396e-07, -2.060321436114999e-06, -4.726021360956056e-07, -5.957153645297672e-07, 0.044007735320588076, -1.9827485247887708, -0.008162066587059801, 0.011820549996606618, 8.894733462117982, -0.7353306053482879, 0.015323152562525345, -1.8923677960577912, -0.2136849267809488, -0.07928103726782171, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.032427428448, 0.069606306777664, -0.18107684585573, 0.0299714610995, 0.001208680469881998, -0.121903146213644, 0.029088772249120005, 0.03630568466750999, -0.145971004293948, 6.664672400019118e-08, -2.6593980549396547e-07, 4.127250099798449e-07, 8.293896300283724e-08, 1.713729036040279e-07, 4.7164358501009164e-07, -3.4591642995115265e-08, -1.524461780008455e-07, 1.2278723620306946e-06, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999998060399999, 1.801100000085313e-08, -2.0296022997087556e-08, -0.99999921648906, 0.03358221082287201, 0.9990993253988446, -0.9999994008211079, -2.9556321503220993e-08, 9.967996999337088e-08, -0.9999987234904322, -1.5719868067330444e-10, 5.0376909992400155e-08, -1.0000023890702312, 3.4879709924514146e-07, -4.0884598947993513e-07, -8.384942025328689e-07, 5.4643104294161395e-08, 1.6505637675473098e-06, -1.5882450624520556e-06, 1.4394151802545668e-06, -1.1769254539995347e-06, -3.1245318503942485e-06, -0.035217098585543644, 0.031250499221929254, -1.7648930093352677, -0.08593771352337196, -0.7353306053482879, 10.347714510336358, -0.026038285419265273, -0.20274077034085253, -1.895754299794476, -0.025364392834688505, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00318414608, -0.01353253503144, 0.012875247768059999, -0.0030397741348650005, -0.014067926334666083, 0.003174888544252, -0.0028850195716640004, -0.013541129695170398, 0.007743218387427999, -3.249147299738823e-09, -3.1234890419235516e-08, 5.54181170040434e-08, -1.5288368819723284e-08, -5.6888673990312943e-08, -4.266500397449657e-09, -7.307996600143921e-09, 1.3113519600155059e-07, 5.5006768098767625e-08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.023053983946, 0.999732877879518, -0.00924090894012001, -0.00934619171311, -0.9999567099945388, 1.7045646399772978e-07, -0.9999924714253319, -0.0035791274471699995, 2.266452960022588e-07, 0.028159025531130002, -0.999604512881749, 3.2234661854404565e-07, 0.017418084986749998, -0.9998492620080969, 0.016698557032191898, -2.039827719963468e-08, -1.204979282823572e-06, 4.780382139880064e-07, -3.177566713938212e-07, -1.8125229549364943e-06, -2.3015567194398912e-06, 2.719680689874901e-07, 2.9196355827578167e-06, -4.5451239985866655e-07, -1.986077317535025, -0.029401600141064306, -0.045373908777130406, -1.9866117792932423, 0.015323152562525345, -0.026038285419265273, 9.014008080836097, -0.011806312639809323, 0.09322907762895183, -0.4402805862204645, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.028276647671999996, 0.040172235835996, -0.12221909769613999, 0.026598688382509998, -0.010039384508067394, -0.086444352068811, 0.026074884999383006, 0.016044533414483, -0.100490064562127, 3.1348644999407316e-08, -1.4877969659555505e-07, 1.2998941000214081e-07, 5.4554395998033666e-08, 9.527112429519313e-08, 1.0363610801040296e-07, -3.2464449982478773e-09, -3.840072399759802e-08, 2.0398741800098123e-07, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9997334428, 0.023053993200911997, -1.03350188258752, 0.9999553329875185, -0.009346162064459998, 1.2469335986621439e-08, 0.0035791799233399974, -0.9999925580977262, 3.3959036440683314e-07, 0.9996046696678526, 0.02815910616272, 2.8502542179601326e-07, 0.9998504251959182, 0.017418119621249995, -1.0697011699730161, 1.2313517942682494e-06, -1.768515780142413e-07, 1.7268815115012516e-07, -5.443488579831908e-07, -2.8543959800526432e-08, -3.0884005748472874e-08, -2.761202378086662e-06, -5.76048478996142e-07, 6.890766150146119e-07, 0.01010420966673455, -1.9632427161270523, -0.5615083105590469, -0.027184276736261163, -1.8923677960577912, -0.20274077034085253, -0.011806312639809323, 8.936867175811141, -2.3223077683477937, 0.009477345971996695, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.056077262855999996, 0.10609483232510801, -0.28853352786418995, 0.052149176773069995, -0.0057593325621436015, -0.197194564549703, 0.05079346429326, 0.05186019400452201, -0.23398739681427097, -2.7821265003265696e-08, -2.731380319867974e-07, 1.2889264004828173e-07, 1.1338582799282655e-07, 2.0176386388015555e-07, 6.787324999718608e-07, -5.2103735990859254e-08, -3.464708620210545e-07, 1.2872511089979495e-06, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999998060399999, -1.0730888765400002, 0.012573544545540003, -0.9999983047737, -0.008628676748409994, 1.0617657044946849, -0.999999845042741, -1.08654359382663, -0.0834911115209, -0.9999989049688209, -5.880423934353528e-07, -4.9086240015861933e-08, -1.000001910461483, 1.2348161809240561e-07, -3.0479999997604626e-07, -3.4424194317218726e-07, 1.163854473696629e-07, 2.115485820136661e-07, -1.2190756179152833e-06, 2.985967853289081e-06, -5.528576149727834e-07, -2.4368606830049434e-06, -0.06399784292871738, -0.5277612104959616, -2.2959239919825127, -0.11896193532500739, -0.2136849267809488, -1.895754299794476, 0.09322907762895183, -2.3223077683477937, 13.62086789738735, -0.02410793222692789, 
};
float step100_node9_M_correct_data[] = {
1.41421, -3.65333e-10, 0.0629841, -0.707046, -0.00922813, 0.0520055, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.706817, 0.0202419, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0208229, 
0.0, 1.41421, -0.7751, 0.00922813, -0.707046, 0.70829, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0202419, -0.706817, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0266472, 
0.0, 0.0, 1.61392, 0.0320247, -0.339205, -0.281475, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0178625, 0.340245, -0.619608, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0165404, 
0.0, 0.0, 0.0, 1.22433, 0.00887258, -0.017332, -0.816603, -0.0167855, 0.0540952, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.407566, 0.00811738, 0.0162071, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.012492, 
0.0, 0.0, 0.0, 0.0, 1.1768, -0.506966, 0.0236202, -0.849455, 0.890541, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0197803, -0.326499, -0.17872, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0111211, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.47236, -0.00147975, -0.292684, -0.371913, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0196799, 0.292025, -0.179799, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0125995, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.594634, 0.00376128, -0.150516, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.55887, 0.0248435, 0.0289087, -0.00854018, -0.0347612, 0.106765, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0179212, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.452558, -0.897416, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.034872, -0.423885, -0.45138, 0.0277622, 0.00660251, -0.0956222, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0182296, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.810428, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0844394, 0.027477, -0.381666, 0.0277037, 0.0843654, -0.367329, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00680551, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64904, 0.00435572, -0.0734905, -0.748563, -0.0105559, -0.00901887, -0.748484, -0.0148721, -0.00654979, -0.377315, -0.0116672, 0.0301854, -0.377247, -0.0136784, 0.0, -0.377484, 0.00283511, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00110858, 0.00615628, 0.0163697, -0.000790938, 0.00244876, 0.0122412, -0.001202, 0.0106743, 0.0211689, -0.191723, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.63218, -0.0923393, 0.015506, -0.724783, 0.216114, 0.0245936, -0.752978, 0.353146, 0.0123664, -0.379713, 0.345639, 0.0143903, -0.379641, 0.0, -0.00222861, -0.379907, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00484317, 0.00553524, 0.0323913, -0.00431162, -0.00280607, 0.0264241, -0.0051392, 0.0152443, 0.0402718, 0.0496011, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.28869, -0.0256369, 0.243225, -0.708634, -0.0342209, 0.334657, -0.847017, -0.00808443, -0.0109222, -0.293693, 0.0214401, -0.295475, -0.304073, -0.00736955, -0.280733, -0.304073, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00320335, -0.0166803, -0.0683389, 0.00201041, 0.000233518, -0.054045, 0.00374385, -0.0364969, -0.0861313, -0.00430531, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54062, -0.000753354, -0.0337684, -1.00197, -0.00431677, -0.0239886, -0.504849, -0.0093196, 0.0336139, -0.504495, -0.0148815, -0.0296351, -0.504823, 0.00735416, -0.00874551, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00137338, 0.00772467, 0.0197787, -0.000985372, 0.00329048, 0.014697, -0.00148148, 0.0131531, 0.0256484, 0.00690306, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.51772, -0.231933, 0.0109873, -1.03305, 0.342543, 0.0107708, -0.505406, 0.527998, 0.0106182, -0.477857, 0.440144, -0.0087603, -0.479352, 0.420413, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00723882, -0.000965029, 0.0149129, -0.00704427, -0.00528503, 0.0133636, -0.00743416, 0.00397541, 0.0177228, 0.0431584, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.72513, -0.0426179, 0.182957, -1.00333, -0.00967082, -0.015896, -0.425283, -0.00216225, -0.0876266, -0.408932, -0.00998999, -0.0835692, -0.410352, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00131645, -0.0200735, -0.0759293, -3.09838e-05, -0.00149061, -0.0595222, 0.00189109, -0.041884, -0.0960563, -0.000797827, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.33402, 0.0155686, -0.120581, -0.76663, -0.00570707, 0.0284629, -0.76588, -0.0166356, -0.0267192, -0.766256, 0.0172493, -0.0336297, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0019336, 0.0111939, 0.0277194, -0.0013844, 0.00503732, 0.0204772, -0.00207895, 0.018762, 0.0360368, 0.053193, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.28369, 0.337736, 0.0167045, -0.788876, 0.870511, 0.0147047, -0.728867, 0.276551, -0.0138485, -0.732054, 0.698034, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0111682, 0.00658559, 0.0521217, -0.010346, -0.00715262, 0.0433119, -0.0116835, 0.0225207, 0.0642625, 0.0637648, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.74105, -0.05008, 0.199727, -0.827404, 0.000402307, -0.301654, -0.698985, -0.041874, 0.082539, -0.749093, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00657754, -0.0304713, -0.12755, 0.00436053, 0.00119255, -0.101094, 0.00759744, -0.06754, -0.160601, 0.0160886, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.64799, 0.00739993, -0.227401, -0.74945, -0.0102281, -0.0325619, -0.749961, 0.0300472, -0.0341114, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.377608, 0.00535225, 0.0, -0.37761, 0.00521379, 0.0, -0.377436, 0.0125779, -0.0331958, -0.000718108, 0.00482676, 0.0106896, -0.000498822, 0.00253219, 0.00772945, -0.000765644, 0.00768938, 0.0140228, 0.159438, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.63391, 0.142843, 0.00757528, -0.723383, 0.216489, -0.0206612, -0.753324, 0.342794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00431997, -0.37964, 0.0, -0.00418076, -0.379642, 0.0, -0.0115847, -0.379488, 0.385131, -0.00592166, 0.00477082, 0.0322449, -0.00540305, -0.00363308, 0.0265572, -0.00622878, 0.0145358, 0.039918, 0.239837, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.29545, 0.00145975, 0.219491, -0.713489, -0.0153305, 0.335767, -0.840164, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00352533, -0.28859, -0.303449, 0.00259238, -0.303824, -0.303449, -0.0255427, 0.017317, -0.322433, 0.00697273, -0.0139988, -0.0687198, 0.00581282, 0.00339106, -0.0552903, 0.00756286, -0.0342936, -0.0859632, 0.0314795, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.54045, -0.000154663, 0.0122026, -1.00155, 0.0458941, -0.00454941, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.504939, 0.0105536, 0.0200905, -0.504946, 0.0103772, 0.0119152, -0.504635, 0.0200394, 0.00913711, -0.0011231, 0.00730369, 0.017797, -0.000768811, 0.00336755, 0.0131078, -0.00121447, 0.0121479, 0.0231647, 0.0311749, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.51755, -0.256112, -0.0474187, -1.02845, 0.29431, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0102457, -0.481038, 0.416283, -0.0105934, -0.479713, 0.436067, -0.0180117, -0.507414, 0.531967, -0.00646711, -0.00098487, 0.0125486, -0.00630584, -0.0046417, 0.011305, -0.0066344, 0.00319772, 0.014874, -0.155288, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.72605, -0.034538, 0.18046, -1.01335, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00379236, -0.0905601, -0.407232, -0.00223489, -0.0944237, -0.405337, -0.00970696, -0.0129414, -0.432265, 0.00619331, -0.0171138, -0.0782462, 0.00485585, 0.00252744, -0.062554, 0.0068455, -0.0400636, -0.0981528, 0.081957, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.33317, 0.00810763, -0.0581848, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.766931, -0.0205167, 0.0267623, -0.766873, -0.0209244, 0.00598323, -0.76732, -0.00329583, 0.0167969, -0.00183515, 0.0100625, 0.0236041, -0.00135962, 0.00490597, 0.017265, -0.00195008, 0.0164527, 0.0308195, 0.0467873, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.28548, 0.369884, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0232166, -0.729673, 0.713743, 0.0222446, -0.726524, 0.272552, 0.0126489, -0.793032, 0.902058, -0.012013, 0.0053191, 0.050317, -0.0112341, -0.00808877, 0.042164, -0.0125279, 0.0208371, 0.0617931, -0.090154, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.74625, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0257433, 0.0751612, -0.747377, -0.0217424, -0.324688, -0.689829, -0.0315048, 0.2092, -0.848898, 0.0136834, -0.0260411, -0.130213, 0.0114925, 0.00697907, -0.104929, 0.0148097, -0.0645575, -0.162771, -0.0124111, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.23877, -0.000623801, -0.0537389, -0.000654573, -0.00539267, 0.011308, -0.0110665, -0.446536, 0.00279645, 0.00494377, 0.446646, 0.0, 0.446672, 0.000829582, 0.0, -0.011809, 0.446517, 0.0, -0.00701116, 0.446618, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0505391, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.23858, -1.7341, 0.00501144, 0.00059896, -0.0147795, 0.446572, -0.0111919, -0.453869, -0.446683, 0.00506866, 0.0, -0.000705185, 0.446711, 0.0, -0.446559, -0.0116856, 0.0, -0.446659, -0.00688732, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.113764, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.45109, 0.0130582, 0.0150682, -0.0862747, 0.315699, -0.0177081, -0.729024, 0.0824044, 0.00876371, -0.407982, 0.006837, -0.0869344, -0.407982, 0.076413, -0.0109236, -0.407982, 0.0836891, 0.00314162, -0.407982, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0175089, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.23854, 0.00054041, -0.0767691, -0.449473, 0.00908131, 0.00746119, 0.447232, -0.00289158, 0.00237991, 0.00290662, -0.447204, 0.00237991, 0.447058, 0.0140146, 0.00237991, 0.44714, 0.00912394, 0.00237991, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00367507, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.23871, 1.81068, -0.0112453, -0.447549, 0.472457, 0.0024283, 0.447693, 0.00274544, 0.447707, 0.00338966, 0.00274544, -0.0143243, 0.447622, 0.00274544, -0.00956417, 0.44765, 0.00274544, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0263901, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.46282, 0.0080469, 0.330686, -0.781433, 0.00101751, 0.0913493, -0.422275, 0.0882589, -0.00464979, -0.422275, -0.00820996, 0.0677542, -0.422275, 0.000175472, 0.0832454, -0.422275, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00390939, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.39095, 0.000600062, 0.645991, 0.405331, 0.00490174, 0.0393098, 0.0104285, -0.404786, 0.0393098, 0.405402, 0.0222924, 0.0393098, 0.404906, 0.0165014, 0.0393098, 0.294678, 0.0114921, 0.0, 0.294674, 0.0116002, 0.0, 0.294844, 0.00585053, 0.0, 0.0105859, -0.294712, 0.0, 0.00544104, -0.294852, 0.0, 0.00679868, -0.294824, 0.0, -0.0953919, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.38975, 0.631566, -0.00548597, 0.404083, 0.0394127, 0.404267, 0.0111575, 0.0394127, -0.0200939, 0.405793, 0.0394127, -0.0164477, 0.404547, 0.0394127, -0.0115484, 0.294781, 0.0, -0.0116565, 0.294776, 0.0, -0.0059048, 0.294948, 0.0, 0.294815, 0.0106418, 0.0, 0.294955, 0.00549516, 0.0, 0.294927, 0.00685328, 0.0, 0.1626, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.20334, -0.10574, -0.0945363, -0.399447, -0.0988236, 0.0999564, -0.399447, -0.107608, -0.12073, -0.399447, -0.101656, -0.104993, -0.399447, -0.0571734, 0.193785, -0.237906, -0.0525311, 0.181821, -0.237906, -0.0535216, 0.192747, -0.237906, -0.0475163, -0.189777, -0.237906, -0.0584048, -0.186384, -0.237906, -0.0475571, -0.201596, -0.237906, -0.103705, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.37907, -0.00305391, -0.617171, -0.00915856, 0.467974, -0.00739157, -0.467795, -0.0210196, -0.00739157, -0.467859, -0.0157229, -0.00836271, -0.333, -0.00231334, -0.0074447, -0.332852, -0.00280916, -0.0074447, -0.332986, 0.00399437, -0.00970046, -0.00884574, 0.325297, -0.0074447, -0.00340468, 0.325481, -0.0074447, -0.0045908, 0.324994, -0.325014, 0.0280069, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.37926, -0.549374, -0.467779, -0.0026129, -0.00383982, 0.0140134, -0.467761, -0.00383982, 0.00905683, -0.467744, 0.00186254, 0.00653012, -0.325675, -0.00666226, 0.00678153, -0.326007, -0.00666226, 0.000294313, -0.325799, -0.304593, -0.332456, -0.0124274, -0.00666226, -0.332835, -0.0065526, -0.00666226, -0.332521, -0.00850362, -0.00322845, 0.00858938, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.85248, -0.0744882, 0.0765765, -0.393021, -0.0846707, -0.0955139, -0.393021, -0.0795508, -0.075281, -0.392363, -0.0658279, 0.233735, -0.286383, -0.0602398, 0.219335, -0.286383, -0.0618001, -0.0289121, -0.32923, -0.0567441, -0.231443, -0.286383, -0.0699035, -0.227367, -0.286383, -0.0561714, 0.0328873, -0.336768, -0.0377201, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.49205, 0.00546611, -0.013784, 0.00689625, -0.517698, -1.66439e-06, 0.00156283, -0.517133, -0.00960167, 0.000970966, -0.353665, -0.306687, 0.00137313, -0.354355, -0.292241, -0.00580952, -0.359315, -0.344992, -0.367626, -0.0141251, -0.0132897, -0.368255, -0.00756072, -0.00413663, -0.367625, -0.00417831, -0.017672, 0.00408897, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.49199, 0.0150756, 0.517255, 0.0197218, 0.00746423, 0.517185, 0.0135041, 0.012936, 0.368253, -0.00612753, 0.00981879, 0.367976, -0.00528448, 0.0152865, 0.368081, -0.00730998, 0.0108339, 0.00705604, -0.353628, 0.303191, 0.00133311, -0.353847, 0.300201, 0.00235576, -0.359069, 0.361834, 0.0176131, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.51249, -0.0215882, -0.0253741, -0.473191, -0.0185505, -0.0177024, -0.473175, -0.0193061, 0.0430319, -0.345066, -0.0181483, 0.0400512, -0.345032, -0.018538, 0.013583, -0.350345, -0.0170344, -0.0421662, -0.345173, -0.0196559, -0.0412315, -0.345125, -0.0169047, -0.013824, -0.351745, -0.0233621, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.30513, -0.00932695, -0.343848, -0.627807, -0.00154772, -0.0312194, -0.447219, 0.0194141, -0.0142982, -0.446857, 0.0183127, -0.020144, -0.446782, 0.0200318, -0.0145636, 0.00183575, 0.427821, -0.378794, 0.0087065, 0.427923, -0.065335, 0.00753962, 0.435071, -0.449993, -0.195884, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.30424, -0.365169, -0.0173878, -0.628746, -0.0403075, -0.0129162, -0.42617, -0.392887, -0.0123497, -0.427214, -0.0665466, -0.0210882, -0.434736, -0.439696, -0.447147, -0.0072167, -0.0473516, -0.447865, 0.000808526, -0.023236, -0.446972, 0.00672833, -0.0551196, 0.100651, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.60001, -0.0811779, -0.0815154, -0.530873, -0.064625, 0.00760859, -0.422056, -0.0587712, 0.287687, -0.389519, -0.0645361, -0.025786, -0.432526, -0.0626181, -0.00724665, -0.422443, -0.0632377, -0.290326, -0.390045, -0.061922, 0.0261893, -0.437166, 0.0615343, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.24418, -0.0138265, -0.976118, -0.543578, 0.015957, -0.0343566, -0.543004, 0.0216703, -0.033803, -0.543194, 0.0162589, -0.0356386, -0.00629887, 0.519116, -0.149962, 0.00205293, 0.512268, -0.0878895, 0.000633249, 0.528463, -0.220578, -0.0214185, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.24397, -0.998567, -0.0127115, -0.518808, -0.153065, -0.0119369, -0.51285, -0.086716, -0.0226588, -0.528405, -0.212509, -0.542907, -0.0103213, -0.0412198, -0.543719, -0.00778134, -0.0338456, -0.542731, 0.00577732, -0.0466222, 0.0538729, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.89478, -0.177169, 0.178267, -0.46229, -0.169847, 0.203445, -0.437354, -0.173878, 0.138955, -0.484684, -0.1654, -0.174543, -0.462251, -0.178976, -0.210482, -0.437587, -0.164116, -0.147849, -0.490755, 0.0139957, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.85308, 0.0249427, -0.11495, -1.0013, 0.0290786, -0.0667769, -1.00193, 0.033096, -0.0800561, -0.0209598, 0.263903, -0.171082, -0.0175968, 0.252257, -0.109937, -0.0171781, 0.278529, -0.240791, 0.0885301, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.84574, 0.227368, 0.0332304, -1.0093, 0.129604, 0.0138171, -0.989457, 0.250563, -0.265789, 0.0294255, 0.0769687, -0.263382, 0.032001, 0.076512, -0.266132, 0.017429, 0.0849552, 0.0269377, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.4256, -0.0807742, 0.148038, -0.858628, -0.09153, 0.26114, -1.11908, -0.124406, -0.0582525, -0.269055, -0.129444, -0.0819242, -0.243295, -0.12329, -0.0385044, -0.299599, -0.0118713, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.67132, 0.058404, -0.140698, -1.44737, 0.0671455, -0.138635, -0.0295904, 0.379844, -0.252032, -0.0248302, 0.362887, -0.163307, -0.0241088, 0.401112, -0.353262, 0.0276332, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.62177, 0.154966, 0.0628248, -1.43497, 0.33017, -0.372288, 0.0331132, 0.160473, -0.368858, 0.0744555, 0.156535, -0.3729, 0.00537476, 0.172813, -0.0582784, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.08399, -0.18081, 0.350246, -1.36529, -0.102807, -0.0632119, -0.365484, -0.109346, -0.0989073, -0.330825, -0.101164, -0.0334567, -0.408385, 0.0705028, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.23548, 0.164213, -0.433325, -0.0629893, 0.69284, -0.50317, -0.0549191, 0.657091, -0.336095, -0.052719, 0.735324, -0.694146, 0.00238806, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.19405, 1.15329, -0.689611, -0.00396662, 0.343651, -0.683828, 0.029435, 0.313076, -0.692066, -0.0145019, 0.393237, 0.0634517, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.8319, 0.00764811, -0.0132688, -0.881231, -0.0055403, -0.0898474, -0.777634, 0.0132589, 0.0490868, -1.01053, 0.00781283, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.72612, 0.000199682, 0.0377412, -1.30868, 0.0230826, 0.00440202, -1.30882, 0.0165173, -0.0139001, 0.0707526, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.71919, -0.291853, -0.022732, -1.30683, 0.0987915, -0.0169298, -1.30461, 0.140688, 0.0100662, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.07591, -0.0170632, -0.0261542, -1.23008, 0.0149145, -0.0580721, -1.66167, 0.0296868, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.39116, -0.000214347, -0.0315563, -2.20842, -0.011255, -0.0653532, 0.10637, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.35494, -0.264334, 0.0101329, -2.17875, 0.239919, -0.0160851, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.63703, -0.00201807, -0.112671, -2.36913, 0.00338609, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.916869, -0.00045282, 0.00387526, -0.0480419, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.90271, -0.918451, -0.00207853, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.931045, -0.00357595, 
};


const int step100_node10_num_factors = 0;
const bool step100_node10_marked = true;
const bool step100_node10_fixed = false;
int step100_node10_factor_height[] = {};
int step100_node10_factor_width[] = {};
int* step100_node10_factor_ridx[] = {};
float* step100_node10_factor_data[] = {};
int step100_node10_factor_num_blks[] = {};
int* step100_node10_factor_A_blk_start[] = {};
int* step100_node10_factor_B_blk_start[] = {};
int* step100_node10_factor_blk_width[] = {};
const int step100_node10_parent = -1;
const int step100_node10_height = 1;
const int step100_node10_width = 1;
float step100_node10_data[] = {
0, 
};
const int step100_node10_num_blks = 0;
int step100_node10_A_blk_start[] = {};
int step100_node10_B_blk_start[] = {};
int step100_node10_blk_width[] = {};
const float step100_node10_H_correct_cond = 1.0;
float step100_node10_H_correct_data[] = {
0.310422808336, 
};
float step100_node10_M_correct_data[] = {
-0.557156, 
};


const int step100_nnodes = 11;
bool step100_node_marked[] = {step100_node0_marked, step100_node1_marked, step100_node2_marked, step100_node3_marked, step100_node4_marked, step100_node5_marked, step100_node6_marked, step100_node7_marked, step100_node8_marked, step100_node9_marked, step100_node10_marked, };
bool step100_node_fixed[] = {step100_node0_fixed, step100_node1_fixed, step100_node2_fixed, step100_node3_fixed, step100_node4_fixed, step100_node5_fixed, step100_node6_fixed, step100_node7_fixed, step100_node8_fixed, step100_node9_fixed, step100_node10_fixed, };
int step100_node_num_factors[] = {step100_node0_num_factors, step100_node1_num_factors, step100_node2_num_factors, step100_node3_num_factors, step100_node4_num_factors, step100_node5_num_factors, step100_node6_num_factors, step100_node7_num_factors, step100_node8_num_factors, step100_node9_num_factors, step100_node10_num_factors, };
int* step100_node_factor_height[] = {step100_node0_factor_height, step100_node1_factor_height, step100_node2_factor_height, step100_node3_factor_height, step100_node4_factor_height, step100_node5_factor_height, step100_node6_factor_height, step100_node7_factor_height, step100_node8_factor_height, step100_node9_factor_height, step100_node10_factor_height, };
int* step100_node_factor_width[] = {step100_node0_factor_width, step100_node1_factor_width, step100_node2_factor_width, step100_node3_factor_width, step100_node4_factor_width, step100_node5_factor_width, step100_node6_factor_width, step100_node7_factor_width, step100_node8_factor_width, step100_node9_factor_width, step100_node10_factor_width, };
int** step100_node_factor_ridx[] = {step100_node0_factor_ridx, step100_node1_factor_ridx, step100_node2_factor_ridx, step100_node3_factor_ridx, step100_node4_factor_ridx, step100_node5_factor_ridx, step100_node6_factor_ridx, step100_node7_factor_ridx, step100_node8_factor_ridx, step100_node9_factor_ridx, step100_node10_factor_ridx, };
float** step100_node_factor_data[] = {step100_node0_factor_data, step100_node1_factor_data, step100_node2_factor_data, step100_node3_factor_data, step100_node4_factor_data, step100_node5_factor_data, step100_node6_factor_data, step100_node7_factor_data, step100_node8_factor_data, step100_node9_factor_data, step100_node10_factor_data, };
int* step100_node_factor_num_blks[] = {step100_node0_factor_num_blks, step100_node1_factor_num_blks, step100_node2_factor_num_blks, step100_node3_factor_num_blks, step100_node4_factor_num_blks, step100_node5_factor_num_blks, step100_node6_factor_num_blks, step100_node7_factor_num_blks, step100_node8_factor_num_blks, step100_node9_factor_num_blks, step100_node10_factor_num_blks, };
int** step100_node_factor_A_blk_start[] = {step100_node0_factor_A_blk_start, step100_node1_factor_A_blk_start, step100_node2_factor_A_blk_start, step100_node3_factor_A_blk_start, step100_node4_factor_A_blk_start, step100_node5_factor_A_blk_start, step100_node6_factor_A_blk_start, step100_node7_factor_A_blk_start, step100_node8_factor_A_blk_start, step100_node9_factor_A_blk_start, step100_node10_factor_A_blk_start, };
int** step100_node_factor_B_blk_start[] = {step100_node0_factor_B_blk_start, step100_node1_factor_B_blk_start, step100_node2_factor_B_blk_start, step100_node3_factor_B_blk_start, step100_node4_factor_B_blk_start, step100_node5_factor_B_blk_start, step100_node6_factor_B_blk_start, step100_node7_factor_B_blk_start, step100_node8_factor_B_blk_start, step100_node9_factor_B_blk_start, step100_node10_factor_B_blk_start, };
int** step100_node_factor_blk_width[] = {step100_node0_factor_blk_width, step100_node1_factor_blk_width, step100_node2_factor_blk_width, step100_node3_factor_blk_width, step100_node4_factor_blk_width, step100_node5_factor_blk_width, step100_node6_factor_blk_width, step100_node7_factor_blk_width, step100_node8_factor_blk_width, step100_node9_factor_blk_width, step100_node10_factor_blk_width, };
int step100_node_parent[] = {step100_node0_parent, step100_node1_parent, step100_node2_parent, step100_node3_parent, step100_node4_parent, step100_node5_parent, step100_node6_parent, step100_node7_parent, step100_node8_parent, step100_node9_parent, step100_node10_parent, };
int step100_node_height[] = {step100_node0_height, step100_node1_height, step100_node2_height, step100_node3_height, step100_node4_height, step100_node5_height, step100_node6_height, step100_node7_height, step100_node8_height, step100_node9_height, step100_node10_height, };
int step100_node_width[] = {step100_node0_width, step100_node1_width, step100_node2_width, step100_node3_width, step100_node4_width, step100_node5_width, step100_node6_width, step100_node7_width, step100_node8_width, step100_node9_width, step100_node10_width, };
float* step100_node_data[] = {step100_node0_data, step100_node1_data, step100_node2_data, step100_node3_data, step100_node4_data, step100_node5_data, step100_node6_data, step100_node7_data, step100_node8_data, step100_node9_data, step100_node10_data, };
int step100_node_num_blks[] = {step100_node0_num_blks, step100_node1_num_blks, step100_node2_num_blks, step100_node3_num_blks, step100_node4_num_blks, step100_node5_num_blks, step100_node6_num_blks, step100_node7_num_blks, step100_node8_num_blks, step100_node9_num_blks, step100_node10_num_blks, };
int* step100_node_A_blk_start[] = {step100_node0_A_blk_start, step100_node1_A_blk_start, step100_node2_A_blk_start, step100_node3_A_blk_start, step100_node4_A_blk_start, step100_node5_A_blk_start, step100_node6_A_blk_start, step100_node7_A_blk_start, step100_node8_A_blk_start, step100_node9_A_blk_start, step100_node10_A_blk_start, };
int* step100_node_B_blk_start[] = {step100_node0_B_blk_start, step100_node1_B_blk_start, step100_node2_B_blk_start, step100_node3_B_blk_start, step100_node4_B_blk_start, step100_node5_B_blk_start, step100_node6_B_blk_start, step100_node7_B_blk_start, step100_node8_B_blk_start, step100_node9_B_blk_start, step100_node10_B_blk_start, };
int* step100_node_blk_width[] = {step100_node0_blk_width, step100_node1_blk_width, step100_node2_blk_width, step100_node3_blk_width, step100_node4_blk_width, step100_node5_blk_width, step100_node6_blk_width, step100_node7_blk_width, step100_node8_blk_width, step100_node9_blk_width, step100_node10_blk_width, };
float step100_node_H_correct_cond[] = {step100_node0_H_correct_cond, step100_node1_H_correct_cond, step100_node2_H_correct_cond, step100_node3_H_correct_cond, step100_node4_H_correct_cond, step100_node5_H_correct_cond, step100_node6_H_correct_cond, step100_node7_H_correct_cond, step100_node8_H_correct_cond, step100_node9_H_correct_cond, step100_node10_H_correct_cond, };
float* step100_node_H_correct_data[] = {step100_node0_H_correct_data, step100_node1_H_correct_data, step100_node2_H_correct_data, step100_node3_H_correct_data, step100_node4_H_correct_data, step100_node5_H_correct_data, step100_node6_H_correct_data, step100_node7_H_correct_data, step100_node8_H_correct_data, step100_node9_H_correct_data, step100_node10_H_correct_data, };
float* step100_node_M_correct_data[] = {step100_node0_M_correct_data, step100_node1_M_correct_data, step100_node2_M_correct_data, step100_node3_M_correct_data, step100_node4_M_correct_data, step100_node5_M_correct_data, step100_node6_M_correct_data, step100_node7_M_correct_data, step100_node8_M_correct_data, step100_node9_M_correct_data, step100_node10_M_correct_data, };


