#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests
BUILD_DIR=$SCRIPT_DIR/../../build

# ========================== CHANGE HERE ========================== #
num_steps=300
vio_lag=10
vio_scale=0.9
# ========================== END CHANGE HERE ========================== #

dirname=vio_w10000_steps-${num_steps}_vio_lag-${vio_lag}

mkdir -p ${BUILD_DIR}/${dirname}

# $BUILD_DIR/timing/testGtsamIncremental-datasetgen -f w10000 --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${dirname}

mkdir -p ${HEADER_DIR}/${dirname}

# python3 $SCRIPT_DIR/generate_dataset_vio.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step 2 --end_step $((${num_steps} - 1)) --vio --vio_lag ${vio_lag} --vio_scale ${vio_scale}

# ========================== CHANGE HERE ========================== #
num_steps=300
vio_lag=10
vio_scale=0.9
# ========================== END CHANGE HERE ========================== #

dirname=vio_sphere2500_steps-${num_steps}_vio_lag-${vio_lag}

mkdir -p ${BUILD_DIR}/${dirname}

$BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f sphere2500 --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${dirname}

mkdir -p ${HEADER_DIR}/${dirname}

python3 $SCRIPT_DIR/generate_dataset_vio.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step 2 --end_step $((${num_steps} - 1)) --vio --vio_lag ${vio_lag} --vio_scale ${vio_scale}


