#pragma once

const bool step74_is_reconstruct = true;

const int step74_factor338_height = 4;
const int step74_factor338_width = 3;
int step74_factor338_ridx[] = {0, 1, 2, 6, };
float step74_factor338_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step74_factor338_num_blks = 1;
int step74_factor338_A_blk_start[] = {0, };
int step74_factor338_B_blk_start[] = {0, };
int step74_factor338_blk_width[] = {3, };

const int step74_factor341_height = 7;
const int step74_factor341_width = 3;
int step74_factor341_ridx[] = {0, 1, 2, 3, 4, 5, 6, };
float step74_factor341_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9996110, -0.0278942, 0.0613971, 0.0000000, 
0.0000000, 1.0000000, 0.0000000, 0.0278942, -0.9996110, 0.9262350, 0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, 0.0000000, 
};

const int step74_factor341_num_blks = 1;
int step74_factor341_A_blk_start[] = {0, };
int step74_factor341_B_blk_start[] = {0, };
int step74_factor341_blk_width[] = {6, };

const int step74_factor340_height = 4;
const int step74_factor340_width = 3;
int step74_factor340_ridx[] = {3, 4, 5, 6, };
float step74_factor340_data[] = {
0.0010000, 0.0000000, 0.0000000, 0.0000000, 
0.0000000, 0.0010000, 0.0000000, 0.0000000, 
0.0000000, 0.0000000, 0.0010000, 0.0000000, 
};

const int step74_factor340_num_blks = 1;
int step74_factor340_A_blk_start[] = {0, };
int step74_factor340_B_blk_start[] = {3, };
int step74_factor340_blk_width[] = {3, };

const int step74_factor339_height = 7;
const int step74_factor339_width = 3;
int step74_factor339_ridx[] = {21, 22, 23, 24, 25, 26, 27, };
float step74_factor339_data[] = {
1.0000000, 0.0000000, 0.0000000, -0.9994170, -0.0341407, 0.0878746, -0.0000000, 
0.0000000, 1.0000000, 0.0000000, 0.0341407, -0.9994170, 1.0057700, -0.0000000, 
0.0000000, 0.0000000, 1.0000000, -0.0000000, -0.0000000, -1.0000000, -0.0000000, 
};

const int step74_factor339_num_blks = 1;
int step74_factor339_A_blk_start[] = {0, };
int step74_factor339_B_blk_start[] = {21, };
int step74_factor339_blk_width[] = {6, };

