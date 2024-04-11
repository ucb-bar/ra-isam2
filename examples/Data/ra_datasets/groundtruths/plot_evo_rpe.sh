#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)

TRAJ_DIR=$1

base=$(basename $TRAJ_DIR)

ref_file=$2
vio_file=${base}_vio_rpe.out
lc_file=${base}_lc_rpe.out

traj_files=$(ls $TRAJ_DIR/step-*_traj.txt)

num_traj=$(ls -1 $TRAJ_DIR/step-*_traj.txt | wc -l)

files_matched=0
step=0

echo "Writing VIO to $vio_file"
echo "" > $vio_file

echo "Writing LC to $lc_file"
echo "" > $lc_file

while [ $files_matched -lt $num_traj ]
do
  traj_file=$TRAJ_DIR/step-${step}_traj.txt
  lc_traj_file=$TRAJ_DIR/step-${step}_lc-traj.txt
  echo $traj_file 
  echo $files_matched 
  if [ -f ${traj_file} ]
  then
    ((files_matched+=1))

    linecount=$(wc -l < $traj_file)
    tmp_ref=$1_$linecount
    head -n $linecount $ref_file > $tmp_ref
    evo_rpe kitti $traj_file $tmp_ref >> $vio_file

    rm $tmp_ref

    linecount=$(wc -l < $lc_traj_file)
    tmp_ref=$1_$linecount
    head -n $linecount $ref_file > $tmp_ref
    evo_rpe kitti $lc_traj_file $tmp_ref >> $lc_file

    rm $tmp_ref
  fi
  ((step+=1))
done


