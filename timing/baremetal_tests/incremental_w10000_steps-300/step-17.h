#pragma once

const bool step17_is_reconstruct = true;

const int step17_factor35_height = 7;
const int step17_factor35_width = 3;
int step17_factor35_ridx[] = {0, 1, 2, 3, 4, 5, 6, };
float step17_factor35_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9999690, 0.0078332, -0.0004304, 0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.0078332, -0.9999690, 0.9758220, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step17_factor35_num_blks = 1;
int step17_factor35_A_blk_start[] = {0, };
int step17_factor35_B_blk_start[] = {0, };
int step17_factor35_blk_width[] = {6, };

const int step17_factor34_height = 4;
const int step17_factor34_width = 3;
int step17_factor34_ridx[] = {3, 4, 5, 6, };
float step17_factor34_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step17_factor34_num_blks = 1;
int step17_factor34_A_blk_start[] = {0, };
int step17_factor34_B_blk_start[] = {3, };
int step17_factor34_blk_width[] = {3, };

const int step17_factor33_height = 7;
const int step17_factor33_width = 3;
int step17_factor33_ridx[] = {21, 22, 23, 24, 25, 26, 27, };
float step17_factor33_data[] = {
1.0000000, 0.0000000, 0.0000000, 0.0445289, 0.9990080, -0.9917550, 0.0000000, 
0.0000000, 1.0000000, 0.0000000, -0.9990080, 0.0445289, -0.0392021, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step17_factor33_num_blks = 1;
int step17_factor33_A_blk_start[] = {0, };
int step17_factor33_B_blk_start[] = {21, };
int step17_factor33_blk_width[] = {6, };

const int step17_factor32_height = 4;
const int step17_factor32_width = 3;
int step17_factor32_ridx[] = {0, 1, 2, 6, };
float step17_factor32_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step17_factor32_num_blks = 1;
int step17_factor32_A_blk_start[] = {0, };
int step17_factor32_B_blk_start[] = {0, };
int step17_factor32_blk_width[] = {3, };

const int step17_node1_num_factors = 1;
const bool step17_node1_marked = false;
const bool step17_node1_fixed = true;
int step17_node1_factor_height[] = {step17_factor33_height, };
int step17_node1_factor_width[] = {step17_factor33_width, };
int* step17_node1_factor_ridx[] = {step17_factor33_ridx, };
float* step17_node1_factor_data[] = {step17_factor33_data, };
int step17_node1_factor_num_blks[] = {step17_factor33_num_blks, };
int* step17_node1_factor_A_blk_start[] = {step17_factor33_A_blk_start, };
int* step17_node1_factor_B_blk_start[] = {step17_factor33_B_blk_start, };
int* step17_node1_factor_blk_width[] = {step17_factor33_blk_width, };
const int step17_node1_parent = 2;
const int step17_node1_height = 28;
const int step17_node1_width = 24;
float step17_node1_data[] = {
1.01141, -0.00852748, -0.0321887, -0.987676, 0.0454025, -0.0573734, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.32269e-15, 
0.0, 1.03986, -0.178872, -0.0522597, -0.960279, 1.01478, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.17032e-16, 
0.0, 0.0, 1.27507, -0.0322648, -0.133566, -0.643363, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.72036e-18, 
0.0, 0.0, 0.0, 1.01031, -0.00955193, -0.0147526, -0.989796, 0.000319101, 0.0300636, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.17995e-16, 
0.0, 0.0, 0.0, 0.0, 1.02853, -0.161656, -0.00950567, -0.972259, 0.962132, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.80345e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.28241, -0.0125847, -0.122556, -0.658153, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.17766e-17, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00998, -0.010365, -7.18478e-05, 0.0192603, 0.989933, -0.988157, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.24605e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0196, -0.131928, -0.980394, 0.0291419, 0.00428876, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.44506e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.26588, -0.102174, 0.0030933, -0.789573, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.37662e-17, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01391, 0.0096855, -0.0902079, -0.986084, -0.0195947, -0.0130297, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.09275e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0095, -0.0159916, 0.0291413, -0.99021, 0.892235, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.76078e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.17812, -0.0751084, -0.0149413, -0.837698, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -6.72099e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01052, 0.00832422, -0.0699314, -0.98959, 0.00126108, -0.079721, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.11086e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00936, -0.0285624, 0.00689864, -0.990736, 0.926869, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -9.48789e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.14347, -0.0603482, -0.0246702, -0.856254, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.03256e-17, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00848, 0.00653847, -0.0571065, -0.991509, -0.0130556, -0.0498262, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.95192e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00886, -0.0370222, 0.0194767, -0.991052, 0.878608, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -7.94978e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.13015, -0.0494628, -0.0331251, -0.858571, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.41011e-17, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00702, 0.00468635, -0.0467446, -0.992998, 0.00818974, -0.0447386, 0.0, 0.0, 0.0, -1.00718e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00823, -0.0430955, -0.00356433, -0.991841, 0.893575, 0.0, 0.0, 0.0, 1.5094e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.12784, -0.0412922, -0.0375597, -0.854365, 0.0, 0.0, 0.0, -5.15058e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0061, 0.00302774, -0.0386605, 0.0442589, 0.99295, -0.985741, 5.55478e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00736, -0.0460433, -0.991847, 0.0412194, -0.0359531, -1.88409e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.13106, -0.0388634, 0.0356178, -0.919284, -4.24194e-17, 
};
const int step17_node1_num_blks = 1;
int step17_node1_A_blk_start[] = {0, };
int step17_node1_B_blk_start[] = {0, };
int step17_node1_blk_width[] = {3, };
const float step17_node1_H_correct_cond = 170.16498249719623;
float step17_node1_H_correct_data[] = {
1.0229501880999998, -0.008624778546799999, -0.032555973067, -0.9989453831599999, 0.045920542525, -0.058028030493999995, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.3377818928999999e-15, 
-0.008624778546799999, 1.0813815375151503, -0.185727349424524, -0.04592038430552, -0.9989428898507, 1.055718381321032, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.144036829988e-16, 
-0.032555973067, -0.185727349424524, 1.6588348096916898, -7.50164000041427e-08, -4.217837499782332e-07, -1.00000181340942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 8.35901989322e-17, 
-0.9989453831599999, -0.04592038430552, -7.50164000041427e-08, 2.00000227063913, 2.7448000035760584e-09, 0.009487511068800004, -1.00000079676, 0.00032239093131, 0.030373555716, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 8.95371160129072e-16, 
0.045920542525, -0.9989428898507, -4.217837499782332e-07, 2.7448000035760584e-09, 2.000002221469975, -1.0572725268329821, -0.00032240465881999957, -1.000000597300415, 0.9892944605572519, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.3761095942958997e-16, 
-0.058028030493999995, 1.055718381321032, -1.00000181340942, 0.009487511068800004, -1.0572725268329821, 3.1179118148393203, -3.206788000204783e-08, -2.4662541261924267e-07, -0.99999991558736, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.2769603516168e-16, 
0.0, 0.0, 0.0, -1.00000079676, -0.00032240465881999957, -3.206788000204783e-08, 2.000004454452239, 1.6108334000117868e-08, -0.030692447095984, 0.019452517794000004, 0.99981253134, -0.99801880686, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6800811589858303e-15, 
0.0, 0.0, 0.0, 0.00032239093131, -1.000000597300415, -2.4662541261924267e-07, 1.6108334000117868e-08, 1.9999992312674484, -0.9892843478927292, -0.9998093554095, 0.019452425695, 0.014615067001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -6.558684708170951e-16, 
0.0, 0.0, 0.0, 0.030373555716, 0.9892944605572519, -0.99999991558736, -0.030692447095984, -0.9892843478927292, 2.979624353624066, 1.2701817671196018e-08, -1.0487397399863461e-08, -0.9999994798627753, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.1594316751101e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.019452517794000004, -0.9998093554095, 1.2701817671196018e-08, 1.9999963687680902, 3.3122100001399486e-08, -0.03402573502554001, -0.99980042844, -0.019867262277000003, -0.013210943127000002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.654580492102e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.99981253134, 0.019452425695, -1.0487397399863461e-08, 3.3122100001399486e-08, 2.0000102222397502, -0.9975438558423059, 0.019867425768, -0.9998067794668501, 0.9005850333406501, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.9860083252225595e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99801880686, 0.014615067001, -0.9999994798627753, -0.03402573502554001, -0.9975438558423059, 2.9962581033333073, -1.5735748001214152e-07, -5.381869997430109e-09, -1.00000165111137, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.24942339314946e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99980042844, 0.019867425768, -1.5735748001214152e-07, 2.00000281257225, 2.1413119999080082e-08, 0.031100344635499988, -1.0000004868, 0.0012743465616, -0.08055966492000001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.4592432539931601e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.019867262277000003, -0.9998067794668501, -5.381869997430109e-09, 2.1413119999080082e-08, 1.9999999410523888, -0.900140277582518, -0.0012743535994, -0.9999987914526424, 0.9348808786973801, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.697935231972533e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.013210943127000002, 0.9005850333406501, -1.00000165111137, 0.031100344635499988, -0.900140277582518, 2.81122085981081, 1.615686400933598e-08, -2.475751199840652e-08, -0.9999993633662, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.57957817025052e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0000004868, -0.0012743535994, 1.615686400933598e-08, 2.0000097749770895, 3.5233000000165173e-08, 0.07936786447096, -0.99991699632, -0.013166311488000002, -0.050248726176, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.1222520864855998e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0012743465616, -0.9999987914526424, -2.475751199840652e-08, 3.5233000000165173e-08, 2.000009281976747, -0.934982668540935, 0.01316631171077, -0.9999180843689321, 0.886066679766086, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.3863141882860224e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.08055966492000001, 0.9348808786973801, -0.9999993633662, 0.07936786447096, -0.934982668540935, 2.88048331165309, 1.550057599955489e-07, 1.5321080000544965e-07, -0.9999966168572999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -8.6538683180548e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99991699632, 0.01316631171077, 1.550057599955489e-07, 2.00000528790773, 3.0785279999274474e-08, 0.0619100887362, -0.99996884596, 0.0082472319748, -0.04505266497200001, 0.0, 0.0, 0.0, -1.216201157308e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.013166311488000002, -0.9999180843689321, 1.5321080000544965e-07, 3.0785279999274474e-08, 2.0000014824216925, -0.88532469196839, -0.008247200613199999, -0.9999654714419509, 0.90071946151189, 0.0, 0.0, 0.0, 2.310584990917558e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.050248726176, 0.886066679766086, -0.9999966168572999, 0.0619100887362, -0.88532469196839, 2.7876441752608496, -9.39536849969513e-08, -2.743529039976974e-07, -1.00000479505094, 0.0, 0.0, 0.0, -7.27105848076604e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99996884596, -0.008247200613199999, -9.39536849969513e-08, 1.999999988233189, -1.4950649999849066e-08, 0.037622625546050004, 0.04452887929, 0.999006995, -0.9917540201, 6.53711867441476e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0082472319748, -0.9999654714419509, -2.743529039976974e-07, -1.4950649999849066e-08, 2.000009708995865, -0.901060258616734, -0.9990129894781141, 0.044529169217, -0.039202282271340004, -3.393991264833974e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.04505266497200001, 0.90071946151189, -1.00000479505094, 0.037622625546050004, -0.901060258616734, 2.8133287195150998, 5.676500089137689e-10, 4.819297999799924e-08, -1.00000072174027, 1.3749643399105e-15, 
};
float step17_node1_M_correct_data[] = {
1.01141, -0.00852748, -0.0321887, -0.987676, 0.0454025, -0.0573734, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.32269e-15, 
0.0, 1.03986, -0.178872, -0.0522597, -0.960279, 1.01478, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.17032e-16, 
0.0, 0.0, 1.27507, -0.0322648, -0.133566, -0.643363, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.72036e-18, 
0.0, 0.0, 0.0, 1.01031, -0.00955193, -0.0147526, -0.989796, 0.000319101, 0.0300636, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.17995e-16, 
0.0, 0.0, 0.0, 0.0, 1.02853, -0.161656, -0.00950567, -0.972259, 0.962132, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.80345e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.28241, -0.0125847, -0.122556, -0.658153, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.17766e-17, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00998, -0.010365, -7.18478e-05, 0.0192603, 0.989933, -0.988157, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.24605e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0196, -0.131928, -0.980394, 0.0291419, 0.00428876, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.44506e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.26588, -0.102174, 0.0030933, -0.789573, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.37662e-17, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01391, 0.0096855, -0.0902079, -0.986084, -0.0195947, -0.0130297, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.09275e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0095, -0.0159916, 0.0291413, -0.99021, 0.892235, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.76078e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.17812, -0.0751084, -0.0149413, -0.837698, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -6.72099e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01052, 0.00832422, -0.0699314, -0.98959, 0.00126108, -0.079721, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.11086e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00936, -0.0285624, 0.00689864, -0.990736, 0.926869, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -9.48789e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.14347, -0.0603482, -0.0246702, -0.856254, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.03256e-17, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00848, 0.00653847, -0.0571065, -0.991509, -0.0130556, -0.0498262, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.95192e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00886, -0.0370222, 0.0194767, -0.991052, 0.878608, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -7.94978e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.13015, -0.0494628, -0.0331251, -0.858571, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.41011e-17, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00702, 0.00468635, -0.0467446, -0.992998, 0.00818974, -0.0447386, 0.0, 0.0, 0.0, -1.00718e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00823, -0.0430955, -0.00356433, -0.991841, 0.893575, 0.0, 0.0, 0.0, 1.5094e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.12784, -0.0412922, -0.0375597, -0.854365, 0.0, 0.0, 0.0, -5.15058e-18, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0061, 0.00302774, -0.0386605, 0.0442589, 0.99295, -0.985741, 5.55478e-16, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.00736, -0.0460433, -0.991847, 0.0412194, -0.0359531, -1.88409e-15, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.13106, -0.0388634, 0.0356178, -0.919284, -4.24194e-17, 
};


const int step17_node2_num_factors = 3;
const bool step17_node2_marked = true;
const bool step17_node2_fixed = false;
int step17_node2_factor_height[] = {step17_factor35_height, step17_factor34_height, step17_factor32_height, };
int step17_node2_factor_width[] = {step17_factor35_width, step17_factor34_width, step17_factor32_width, };
int* step17_node2_factor_ridx[] = {step17_factor35_ridx, step17_factor34_ridx, step17_factor32_ridx, };
float* step17_node2_factor_data[] = {step17_factor35_data, step17_factor34_data, step17_factor32_data, };
int step17_node2_factor_num_blks[] = {step17_factor35_num_blks, step17_factor34_num_blks, step17_factor32_num_blks, };
int* step17_node2_factor_A_blk_start[] = {step17_factor35_A_blk_start, step17_factor34_A_blk_start, step17_factor32_A_blk_start, };
int* step17_node2_factor_B_blk_start[] = {step17_factor35_B_blk_start, step17_factor34_B_blk_start, step17_factor32_B_blk_start, };
int* step17_node2_factor_blk_width[] = {step17_factor35_blk_width, step17_factor34_blk_width, step17_factor32_blk_width, };
const int step17_node2_parent = 3;
const int step17_node2_height = 7;
const int step17_node2_width = 6;
float step17_node2_data[] = {
0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 
};
const int step17_node2_num_blks = 0;
int step17_node2_A_blk_start[] = {};
int step17_node2_B_blk_start[] = {};
int step17_node2_blk_width[] = {};
const float step17_node2_H_correct_cond = 1421.8798051284934;
float step17_node2_H_correct_data[] = {
1.0127805769, -0.0016794101286, -0.0327573435, -0.99997351228, 0.0078332217868, -0.00043039023241999997, 6.8139702508e-16, 
-0.0016794101286, 1.0110732552266883, 0.020499959157, -0.00783315126008, -0.9999644194227592, 0.9758166473604674, -2.268825303752e-17, 
-0.0327573435, 0.020499959157, 1.16705229405556, 9.716405200194166e-08, -2.1508800000441867e-08, -0.9999987028610999, -1.56342037014e-17, 
-0.99997351228, -0.00783315126008, 9.716405200194166e-08, 1.0000007685102084, 3.094480000636398e-09, -0.007213519517076002, -6.659500245516e-16, 
0.0078332217868, -0.9999644194227592, -2.1508800000441867e-08, 3.094480000636398e-09, 1.0000008131133795, -0.9757948175398841, 2.6033953057255998e-17, 
-0.00043039023241999997, 0.9758166473604674, -0.9999987028610999, -0.007213519517076002, -0.9757948175398841, 1.9522276820207676, -4.4533974224031595e-17, 
};
float step17_node2_M_correct_data[] = {
1.00637, -0.00166878, -0.03255, -0.993644, 0.00778364, -0.000427666, 6.77084e-16, 
0.0, 1.00552, 0.0203334, -0.00943922, -0.994462, 0.970459, -2.144e-17, 
0.0, 0.0, 1.07962, -0.02978, 0.0189642, -0.944541, 6.33633e-18, 
0.0, 0.0, 0.0, 0.10815, -0.0100603, -0.246015, 6.30305e-17, 
0.0, 0.0, 0.0, 0.0, 0.10259, 0.0461116, -4.24486e-19, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.235859, -8.16938e-18, 
};


const int step17_node3_num_factors = 0;
const bool step17_node3_marked = true;
const bool step17_node3_fixed = false;
int step17_node3_factor_height[] = {};
int step17_node3_factor_width[] = {};
int* step17_node3_factor_ridx[] = {};
float* step17_node3_factor_data[] = {};
int step17_node3_factor_num_blks[] = {};
int* step17_node3_factor_A_blk_start[] = {};
int* step17_node3_factor_B_blk_start[] = {};
int* step17_node3_factor_blk_width[] = {};
const int step17_node3_parent = -1;
const int step17_node3_height = 1;
const int step17_node3_width = 1;
float step17_node3_data[] = {
0, 
};
const int step17_node3_num_blks = 0;
int step17_node3_A_blk_start[] = {};
int step17_node3_B_blk_start[] = {};
int step17_node3_blk_width[] = {};
const float step17_node3_H_correct_cond = 1.0;
float step17_node3_H_correct_data[] = {
3.4412476036e-58, 
};
float step17_node3_M_correct_data[] = {
-1.85506e-29, 
};


const int step17_nnodes = 4;
bool step17_node_marked[] = {false, step17_node1_marked, step17_node2_marked, step17_node3_marked, };
bool step17_node_fixed[] = {false, step17_node1_fixed, step17_node2_fixed, step17_node3_fixed, };
int step17_node_num_factors[] = {0, step17_node1_num_factors, step17_node2_num_factors, step17_node3_num_factors, };
int* step17_node_factor_height[] = {0, step17_node1_factor_height, step17_node2_factor_height, step17_node3_factor_height, };
int* step17_node_factor_width[] = {0, step17_node1_factor_width, step17_node2_factor_width, step17_node3_factor_width, };
int** step17_node_factor_ridx[] = {0, step17_node1_factor_ridx, step17_node2_factor_ridx, step17_node3_factor_ridx, };
float** step17_node_factor_data[] = {0, step17_node1_factor_data, step17_node2_factor_data, step17_node3_factor_data, };
int* step17_node_factor_num_blks[] = {0, step17_node1_factor_num_blks, step17_node2_factor_num_blks, step17_node3_factor_num_blks, };
int** step17_node_factor_A_blk_start[] = {0, step17_node1_factor_A_blk_start, step17_node2_factor_A_blk_start, step17_node3_factor_A_blk_start, };
int** step17_node_factor_B_blk_start[] = {0, step17_node1_factor_B_blk_start, step17_node2_factor_B_blk_start, step17_node3_factor_B_blk_start, };
int** step17_node_factor_blk_width[] = {0, step17_node1_factor_blk_width, step17_node2_factor_blk_width, step17_node3_factor_blk_width, };
int step17_node_parent[] = {0, step17_node1_parent, step17_node2_parent, step17_node3_parent, };
int step17_node_height[] = {0, step17_node1_height, step17_node2_height, step17_node3_height, };
int step17_node_width[] = {0, step17_node1_width, step17_node2_width, step17_node3_width, };
float* step17_node_data[] = {0, step17_node1_data, step17_node2_data, step17_node3_data, };
int step17_node_num_blks[] = {0, step17_node1_num_blks, step17_node2_num_blks, step17_node3_num_blks, };
int* step17_node_A_blk_start[] = {0, step17_node1_A_blk_start, step17_node2_A_blk_start, step17_node3_A_blk_start, };
int* step17_node_B_blk_start[] = {0, step17_node1_B_blk_start, step17_node2_B_blk_start, step17_node3_B_blk_start, };
int* step17_node_blk_width[] = {0, step17_node1_blk_width, step17_node2_blk_width, step17_node3_blk_width, };
float step17_node_H_correct_cond[] = {0, step17_node1_H_correct_cond, step17_node2_H_correct_cond, step17_node3_H_correct_cond, };
float* step17_node_H_correct_data[] = {0, step17_node1_H_correct_data, step17_node2_H_correct_data, step17_node3_H_correct_data, };
float* step17_node_M_correct_data[] = {0, step17_node1_M_correct_data, step17_node2_M_correct_data, step17_node3_M_correct_data, };