const int step74_node7_num_factors = 1;
const bool step74_node7_marked = false;
const bool step74_node7_fixed = true;
int step74_node7_factor_height[] = {step74_factor339_height, };
int step74_node7_factor_width[] = {step74_factor339_width, };
int* step74_node7_factor_ridx[] = {step74_factor339_ridx, };
float* step74_node7_factor_data[] = {step74_factor339_data, };
int step74_node7_factor_num_blks[] = {step74_factor339_num_blks, };
int* step74_node7_factor_A_blk_start[] = {step74_factor339_A_blk_start, };
int* step74_node7_factor_B_blk_start[] = {step74_factor339_B_blk_start, };
int* step74_node7_factor_blk_width[] = {step74_factor339_blk_width, };
const int step74_node7_parent = 8;
const int step74_node7_height = 28;
const int step74_node7_width = 24;
float step74_node7_data[] = {
1.08971, 0.00294426, 0.00600605, 0.0203832, -0.917449, 0.974457, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.26225e-08, 
0.0, 1.0285, -0.180401, 0.971987, 0.0242225, 0.0275816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.97678e-07, 
0.0, 0.0, 1.32375, 0.13237, 0.00746367, -0.756094, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.03426e-07, 
0.0, 0.0, 0.0, 1.01848, -0.00572561, 0.106264, -0.981845, 0.00430274, -0.0161942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.26871e-07, 
0.0, 0.0, 0.0, 0.0, 1.07592, -0.149938, -0.00929797, -0.929402, 0.944932, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.38031e-08, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.2541, 0.0820832, -0.111482, -0.683036, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.79218e-08, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01447, 0.00466628, 0.060119, -0.985711, 0.00650749, -0.0324992, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.1647e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.06007, -0.202784, -0.00188862, -0.943344, 0.95001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.9746e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.27658, 0.0461209, -0.150156, -0.630904, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.4916e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01304, 0.0114095, 0.0248546, -0.986232, 0.0421132, -0.0310218, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.77992e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.04278, -0.1973, -0.0301214, -0.958565, 0.986816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.2374e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.29376, 0.0143531, -0.146991, -0.621853, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.06372e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01303, 0.0145799, -0.00437593, -0.987104, 0.00793999, 0.00991942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.17457e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.02838, -0.168409, 0.00617326, -0.972486, 0.908176, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.87763e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.29202, -0.00253856, -0.126733, -0.655572, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.21185e-13, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01271, 0.0133496, -0.0148521, -0.0111543, 0.987387, -0.938718, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.29158e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01881, -0.131286, -0.981331, -0.0240255, 0.126191, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.1847e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.26512, -0.101968, 0.00909838, -0.788366, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.29392e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01315, -0.0114846, -0.071372, -0.986569, 0.02993, -0.117564, 0.0, 0.0, 0.0, 5.51351e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01207, -0.01545, -0.0411573, -0.987285, 0.974003, 0.0, 0.0, 0.0, 5.48061e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.18035, -0.0601934, -0.0111131, -0.841565, 0.0, 0.0, 0.0, 1.27056e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01063, -0.011651, -0.0370383, -0.988908, -0.0337817, 0.0869506, -5.25168e-14, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01199, -0.0344962, 0.022351, -0.987969, 0.994856, -1.49839e-14, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.14685, -0.0312651, -0.0308082, -0.839221, -1.00842e-14, 
};
const int step74_node7_num_blks = 1;
int step74_node7_A_blk_start[] = {0, };
int step74_node7_B_blk_start[] = {0, };
int step74_node7_blk_width[] = {3, };
const float step74_node7_H_correct_cond = 93.68341770032814;
float step74_node7_H_correct_data[] = {
1.1874678841, 0.0032083895646000003, 0.0065448527455, 0.022211776872, -0.99975334979, 1.06187553747, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.4651964475e-08, 
0.0032083895646000003, 1.0578209186669476, -0.185524745127227, 0.999748642940432, 0.02221163285726, 0.031236730366820002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.1179521647815e-07, 
0.0065448527455, -0.185524745127227, 1.7848946559376024, -2.167686400353285e-07, 2.5373549999867798e-08, -1.00000254325675, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.6992686755874985e-08, 
0.022211776872, 0.999748642940432, -2.167686400353285e-07, 1.9999975303112403, -4.462419999721779e-08, 0.05481510450160001, -0.9999894956000001, 0.004382254635200001, -0.016493468816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.26181502944e-07, 
-0.99975334979, 0.02221163285726, 2.5373549999867798e-08, -4.462419999721779e-08, 1.999991732486991, -1.0609194601730199, -0.004382210331949999, -0.9999868356511713, 1.016763959113462, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.4273112327389994e-08, 
1.06187553747, 0.031236730366820002, -1.00000254325675, 0.05481510450160001, -1.0609194601730199, 3.12854557788356, -1.1693414000917735e-07, 3.2723935998185313e-07, -0.9999975222848, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.1402583622990001e-07, 
0.0, 0.0, 0.0, -0.9999894956000001, -0.004382210331949999, -1.1693414000917735e-07, 1.9999930888933608, -7.007216000016874e-08, 0.012037386245760003, -0.99997423817, 0.0066016533803000006, -0.032969463424, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.27278359212262e-07, 
0.0, 0.0, 0.0, 0.004382254635200001, -0.9999868356511713, 3.2723935998185313e-07, -7.007216000016874e-08, 2.000005006568546, -1.016829853536788, -0.006601672928480001, -0.9999803083095629, 1.006925450333024, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.548624889462568e-08, 
0.0, 0.0, 0.0, -0.016493468816, 1.016763959113462, -0.9999975222848, 0.012037386245760003, -1.016829853536788, 3.03408905525064, 4.083108000266955e-08, 1.4700730995561645e-07, -1.0000000755648, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.7542377419757696e-08, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99997423817, -0.006601672928480001, 4.083108000266955e-08, 2.0000069214233145, 6.388948999651874e-08, 0.026321454735399995, -0.99909246528, 0.042662356128, -0.031426324272, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.3267561102879998e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0066016533803000006, -0.9999803083095629, 1.4700730995561645e-07, 6.388948999651874e-08, 2.00000737918835, -1.007120616076308, -0.042662407496, -0.9990919201446, 1.0286780452529, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.69679989157e-13, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.032969463424, 1.006925450333024, -1.0000000755648, 0.026321454735399995, -1.007120616076308, 3.0149750340578003, 1.7008799997369843e-08, 5.050807199889529e-07, -0.99999836851028, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.9434929254080003e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99909246528, -0.042662407496, 1.7008799997369843e-08, 1.9999966489415701, 3.390349999349334e-08, -0.012488054267000004, -0.99996596512, 0.0080434480697, 0.0100486700426, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.598174735120005e-13, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.042662356128, -0.9990919201446, 5.050807199889529e-07, 3.390349999349334e-08, 2.0000047328042503, -1.029079160026567, -0.008043420490799999, -0.999969388419799, 0.934094659031658, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.5277710179299986e-13, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.031426324272, 1.0286780452529, -0.99999836851028, -0.012488054267000004, -1.029079160026567, 3.0591657439846047, -4.827819999875885e-09, -9.207264407077849e-07, -1.0000005541115606, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.3831469166261003e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99996596512, -0.008043420490799999, -4.827819999875885e-09, 2.0000004043419013, -1.2072839999026864e-08, -0.017561753920600002, -0.011296071153000001, 0.99993668877, -0.9506491057800001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.1970693617398001e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0080434480697, -0.999969388419799, -9.207264407077849e-07, -1.2072839999026864e-08, 2.00000534484636, -0.9339808384185542, -0.99993874155328, -0.011296198159800002, 0.1160331428972, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.2845278497926997e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0100486700426, 0.934094659031658, -1.0000005541115606, -0.017561753920600002, -0.9339808384185542, 2.8726419021235463, -1.0697149699900357e-06, -1.616409999940078e-08, -1.0000027719382, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.9980260384286003e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.011296071153000001, -0.99993874155328, -1.0697149699900357e-06, 2.0000053454934896, -8.975440000968639e-09, -0.10528683554559999, -0.99954238235, 0.0303235795, -0.1191099666, 0.0, 0.0, 0.0, 4.140369570340001e-13, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.99993668877, -0.011296198159800002, -1.616409999940078e-08, -8.975440000968639e-09, 2.0000106738750345, -0.9518994078123799, -0.030323718273600003, -0.999545264028, 0.9871093917243999, 0.0, 0.0, 0.0, 1.1331977702936004e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.9506491057800001, 0.1160331428972, -1.0000027719382, -0.10528683554559999, -0.9518994078123799, 2.9171953893450002, 3.263000001742059e-09, 4.170499999883448e-08, -0.999998816292, 0.0, 0.0, 0.0, 4.684283173199999e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.99954238235, -0.030323718273600003, 3.263000001742059e-09, 2.00000855740785, 5.990404000059555e-08, 0.08912230578610002, -0.9994200920399999, -0.034140799470999995, 0.08787488487799999, -5.794579537031001e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0303235795, -0.999545264028, 4.170499999883448e-08, 5.990404000059555e-08, 2.0000104830176095, -0.9902631225781999, 0.034140755598, -0.9994211577233, 1.0057712619994, -5.274576233610199e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.1191099666, 0.9871093917243999, -0.999998816292, 0.08912230578610002, -0.9902631225781999, 2.9885615333113296, 6.667520000750517e-08, 8.786910001135609e-09, -0.99999985780518, 3.6115784216246198e-12, 
};
float step74_node7_M_correct_data[] = {
1.08971, 0.00294426, 0.00600605, 0.0203832, -0.917449, 0.974457, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.26225e-08, 
0.0, 1.0285, -0.180401, 0.971987, 0.0242225, 0.0275816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.97678e-07, 
0.0, 0.0, 1.32375, 0.13237, 0.00746367, -0.756094, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.03426e-07, 
0.0, 0.0, 0.0, 1.01848, -0.00572561, 0.106264, -0.981845, 0.00430274, -0.0161942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.26871e-07, 
0.0, 0.0, 0.0, 0.0, 1.07592, -0.149938, -0.00929797, -0.929402, 0.944932, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.38031e-08, 
0.0, 0.0, 0.0, 0.0, 0.0, 1.2541, 0.0820832, -0.111482, -0.683036, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.79218e-08, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01447, 0.00466628, 0.060119, -0.985711, 0.00650749, -0.0324992, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.1647e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.06007, -0.202784, -0.00188862, -0.943344, 0.95001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.9746e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.27658, 0.0461209, -0.150156, -0.630904, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.4916e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01304, 0.0114095, 0.0248546, -0.986232, 0.0421132, -0.0310218, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.77992e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.04278, -0.1973, -0.0301214, -0.958565, 0.986816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.2374e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.29376, 0.0143531, -0.146991, -0.621853, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.06372e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01303, 0.0145799, -0.00437593, -0.987104, 0.00793999, 0.00991942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -3.17457e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.02838, -0.168409, 0.00617326, -0.972486, 0.908176, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.87763e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.29202, -0.00253856, -0.126733, -0.655572, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.21185e-13, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01271, 0.0133496, -0.0148521, -0.0111543, 0.987387, -0.938718, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -4.29158e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01881, -0.131286, -0.981331, -0.0240255, 0.126191, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.1847e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.26512, -0.101968, 0.00909838, -0.788366, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.29392e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01315, -0.0114846, -0.071372, -0.986569, 0.02993, -0.117564, 0.0, 0.0, 0.0, 5.51351e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01207, -0.01545, -0.0411573, -0.987285, 0.974003, 0.0, 0.0, 0.0, 5.48061e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.18035, -0.0601934, -0.0111131, -0.841565, 0.0, 0.0, 0.0, 1.27056e-12, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01063, -0.011651, -0.0370383, -0.988908, -0.0337817, 0.0869506, -5.25168e-14, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.01199, -0.0344962, 0.022351, -0.987969, 0.994856, -1.49839e-14, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.14685, -0.0312651, -0.0308082, -0.839221, -1.00842e-14, 
};


