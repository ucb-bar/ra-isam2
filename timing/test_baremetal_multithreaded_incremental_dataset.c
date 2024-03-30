#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <float.h>
#include <pthread.h>

#include "cholesky.h"
#include "baremetal_tests/incremental_sphere2500_steps-300/incremental_dataset.h"

float** node_workspaces = NULL;
pthread_mutex_t* node_locks;
int* node_num_children;
int* node_done_children;

pthread_mutex_t queue_lock;
int node_ready_index = 0;
int node_ready_size = 0;
int* node_ready_queue;
int num_active_nodes = 0;

typedef struct worker_args_t {
    int thread_id;
    int step;
} worker_args;

void* worker(void* args_ptr) {
    worker_args* args = (worker_args*) args_ptr;
    int thread_id = args->thread_id;
    int step = args->step;
    int true_step = step + timestep_start;
    int nnodes = step_nnodes[step];

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
    float* node_H_correct_cond = step_node_H_correct_cond[step];
    float** node_H_correct_data = step_node_H_correct_data[step];
    float** node_M_correct_data = step_node_M_correct_data[step];

    int* node_num_factors = step_node_num_factors[step];
    int** node_factor_height = step_node_factor_height[step];
    int** node_factor_width = step_node_factor_width[step];
    float*** node_factor_data = step_node_factor_data[step];
    int** node_factor_num_blks = step_node_factor_num_blks[step];
    int*** node_factor_A_blk_start = step_node_factor_A_blk_start[step];
    int*** node_factor_B_blk_start = step_node_factor_B_blk_start[step];
    int*** node_factor_blk_width = step_node_factor_blk_width[step];

    while(true) {
        bool done_flag = false;
        bool wait_flag = false;
        int node = -1;
        pthread_mutex_lock(&queue_lock);

        if(node_ready_index < node_ready_size) {
            node = node_ready_queue[node_ready_index];
            node_ready_index++;
        }
        else if(node_ready_size == num_active_nodes) {
            done_flag = true;
        }
        else if(node_ready_size > num_active_nodes) {
            printf("thread %d: Ready queue size greater than active nodes!\n", thread_id);
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
            continue;
        }
            
        printf("thread %d node = %d\n", thread_id, node);

        double ERR_THRESH = FLT_EPSILON * node_H_correct_cond[node] * 100;

        // Technically we don't need to lock node because no two threads can
        // grab the same node. But lock it anyways

        pthread_mutex_lock(&node_locks[node]);

        bool marked = node_marked[node];
        bool fixed = node_fixed[node];

        if(!marked && !fixed) { continue; }

        int parent = node_parent[node];
        int H_h = node_height[node];
        int H_w = node_width[node];
        float* H_data = node_data[node];
        float* H_correct_data = node_H_correct_data[node];
        float* M_correct_data = node_M_correct_data[node];

        int num_factors = node_num_factors[node];
        int* factor_height = node_factor_height[node];
        int* factor_width = node_factor_width[node];
        float** factor_data = node_factor_data[node];
        int* factor_num_blks = node_factor_num_blks[node];
        int** factor_A_blk_start = node_factor_A_blk_start[node];
        int** factor_B_blk_start = node_factor_B_blk_start[node];
        int** factor_blk_width = node_factor_blk_width[node];

        if(node_workspaces[node] == NULL) {
            node_workspaces[node] = malloc(H_h * H_h * sizeof(float));
            memset(node_workspaces[node], 0, H_h * H_h * sizeof(float));
        }

        float* ABC = node_workspaces[node];
        
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
        for(int i = 0; i < num_factors; i++) {
            int h = factor_height[i];
            int w = factor_width[i];
            float* data = factor_data[i];

            int num_blks = factor_num_blks[i];
            int* A_blk_start = factor_A_blk_start[i];
            int* B_blk_start = factor_B_blk_start[i];
            int* blk_width = factor_blk_width[i];

            float* workspace = malloc(h * h * sizeof(float));
            memset(workspace, 0, h * h * sizeof(float));

            matmul(h, h, w, 
                   data, data, workspace,
                   h, h, h,
                   1, 1, 
                   true, false);


            sparse_matrix_add3_3(workspace, h, h, 
                                 ABC, H_h, H_h, 
                                 1, 
                                 num_blks, A_blk_start, B_blk_start, blk_width);

            free(workspace);
        }

        if(marked) {
            /**********************************************
             * Check H result
             **********************************************/
            int res = check_tril_result(ABC, H_correct_data, H_w, H_h, H_h, ERR_THRESH);

            // if(res != 0) {
            //     printf("H at step %d node %d is not correct. Check step-%d.h\n", true_step, node, true_step);
            //     exit(0);
            // }
            // else {
            //     printf("H at step %d passes check\n", true_step);
            // }


            // 2. Cholesky
            partial_factorization4(ABC, H_w, H_h);

            // 4. Copy [A B] back from workspace
            memcpy(H_data, ABC, H_w * H_h * sizeof(float));

            /**********************************************
             * Check M result
             **********************************************/
            res = check_tril_result(H_data, M_correct_data, H_w, H_h, H_h, ERR_THRESH);

            if(res != 0) {
                printf("M at step %d node %d is not correct. Check step-%d.h\n", true_step, node, true_step);
                exit(0);
            }
            else {
                printf("M at step %d passes check\n", true_step);
            }
        }
        else if(fixed) {
            // 2. LC = -LB LB^T
            int subdiag_h = H_h - H_w;
            float* LB = H_data + H_w;
            float* LC = ABC + H_w * (H_h + 1);

            matmul(subdiag_h, subdiag_h, H_w,
                   LB, LB, LC,
                   H_h, H_h, H_h,
                   -1, 1,
                   true, false);
        }

        // 3. Add LC to parent
        if(parent != nnodes - 1 && parent != -1) {

            // lock parent
            pthread_mutex_lock(&node_locks[parent]);


            int subdiag_h = H_h - H_w;
            float* C = ABC + H_w * (H_h + 1);
            int next_H_h = node_height[parent];
            int next_H_w = node_width[parent];

            if(node_workspaces[parent] == 0) {
                node_workspaces[parent] = malloc(next_H_h * next_H_h * sizeof(float));
                memset(node_workspaces[parent], 0, next_H_h * next_H_h * sizeof(float));
            }

            float* next_H_data = node_workspaces[parent];

            int num_blks = node_num_blks[node];
            int* A_blk_start = node_A_blk_start[node];
            int* B_blk_start = node_B_blk_start[node];
            int* blk_width = node_blk_width[node];

            sparse_matrix_add3_3(C, subdiag_h, H_h, 
                                 next_H_data, next_H_h, next_H_h, 
                                 1, 
                                 num_blks, A_blk_start, B_blk_start, blk_width);

            node_done_children[parent]++;
            if(node_done_children[parent] == node_num_children[parent]) {
                pthread_mutex_lock(&queue_lock);
                node_ready_queue[node_ready_size] = parent;
                node_ready_size++;
                pthread_mutex_unlock(&queue_lock);
            }

            pthread_mutex_unlock(&node_locks[parent]);
        }

        // 4. Free this nodes workspace
        free(node_workspaces[node]);
        node_workspaces[node] = NULL;

        pthread_mutex_unlock(&node_locks[node]);

    }

    pthread_exit(NULL);
}


