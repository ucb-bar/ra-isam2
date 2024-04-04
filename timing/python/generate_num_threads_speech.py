"""
generate_num_threads_speech.py
Given some probability of some model triggering, give a sequence of num_threads per step

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
    parser.add_option("--outfile", dest="outfile", 
                      default=None, help="The path of the output file")
    parser.add_option("--num_steps", dest="num_steps", type="int",
                      default=30, help="Minimum number of steps to generate")
    parser.add_option("--fire_rate", dest="fire_rate", type="float",
                      default=0.5, help="Probability of the large model firing")
    parser.add_option("--low_threads", dest="low_threads", type="int",
                      default=2, help="Number of threads we get when the other model runs")
    parser.add_option("--high_threads", dest="high_threads", type="int",
                      default=5, help="Number of threads we get when the other model does not run")
    parser.add_option("--rel_period", dest="rel_period", type="int",
                      default=10, help="The ratio between the model period and slam period")
    parser.add_option("--seed", dest="seed", 
                      default=None, help="random seed for numpy sampling")
    (options, args) = parser.parse_args()

    outfile = options.outfile
    num_steps = options.num_steps
    fire_rate = options.fire_rate
    rel_period = options.rel_period
    low_threads = options.low_threads
    high_threads = options.high_threads

    if options.seed is not None:
        np.random.seed(int(options.seed))

    with open(outfile, "w") as fout:
        cur_step = 0
        while cur_step < num_steps:
            fire = (np.random.uniform() > fire_rate)
            num_threads = low_threads if fire else high_threads
            for _ in range(rel_period):
                fout.write(f"{num_threads}\n")

            cur_step += rel_period
                


