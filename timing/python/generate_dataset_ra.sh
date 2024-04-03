#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests
BUILD_DIR=$SCRIPT_DIR/../../build

# ========================== CHANGE HERE ========================== #
start_step=2
num_steps=300
print_values=0
num_threads=3
# ========================== END CHANGE HERE ========================== #

if [ $print_values -eq 1 ]
then
    dirname=sphere2500-ra-num_threads-${num_threads}-values

    mkdir -p ${HEADER_DIR}/${dirname}

    python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1)) 

else
    dirname=sphere2500-ra-num_threads-${num_threads}

    mkdir -p ${HEADER_DIR}/${dirname}

    python3 $SCRIPT_DIR/generate_dataset.py --indir $BUILD_DIR/${dirname} --outdir $HEADER_DIR/${dirname} --start_step $start_step --end_step $((${num_steps} - 1)) --no_values
fi


