#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
SRC_DIR=$SCRIPT_DIR/..
BUILD_DIR=$SCRIPT_DIR/../../build
src=compute_relin_cost_per_node

cd $BUILD_DIR

cmake .. > /dev/null

make -j4 $src && ./timing/$src

