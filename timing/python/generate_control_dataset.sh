#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests

N=12
M=4
num_agents=4
horizon=20

python3 $SCRIPT_DIR/generate_control_dataset.py --N $N --M $M --num_agents $num_agents --horizon $horizon --seed 0 --outfile $HEADER_DIR/control_N-${N}_M-${M}_num_agents-${num_agents}_horizon-${horizon}.h
