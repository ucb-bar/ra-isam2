#pragma once

const bool step4_is_reconstruct = true;

const int step4_factor8_height = 4;
const int step4_factor8_width = 3;
int step4_factor8_ridx[] = {12, 13, 14, 15, };
float step4_factor8_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step4_factor8_num_blks = 1;
int step4_factor8_A_blk_start[] = {0, };
int step4_factor8_B_blk_start[] = {12, };
int step4_factor8_blk_width[] = {3, };

const int step4_factor3_height = 4;
const int step4_factor3_width = 3;
int step4_factor3_ridx[] = {0, 1, 2, 15, };
float step4_factor3_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 1.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 1.0000000, 0.0000000, 
};

const int step4_factor3_num_blks = 1;
int step4_factor3_A_blk_start[] = {0, };
int step4_factor3_B_blk_start[] = {0, };
int step4_factor3_blk_width[] = {3, };

const int step4_factor9_height = 7;
const int step4_factor9_width = 3;
int step4_factor9_ridx[] = {9, 10, 11, 12, 13, 14, 15, };
float step4_factor9_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999320, 0.0116626, -0.0030360, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0116626, -0.9999320, 1.0380500, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step4_factor9_num_blks = 1;
int step4_factor9_A_blk_start[] = {0, };
int step4_factor9_B_blk_start[] = {9, };
int step4_factor9_blk_width[] = {6, };

const int step4_factor4_height = 7;
const int step4_factor4_width = 3;
int step4_factor4_ridx[] = {0, 1, 2, 3, 4, 5, 15, };
float step4_factor4_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999670, 0.0081837, 0.0335822, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0081837, -0.9999670, 0.9990980, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step4_factor4_num_blks = 1;
int step4_factor4_A_blk_start[] = {0, };
int step4_factor4_B_blk_start[] = {0, };
int step4_factor4_blk_width[] = {6, };

const int step4_factor1_height = 4;
const int step4_factor1_width = 3;
int step4_factor1_ridx[] = {3, 4, 5, 15, };
float step4_factor1_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step4_factor1_num_blks = 1;
int step4_factor1_A_blk_start[] = {0, };
int step4_factor1_B_blk_start[] = {3, };
int step4_factor1_blk_width[] = {3, };

const int step4_factor0_height = 4;
const int step4_factor0_width = 3;
int step4_factor0_ridx[] = {0, 1, 2, 15, };
float step4_factor0_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step4_factor0_num_blks = 1;
int step4_factor0_A_blk_start[] = {0, };
int step4_factor0_B_blk_start[] = {0, };
int step4_factor0_blk_width[] = {3, };

const int step4_factor5_height = 7;
const int step4_factor5_width = 3;
int step4_factor5_ridx[] = {3, 4, 5, 6, 7, 8, 15, };
float step4_factor5_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999840, 0.0056968, 0.0178761, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0056968, -0.9999840, 1.0034800, 0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0000000, 
};

const int step4_factor5_num_blks = 1;
int step4_factor5_A_blk_start[] = {0, };
int step4_factor5_B_blk_start[] = {3, };
int step4_factor5_blk_width[] = {6, };

const int step4_factor6_height = 4;
const int step4_factor6_width = 3;
int step4_factor6_ridx[] = {9, 10, 11, 15, };
float step4_factor6_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step4_factor6_num_blks = 1;
int step4_factor6_A_blk_start[] = {0, };
int step4_factor6_B_blk_start[] = {9, };
int step4_factor6_blk_width[] = {3, };

const int step4_factor7_height = 7;
const int step4_factor7_width = 3;
int step4_factor7_ridx[] = {6, 7, 8, 9, 10, 11, 15, };
float step4_factor7_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9994120, 0.0342925, 0.0169251, 0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0342925, -0.9994120, 0.9733340, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step4_factor7_num_blks = 1;
int step4_factor7_A_blk_start[] = {0, };
int step4_factor7_B_blk_start[] = {6, };
int step4_factor7_blk_width[] = {6, };