int main() {
    for(int step = 0; step < num_timesteps; step++) {
        int true_step = step + timestep_start;
        printf("step = %d\n", true_step);

        int nnodes = step_nnodes[step];

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
        float* node_H_correct_cond = step_node_H_correct_cond[step];
        float** node_H_correct_data = step_node_H_correct_data[step];
        float** node_M_correct_data = step_node_M_correct_data[step];

        int* node_num_factors = step_node_num_factors[step];
        int** node_factor_height = step_node_factor_height[step];
        int** node_factor_width = step_node_factor_width[step];
        float*** node_factor_data = step_node_factor_data[step];
        int** node_factor_num_blks = step_node_factor_num_blks[step];
        int*** node_factor_A_blk_start = step_node_factor_A_blk_start[step];
        int*** node_factor_B_blk_start = step_node_factor_B_blk_start[step];
        int*** node_factor_blk_width = step_node_factor_blk_width[step];
        
        // node_num_children[node] gives the number of active children
        // in this node. When node_done_childre[node] == node_num_children[node]
        // then node is available to work on
        // Each node_locks[node] controls node_done_children[node] and node_workspaces[node]
        // queue_lock controls node_ready_queue
        pthread_mutex_init(&queue_lock, NULL);

        node_locks = malloc(nnodes * sizeof(pthread_mutex_t));
        node_num_children = malloc(nnodes * sizeof(int));
        node_done_children = malloc(nnodes * sizeof(int));
        node_ready_queue = malloc(nnodes * sizeof(int));
        memset(node_num_children, 0, nnodes * sizeof(int));
        memset(node_done_children, 0, nnodes * sizeof(int));

        num_active_nodes = 0;
        node_ready_size = 0;
        node_ready_index = 0;

        for(int node = 0; node < nnodes - 1; node++) {
            bool marked = node_marked[node];
            bool fixed = node_fixed[node];

            pthread_mutex_init(&node_locks[node], NULL);

            if(!marked && !fixed) { continue; }

            num_active_nodes++;

            if(node_num_children[node] == 0) {
                node_ready_queue[node_ready_size] = node;
                node_ready_size++;
            }

            int parent = node_parent[node];
            node_num_children[parent]++;
        }

        printf("active node size: %d\n", num_active_nodes);
        printf("num children: \n");
        for(int node = 0; node < nnodes - 1; node++) {
            printf("%d ", node_num_children[node]);
        }
        printf("\n");

        // This is used as workspaces for each node's ABC matrix
        // We will allocate a node's workspace when its first child
        // is done
        node_workspaces = malloc(nnodes * sizeof(float*));
        memset(node_workspaces, 0, nnodes * sizeof(float*));

        const int num_threads = 12;
        pthread_t threads[num_threads];
        worker_args args[num_threads];
        for(int thread = 0; thread < num_threads; thread++) {
            args[thread].thread_id = thread;
            args[thread].step = step;
            pthread_create(&threads[thread], NULL, worker, &args[thread]);
        }

        for(int thread = 0; thread < num_threads; thread++) {
            pthread_join(threads[thread], NULL);
        }

        for(int node = 0; node < nnodes - 1; node++) {
            pthread_mutex_destroy(&node_locks[node]);
        }
        pthread_mutex_destroy(&queue_lock);

        free(node_locks);
        free(node_num_children);
        free(node_done_children);
        free(node_ready_queue);
        free(node_workspaces);

        node_workspaces = NULL;
        node_ready_queue = NULL;
        node_done_children = NULL;
        node_num_children = NULL;
        node_locks = NULL;
    }

    printf("Passed :)\n");
}

