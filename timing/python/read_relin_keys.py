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
    parser.add_option("--outfile", dest="outdfile", 
                      default=None, help="The path to the output file")
    parser.add_option("--start_step", dest="start_step", type="int",
                      default=2, help="Starting step, inclusive")
    parser.add_option("--end_step", dest="end_step", type="int",
                      default=30, help="Ending step, inclusive")
    parser.add_option("--seed", dest="seed", type="int",
                      default=None, help="random seed for numpy sampling")
    (options, args) = parser.parse_args()

    indir = options.indir
    outfile = options.outfile
    start_step = options.start_step
    end_step = options.end_step

    Timestep.vio_scale = options.vio_scale
    Timestep.no_values = no_values

    if options.seed is not None:
        np.random.seed(options.seed)

    files = glob.glob(os.path.join(indir, "step-*.out"))

    timesteps = [None for _ in range(0, end_step+1)]
    
    with open(outfile, "w") as fout:
        for step in range(start_step, end_step+1):
            if step % period != 0:
                continue

            infile_pattern = f"step-{step}.out"
            infile = None

            for filename in files:
                if infile_pattern in filename:
                    infile = filename
                    break


            if infile is None:
                print(infile_pattern)
                assert(0)

            with open(infile, "r") as fin:
                read_until(fin, "relin keys")

                line = fin.readline()

                num_relin_keys = 

