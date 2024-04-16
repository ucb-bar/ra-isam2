#!/bin/bash

set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)

# python3 $SCRIPT_DIR/plot_traj_rpe.py --infiles "VIO_CAB1-incremental_CAB1_rpe.out VIOLC_CAB1-incremental_CAB1_rpe.out RA_CAB1_num_threads-1-incremental_CAB1_rpe.out RA_CAB1_num_threads-2-incremental_CAB1_rpe.out RA_CAB1_num_threads-4-incremental_CAB1_rpe.out " --labels="VIO VIO+LC RA-1thread RA-2thread RA-4thread" --outfile CAB464_traj_rpe.png

# python3 $SCRIPT_DIR/plot_traj_rpe.py --infiles "VIO_CAB1_vio_lag-20-LC_CAB1_rpe.out \
#   VIOLC_CAB1_vio_lag-20_lc_period-8-LC_CAB1_rpe.out RA_CAB1_num_threads-1-LC_CAB1_rpe.out RA_CAB1_num_threads-2-LC_CAB1_rpe.out RA_CAB1_num_threads-4-LC_CAB1_rpe.out incremental_CAB1-LC_CAB1_rpe.out " --labels="VIO VIO+LC RA-1thread RA-2thread RA-4thread Incremental" --outfile CAB464-LC_traj_rpe.png
# 
# python3 $SCRIPT_DIR/plot_traj_rpe.py --infiles "VIO_sphere2500_vio_lag-20-LC_sphere2500_rpe.out VIOLC_sphere2500_vio_lag-20_lc_period-25-LC_sphere2500_rpe.out RA_sphere2500_num_threads-1-LC_sphere2500_rpe.out RA_sphere2500_num_threads-2-LC_sphere2500_rpe.out RA_sphere2500_num_threads-4-LC_sphere2500_rpe.out incremental_sphere2500-LC_sphere2500_rpe.out" --labels="VIO VIO+LC RA-1thread RA-2thread RA-4thread Incremental" --outfile sphere2500-LC_traj_rpe.png
# 
python3 $SCRIPT_DIR/plot_traj_rpe.py --infiles "VIO_CAB7000_vio_lag-20-LC_CAB7000_rpe.out VIOLC_CAB7000_vio_lag-20_lc_period-65-LC_CAB7000_rpe.out RA_CAB7000_num_threads-1-LC_CAB7000_rpe.out RA_CAB7000_num_threads-2-LC_CAB7000_rpe.out RA_CAB7000_num_threads-4-LC_CAB7000_rpe.out incremental_CAB7000-LC_CAB7000_rpe.out" --labels="VIO VIO+LC RA-1thread RA-2thread RA-4thread Incremental" --outfile CAB7000-LC_traj_rpe.png
# python3 $SCRIPT_DIR/plot_traj_rpe.py --infiles "VIOLC_CAB7000_vio_lag-20_lc_period-65-LC_CAB7000_rpe.out RA_CAB7000_num_threads-4-LC_CAB7000_rpe.out" --labels="VIO+LC RA-4thread" --outfile CAB7000-LC_traj_rpe.png
