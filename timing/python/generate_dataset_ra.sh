#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests
BUILD_DIR=$SCRIPT_DIR/../../build


# ========================== CHANGE HERE ========================== #
start_step=900
num_steps=1000
print_values=0
num_threads=2
relin_thresh=0.02
src_dirname=sphere2500
dirname=sphere2500-num_threads-${num_threads}_${start_step}-${num_steps}
num_threads_file=$BUILD_DIR/num_threads_speech.txt

# ========================== END CHANGE HERE ========================== #

# python3 $SCRIPT_DIR/generate_num_threads_speech.py --rel_period 5 --outfile $num_threads_file

# $SCRIPT_DIR/build.sh

mkdir -p ${BUILD_DIR}/${src_dirname}

$BUILD_DIR/timing/testGtsamIncremental3D-ra -f sphere2500 --num_steps=$num_steps --relin_thresh $relin_thresh --num_threads $num_threads --dataset_outdir ${BUILD_DIR}/${src_dirname} --print_dataset 

if [ $print_values -eq 1 ]
then

    mkdir -p ${HEADER_DIR}/${dirname}

    python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${src_dirname} --outdir $HEADER_DIR/${dirname} --num_threads_file $num_threads_file --start_step $start_step --end_step $((${num_steps} - 1)) 

else

    mkdir -p ${HEADER_DIR}/${dirname}

    python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${src_dirname} --outdir $HEADER_DIR/${dirname} --num_threads_file $num_threads_file --start_step $start_step --end_step $((${num_steps} - 1)) --no_values
fi

# ========================== CHANGE HERE ========================== #
start_step=2
num_steps=464
print_values=0
num_threads=2
relin_thresh=0.01
src_dirname=CAB1-num_threads-${num_threads}
dirname=CAB1-num_threads-${num_threads}_${start_step}-${num_steps}

# ========================== END CHANGE HERE ========================== #

# python3 $SCRIPT_DIR/generate_num_threads_speech.py --rel_period 5 --outfile $num_threads_file

# $SCRIPT_DIR/build.sh

mkdir -p ${BUILD_DIR}/${src_dirname}

$BUILD_DIR/timing/testGtsamIncremental3D-ra -f CAB_query_val_phone --num_steps=$num_steps --relin_thresh $relin_thresh --num_threads $num_threads --dataset_outdir ${BUILD_DIR}/${src_dirname} --print_dataset 

if [ $print_values -eq 1 ]
then

    mkdir -p ${HEADER_DIR}/${dirname}

    python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${src_dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1)) 

else

    mkdir -p ${HEADER_DIR}/${dirname}

    python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${src_dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1)) --no_values
fi


