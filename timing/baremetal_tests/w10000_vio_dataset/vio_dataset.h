#pragma once

#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-2.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-3.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-4.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-5.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-6.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-7.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-8.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-9.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-10.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-11.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-12.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-13.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-14.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-15.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-16.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-17.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-18.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-19.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-20.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-21.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-22.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-23.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-24.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-25.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-26.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-27.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-28.h"
#include "/home/ubuntu/igo-gtsam-treegen/timing/baremetal_tests/w10000_vio_dataset/step-29.h"


const int timestep_start = 2;

const int num_timesteps = 28;

bool step_is_reconstruct[] = {step2_is_reconstruct, step3_is_reconstruct, step4_is_reconstruct, step5_is_reconstruct, step6_is_reconstruct, step7_is_reconstruct, step8_is_reconstruct, step9_is_reconstruct, step10_is_reconstruct, step11_is_reconstruct, step12_is_reconstruct, step13_is_reconstruct, step14_is_reconstruct, step15_is_reconstruct, step16_is_reconstruct, step17_is_reconstruct, step18_is_reconstruct, step19_is_reconstruct, step20_is_reconstruct, step21_is_reconstruct, step22_is_reconstruct, step23_is_reconstruct, step24_is_reconstruct, step25_is_reconstruct, step26_is_reconstruct, step27_is_reconstruct, step28_is_reconstruct, step29_is_reconstruct, };

const int step_num_factors[] = {step2_num_factors, step3_num_factors, step4_num_factors, step5_num_factors, step6_num_factors, step7_num_factors, step8_num_factors, step9_num_factors, step10_num_factors, step11_num_factors, step12_num_factors, step13_num_factors, step14_num_factors, step15_num_factors, step16_num_factors, step17_num_factors, step18_num_factors, step19_num_factors, step20_num_factors, step21_num_factors, step22_num_factors, step23_num_factors, step24_num_factors, step25_num_factors, step26_num_factors, step27_num_factors, step28_num_factors, step29_num_factors, };

const int* step_factor_height[] = {step2_factor_height, step3_factor_height, step4_factor_height, step5_factor_height, step6_factor_height, step7_factor_height, step8_factor_height, step9_factor_height, step10_factor_height, step11_factor_height, step12_factor_height, step13_factor_height, step14_factor_height, step15_factor_height, step16_factor_height, step17_factor_height, step18_factor_height, step19_factor_height, step20_factor_height, step21_factor_height, step22_factor_height, step23_factor_height, step24_factor_height, step25_factor_height, step26_factor_height, step27_factor_height, step28_factor_height, step29_factor_height, };

const int* step_factor_width[] = {step2_factor_width, step3_factor_width, step4_factor_width, step5_factor_width, step6_factor_width, step7_factor_width, step8_factor_width, step9_factor_width, step10_factor_width, step11_factor_width, step12_factor_width, step13_factor_width, step14_factor_width, step15_factor_width, step16_factor_width, step17_factor_width, step18_factor_width, step19_factor_width, step20_factor_width, step21_factor_width, step22_factor_width, step23_factor_width, step24_factor_width, step25_factor_width, step26_factor_width, step27_factor_width, step28_factor_width, step29_factor_width, };

int** step_factor_ridx[] = {step2_factor_ridx, step3_factor_ridx, step4_factor_ridx, step5_factor_ridx, step6_factor_ridx, step7_factor_ridx, step8_factor_ridx, step9_factor_ridx, step10_factor_ridx, step11_factor_ridx, step12_factor_ridx, step13_factor_ridx, step14_factor_ridx, step15_factor_ridx, step16_factor_ridx, step17_factor_ridx, step18_factor_ridx, step19_factor_ridx, step20_factor_ridx, step21_factor_ridx, step22_factor_ridx, step23_factor_ridx, step24_factor_ridx, step25_factor_ridx, step26_factor_ridx, step27_factor_ridx, step28_factor_ridx, step29_factor_ridx, };

float** step_factor_data[] = {step2_factor_data, step3_factor_data, step4_factor_data, step5_factor_data, step6_factor_data, step7_factor_data, step8_factor_data, step9_factor_data, step10_factor_data, step11_factor_data, step12_factor_data, step13_factor_data, step14_factor_data, step15_factor_data, step16_factor_data, step17_factor_data, step18_factor_data, step19_factor_data, step20_factor_data, step21_factor_data, step22_factor_data, step23_factor_data, step24_factor_data, step25_factor_data, step26_factor_data, step27_factor_data, step28_factor_data, step29_factor_data, };

