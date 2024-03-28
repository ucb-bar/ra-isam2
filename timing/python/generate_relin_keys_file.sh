#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests
BUILD_DIR=$SCRIPT_DIR/../../build

# $SCRIPT_DIR/build.sh

# ========================== CHANGE HERE ========================== #
start_step=2    # This is dataset dependent
num_steps=280
# ========================== END CHANGE HERE ========================== #

dirname=$1
start_step=$2
num_steps=$3

python3 $SCRIPT_DIR/generate_relin_keys_file.py --indir $BUILD_DIR/${dirname} --outfile $HEADER_DIR/${dirname}_relin_keys --start_step $start_step --end_step $((${num_steps} - 1)) 


