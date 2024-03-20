#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests
BUILD_DIR=$SCRIPT_DIR/../../build

num_steps=300
# This number determines the dimension of the full matrix
# This number should be less than 3 * num_steps for 2D dataset
# And less than 6 * num_steps for 3D dataset
tree_size=500     

$BUILD_DIR/timing/testGtsamIncremental-treegen -f w10000 --num_steps $num_steps --tree_size $tree_size --tree_outfile $BUILD_DIR/tree.out 

python3 $SCRIPT_DIR/generate_full_tree_backsolve.py --infile $BUILD_DIR/tree.out --outfile $HEADER_DIR/full_tree_backsolve_w10000_${num_steps}_${tree_size}.h --seed 0

$BUILD_DIR/timing/testGtsamIncremental3D-treegen -f sphere2500 --num_steps $num_steps --tree_size $tree_size --tree_outfile $BUILD_DIR/tree.out 

python3 $SCRIPT_DIR/generate_full_tree_backsolve.py --infile $BUILD_DIR/tree.out --outfile $HEADER_DIR/full_tree_backsolve_sphere2500_${num_steps}_${tree_size}.h --seed 0