int* step_factor_num_blks[] = {step2_factor_num_blks, step3_factor_num_blks, step4_factor_num_blks, step5_factor_num_blks, step6_factor_num_blks, step7_factor_num_blks, step8_factor_num_blks, step9_factor_num_blks, step10_factor_num_blks, step11_factor_num_blks, step12_factor_num_blks, step13_factor_num_blks, step14_factor_num_blks, step15_factor_num_blks, step16_factor_num_blks, step17_factor_num_blks, step18_factor_num_blks, step19_factor_num_blks, step20_factor_num_blks, step21_factor_num_blks, step22_factor_num_blks, step23_factor_num_blks, step24_factor_num_blks, step25_factor_num_blks, step26_factor_num_blks, step27_factor_num_blks, step28_factor_num_blks, step29_factor_num_blks, };

int** step_factor_A_blk_start[] = {step2_factor_A_blk_start, step3_factor_A_blk_start, step4_factor_A_blk_start, step5_factor_A_blk_start, step6_factor_A_blk_start, step7_factor_A_blk_start, step8_factor_A_blk_start, step9_factor_A_blk_start, step10_factor_A_blk_start, step11_factor_A_blk_start, step12_factor_A_blk_start, step13_factor_A_blk_start, step14_factor_A_blk_start, step15_factor_A_blk_start, step16_factor_A_blk_start, step17_factor_A_blk_start, step18_factor_A_blk_start, step19_factor_A_blk_start, step20_factor_A_blk_start, step21_factor_A_blk_start, step22_factor_A_blk_start, step23_factor_A_blk_start, step24_factor_A_blk_start, step25_factor_A_blk_start, step26_factor_A_blk_start, step27_factor_A_blk_start, step28_factor_A_blk_start, step29_factor_A_blk_start, };

int** step_factor_B_blk_start[] = {step2_factor_B_blk_start, step3_factor_B_blk_start, step4_factor_B_blk_start, step5_factor_B_blk_start, step6_factor_B_blk_start, step7_factor_B_blk_start, step8_factor_B_blk_start, step9_factor_B_blk_start, step10_factor_B_blk_start, step11_factor_B_blk_start, step12_factor_B_blk_start, step13_factor_B_blk_start, step14_factor_B_blk_start, step15_factor_B_blk_start, step16_factor_B_blk_start, step17_factor_B_blk_start, step18_factor_B_blk_start, step19_factor_B_blk_start, step20_factor_B_blk_start, step21_factor_B_blk_start, step22_factor_B_blk_start, step23_factor_B_blk_start, step24_factor_B_blk_start, step25_factor_B_blk_start, step26_factor_B_blk_start, step27_factor_B_blk_start, step28_factor_B_blk_start, step29_factor_B_blk_start, };

int** step_factor_blk_width[] = {step2_factor_blk_width, step3_factor_blk_width, step4_factor_blk_width, step5_factor_blk_width, step6_factor_blk_width, step7_factor_blk_width, step8_factor_blk_width, step9_factor_blk_width, step10_factor_blk_width, step11_factor_blk_width, step12_factor_blk_width, step13_factor_blk_width, step14_factor_blk_width, step15_factor_blk_width, step16_factor_blk_width, step17_factor_blk_width, step18_factor_blk_width, step19_factor_blk_width, step20_factor_blk_width, step21_factor_blk_width, step22_factor_blk_width, step23_factor_blk_width, step24_factor_blk_width, step25_factor_blk_width, step26_factor_blk_width, step27_factor_blk_width, step28_factor_blk_width, step29_factor_blk_width, };

