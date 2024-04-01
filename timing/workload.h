#ifndef WORKLOAD
#define WORKLOAD 1

#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <math.h>
#include <float.h>
#include <pthread.h>

#define max_nnode 1000

#define NUM_CHANNEL 4


float** node_arr = NULL;
//pthread_mutex_t* node_locks;
int* node_num_children;
int* node_done_children;

pthread_barrier_t barrier_slam;
pthread_mutex_t queue_lock;
pthread_mutex_t node_locks[max_nnode]; // to track parent node that is written
int node_ready_index = 0;
int node_ready_size = 0;
int* node_ready_queue;
int num_active_nodes = 0;
int curr_add_parent[NUM_CORE] = {0};
uint64_t* node_time; // TODO: AtA/cholesky breakdown 
uint64_t* AtA_time;
uint64_t* merge_time;
uint64_t* chol_time;
uint64_t* init_time;
int* node_thread;

// Define some Seah functions here
int tiling_AtA_nfactor(int nfactors, int max_height, int max_width, int avail_AtA_mem){
  int A_bytes = nfactors * max_height * max_width * sizeof(elem_t);
  int AtA_bytes = nfactors * max_height * max_height * sizeof(elem_t);
  int AtA_total_bytes = A_bytes + AtA_bytes;
  //printf("total AtA bytes: %d (A: %d, AtA: %d)\n", AtA_total_bytes, A_bytes, AtA_bytes);
  int tile_nfactor = nfactors;
  int num_tile = 1;
  while(AtA_total_bytes > avail_AtA_mem){
      num_tile ++;
      tile_nfactor = ceil_divide_int(nfactors, num_tile);
      A_bytes = tile_nfactor * max_height * max_width * sizeof(elem_t);
      AtA_bytes = tile_nfactor * max_height * max_height * sizeof(elem_t);
      AtA_total_bytes = A_bytes + AtA_bytes;
  }
  //printf("num nfactor tile: %d, nfactor tile: %d, AtA total bytes: %d\n", num_tile, tile_nfactor, AtA_total_bytes);
  return tile_nfactor;
}

void step_setup(int step, int num_max_thread){
  
  for(int i = 0; i < num_max_thread; i++){
    curr_add_parent[i] = -1;
  }
  int true_step = step + timestep_start;
  printf("step = %d\n", true_step);

  int nnodes = step_nnodes[step];

  bool* node_marked = step_node_marked[step];
  bool* node_fixed = step_node_fixed[step];

  int* node_parent = step_node_parent[step];
  int* node_height = step_node_height[step];

  int* node_num_factors = step_node_num_factors[step];
  
  node_num_children = malloc(nnodes * sizeof(int));
  node_done_children = malloc(nnodes * sizeof(int));
  node_ready_queue = malloc(nnodes * sizeof(int));
  memset(node_num_children, 0, nnodes * sizeof(int));
  memset(node_done_children, 0, nnodes * sizeof(int));
  
  node_time = malloc(nnodes*sizeof(uint64_t));
  memset(node_time, 0, nnodes*sizeof(uint64_t));
  init_time = malloc(nnodes*sizeof(uint64_t));
  AtA_time = malloc(nnodes*sizeof(uint64_t));
  merge_time = malloc(nnodes*sizeof(uint64_t));
  chol_time = malloc(nnodes*sizeof(uint64_t));
  node_thread = malloc(nnodes*sizeof(int));
  memset(node_thread, 0, nnodes*sizeof(int));

  num_active_nodes = 0;
  node_ready_size = 0;
  node_ready_index = 0; 

  for(int node = 0; node < nnodes - 1; node++) {
      bool marked = node_marked[node];
      bool fixed = node_fixed[node];

      if(!marked && !fixed) { continue; }

      num_active_nodes++;

      if(node_num_children[node] == 0) {
          node_ready_queue[node_ready_size] = node;
          node_ready_size++;
      }

      int parent = node_parent[node];
      node_num_children[parent]++;
  }

  node_arr = malloc(nnodes * sizeof(float*));
  memset(node_arr, 0, nnodes * sizeof(float*));
  
  printf("active node size: %d\n", num_active_nodes);
  printf("num children: \n");
  for(int node = 0; node < nnodes - 1; node++) {
      printf("%d ", node_num_children[node]);
  }
  printf("\n");
}

void step_free(int step){
   int nnode = step_nnodes[step];
   //free(node_locks);
   for(int node = 0; node < nnode; node++){
     if(node_time[node] != 0){
       printf("node %d total time: %llu\n", node, node_time[node]);
       printf("node %d init time: %llu\n", node, init_time[node]);
       printf("node %d AtA time: %llu\n", node, AtA_time[node]);
       printf("node %d chol time: %llu\n", node, chol_time[node]);
       printf("node %d merge time: %llu\n", node, merge_time[node]);
       printf("node %d processed by thread %d\n", node, node_thread[node]-10);
     }
   }
   free(merge_time);
   free(chol_time);
   free(init_time);
   free(node_time);
   free(AtA_time);
   free(node_thread);
  
   free(node_num_children);
   free(node_done_children);
   free(node_ready_queue);
   free(node_arr);

   node_arr = NULL;
   node_ready_queue = NULL;
   node_done_children = NULL;
   node_num_children = NULL;
   merge_time = NULL;
   chol_time = NULL;
   init_time = NULL;
   node_time = NULL;
   AtA_time = NULL;
   //node_locks = NULL;
}

