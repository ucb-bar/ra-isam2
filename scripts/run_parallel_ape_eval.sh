#!/bin/bash

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
PROJECT_DIR=$SCRIPT_DIR/..
EVAL_DIR=$PROJECT_DIR/examples/Data/ra_datasets/groundtruths

cd $EVAL_DIR

# ./plot_evo_ape_with_ref.sh ../../../../build/incremental_sphere2 ../../../../build/LC_sphere2 &
# ./plot_evo_ape_with_ref.sh ../../../../build/LRU_sphere2_num_threads-1_memsize-1M ../../../../build/LC_sphere2 &
# ./plot_evo_ape_with_ref.sh ../../../../build/LRU_sphere2_num_threads-1_memsize-300K ../../../../build/LC_sphere2 &
# ./plot_evo_ape_with_ref.sh ../../../../build/LRU_sphere2_num_threads-1_memsize-400K ../../../../build/LC_sphere2 &
# ./plot_evo_ape_with_ref.sh ../../../../build/LRU_sphere2_num_threads-1_memsize-500K ../../../../build/LC_sphere2 &
# ./plot_evo_ape_with_ref.sh ../../../../build/LRU_sphere2_num_threads-1_cpu_memsize-400K ../../../../build/LC_sphere2 &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_sphere2_num_threads-1 ../../../../build/LC_sphere2 &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_sphere2_num_threads-2 ../../../../build/LC_sphere2 &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_sphere2_num_threads-4 ../../../../build/LC_sphere2 &
# ./plot_evo_ape_with_ref.sh ../../../../build/VIOLC_sphere2_vio_lag-20_lc_period-65 ../../../../build/LC_sphere2 &
# ./plot_evo_ape_with_ref.sh ../../../../build/VIO_sphere2_vio_lag-20 ../../../../build/LC_sphere2

# # Start a process for each of the following commands
# ./plot_evo_ape_with_ref.sh ../../../../build/incremental_CAB1-smallnoise ../../../../build/LC_CAB1-smallnoise &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_CAB1-smallnoise_num_threads-1_cpu ../../../../build/LC_CAB1-smallnoise &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_CAB1-smallnoise_num_threads-1 ../../../../build/LC_CAB1-smallnoise &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_CAB1-smallnoise_num_threads-2 ../../../../build/LC_CAB1-smallnoise &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_CAB1-smallnoise_num_threads-4 ../../../../build/LC_CAB1-smallnoise &
# ./plot_evo_ape_with_ref.sh ../../../../build/VIO_CAB1-smallnoise_vio_lag-20 ../../../../build/LC_CAB1-smallnoise &
# ./plot_evo_ape_with_ref.sh ../../../../build/VIOLC_CAB1-smallnoise_vio_lag-20_lc_period-8 ../../../../build/LC_CAB1-smallnoise 

# ./plot_evo_ape_with_ref.sh ../../../../build/incremental_M3500a ../../../../build/LC_M3500a &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_M3500a_num_threads-1_cpu ../../../../build/LC_M3500a &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_M3500a_num_threads-1 ../../../../build/LC_M3500a &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_M3500a_num_threads-2 ../../../../build/LC_M3500a &
# ./plot_evo_ape_with_ref.sh ../../../../build/RA_M3500a_num_threads-4 ../../../../build/LC_M3500a &
# ./plot_evo_ape_with_ref.sh ../../../../build/VIO_M3500a_vio_lag-20 ../../../../build/LC_M3500a &
# ./plot_evo_ape_with_ref.sh ../../../../build/VIOLC_M3500a_vio_lag-20_lc_period-65 ../../../../build/LC_M3500a

./plot_evo_ape_with_ref.sh ../../../../build/incremental_CAB7000-smallnoise ../../../../build/LC_CAB7000-smallnoise &
./plot_evo_ape_with_ref.sh ../../../../build/LRU_CAB7000-smallnoise_num_threads-1_cpu_memsize-500K ../../../../build/LC_CAB7000-smallnoise &
./plot_evo_ape_with_ref.sh ../../../../build/LRU_CAB7000-smallnoise_num_threads-1_cpu_memsize-600K ../../../../build/LC_CAB7000-smallnoise &
./plot_evo_ape_with_ref.sh ../../../../build/RA_CAB7000-smallnoise_num_threads-1 ../../../../build/LC_CAB7000-smallnoise &
./plot_evo_ape_with_ref.sh ../../../../build/RA_CAB7000-smallnoise_num_threads-2 ../../../../build/LC_CAB7000-smallnoise &
./plot_evo_ape_with_ref.sh ../../../../build/RA_CAB7000-smallnoise_num_threads-4 ../../../../build/LC_CAB7000-smallnoise &
./plot_evo_ape_with_ref.sh ../../../../build/VIO_CAB7000-smallnoise_vio_lag-20 ../../../../build/LC_CAB7000-smallnoise &
./plot_evo_ape_with_ref.sh ../../../../build/VIOLC_CAB7000-smallnoise_vio_lag-20_lc_period-65 ../../../../build/LC_CAB7000-smallnoise
