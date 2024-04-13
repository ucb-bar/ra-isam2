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

def read_until(fin, s):
    while True:
        line = fin.readline()
        if not line:
            print(f"Pattern {s} not found!")
            exit(0)

        if s in line:
            break

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--indir", dest="indir", 
                      default=None, help="The path to the input directory")
    parser.add_option("--outdir", dest="outdir", 
                      default=None, help="The path to the output directory")
    parser.add_option("--num_threads_file", dest="num_threads_file", 
                      default=None, help="The file path to the threads file that we use")
    parser.add_option("--start_step", dest="start_step", type="int",
                      default=2, help="Starting step, inclusive")
    parser.add_option("--end_step", dest="end_step", type="int",
                      default=30, help="Ending step, inclusive")
    parser.add_option("--period", dest="period", type="int",
                      default=1, help="Step size of incrementing timesteps")
    parser.add_option("--no_values", dest="no_values", 
                      action="store_true", help="If the generated dataset has no matrix values")
    parser.add_option("--relin_thresh", dest="relin_thresh", type="float",
                      default=0.1, help="Relinearize threshold")
    parser.add_option("--seed", dest="seed", type="int",
                      default=None, help="random seed for numpy sampling")
    (options, args) = parser.parse_args()

    indir = options.indir
    outdir = options.outdir
    outfile = f"{outdir}/delta_diff_nodes"
    num_threads_file = options.num_threads_file
    start_step = options.start_step
    end_step = options.end_step
    period = options.period
    no_values = options.no_values
    Timestep.no_values = no_values

    if options.seed is not None:
        np.random.seed(options.seed)

    step_num_threads = None
    if num_threads_file is not None:
        step_num_threads = []
        with open(num_threads_file, "r") as fin:
            while True:
                line = fin.readline()
                if not line:
                    break
                step_num_threads.append(int(line))
        Timestep.step_num_threads = step_num_threads

        Timestep.max_num_threads = max(step_num_threads)
        Timestep.min_num_threads = min(step_num_threads)


    files = glob.glob(os.path.join(indir, "step-*.out"))

    timesteps = [None for _ in range(0, end_step+1)]
    
    for step in range(start_step, end_step+1):
        if step % period != 0:
            continue

        infile_pattern = f"step-{step}.out"
        infile = None
        pred_infile_pattern = f"step-{step}-pred_cycles.out"
        pred_infile = None

        for filename in files:
            if infile_pattern in filename:
                infile = filename
                break

        for filename in files:
            if pred_infile_pattern in filename:
                pred_infile = filename
                break

        num_threads = -1
        relin_cost = -1
        if pred_infile is not None:
            with open(pred_infile, "r") as fin:
                read_until(fin, "num threads")
                num_threads = int(fin.readline())
                read_until(fin, "relin cost")
                relin_cost = int(fin.readline())

        if infile is None:
            print(infile_pattern)
            assert(0)
    
        with open(infile, "r") as fin:
            timesteps[step] = Timestep(fin, step, num_threads=num_threads, relin_cost=relin_cost)

    # For each timestep
    # 1. Go through all relin and new keys and mark all the marked cliques and fixed cliques
    #    A clique is marked if it is directly changed. A clique is fixed if its contribution affects a marked clique
    # 2. Determine if a timestep should perform edit or reconstruct
    #    a. If the ordering of keys is different from the previous timestep, it must be a reorder
    #    b. For now, keep everything reconstruct
    # 3. Print out the timestep
    #    a. If reconstructing, print out all the [A B] matrix of each fixed and marked clique

    # This is for full dataset eval
    for step in range(start_step, end_step + 1):
        if step % period != 0:
            print(f"step {step} is set to None")
            timesteps[step] = None

    num_active_timestep = 0
    for step, timestep in enumerate(timesteps):
        if timestep is None:
            continue
        num_active_timestep += 1

    with open(outfile, "w") as fout:
        fout.write(f"{num_active_timestep}\n")

        for step, timestep in enumerate(timesteps):
            if timestep is None:
                continue

            print(f"step = {step}")

            timestep.mark_cliques()
            timestep.fix_cliques()

            prev_timestep = None if step - 1 < 0 else timesteps[step - 1]

            # Determine if edit or reconstruct
            timestep.is_reconstruct = True
            if prev_timestep is None:
                timestep.is_reconstruct = True
            elif not timestep.same_ordering(prev_timestep):
                timestep.is_reconstruct = True  
                timestep.is_reorder = True
            else:
                timestep.is_reconstruct = True
            
            delta_infile = f"{indir}/step-{step}_delta.out"
            prev_delta_infile = f"{indir}/step-{step-1}_delta.out"

            # Compare differences between this delta and the previous delta
            # If delta[key] is different, check if that clique is fixed or marked
            # If not either, then record the clique's height/width
            prev_delta = []
            if os.path.isfile(prev_delta_infile):
                with open(prev_delta_infile) as fin:
                    fin.readline();
                    num_keys = int(fin.readline())
                    for _ in range(num_keys):
                        prev_delta.append(fin.readline())

            changed_keys = []
            assert(os.path.isfile(delta_infile))
            with open(delta_infile) as fin:
                fin.readline();
                num_keys = int(fin.readline())
                for key in range(num_keys):
                    line = fin.readline()
                    remapped_key = key + 1
                    if key >= len(prev_delta) or prev_delta[key] != line:
                        changed_keys.append(remapped_key)

            timestep.write_delta_diff_cliques(fout, changed_keys)

