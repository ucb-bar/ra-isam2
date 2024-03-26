"""
generate_dataset_vio.py
Generate a full dataset for VIO
This means 

Usage: generate_full_tree.py --infile <tree_structure_file> --seed 0 --outfile <outfile_path>
"""

import numpy as np
import scipy
from scipy.stats import special_ortho_group
import sys
from optparse import OptionParser
import math
from copy import deepcopy
from utils import *
import glob
import os
from timestep import Timestep

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--indir", dest="indir", 
                      default=None, help="The path to the input directory")
    parser.add_option("--outdir", dest="outdir", 
                      default=None, help="The path to the output directory")
    parser.add_option("--start_step", dest="start_step", type="int",
                      default=2, help="Starting step, inclusive")
    parser.add_option("--end_step", dest="end_step", type="int",
                      default=30, help="Ending step, inclusive")
    parser.add_option("--vio", dest="vio", action="store_true",
                      default=None, help="Set if generating vio dataset. That means, generate dataset without reordering and discard all factors that loop back more than vio_lag steps")
    parser.add_option("--vio_lag", dest="vio_lag", type="int",
                      default=1e10, help="See vio")
    parser.add_option("--vio_scale", dest="vio_scale", type="float",
                      default=1.0, help="Multiple marginal_factor by vio_scale for numerical stability")
    parser.add_option("--relin_thresh", dest="relin_thresh", type="float",
                      default=0.1, help="Relinearize threshold")
    parser.add_option("--seed", dest="seed", type="int",
                      default=None, help="random seed for numpy sampling")
    (options, args) = parser.parse_args()

    indir = options.indir
    outdir = options.outdir
    start_step = options.start_step
    end_step = options.end_step
    vio = options.vio
    vio_lag = options.vio_lag
    relin_thresh = options.relin_thresh

    Timestep.vio_scale = options.vio_scale

    if options.seed is not None:
        np.random.seed(options.seed)

    files = glob.glob(os.path.join(indir, "step-*.out"))

    timesteps = [None for _ in range(0, end_step+1)]
    
    for step in range(start_step, end_step+1):
        infile_pattern = f"step-{step}.out"
        infile = None

        for filename in files:
            if infile_pattern in filename:
                infile = filename

        if infile is None:
            print(f"Step {step} file not found!")
            exit(0)

        with open(infile, "r") as fin:
            timesteps[step] = Timestep(fin, step)

    # If vio, remove all factors that span over vio_lag steps
    # Also remove all factors that do no connect to a key that is more recent than current-vio_lag
    if vio:
        for step in range(start_step, end_step+1):
            timestep = timesteps[step]
            max_key = max(timestep.ordering_to_key)

            for i in range(timestep.num_factors - 1, -1, -1):
                remove_flag = False
                factor = timestep.factors[i]

                recent_flag = (max(factor.keys) >= max_key - vio_lag)

                if not recent_flag:
                    remove_flag = True

                if len(factor.keys) > 2 and abs(factor.keys[0] - factor.keys[1] > vio_lag):
                    remove_flag = True

                if remove_flag:
                    timestep.factors[i] = None
                    print(f"Remove {factor} from step {step}")

        # Keys that are older than vio_lag are marginalized
        # Any node that has a connection with a marginalized node is fixed (cannot be relinearized)
        # We should remove factors that span two keys over vio_lag because they will never be processed anyways

        # 1. For each timestep, select relinearized keys based on some strategy
        #    For now, just check delta against relin threshold
        for step in range(start_step, end_step+1):
            timestep = timesteps[step]
            prev_timestep = None if step - 1 < 0 else timesteps[step - 1]

            prev_deltas = [None] if prev_timestep is None else deepcopy(prev_timestep.deltas)

            prev_num_keys = 1 if prev_timestep is None else prev_timestep.num_keys

            # Do not count keys that are older than some age (marginalize)
            # This assumes all factors that span over some time are alrady removed
            
            timestep.relin_keys = []
            min_age = timestep.step - vio_lag
            for key in range(1, prev_num_keys):
                delta_norm = np.linalg.norm(prev_deltas[key], ord=np.inf)
                if key >= min_age and delta_norm > relin_thresh:
                    timestep.relin_keys.append(key)

            timestep.new_keys = []
            for key in range(prev_num_keys, timestep.num_keys):
                timestep.new_keys.append(key)

            print(prev_num_keys)
            print(timestep.relin_keys)
            print(timestep.new_keys)
            print(timestep.is_reconstruct)

        # Print out all the timesteps in header form
        prev_matrix = np.zeros((0, 0))
        for step in range(start_step, end_step+1):
            outfile = f"{outdir}/step-{step}.h"
            timestep = timesteps[step]

            with open(outfile, "w") as fout:
                write_include_guard(fout)

                prev_matrix = timestep.print_header_vio(fout, vio_lag, prev_matrix)

        meta_header = f"{outdir}/vio_dataset.h"
        stepfile_format = f"{outdir}/step-{{}}.h"
        with open(meta_header, "w") as fout:
            write_include_guard(fout)

            Timestep.print_metadata_vio(fout, timesteps, stepfile_format)

    else: # Not vio
        pass
            

        # print(f"Write to header {outfile}")




                



