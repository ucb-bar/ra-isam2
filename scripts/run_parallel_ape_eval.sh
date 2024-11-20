#!/bin/bash

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
PROJECT_DIR=$SCRIPT_DIR/..
BUILD_DIR=$PROJECT_DIR/build
EVAL_DIR=$PROJECT_DIR/examples/Data/ra_datasets/groundtruths

evo_config set --config $PROJECT_DIR/evo_config.yaml

cd $EVAL_DIR

dataset="sphere2 CAB1-smallnoise M3500a CAB7000-smallnoise"

for d in $dataset
do
    echo "Processing $d"
    logs="$(ls $BUILD_DIR/*$d*.log)"
    echo "Logs: $logs"
    lc_run=""
    for log in $logs
    do
        # Check if "LC_" is in the log file name and *VIO* is not
        if [[ $log == *LC_* && $log != *VIO* ]]; then
            lc_run=$(basename $log .log)
            break
        fi
    done
    if [ -z "$lc_run" ]; then
        echo "No LC run found for $d"
        continue
    else
        echo "LC run found: $lc_run"
    fi
    for log in $logs
    do
        if [[ $log == "$lc_run" ]]; then
            continue
        fi
        run=$(basename $log .log)
        echo "Processing $run"
        ./plot_evo_ape_with_ref.sh $BUILD_DIR/$run $BUILD_DIR/$lc_run &
    done
    wait
done