const int step4_factor2_height = 4;
const int step4_factor2_width = 3;
int step4_factor2_ridx[] = {6, 7, 8, 15, };
float step4_factor2_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step4_factor2_num_blks = 1;
int step4_factor2_A_blk_start[] = {0, };
int step4_factor2_B_blk_start[] = {6, };
int step4_factor2_blk_width[] = {3, };

const int step4_node0_num_factors = 10;
const bool step4_node0_marked = true;
const bool step4_node0_fixed = false;
int step4_node0_factor_height[] = {step4_factor0_height, step4_factor1_height, step4_factor2_height, step4_factor3_height, step4_factor4_height, step4_factor5_height, step4_factor6_height, step4_factor7_height, step4_factor8_height, step4_factor9_height, };
int step4_node0_factor_width[] = {step4_factor0_width, step4_factor1_width, step4_factor2_width, step4_factor3_width, step4_factor4_width, step4_factor5_width, step4_factor6_width, step4_factor7_width, step4_factor8_width, step4_factor9_width, };
int* step4_node0_factor_ridx[] = {step4_factor0_ridx, step4_factor1_ridx, step4_factor2_ridx, step4_factor3_ridx, step4_factor4_ridx, step4_factor5_ridx, step4_factor6_ridx, step4_factor7_ridx, step4_factor8_ridx, step4_factor9_ridx, };
float* step4_node0_factor_data[] = {step4_factor0_data, step4_factor1_data, step4_factor2_data, step4_factor3_data, step4_factor4_data, step4_factor5_data, step4_factor6_data, step4_factor7_data, step4_factor8_data, step4_factor9_data, };
int step4_node0_factor_num_blks[] = {step4_factor0_num_blks, step4_factor1_num_blks, step4_factor2_num_blks, step4_factor3_num_blks, step4_factor4_num_blks, step4_factor5_num_blks, step4_factor6_num_blks, step4_factor7_num_blks, step4_factor8_num_blks, step4_factor9_num_blks, };
int* step4_node0_factor_A_blk_start[] = {step4_factor0_A_blk_start, step4_factor1_A_blk_start, step4_factor2_A_blk_start, step4_factor3_A_blk_start, step4_factor4_A_blk_start, step4_factor5_A_blk_start, step4_factor6_A_blk_start, step4_factor7_A_blk_start, step4_factor8_A_blk_start, step4_factor9_A_blk_start, };
int* step4_node0_factor_B_blk_start[] = {step4_factor0_B_blk_start, step4_factor1_B_blk_start, step4_factor2_B_blk_start, step4_factor3_B_blk_start, step4_factor4_B_blk_start, step4_factor5_B_blk_start, step4_factor6_B_blk_start, step4_factor7_B_blk_start, step4_factor8_B_blk_start, step4_factor9_B_blk_start, };
int* step4_node0_factor_blk_width[] = {step4_factor0_blk_width, step4_factor1_blk_width, step4_factor2_blk_width, step4_factor3_blk_width, step4_factor4_blk_width, step4_factor5_blk_width, step4_factor6_blk_width, step4_factor7_blk_width, step4_factor8_blk_width, step4_factor9_blk_width, };
const int step4_node0_parent = 1;
const int step4_node0_height = 16;
const int step4_node0_width = 15;
float step4_node0_data[] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};
const int step4_node0_num_blks = 0;
int step4_node0_A_blk_start[] = {};
int step4_node0_B_blk_start[] = {};
int step4_node0_blk_width[] = {};
const float step4_node0_H_correct_cond = 607.6650125340801;
float step4_node0_H_correct_data[] = {
1.9999899240999999, 0.0, 0.0, -0.99996384943, 0.0081836938596, 0.033582113501999994, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.11021990366e-16, 
0.0, 1.9999899240999999, 0.0, -0.0081836938596, -0.99996384943, 0.9990955244899999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 1.9999899240999999, 0.0, 0.0, -0.99999779047, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.364393481e-19, 
-0.99996384943, -0.0081836938596, 0.0, 2.000012417980298, -2.638723878179629e-10, -0.04175750403504, -0.99998755425, 0.0056967899025, 0.01787620605, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.110261131682e-16, 
0.0081836938596, -0.99996384943, 0.0, -2.638723878179629e-10, 2.000012417980298, -0.9987915178630152, -0.005696789726588738, -0.999987554251002, 1.0034817659968553, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.030347585199814e-18, 
0.033582113501999994, 0.9990955244899999, -0.99999779047, -0.04175750403504, -0.9987915178630152, 2.9993159441872, -1.0523740000612605e-08, 1.2840361139644401e-06, -0.99999788938492, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.47364860083e-18, 
0.0, 0.0, 0.0, -0.99998755425, -0.005696789726588738, -1.0523740000612605e-08, 1.9999961070876222, 1.3696899999681651e-08, -0.02359242123294, -0.9994101984000001, 0.034292461608, 0.016925059512000004, 0.0, 0.0, 0.0, 4.440450847989736e-16, 
0.0, 0.0, 0.0, 0.0056967899025, -0.999987554251002, 1.2840361139644401e-06, 1.3696899999681651e-08, 2.000011073753859, -1.0033622240757458, -0.0342926095482, -0.9994159985598761, 0.973338334985236, 0.0, 0.0, 0.0, -8.203732932500001e-18, 
0.0, 0.0, 0.0, 0.01787620605, 1.0034817659968553, -0.99999788938492, -0.02359242123294, -1.0033622240757458, 3.0072961460676497, 5.7538999967844174e-09, -3.06455299668711e-08, -1.00000141432467, 0.0, 0.0, 0.0, 4.80101559214e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9994101984000001, -0.0342926095482, 5.7538999967844174e-09, 1.9999940925648998, -4.742859999747845e-08, -0.050293102734600005, -0.9999291077999999, 0.0116625663, -0.003036011868, -8.880462940770579e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.034292461608, -0.9994159985598761, -3.06455299668711e-08, -4.742859999747845e-08, 2.0000049371401802, -0.9721817816841101, -0.011662650754300001, -0.99993352239745, 1.038046670071882, 6.7471019827199995e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.016925059512000004, 0.973338334985236, -1.00000141432467, -0.050293102734600005, -0.9721817816841101, 2.94766258462205, -6.929939999957639e-08, 4.461750999768985e-07, -0.999998249434076, 4.0376575840800005e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9999291077999999, -0.011662650754300001, -6.929939999957639e-08, 1.00000127467325, 1.8858099999888077e-08, -0.00907049937752, 6.6609896680991405e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0116625663, -0.99993352239745, 4.461750999768985e-07, 1.8858099999888077e-08, 1.00000047904486, -1.0380097489521378, -6.90155577009e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.003036011868, 1.038046670071882, -0.999998249434076, -0.00907049937752, -1.0380097489521378, 2.0775462114317778, 3.4405303508400096e-19, 
};
float step4_node0_M_correct_data[] = {
1.41421, 0.0, 0.0, -0.707083, 0.00578676, 0.0237462, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -7.85046e-17, 
0.0, 1.41421, 0.0, -0.00578676, -0.707083, 0.706469, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 1.41421, 0.0, 0.0, -0.707107, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.0861e-19, 
0.0, 0.0, 0.0, 1.22475, -2.1545e-10, -0.0170474, -0.816483, 0.00465139, 0.0145958, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.35975e-16, 
0.0, 0.0, 0.0, 0.0, 1.22475, -0.407754, -0.00465139, -0.816483, 0.819336, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.29466e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.35392, -0.0116813, -0.245837, -0.491655, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.62227e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.15464, -0.00248708, -0.0117849, -0.86556, 0.0296997, 0.0146583, 0.0, 0.0, 0.0, 2.88417e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.12823, -0.403599, -0.0323031, -0.885761, 0.862745, 0.0, 0.0, 0.0, -2.81467e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.38961, -0.0167227, -0.257009, -0.468927, 0.0, 0.0, 0.0, 2.46205e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.1178, -0.0064447, -0.0157254, -0.894551, 0.0104335, -0.00271606, -5.7117e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.07166, -0.307048, -0.0162624, -0.933007, 0.968618, -6.86801e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.3743, -0.0138693, -0.208334, -0.511263, -5.6013e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.446456, -0.0195519, -0.00635888, 3.47109e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.292582, -0.823331, -5.91443e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.447229, -1.80774e-19, 
};