const int step_vio_node_height[] = {step2_vio_node_height, step3_vio_node_height, step4_vio_node_height, step5_vio_node_height, step6_vio_node_height, step7_vio_node_height, step8_vio_node_height, step9_vio_node_height, step10_vio_node_height, step11_vio_node_height, step12_vio_node_height, step13_vio_node_height, step14_vio_node_height, step15_vio_node_height, step16_vio_node_height, step17_vio_node_height, step18_vio_node_height, step19_vio_node_height, step20_vio_node_height, step21_vio_node_height, step22_vio_node_height, step23_vio_node_height, step24_vio_node_height, step25_vio_node_height, step26_vio_node_height, step27_vio_node_height, step28_vio_node_height, step29_vio_node_height, };
const int step_vio_node_width[] = {step2_vio_node_width, step3_vio_node_width, step4_vio_node_width, step5_vio_node_width, step6_vio_node_width, step7_vio_node_width, step8_vio_node_width, step9_vio_node_width, step10_vio_node_width, step11_vio_node_width, step12_vio_node_width, step13_vio_node_width, step14_vio_node_width, step15_vio_node_width, step16_vio_node_width, step17_vio_node_width, step18_vio_node_width, step19_vio_node_width, step20_vio_node_width, step21_vio_node_width, step22_vio_node_width, step23_vio_node_width, step24_vio_node_width, step25_vio_node_width, step26_vio_node_width, step27_vio_node_width, step28_vio_node_width, step29_vio_node_width, };
const int step_vio_marginal_width[] = {step2_vio_marginal_width, step3_vio_marginal_width, step4_vio_marginal_width, step5_vio_marginal_width, step6_vio_marginal_width, step7_vio_marginal_width, step8_vio_marginal_width, step9_vio_marginal_width, step10_vio_marginal_width, step11_vio_marginal_width, step12_vio_marginal_width, step13_vio_marginal_width, step14_vio_marginal_width, step15_vio_marginal_width, step16_vio_marginal_width, step17_vio_marginal_width, step18_vio_marginal_width, step19_vio_marginal_width, step20_vio_marginal_width, step21_vio_marginal_width, step22_vio_marginal_width, step23_vio_marginal_width, step24_vio_marginal_width, step25_vio_marginal_width, step26_vio_marginal_width, step27_vio_marginal_width, step28_vio_marginal_width, step29_vio_marginal_width, };

const float vio_scale = 0.9;

const int vio_node_max_height = 19;
const int vio_node_max_width = 18;
float vio_node_data[] = {
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
};

float step_H_correct_cond[] = {step2_H_correct_cond, step3_H_correct_cond, step4_H_correct_cond, step5_H_correct_cond, step6_H_correct_cond, step7_H_correct_cond, step8_H_correct_cond, step9_H_correct_cond, step10_H_correct_cond, step11_H_correct_cond, step12_H_correct_cond, step13_H_correct_cond, step14_H_correct_cond, step15_H_correct_cond, step16_H_correct_cond, step17_H_correct_cond, step18_H_correct_cond, step19_H_correct_cond, step20_H_correct_cond, step21_H_correct_cond, step22_H_correct_cond, step23_H_correct_cond, step24_H_correct_cond, step25_H_correct_cond, step26_H_correct_cond, step27_H_correct_cond, step28_H_correct_cond, step29_H_correct_cond, };
float* step_H_correct_data[] = {step2_H_correct_data, step3_H_correct_data, step4_H_correct_data, step5_H_correct_data, step6_H_correct_data, step7_H_correct_data, step8_H_correct_data, step9_H_correct_data, step10_H_correct_data, step11_H_correct_data, step12_H_correct_data, step13_H_correct_data, step14_H_correct_data, step15_H_correct_data, step16_H_correct_data, step17_H_correct_data, step18_H_correct_data, step19_H_correct_data, step20_H_correct_data, step21_H_correct_data, step22_H_correct_data, step23_H_correct_data, step24_H_correct_data, step25_H_correct_data, step26_H_correct_data, step27_H_correct_data, step28_H_correct_data, step29_H_correct_data, };
float* step_M_correct_data[] = {step2_M_correct_data, step3_M_correct_data, step4_M_correct_data, step5_M_correct_data, step6_M_correct_data, step7_M_correct_data, step8_M_correct_data, step9_M_correct_data, step10_M_correct_data, step11_M_correct_data, step12_M_correct_data, step13_M_correct_data, step14_M_correct_data, step15_M_correct_data, step16_M_correct_data, step17_M_correct_data, step18_M_correct_data, step19_M_correct_data, step20_M_correct_data, step21_M_correct_data, step22_M_correct_data, step23_M_correct_data, step24_M_correct_data, step25_M_correct_data, step26_M_correct_data, step27_M_correct_data, step28_M_correct_data, step29_M_correct_data, };

