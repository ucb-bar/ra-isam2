"""
generate_relin_keys_file.py
From a directory with data, print out the relin keys at each step in a file for reproducibility

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
            print("Line not found")
            exit(0)

        if s in line:
            break

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--indir", dest="indir", 
                      default=None, help="The path to the input directory")
    parser.add_option("--outfile", dest="outfile", 
                      default=None, help="The path of the output file")
    parser.add_option("--start_step", dest="start_step", type="int",
                      default=2, help="Starting step, inclusive")
    parser.add_option("--end_step", dest="end_step", type="int",
                      default=30, help="Ending step, inclusive")
    parser.add_option("--no_values", dest="no_values", 
                      action="store_true", help="If the generated dataset has no matrix values")
    (options, args) = parser.parse_args()

    indir = options.indir
    outfile = options.outfile
    start_step = options.start_step
    end_step = options.end_step
    no_values = options.no_values

    Timestep.no_values = no_values

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

    with open(outfile, "w") as fout:
        timestep_count = 0
        for timestep in timesteps:
            if timestep is not None:
                timestep_count += 1

        fout.write(f"{timestep_count}\n")
        for timestep in timesteps:
            if timestep is not None:
                fout.write(f"{timestep.step} {timestep.num_relin_keys}\n")
                for k in timestep.relin_keys:
                    fout.write(f"{k} ")
                fout.write("\n")






