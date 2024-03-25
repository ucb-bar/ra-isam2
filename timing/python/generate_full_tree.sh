#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests
BUILD_DIR=$SCRIPT_DIR/../../build

num_steps=150
# This number determines the dimension of the full matrix
# This number should be less than 3 * num_steps for 2D dataset
# And less than 6 * num_steps for 3D dataset
tree_size=300     

$BUILD_DIR/timing/testGtsamIncremental-treegen -f w10000 --num_steps $num_steps --tree_size $tree_size --tree_outfile $BUILD_DIR/tree.out 

python3 $SCRIPT_DIR/generate_full_tree.py --infile $BUILD_DIR/tree.out --outfile $HEADER_DIR/full_tree_w10000_${num_steps}_${tree_size}.h --seed 0

# exit


$BUILD_DIR/timing/testGtsamIncremental3D-treegen -f sphere2500 --num_steps $num_steps --tree_size $tree_size --tree_outfile $BUILD_DIR/tree.out 

python3 $SCRIPT_DIR/generate_full_tree.py --infile $BUILD_DIR/tree.out --outfile $HEADER_DIR/full_tree_sphere2500_${num_steps}_${tree_size}.h --seed 0


