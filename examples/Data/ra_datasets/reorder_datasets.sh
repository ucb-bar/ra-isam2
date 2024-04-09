#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)

files=$(ls ${SCRIPT_DIR}/*.{graph,g2o} 2>/dev/null)

for file in $files
do
    echo $file
    tmp_fname=reordered_$(basename ${file})
    python3 reorder_datasets.py --infile $file --outfile $tmp_fname
    mv $tmp_fname $file
done
