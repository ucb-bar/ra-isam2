#define ReRoCC 1
#define SPICA 1
#define MATADD ReRoCC

#define SPAD_TOTAL_BYTES (2048 * 1024)
#define NUM_CORE 12 // number of multithreading

#include "cholesky.h"
#include "baremetal_tests/incremental_w10000_steps-300/incremental_dataset.h"
#include "workload.h"

pthread_barrier_t barrier_global;
pthread_mutex_t ex_queue_mutex;

#define acc_CFGID 0
#define dma_CFGID 2 // assume 1 DMA
#define add_CFGID 3 

#define ACC_START 0
#define DMA_START 10
#define ADD_START 15

#define max_factor_height 13
#define max_factor_width 6

uint64_t thread_cycles[NUM_CORE] = {0};

struct thread_args{
    int cid, num_array, start_acc;
    int turn, step;
    uint64_t cycles;
};

bool slam_done = false; // later when doing with DNN

void *slam_thread(void *arg){
    //pthread_barrier_wait(&barrier_global);
    pthread_barrier_wait(&barrier_slam);
    struct thread_args * slam_args = (struct thread_args *) arg;
    int cid = slam_args->cid;
    int step = slam_args -> step;

    uint64_t* cycles;
    //printf("flushed \n"); 
    //fflush(stdout); 
    int turn = 0;
    pthread_barrier_wait(&barrier_slam);
    int avail_mem = SPAD_TOTAL_BYTES / NUM_CORE;
    float* AtA_workspace = (float*) malloc(avail_mem);

    step_processing(step, AtA_workspace, avail_mem, cid, acc_CFGID, dma_CFGID, add_CFGID, false);

    //slam_args->cycles = end - start;
    thread_cycles[cid] = 0;
    free(AtA_workspace);
    pthread_exit(NULL);
}

void *print_message(void *ptr){
    int cpu_id = sched_getcpu();
   // char *msg;
   // msg = (char *) ptr;
    printf("print msg - cpu_id: %d \n", cpu_id);
   // printf("%s \n", msg);
   return NULL;
}

int main() {
    int cpu_id;
    cpu_id = sched_getcpu();
    printf("main thread cpuid: %d \n", cpu_id);

    cpu_set_t cpuset[NUM_CORE];
    pthread_t thread[NUM_CORE];
    pthread_attr_t attr[NUM_CORE];
    for(int i = 0; i < NUM_CORE; i++)
	pthread_attr_init(&attr[i]);
    struct thread_args slam_args[NUM_CORE];

    printf("create threading \n");
    for(int i = 0; i < NUM_CORE; i++){
	  pthread_attr_setaffinity_np(&attr[i], sizeof(cpu_set_t), &cpuset[i]);
	  pthread_create(&thread[i], &attr[i], print_message, NULL);
    }

    for(int i = 0; i < NUM_CORE; i++){
      pthread_join(thread[i], NULL);
    }
    printf("thread joined after message printing\n");
    if (pthread_mutex_init(&queue_lock, NULL) != 0){
      printf("\n mutex init failed\n");
      return 1;
    }
    for(int n = 0; n < max_nnode; n++){
      if (pthread_mutex_init(&node_locks[n], NULL) != 0){
        printf("\n mutex init failed\n");
        return 1;
      } 
    }
    pthread_barrier_init(&barrier_slam, NULL, NUM_CORE);

    for(int step = 0; step < num_timesteps; step++){
      int truestep = step + timestep_start;
      printf("step %d\n", truestep);
      printf("node ready index: %d, node ready size: %d, num_active_nodes: %d\n", node_ready_index, node_ready_size, num_active_nodes);
      step_setup(step, NUM_CORE);
      for(int i = 0; i < NUM_CORE; i++){
          slam_args[i].cid = i;
          slam_args[i].step = step;
          pthread_create(&thread[i], NULL, slam_thread, &slam_args[i]);
      }
      for(int i = 0; i < NUM_CORE; i++)
          pthread_join(thread[i], NULL);
      
      step_free(step);
      for(int i = 0; i < NUM_CORE; i++){
          //printf("thread %d cycles: %llu\n", i, slam_args[i].cycles);
          printf("thread %d cycles: %llu\n", i, thread_cycles[i]);
          fflush(stdout);
      }
    }

    printf("end of test\n");
      for(int node = 0; node < max_nnode; node++) {
          pthread_mutex_destroy(&node_locks[node]);
      }
      pthread_mutex_destroy(&queue_lock);

    
    pthread_barrier_destroy(&barrier_slam);
    printf("==================================\n");
}
