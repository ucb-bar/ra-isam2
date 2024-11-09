#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
PROJECT_DIR=$SCRIPT_DIR/..
EVAL_DIR=$PROJECT_DIR/examples/Data/ra_datasets/groundtruths

cd $EVAL_DIR

python3 calc_iape.py --infiles "
    VIO_sphere2_vio_lag-20-LC_sphere2_ape.out
    VIOLC_sphere2_vio_lag-20_lc_period-45-LC_sphere2_ape.out
    LRU_sphere2_num_threads-1_memsize-1M-LC_sphere2_ape.out
    LRU_sphere2_num_threads-1_cpu_memsize-500K-LC_sphere2_ape.out
    RA_sphere2_num_threads-2-LC_sphere2_ape.out
    RA_sphere2_num_threads-4-LC_sphere2_ape.out
    incremental_sphere2-LC_sphere2_ape.out
    "

python3 calc_iape.py --infiles "
    VIO_M3500a_vio_lag-20-LC_M3500a_ape.out
    VIOLC_M3500a_vio_lag-20_lc_period-65-LC_M3500a_ape.out
    RA_M3500a_num_threads-1_cpu-LC_M3500a_ape.out
    RA_M3500a_num_threads-1-LC_M3500a_ape.out
    RA_M3500a_num_threads-2-LC_M3500a_ape.out
    RA_M3500a_num_threads-4-LC_M3500a_ape.out
    incremental_M3500a-LC_M3500a_ape.out
    "

python3 calc_iape.py --infiles "
    VIO_CAB1-smallnoise_vio_lag-20-LC_CAB1-smallnoise_ape.out
    VIOLC_CAB1-smallnoise_vio_lag-20_lc_period-8-LC_CAB1-smallnoise_ape.out
    RA_CAB1-smallnoise_num_threads-1_cpu-LC_CAB1-smallnoise_ape.out
    RA_CAB1-smallnoise_num_threads-1-LC_CAB1-smallnoise_ape.out
    RA_CAB1-smallnoise_num_threads-2-LC_CAB1-smallnoise_ape.out
    RA_CAB1-smallnoise_num_threads-4-LC_CAB1-smallnoise_ape.out
    incremental_CAB1-smallnoise-LC_CAB1-smallnoise_ape.out
    "

python3 calc_iape.py --infiles "
    VIO_CAB7000-smallnoise_vio_lag-20-LC_CAB7000-smallnoise_ape.out
    VIOLC_CAB7000-smallnoise_vio_lag-20_lc_period-65-LC_CAB7000-smallnoise_ape.out
    RA_CAB7000-smallnoise_num_threads-1-LC_CAB7000-smallnoise_ape.out
    RA_CAB7000-smallnoise_num_threads-1_cpu-LC_CAB7000-smallnoise_ape.out
    RA_CAB7000-smallnoise_num_threads-2-LC_CAB7000-smallnoise_ape.out
    RA_CAB7000-smallnoise_num_threads-4-LC_CAB7000-smallnoise_ape.out
    incremental_CAB7000-smallnoise-LC_CAB7000-smallnoise_ape.out
    "
