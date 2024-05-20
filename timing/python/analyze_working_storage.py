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
import matplotlib.pyplot as plt

def read_until(fin, s, keep=False):
    while True:
        pos = fin.tell()
        line = fin.readline()
        if not line:
            print(f"Pattern {s} not found!")
            return False

        if s in line:
            if keep:
                fin.seek(pos)
            return True

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--indir", dest="indir", 
                      default=None, help="The path to the input directory")
    parser.add_option("--log_infiles", dest="log_infiles", 
                      default=None, help="The path to the input directory")
    parser.add_option("--outfig", dest="outfig", 
                      default=None, help="The path to the input directory")
    parser.add_option("--start_step", dest="start_step", type="int",
                      default=2, help="Starting step, inclusive")
    parser.add_option("--end_step", dest="end_step", type="int",
                      default=30, help="Ending step, inclusive")
    parser.add_option("--period", dest="period", type="int",
                      default=1, help="Step size of incrementing timesteps")
    parser.add_option("--no_values", dest="no_values", 
                      action="store_true", help="If the generated dataset has no matrix values")
    (options, args) = parser.parse_args()

    indir = options.indir
    start_step = options.start_step
    end_step = options.end_step
    period = options.period
    no_values = options.no_values
    log_infiles = options.log_infiles.split()
    outfig = options.outfig

    plt.rcParams.update({'font.size': 48, 'axes.titlesize': "large", 'axes.labelsize': 'large'})

    plt.figure(figsize=(18, 15))

    print(log_infiles)
    for infile, label in zip(log_infiles, ["LRU2M", "LRU4M"]):
        lru_t = []
        lru_mem_usage = [0 for _ in range(end_step + 1)]
        print(infile)
        with open(infile, "r") as fin:
            while read_until(fin, "step = ", keep=True):
                line = fin.readline()
                arr = line.split()
                step = int(arr[2])

                read_until(fin, "totalMemSize = ", keep=True)
                line = fin.readline()
                arr = line.split()
                totalMemSize = int(arr[2]) * 4
                lru_mem_usage[step] = totalMemSize
                lru_t.append(step)

        lru_mem_usage = np.array(lru_mem_usage)
        plt.plot(lru_t, lru_mem_usage[lru_t] / (1024 * 1024), label=label, linewidth=4)
    plt.plot(lru_t, [2  for _ in lru_t], "--", label="2MB", linewidth=3)
    plt.plot(lru_t, [4  for _ in lru_t], "--", label="4MB", linewidth=3)

    Timestep.no_values = no_values


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

    normal_t = []
    normal_mem_usage = [0 for _ in range(end_step + 1)]

    for step, timestep in enumerate(timesteps):
        if timestep is None:
            continue

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
        

        gtsam_space = 0
        for clique in timestep.cliques:
            gtsam_space += clique.height ** 2

        for factor in timestep.factors:
            gtsam_space += factor.height * factor.width


        our_space1 = 0
        max_clique_height = 0
        for clique in timestep.cliques:
            our_space1 += clique.height * clique.width
            if clique.marked or clique.fixed:
                clique.workspace_needed += clique.height * clique.height

                if clique.parent is not None:
                    if clique.parent.workspace_needed < clique.workspace_needed:
                        clique.parent.workspace_needed = clique.workspace_needed

                else:
                    print(f"storage needed = {our_space1}")
                    print(f"workspace needed = {clique.workspace_needed}")
                    our_space1 += clique.workspace_needed

        print(f"space at this point = {our_space1}")

        factor_size = 0
        for factor in timestep.factors:
            factor_size += factor.height * factor.width

        our_space1 += factor_size


        print(f"factor_size: {factor_size * 4} B")
        print(f"gtsam_space: {gtsam_space * 4} B")
        print(f"our_space1: {our_space1 * 4} B")

        cliques_cost_found = {}

        for clique in timestep.cliques:
            if clique.marked or clique.fixed:
                if clique.parent is not None:
                    clique.parent.children.append(clique)

        our_space2 = our_space1
        our_space4 = our_space1
        for clique in reversed(timestep.cliques):
            if clique.marked or clique.fixed:
                if len(clique.children) >= 2:
                    our_space2 = our_space1 + clique.children[0].workspace_needed
                    break

        for clique in reversed(timestep.cliques):
            if clique.marked or clique.fixed:
                if len(clique.children) >= 4:
                    our_space4 = our_space1 + clique.children[0].workspace_needed + clique.children[1].workspace_needed + clique.children[2].workspace_needed
                    break

        print(f"our_space2: {our_space2 * 4} B")
        print(f"our_space4: {our_space4 * 4} B")

        normal_t.append(timestep.step)
        normal_mem_usage[timestep.step] = our_space2 * 4

    normal_mem_usage = np.array(normal_mem_usage)
    plt.plot(normal_t, normal_mem_usage[normal_t] / (1024 * 1024), label="RA2S", linewidth=4)


    plt.xlabel("Step")
    plt.ylabel("Memory Size (MB)")
    plt.legend()
    plt.savefig(outfig, bbox_inches="tight")



