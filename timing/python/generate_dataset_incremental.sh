#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests
BUILD_DIR=$SCRIPT_DIR/../../build

# $SCRIPT_DIR/build.sh

# # ========================== CHANGE HERE ========================== #
# start_step=2
# num_steps=300
# print_values=0
# dataset_start_step=2
# # ========================== END CHANGE HERE ========================== #
# 
# if [ $print_values -eq 1 ] 
# then
#     dirname=incremental_w10000_steps-${num_steps}-values
#     mkdir -p ${BUILD_DIR}/${dirname}
#     $BUILD_DIR/timing/testGtsamIncremental-datasetgen -f w10000 --print_values --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${dirname}
#     mkdir -p ${HEADER_DIR}/${dirname}
#     python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1))
# 
# else
#     dirname=incremental_w10000_steps-${num_steps}
#     mkdir -p ${BUILD_DIR}/${dirname}
#     $BUILD_DIR/timing/testGtsamIncremental-datasetgen -f w10000 --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${dirname}
#     mkdir -p ${HEADER_DIR}/${dirname}
#     python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${dirname} --no_values --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1))
# 
# fi


# ========================== CHANGE HERE ========================== #
# start_step=2
# num_steps=2500
# print_values=0
# relin_thresh=0.05
# period=25
# dataset_start_step=2
# # ========================== END CHANGE HERE ========================== #
# 
# if [ $print_values -eq 1 ]
# then
#     dirname=incremental_sphere2500_steps-${num_steps}-values
#     seed_dirname=${dirname}_seed
# 
#     mkdir -p ${BUILD_DIR}/${dirname}
#     mkdir -p ${BUILD_DIR}/${seed_dirname}
# 
#     # First generate seed
#     $BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f sphere2500 --relin_thresh $relin_thresh --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${seed_dirname}
# 
#     python3 $SCRIPT_DIR/generate_relin_keys_file.py --indir $BUILD_DIR/${seed_dirname} --outfile $HEADER_DIR/${dirname}_relin_keys --start_step $start_step --end_step $((${num_steps} - 1)) --no_values
# 
#     $BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f sphere2500 --print_values --relin_thresh 100000 --relin_keys_file ${HEADER_DIR}/${seed_dirname}_relin_keys --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${dirname}
# 
#     mkdir -p ${HEADER_DIR}/${dirname}
# 
#     python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1)) 
# 
# else
#     dirname=incremental_sphere2500_steps-${num_steps}_period-${period}
#     seed_dirname=${dirname}_seed
# 
#     mkdir -p ${BUILD_DIR}/${dirname}
#     mkdir -p ${BUILD_DIR}/${seed_dirname}
#     mkdir -p ${HEADER_DIR}/${dirname}
# 
#     # First generate seed
#     $BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f sphere2500 --relin_thresh $relin_thresh --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${seed_dirname}
# 
#     python3 $SCRIPT_DIR/generate_relin_keys_file.py --indir $BUILD_DIR/${seed_dirname} --outfile $HEADER_DIR/${dirname}_relin_keys --start_step $dataset_start_step --end_step $((${num_steps} - 1)) --no_values
# 
#     cp -rf ${BUILD_DIR}/${seed_dirname} ${BUILD_DIR}/${dirname}
# 
#     $BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f sphere2500 --relin_thresh 100000 --relin_keys_file ${HEADER_DIR}/${dirname}_relin_keys --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${dirname}
# 
#     python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1)) --period $period --no_values
# fi

# ========================== CHANGE HERE ========================== #
start_step=2
num_steps=464
print_values=0
relin_thresh=0.05
period=1
dataset_start_step=2
# ========================== END CHANGE HERE ========================== #

if [ $print_values -eq 1 ]
then
    dirname=incremental_CAB1_steps-${num_steps}-values
    seed_dirname=${dirname}_seed

    mkdir -p ${BUILD_DIR}/${dirname}
    mkdir -p ${BUILD_DIR}/${seed_dirname}

    # First generate seed
    $BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f ra_datasets/CAB_query_val_phone --relin_thresh $relin_thresh --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${seed_dirname}

    python3 $SCRIPT_DIR/generate_relin_keys_file.py --indir $BUILD_DIR/${seed_dirname} --outfile $HEADER_DIR/${dirname}_relin_keys --start_step $start_step --end_step $((${num_steps} - 1)) --no_values

    $BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f ra_datasets/CAB_query_val_phone --print_values --relin_thresh 100000 --relin_keys_file ${HEADER_DIR}/${seed_dirname}_relin_keys --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${dirname}

    mkdir -p ${HEADER_DIR}/${dirname}

    python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1)) 

else
    dirname=incremental_CAB1_steps-${num_steps}_period-${period}
    seed_dirname=${dirname}_seed

    mkdir -p ${BUILD_DIR}/${dirname}
    mkdir -p ${BUILD_DIR}/${seed_dirname}
    mkdir -p ${HEADER_DIR}/${dirname}

    # First generate seed
    $BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f ra_datasets/CAB_query_val_phone --relin_thresh $relin_thresh --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${seed_dirname}

    python3 $SCRIPT_DIR/generate_relin_keys_file.py --indir $BUILD_DIR/${seed_dirname} --outfile $HEADER_DIR/${dirname}_relin_keys --start_step $dataset_start_step --end_step $((${num_steps} - 1)) --no_values

    cp -rf ${BUILD_DIR}/${seed_dirname} ${BUILD_DIR}/${dirname}

    $BUILD_DIR/timing/testGtsamIncremental3D-datasetgen -f ra_datasets/CAB_query_val_phone --relin_thresh 100000 --relin_keys_file ${HEADER_DIR}/${dirname}_relin_keys --num_steps $num_steps --dataset_outdir ${BUILD_DIR}/${dirname}

    python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1)) --period $period --no_values
fi


