#!/bin/bash

set -e

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
PROJECT_DIR="$(dirname "$SCRIPT_DIR")"
PYTHON_DIR="$PROJECT_DIR/timing/python"
CONFIG_DIR="$PYTHON_DIR/configs"

cd $PYTHON_DIR
no_recompile=''

configs=$(ls $CONFIG_DIR/*.yaml)
for config in $configs
do
    python run_generate_dataset.py --config $config -y $no_recompile
    no_recompile='--no-recompile'
done
