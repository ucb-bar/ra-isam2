"""
generate_control_dataset.py
Generate header file used for running fake control problem

Arguments: --N=N
                Input space dimension. For cartpole problem N = 4. 
           --M=M
                Action space dimension. For cartpole problem M = 1
           --num_agents=NUM_AGENTS
                Number of independent agents.
           --horizon=HORIZON
                Horizon length
           --outfile=FILE
                output file path
           --seed=SEED 
                random seed

Example Commands: 
    python3 generate_control_dataset.py --N 12 --M 4 --num_agents 4 --horizon=20 --outfile "../baremetal/control_N-12_M-4_num_agents-4_horizon-20.h"
"""

import numpy as np
import scipy
from scipy.stats import special_ortho_group
import sys
from optparse import OptionParser
import math
from copy import deepcopy
from utils import *

def write_matrix_arr(fout, arr, name, iter_range):
    for i in iter_range:
        write_matrix(fout, arr[i], f"{name}{i}")

    write_array(fout, t="int", prefix=f"{name}", postfix="_height", iter_range=iter_range)
    write_array(fout, t="int", prefix=f"{name}", postfix="_width", iter_range=iter_range)
    write_array(fout, t="float*", prefix=f"{name}", postfix="_data", iter_range=iter_range)
    fout.write("\n")

def write_matrix(fout, m, name):
    height, width = m.shape
    fout.write(f"const int {name}_height = {height};\n")
    fout.write(f"const int {name}_width = {width};\n")
    fout.write(f"float {name}_data[] = {{\n")
    for j in range(width):
        for i in range(height):
            fout.write(f"{m[i, j]}, ")
        fout.write("\n")
    fout.write("};\n")
    fout.write("\n")