const int step4_node1_num_factors = 0;
const bool step4_node1_marked = true;
const bool step4_node1_fixed = false;
int step4_node1_factor_height[] = {};
int step4_node1_factor_width[] = {};
int* step4_node1_factor_ridx[] = {};
float* step4_node1_factor_data[] = {};
int step4_node1_factor_num_blks[] = {};
int* step4_node1_factor_A_blk_start[] = {};
int* step4_node1_factor_B_blk_start[] = {};
int* step4_node1_factor_blk_width[] = {};
const int step4_node1_parent = -1;
const int step4_node1_height = 1;
const int step4_node1_width = 1;
float step4_node1_data[] = {
0, 
};
const int step4_node1_num_blks = 0;
int step4_node1_A_blk_start[] = {};
int step4_node1_B_blk_start[] = {};
int step4_node1_blk_width[] = {};
const float step4_node1_H_correct_cond = 1.0;
float step4_node1_H_correct_data[] = {
3.07713168961e-61, 
};
float step4_node1_M_correct_data[] = {
-5.54719e-31, 
};


const int step4_nnodes = 2;
bool step4_node_marked[] = {step4_node0_marked, step4_node1_marked, };
bool step4_node_fixed[] = {step4_node0_fixed, step4_node1_fixed, };
int step4_node_num_factors[] = {step4_node0_num_factors, step4_node1_num_factors, };
int* step4_node_factor_height[] = {step4_node0_factor_height, step4_node1_factor_height, };
int* step4_node_factor_width[] = {step4_node0_factor_width, step4_node1_factor_width, };
int** step4_node_factor_ridx[] = {step4_node0_factor_ridx, step4_node1_factor_ridx, };
float** step4_node_factor_data[] = {step4_node0_factor_data, step4_node1_factor_data, };
int* step4_node_factor_num_blks[] = {step4_node0_factor_num_blks, step4_node1_factor_num_blks, };
int** step4_node_factor_A_blk_start[] = {step4_node0_factor_A_blk_start, step4_node1_factor_A_blk_start, };
int** step4_node_factor_B_blk_start[] = {step4_node0_factor_B_blk_start, step4_node1_factor_B_blk_start, };
int** step4_node_factor_blk_width[] = {step4_node0_factor_blk_width, step4_node1_factor_blk_width, };
int step4_node_parent[] = {step4_node0_parent, step4_node1_parent, };
int step4_node_height[] = {step4_node0_height, step4_node1_height, };
int step4_node_width[] = {step4_node0_width, step4_node1_width, };
float* step4_node_data[] = {step4_node0_data, step4_node1_data, };
int step4_node_num_blks[] = {step4_node0_num_blks, step4_node1_num_blks, };
int* step4_node_A_blk_start[] = {step4_node0_A_blk_start, step4_node1_A_blk_start, };
int* step4_node_B_blk_start[] = {step4_node0_B_blk_start, step4_node1_B_blk_start, };
int* step4_node_blk_width[] = {step4_node0_blk_width, step4_node1_blk_width, };
float step4_node_H_correct_cond[] = {step4_node0_H_correct_cond, step4_node1_H_correct_cond, };
float* step4_node_H_correct_data[] = {step4_node0_H_correct_data, step4_node1_H_correct_data, };
float* step4_node_M_correct_data[] = {step4_node0_M_correct_data, step4_node1_M_correct_data, };


