#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests
BUILD_DIR=$SCRIPT_DIR/../../build

$SCRIPT_DIR/build.sh

# ========================== CHANGE HERE ========================== #
start_step=2
num_steps=300
# ========================== END CHANGE HERE ========================== #

dirname=incremental_w10000_steps-${num_steps}

mkdir -p ${BUILD_DIR}/${dirname}

$BUILD_DIR/timing/testGtsamIncremental-datasetgen -f w10000 --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${dirname}

mkdir -p ${HEADER_DIR}/${dirname}

python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1))

# ========================== CHANGE HERE ========================== #
start_step=2
num_steps=300
# ========================== END CHANGE HERE ========================== #

dirname=incremental_sphere2500_steps-${num_steps}
seed_dirname=${dirname}_seed

mkdir -p ${BUILD_DIR}/${dirname}
mkdir -p ${BUILD_DIR}/${seed_dirname}

# First generate seed
$BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f sphere2500 --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${seed_dirname}

$SCRIPT_DIR/generate_relin_keys_file.sh ${seed_dirname} $start_step $num_steps

$BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f sphere2500 --relin_thresh 100000 --relin_keys_file ${HEADER_DIR}/${seed_dirname}_relin_keys --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${dirname}

mkdir -p ${HEADER_DIR}/${dirname}

python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1)) 


