#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)

traj_file1=$1
traj_file2=$2
ref_file=$3

linecount=$(wc -l < $traj_file1)
tmp_ref=$1_$linecount
head -n $linecount $ref_file > $tmp_ref

evo_traj kitti $traj_file1 $traj_file2 $tmp_ref -p

rm $tmp_ref