const int step74_node8_num_factors = 3;
const bool step74_node8_marked = true;
const bool step74_node8_fixed = false;
int step74_node8_factor_height[] = {step74_factor338_height, step74_factor341_height, step74_factor340_height, };
int step74_node8_factor_width[] = {step74_factor338_width, step74_factor341_width, step74_factor340_width, };
int* step74_node8_factor_ridx[] = {step74_factor338_ridx, step74_factor341_ridx, step74_factor340_ridx, };
float* step74_node8_factor_data[] = {step74_factor338_data, step74_factor341_data, step74_factor340_data, };
int step74_node8_factor_num_blks[] = {step74_factor338_num_blks, step74_factor341_num_blks, step74_factor340_num_blks, };
int* step74_node8_factor_A_blk_start[] = {step74_factor338_A_blk_start, step74_factor341_A_blk_start, step74_factor340_A_blk_start, };
int* step74_node8_factor_B_blk_start[] = {step74_factor338_B_blk_start, step74_factor341_B_blk_start, step74_factor340_B_blk_start, };
int* step74_node8_factor_blk_width[] = {step74_factor338_blk_width, step74_factor341_blk_width, step74_factor340_blk_width, };
const int step74_node8_parent = 9;
const int step74_node8_height = 7;
const int step74_node8_width = 6;
float step74_node8_data[] = {
0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 
};
const int step74_node8_num_blks = 0;
int step74_node8_A_blk_start[] = {};
int step74_node8_B_blk_start[] = {};
int step74_node8_blk_width[] = {};
const float step74_node8_H_correct_cond = 3649.5835730526223;
float step74_node8_H_correct_data[] = {
1.0205848576, -0.012288155264000001, -0.015974015904, -0.9996112649600001, -0.027894140736000002, 0.061397032928, 4.1267091712000003e-13, 
-0.012288155264000001, 1.02182416156496, -0.04821058656644, 0.0278941584964, -0.99960959515496, 0.92623395871908, 4.527054239032e-13, 
-0.015974015904, -0.04821058656644, 1.3176933985433001, 1.826491999760564e-08, 1.3404063999551313e-07, -0.99999765327677, 7.77918847821e-14, 
-0.9996112649600001, 0.0278941584964, 1.826491999760564e-08, 1.0000012292622, -9.080359996904475e-09, -0.0355365491525, -3.9692891887594e-13, 
-0.027894140736000002, -0.99960959515496, 1.3404063999551313e-07, -9.080359996904475e-09, 1.0000010587514099, -0.9275874511283859, -4.62390877302369e-13, 
0.061397032928, 0.92623395871908, -0.99999765327677, -0.0355365491525, -0.9275874511283859, 1.8616820484651897, 3.6089281874970137e-13, 
};
float step74_node8_M_correct_data[] = {
1.01024, -0.0121636, -0.0158121, -0.989479, -0.0276114, 0.0607747, 4.08488e-13, 
0.0, 1.01078, -0.0478867, 0.0156894, -0.989281, 0.917087, 4.52793e-13, 
0.0, 0.0, 1.1468, -0.0129878, -0.0416898, -0.832857, 9.23733e-14, 
0.0, 0.0, 0.0, 0.14324, -0.0861571, -0.00423614, 9.47399e-15, 
0.0, 0.0, 0.0, 0.0, 0.106774, -0.503299, 1.4e-14, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.264502, 1.82856e-14, 
};


