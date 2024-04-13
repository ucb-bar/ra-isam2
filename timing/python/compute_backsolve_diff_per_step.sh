#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
SRC_DIR=$SCRIPT_DIR/..
BUILD_DIR=$SCRIPT_DIR/../../build
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests/incremental_CAB1_steps-464_period-1
infile=$HEADER_DIR/delta_diff_nodes
outfile=$HEADER_DIR/backsolve_diff_cycles
src=compute_backsolve_diff_per_step

cd $BUILD_DIR

cmake .. > /dev/null

make -j $src && ./timing/$src -f $infile -o $outfile

