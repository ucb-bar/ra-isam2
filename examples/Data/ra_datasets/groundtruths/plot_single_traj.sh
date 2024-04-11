#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)

traj_file=$1
ref_file=$2

linecount=$(wc -l < $traj_file)
tmp_ref=$1_$linecount
head -n $linecount $ref_file > $tmp_ref

evo_traj kitti $traj_file $tmp_ref -p

rm $tmp_ref

