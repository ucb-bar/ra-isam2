#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
PROJECT_DIR=$SCRIPT_DIR/..
EVAL_DIR=$PROJECT_DIR/examples/Data/ra_datasets/groundtruths
OUTPUT_DIR=$PROJECT_DIR/outputs

mkdir -p $OUTPUT_DIR

cd $EVAL_DIR

python3 $EVAL_DIR/plot_traj_ape0.py --infiles "
    VIOLC_sphere2_vio_lag-20_lc_period-45-LC_sphere2_ape.out \
    RA_sphere2_num_threads-1-LC_sphere2_ape.out \
    RA_sphere2_num_threads-2-LC_sphere2_ape.out \
    RA_sphere2_num_threads-4-LC_sphere2_ape.out \
    incremental_sphere2-LC_sphere2_ape.out" \
    --labels="VIO+LC RA1S RA2S RA4S In" --outfile $OUTPUT_DIR/sphere2500_traj_ape.pdf

python3 $EVAL_DIR/plot_traj_ape0.py --infiles "
  VIOLC_CAB7000-smallnoise_vio_lag-20_lc_period-65-LC_CAB7000-smallnoise_ape.out \
  RA_CAB7000-smallnoise_num_threads-1-LC_CAB7000-smallnoise_ape.out \
  RA_CAB7000-smallnoise_num_threads-2-LC_CAB7000-smallnoise_ape.out \
  RA_CAB7000-smallnoise_num_threads-4-LC_CAB7000-smallnoise_ape.out \
  incremental_CAB7000-smallnoise-LC_CAB7000-smallnoise_ape.out" \
    --labels="VIO+LC RA1S RA2S RA4S In" --outfile $OUTPUT_DIR/CAB2_traj_ape.pdf