def write_array(fout, t, prefix, postfix, iter_range):
    fout.write(f"{t} {prefix}{postfix}[] = {{")
    for i in iter_range:
        fout.write(f"{prefix}{i}{postfix}, ")
    fout.write("};\n")

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--N", dest="N", type="int", 
                      default=12, help="Input space dimension")
    parser.add_option("--M", dest="M", type="int", 
                      default=4, help="Action space dimension")
    parser.add_option("--num_agents", dest="num_agents", type="int", 
                      default=4, help="Number of independent agents")
    parser.add_option("--horizon", dest="horizon", type="int", 
                      default=20, help="Horizon length")
    parser.add_option("--outfile", dest="outfile", 
                      default=None, help="The path to the output header file")
    parser.add_option("--seed", dest="seed", 
                      default=None, help="random seed for numpy sampling")
    (options, args) = parser.parse_args()

    N = options.N
    M = options.M
    horizon = options.horizon
    num_agents = options.num_agents
    outfile = options.outfile

    if options.seed is not None:
        np.random.seed(int(options.seed))

    A = [None for _ in range(num_agents)]
    B = [None for _ in range(num_agents)]
    Q = [None for _ in range(num_agents)]
    R = [None for _ in range(num_agents)]
    x = [[None for _ in range(horizon)] for _ in range(num_agents)]
    u = [[None for _ in range(horizon)] for _ in range(num_agents)]

    P = [[None for _ in range(horizon)] for _ in range(num_agents)]
    ATPk = [None for _ in range(num_agents)]
    ATPkA = [None for _ in range(num_agents)]
    ATPkB = [None for _ in range(num_agents)]
    PkB = [None for _ in range(num_agents)]
    R_plus_BTPkB = [None for _ in range(num_agents)]

    Ax = [None for _ in range(num_agents)]
    PkAx = [None for _ in range(num_agents)]
    R_min_BTPkB = [None for _ in range(num_agents)]

    Q_mplier = 10
    A_mplier = 1

    # Each agent as a separate A, B, Q, R matrix
    for agent in range(num_agents):
        A[agent] = np.random.randn(N, N) * A_mplier
        B[agent] = np.random.randn(N, M) * A_mplier
        QA = np.random.randn(N, N)
        Q[agent] = Q_mplier * QA.T @ QA
        RA = np.random.randn(M, M)
        R[agent] = A_mplier * RA.T @ RA

        for k in range(horizon):
            x[agent][k] = np.random.randn(N, 1) * A_mplier
            u[agent][k] = np.zeros((M, 1))
            P[agent][k] = np.zeros((N, N))

        ATPk[agent] = np.zeros((N, N))
        ATPkA[agent] = np.zeros((N, N))
        ATPkB[agent] = np.zeros((N, M))
        PkB[agent] = np.zeros((N, M))
        R_plus_BTPkB[agent] = np.zeros((M, M))

        Ax[agent] = np.zeros((N, 1))
        PkAx[agent] = np.zeros((N, 1))
        R_min_BTPkB[agent] = np.zeros((M, M))


    with open(outfile, "w") as fout:
        write_comment_header(fout)
        write_python_command(fout)
        write_comment_footer(fout)

        fout.write("#pragma once\n\n")

        fout.write(f"#define CONTROL_N {N}\n\n")
        fout.write(f"#define CONTROL_M {M}\n\n")
        fout.write(f"#define CONTROL_NUM_AGENTS {num_agents}\n\n")
        fout.write(f"#define CONTROL_HORIZON {horizon}\n\n")

        for agent in range(num_agents):
            write_matrix(fout, A[agent], f"A{agent}")

        write_array(fout, t="int", prefix="A", postfix="_height", iter_range=range(num_agents))
        write_array(fout, t="int", prefix="A", postfix="_width", iter_range=range(num_agents))
        write_array(fout, t="float*", prefix="A", postfix="_data", iter_range=range(num_agents))

        fout.write("\n")

        for agent in range(num_agents):
            write_matrix(fout, B[agent], f"B{agent}")

        write_array(fout, t="int", prefix="B", postfix="_height", iter_range=range(num_agents))
        write_array(fout, t="int", prefix="B", postfix="_width", iter_range=range(num_agents))
        write_array(fout, t="float*", prefix="B", postfix="_data", iter_range=range(num_agents))
        fout.write("\n")

        for agent in range(num_agents):
            write_matrix(fout, Q[agent], f"Q{agent}")

        write_array(fout, t="int", prefix="Q", postfix="_height", iter_range=range(num_agents))
        write_array(fout, t="int", prefix="Q", postfix="_width", iter_range=range(num_agents))
        write_array(fout, t="float*", prefix="Q", postfix="_data", iter_range=range(num_agents))
        fout.write("\n")

        for agent in range(num_agents):
            write_matrix(fout, R[agent], f"R{agent}")

        write_array(fout, t="int", prefix="R", postfix="_height", iter_range=range(num_agents))
        write_array(fout, t="int", prefix="R", postfix="_width", iter_range=range(num_agents))
        write_array(fout, t="float*", prefix="R", postfix="_data", iter_range=range(num_agents))
        fout.write("\n")

        for agent in range(num_agents):
            write_matrix_arr(fout, P[agent], f"P{agent}_k", range(horizon))

        write_array(fout, t="int*", prefix="P", postfix="_k_height", iter_range=range(num_agents))
        write_array(fout, t="int*", prefix="P", postfix="_k_width", iter_range=range(num_agents))
        write_array(fout, t="float**", prefix="P", postfix="_k_data", iter_range=range(num_agents))
        fout.write("\n")

        for agent in range(num_agents):
            for k in range(horizon):
                write_matrix(fout, x[agent][k], f"x{agent}_k{k}")
            write_array(fout, t="int", prefix=f"x{agent}_k", postfix="_height", iter_range=range(horizon))
            write_array(fout, t="int", prefix=f"x{agent}_k", postfix="_width", iter_range=range(horizon))
            write_array(fout, t="float*", prefix=f"x{agent}_k", postfix="_data", iter_range=range(horizon))
            fout.write("\n")
        write_array(fout, t="int*", prefix=f"x", postfix="_k_height", iter_range=range(num_agents))
        write_array(fout, t="int*", prefix=f"x", postfix="_k_width", iter_range=range(num_agents))
        write_array(fout, t="float**", prefix=f"x", postfix="_k_data", iter_range=range(num_agents))
        fout.write("\n")

        for agent in range(num_agents):
            for k in range(horizon):
                write_matrix(fout, u[agent][k], f"u{agent}_k{k}")
            write_array(fout, t="int", prefix=f"u{agent}_k", postfix="_height", iter_range=range(horizon))
            write_array(fout, t="int", prefix=f"u{agent}_k", postfix="_width", iter_range=range(horizon))
            write_array(fout, t="float*", prefix=f"u{agent}_k", postfix="_data", iter_range=range(horizon))
            fout.write("\n")
        write_array(fout, t="int*", prefix=f"u", postfix="_k_height", iter_range=range(num_agents))
        write_array(fout, t="int*", prefix=f"u", postfix="_k_width", iter_range=range(num_agents))
        write_array(fout, t="float**", prefix=f"u", postfix="_k_data", iter_range=range(num_agents))
        fout.write("\n")

        write_matrix_arr(fout, ATPk, "ATPk", range(num_agents))

        write_matrix_arr(fout, ATPkA, "ATPkA", range(num_agents))
        write_matrix_arr(fout, ATPkB, "ATPkB", range(num_agents))
        write_matrix_arr(fout, PkB, "PkB", range(num_agents))
        write_matrix_arr(fout, R_plus_BTPkB, "R_plus_BTPkB", range(num_agents))

        write_matrix_arr(fout, Ax, "Ax", range(num_agents))
        write_matrix_arr(fout, PkAx, "PkAx", range(num_agents))
        write_matrix_arr(fout, R_min_BTPkB, "R_min_BTPkB", range(num_agents))

        # ATPk[agent] = np.zeros((N, N))
        # ATPkA[agent] = np.zeros((N, N))
        # ATPkB[agent] = np.zeros((N, M))
        # PkB[agent] = np.zeros((N, M))
        # R_plus_BTPkB[agent] = np.zeros((M, M))

        # Ax[agent] = np.zeros((N, 1))
        # PkAx[agent] = np.zeros((N, 1))
        # R_min_BTPkB[agent] = np.zeros((M, M))