void step_processing(int step, float* AtA_workspace, int avail_mem, int cid, int acc_cfgid, int dma_cfgid, int add_cfgid, bool skip){
  bool* node_marked = step_node_marked[step];
  bool* node_fixed = step_node_fixed[step];

  int* node_parent = step_node_parent[step];
  int* node_height = step_node_height[step];
  int* node_width = step_node_width[step];
  float** node_data = step_node_data[step];
  int* node_num_blks = step_node_num_blks[step];
  int** node_A_blk_start = step_node_A_blk_start[step];
  int** node_B_blk_start = step_node_B_blk_start[step];
  int** node_blk_width = step_node_blk_width[step];

  int* node_num_factors = step_node_num_factors[step];
  int** node_factor_height = step_node_factor_height[step];
  int** node_factor_width = step_node_factor_width[step];
  float*** node_factor_data = step_node_factor_data[step];
  int** node_factor_num_blks = step_node_factor_num_blks[step];
  int*** node_factor_A_blk_start = step_node_factor_A_blk_start[step];
  int*** node_factor_B_blk_start = step_node_factor_B_blk_start[step];
  int*** node_factor_blk_width = step_node_factor_blk_width[step];
  int nnodes = step_nnodes[step];
 
  uint64_t chol_start = 0, chol_end = 0, chol = 0;
  uint64_t merge_start = 0, merge_end = 0, merge = 0;
  uint64_t AtA_start = 0, AtA_end = 0, AtA = 0;
  uint64_t init_start = 0, init_end = 0, init = 0;
  // Setup
  bool granted = false;
  int channel = 0;
  int index = 0;
  uint64_t expected_cycles = 0; 
  //pthread_barrier_wait(&barrier_slam);

  // start processing
  while(true) {
    bool done_flag = false;
    bool wait_flag = false;
    int node = -1;
    pthread_mutex_lock(&queue_lock);

    if(node_ready_index < node_ready_size && !skip) {
        node = node_ready_queue[node_ready_index];
	//printf("thread %d got node %d\n", cid, node);
	//fflush(stdout);
        node_ready_index++;
    }
    else if(node_ready_size == num_active_nodes) {
        done_flag = true;
	//printf("thread %d done\n", cid);
	//fflush(stdout);
    }
    else if(node_ready_size > num_active_nodes) {
        printf("thread %d: Ready queue size greater than active nodes!\n", cid);
        exit(1);
    }
    else {
        wait_flag = true;
    }

    pthread_mutex_unlock(&queue_lock);

    if(done_flag) {
        break;
    }
    else if(wait_flag) {
	int random_number = 1;
	for(int t = 0; t < 10000; t++){
	   random_number *= 2;
	}
	//if(!skip)
	//  printf("thread %d waiting, %d, %d, %d\n", cid, node_ready_index, node_ready_size, num_active_nodes);
	//fflush(stdout);
        continue;
    }
        
    //printf("thread %d node = %d\n", cid, node);

    //pthread_mutex_lock(&node_locks[node]);
    bool marked = node_marked[node];
    bool fixed = node_fixed[node];

    if(!marked && !fixed) { 
       //pthread_mutex_unlock(&node_locks[node]);
       printf("this should not happen - thread %d node %d\n", cid, node);
       exit(1);
       //continue; 
    }

    int parent = node_parent[node];
    int H_h = node_height[node];
    int H_w = node_width[node];
    float* H_data = node_data[node];

    int num_factors = node_num_factors[node];
    int* factor_height = node_factor_height[node];
    int* factor_width = node_factor_width[node];
    float** factor_data = node_factor_data[node];
    int* factor_num_blks = node_factor_num_blks[node];
    int** factor_A_blk_start = node_factor_A_blk_start[node];
    int** factor_B_blk_start = node_factor_B_blk_start[node];
    int** factor_blk_width = node_factor_blk_width[node];
    
    // assign workspace
    if(node_arr[node] == 0) {
       node_arr[node] = (float*) malloc(H_h * H_h * sizeof(float));
       memset(node_arr[node], 0, H_h * H_h * sizeof(float));
    }
    init_time[node] = init_end - init_start;
    node_thread[node] += (cid+10);
    float* H_workspace = node_arr[node];
    
    // Marked nodes
    // 1. AtA
    // 2. Cholesky (partial_factorization)
    // 3. Add LC to parent
    // 4. Copy [A B] back from workspace
    // Fixed nodes
    // 1. AtA
    // 2. LC = -LB LB^T
    // 3. Add LC to parent
    // 4. Don't copy [A B] back from workspace

    // 1. AtA

    // AtA
    int tile_nfactor = tiling_AtA_nfactor(num_factors, max_factor_height, max_factor_width, avail_mem);
    //printf("num factors: %d, tile nfactor: %d\n", num_factors, tile_nfactor);
    //fflush(stdout);    

    // AtA workspace: AtA
    // workspace: A
    float* workspace = (float*) AtA_workspace + max_factor_height * max_factor_height * tile_nfactor;//node_nfactors[node];
    for(int f = 0; f < num_factors; f += tile_nfactor){
      int this_nfactors = f + tile_nfactor < num_factors ? tile_nfactor : num_factors - f;
      int dma_i = 0; // todo
      //workspace = (float*) base_addr;
      // tile_AtA_supernode_pointer(f, this_nfactors, max_factor_height, node_factor_height[node], node_factor_width[node], node_factor_data[node], H_h, H_w, NULL, H_workspace, (float*) AtA_workspace, (float*) workspace, factor_A_blk_start, factor_B_blk_start, factor_blk_width, factor_num_blks, dma_i, NUM_CHANNEL, acc_cfgid, dma_cfgid, add_cfgid);   
    }
    AtA_time[node] = AtA_end - AtA_start;

    // do memset background 
    //printf("thread %d width %d height %d\n", cid, H_w, H_h); 
    //fflush(stdout);    
    //int parent = node_parent[node];
    if(parent != -1 && parent != nnodes - 1){
       pthread_mutex_lock(&node_locks[parent]);
       if(node_arr[parent] ==0){
         int next_H_h = node_height[parent];
         node_arr[parent] = (float*) malloc(next_H_h * next_H_h * sizeof(float));
         memset(node_arr[parent], 0, next_H_h * next_H_h * sizeof(float));
       }
       pthread_mutex_unlock(&node_locks[parent]);
    }
    if(marked) { 
        // 2. Cholesky
        //partial_factorization4(H_workspace, H_w, H_h);
        channel = 0;
        int chol_block_size = H_w < CHOL_BLOCK_SIZE ? H_w : CHOL_BLOCK_SIZE;
        // full_workspace_partial_factorization(H_workspace, H_data, H_w, H_h, chol_block_size, channel, acc_cfgid, dma_cfgid);
      //partial_factorization4(ABC, H_w, H_h);

    }
    else if(fixed) {
        //printf("no cholesky, width %d height %d\n", H_w, H_h);
        // 2. LC = -LB LB^T
        int subdiag_h = H_h - H_w;
        float* LB = H_data + H_w;
        float* LC = H_workspace + H_w * (H_h + 1);

        tiled_matmul_auto(subdiag_h, subdiag_h, H_w,
                LB, LB, LC, LC,
                H_h, H_h, H_h, H_h,
                -1, 1, 1,
                NO_ACTIVATION, ACC_SCALE_IDENTITY, 0, false,
                true, false,
                false, false, 0, WS);
    }

    chol_time[node] = chol_end - chol_start;
   // printf("thread %d done cholesky\n", cid); 
   // fflush(stdout);    

    // 3. Add LC to parent
    if(parent != -1 && parent != nnodes - 1) {

      // lock parent
      pthread_mutex_lock(&node_locks[parent]);
      int subdiag_h = H_h - H_w;
      float* C = H_workspace + H_w * (H_h + 1);
      int next_H_h = node_height[parent];
      int next_H_w = node_width[parent];


      float* next_H_workspace = node_arr[parent];

      int next_num_blks = node_num_blks[node];
      int* A_blk_start = node_A_blk_start[node];
      int* B_blk_start = node_B_blk_start[node];
      int* next_blk_width = node_blk_width[node];
     
      // packed_dense_block_add(C, next_H_workspace, 
      //         H_h, next_H_h, next_blk_width,
      //         H_h, next_H_h,
      //         A_blk_start, B_blk_start, //C_blk, next_blk,
      //         next_num_blks, true);

      node_done_children[parent]++;
      if(node_done_children[parent] == node_num_children[parent]) {
          pthread_mutex_lock(&queue_lock);
          node_ready_queue[node_ready_size] = parent;
          node_ready_size++;
          pthread_mutex_unlock(&queue_lock);
      } 

      pthread_mutex_unlock(&node_locks[parent]);
    }
    free(H_workspace);
    node_arr[node] = NULL;
    //pthread_mutex_unlock(&node_locks[node]);

    merge_time[node] = merge_end - merge_start;
    node_time[node] = merge_time[node] + chol_time[node] + init_time[node] + AtA_time[node];
    //printf("node %d done\n", node); 
    //fflush(stdout);    
/*
    printf("node %d total cycles: %llu\n", node, AtA+chol+merge+init);
    printf("init cycles: %llu\n", init);
    printf("AtA cycles: %llu\n", AtA);
    printf("chol cycles: %llu\n", chol);
    printf("merge cycles: %llu\n", merge);
*/
  }
}

#endif