const int step74_node9_num_factors = 0;
const bool step74_node9_marked = true;
const bool step74_node9_fixed = false;
int step74_node9_factor_height[] = {};
int step74_node9_factor_width[] = {};
int* step74_node9_factor_ridx[] = {};
float* step74_node9_factor_data[] = {};
int step74_node9_factor_num_blks[] = {};
int* step74_node9_factor_A_blk_start[] = {};
int* step74_node9_factor_B_blk_start[] = {};
int* step74_node9_factor_blk_width[] = {};
const int step74_node9_parent = -1;
const int step74_node9_height = 1;
const int step74_node9_width = 1;
float step74_node9_data[] = {
0, 
};
const int step74_node9_num_blks = 0;
int step74_node9_A_blk_start[] = {};
int step74_node9_B_blk_start[] = {};
int step74_node9_blk_width[] = {};
const float step74_node9_H_correct_cond = 1.0;
float step74_node9_H_correct_data[] = {
7.747593902500001e-26, 
};
float step74_node9_M_correct_data[] = {
-2.78345e-13, 
};


const int step74_nnodes = 10;
bool step74_node_marked[] = {false, false, false, false, false, false, false, step74_node7_marked, step74_node8_marked, step74_node9_marked, };
bool step74_node_fixed[] = {false, false, false, false, false, false, false, step74_node7_fixed, step74_node8_fixed, step74_node9_fixed, };
int step74_node_num_factors[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_num_factors, step74_node8_num_factors, step74_node9_num_factors, };
int* step74_node_factor_height[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_factor_height, step74_node8_factor_height, step74_node9_factor_height, };
int* step74_node_factor_width[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_factor_width, step74_node8_factor_width, step74_node9_factor_width, };
int** step74_node_factor_ridx[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_factor_ridx, step74_node8_factor_ridx, step74_node9_factor_ridx, };
float** step74_node_factor_data[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_factor_data, step74_node8_factor_data, step74_node9_factor_data, };
int* step74_node_factor_num_blks[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_factor_num_blks, step74_node8_factor_num_blks, step74_node9_factor_num_blks, };
int** step74_node_factor_A_blk_start[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_factor_A_blk_start, step74_node8_factor_A_blk_start, step74_node9_factor_A_blk_start, };
int** step74_node_factor_B_blk_start[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_factor_B_blk_start, step74_node8_factor_B_blk_start, step74_node9_factor_B_blk_start, };
int** step74_node_factor_blk_width[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_factor_blk_width, step74_node8_factor_blk_width, step74_node9_factor_blk_width, };
int step74_node_parent[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_parent, step74_node8_parent, step74_node9_parent, };
int step74_node_height[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_height, step74_node8_height, step74_node9_height, };
int step74_node_width[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_width, step74_node8_width, step74_node9_width, };
float* step74_node_data[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_data, step74_node8_data, step74_node9_data, };
int step74_node_num_blks[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_num_blks, step74_node8_num_blks, step74_node9_num_blks, };
int* step74_node_A_blk_start[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_A_blk_start, step74_node8_A_blk_start, step74_node9_A_blk_start, };
int* step74_node_B_blk_start[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_B_blk_start, step74_node8_B_blk_start, step74_node9_B_blk_start, };
int* step74_node_blk_width[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_blk_width, step74_node8_blk_width, step74_node9_blk_width, };
float step74_node_H_correct_cond[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_H_correct_cond, step74_node8_H_correct_cond, step74_node9_H_correct_cond, };
float* step74_node_H_correct_data[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_H_correct_data, step74_node8_H_correct_data, step74_node9_H_correct_data, };
float* step74_node_M_correct_data[] = {0, 0, 0, 0, 0, 0, 0, step74_node7_M_correct_data, step74_node8_M_correct_data, step74_node9_M_correct_data, };


