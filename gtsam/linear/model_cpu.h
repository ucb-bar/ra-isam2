// timing model


// predict AtA cycles for reconstruct (reorder)
uint64_t predict_AtA_reorder_cpu(int max_factor_height, int max_factor_width, int num_factor){
    return 650 * num_factor;
}

// predict AtA cycles for update
uint64_t predict_AtA_update_cpu(int max_factor_height, int max_factor_width, int num_factor, int supernode_width, int supernode_height){

  printf("Error in predict_AtA_update: Need to accounting for mem_scaling for thin factors\n");
  exit(1);

  return 0;
}

uint64_t predict_cholesky_cpu(int supernode_width, int supernode_height, int chol_tile_len, int gemm_tile_len, bool next_memset, int next_node_height){
  float coeff[10] = {1.65373657e+03, -2.38918499e+01, 1.33888740e+01, 4.69025751e-01, 9.34224109e+00, -5.56789572e+00, 2.62675273e-04, 8.02952256e-01, -8.06568765e-01, 2.73891458e-01};
  int height = supernode_height;
  int width = supernode_width;
  int height2 = height * height;
  int height3 = height2 * height;
  int width2 = width * width;
  int width3 = width2 * width;
  int v[10] = {1, height, width, height2, height * width, width2, height3, height2 * width, height * width2, width3};

  float total_time_ns = 0;
  for(int i = 0; i < 10; i++) {
    total_time_ns += coeff[i] * v[i];
  }
  
  return total_time_ns;
}

uint64_t predict_syrk_cpu(int supernode_width, int supernode_height, bool next_memset, int next_node_height){
  float coeff[10] = {299.86881276568994, -5.24163994e+01, 4.10575985e+01, -1.71389771e+00, 7.16825283e+00, -5.28874688e+00, 6.60525443e-03, 1.09309644e+00, -2.24439625e+00, 1.14414794e+00};
  int height = supernode_height;
  int width = supernode_width;
  int height2 = height * height;
  int height3 = height2 * height;
  int width2 = width * width;
  int width3 = width2 * width;
  int v[10] = {1, height, width, height2, height * width, width2, height3, height2 * width, height * width2, width3};

  float total_time_ns = 0;
  for(int i = 0; i < 10; i++) {
    total_time_ns += coeff[i] * v[i];
  }
  
  return total_time_ns;
}

uint64_t predict_node_add_cpu(int supernode_height, int supernode_width){
    printf("predict_add not supported\n");
    fflush(stdout);
    exit(0);
    return 0;
}

uint64_t predict_backsolve_cpu(int width, int height, int backsolve_block_len){
  float coeff[10] = {-212.1999, 1.04389529e+01, 1.56418275e+01, -9.15512962e-02, 1.19742329e+00, -1.14922036e+00, 2.90887172e-04, -1.15055647e-03, 2.10174624e-03, 5.84578705e-04};
  int height2 = height * height;
  int height3 = height2 * height;
  int width2 = width * width;
  int width3 = width2 * width;
  int v[10] = {1, height, width, height2, height * width, width2, height3, height2 * width, height * width2, width3};

  float total_time_ns = 0;
  for(int i = 0; i < 10; i++) {
    total_time_ns += coeff[i] * v[i];
  }
  
  return total_time_ns;
}

// Updated model used for augmenting profiled cycles
uint64_t predict_backsolve2_cpu(int width, int height, int backsolve_block_len){
    printf("predict_backsolve2 not supported\n");
    fflush(stdout);
    exit(0);
}

