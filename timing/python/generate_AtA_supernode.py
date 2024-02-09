"""
generate_AtA_supernode.py
Generate sparse factors A_i involving one or more blocks. Each sparse factor will always involve
the last row. Generate an SPD matrix H (only bottom half is stored). The correct
output should be H + \sum_i A_i A_i^T

Arguments: --dim=DIM
                total size of the generated sparse matrix, plus/minus a tolerance dim_tol
           --num_blocks=NUM_BLOCKS
                number of blocks generated, each block size is sampled from block_sizes. Overrides dim
           --block_sizes=BLOCK_SIZE1 BLOCK_SIZE2 ...
                set of block sizes to sample from. 
           --num_factor=NUM_FACTOR
                number of factors to generate.
           --factor_dims=DIM1 DIM2 ...
                set of factor dimensions to sample from. 
           --num_factor_vars=NUM1 NUM2 ...
                potential number of blocks involved in a sparse factor, not including the last row
           --supernode_width=WIDTH
                Maximum supernode width. 
           --multiplier=MULTIPLIER
                multiply output matrix by MULTIPLIER
           --outfile=FILE
                output file path
           --seed=SEED 
                random seed

Note: dim_tol is the tolerance of the generated total dimension from the specified value. dim_tol is set to ceil(min_block_size / 2) to gaurantee that there exists a viable sequence of block sizes. 

Example Commands: 
    python3 generate_AtA_supernode.py --num_blocks 20 --block_sizes="3 6 9" --num_factor_vars="2 3" --num_factor 50 --factor_dims="3 6 9" --seed 0 --outfile baremetal_tests/AtA_supernode_num_blocks-20_num_factor-50.h
"""

import numpy as np
import scipy
from scipy.stats import special_ortho_group
import sys
from optparse import OptionParser
import math
from copy import deepcopy

def sample_sequence_with_target(block_sizes, dim, dim_tol):
    s = 0
    seq = []
    while s < dim - dim_tol:
        remainder = dim + dim_tol - s
        valid_block_sizes = block_sizes[np.where(block_sizes <= remainder)]
        assert(len(valid_block_sizes) > 0)
        b = np.random.choice(valid_block_sizes)
        if s + b <= dim + dim_tol:
            seq.append(b)
            s += b
    seq = np.array(seq)
    return seq

def sample_sequence_with_len(block_sizes, seq_len):
    s = 0
    seq = np.random.choice(block_sizes, seq_len, replace=True)
    return seq

def write_factors(fout, factors, seq, seq_pos):
    for i in range(len(factors["vars"])):
        v = factors["vars"][i]
        m = factors["matrix"][i].astype(np.float32)
        fout.write(f"const int factor{i}_height = {m.shape[0]};\n")
        fout.write(f"const int factor{i}_width = {m.shape[1]};\n")
        fout.write(f"const int factor{i}_ridx[{m.shape[0]}] = {{")
        for var in v:
            for b in range(seq[var]):
                fout.write(f"{seq_pos[var] + b}, ")
        fout.write("};\n\n")

        fout.write(f"const float factor{i}_data[{m.shape[0] * m.shape[1]}] = {{\n")
        for c in range(m.shape[1]):
            for r in range(m.shape[0]):
                fout.write(f"{m[r, c]}, ")
            fout.write(f"\n")
        fout.write("};\n\n")

    l = len(factors["vars"])
    fout.write(f"int factor_heights[{l}] = {{\n")
    for i in range(len(factors["vars"])):
        fout.write(f"factor{i}_height, ")
    fout.write("};\n")
    fout.write(f"int factor_widths[{l}] = {{\n")
    for i in range(len(factors["vars"])):
        fout.write(f"factor{i}_width, ")
    fout.write("};\n")
    fout.write(f"int* factor_ridx[{l}] = {{\n")
    for i in range(len(factors["vars"])):
        fout.write(f"factor{i}_ridx, ")
    fout.write("};\n")
    fout.write(f"float* factor_data[{l}] = {{\n")
    for i in range(len(factors["vars"])):
        fout.write(f"factor{i}_data, ")
    fout.write("};\n\n")

def write_matrix(fout, matrix, matrix_name):
    matrix_f = matrix.astype(np.float32)
    fout.write(f"int {matrix_name}_height = {matrix.shape[0]};\n")
    fout.write(f"int {matrix_name}_width = {matrix.shape[1]};\n")
    fout.write(f"float {matrix_name}[{matrix.shape[0] * matrix.shape[1]}] = {{\n" )
    rows, cols = matrix.shape
    for c in range(cols):
        for r in range(rows):
            f = matrix_f[r, c]
            # print(matrix_f[r, c])
            fout.write(str(f))
            if c + 1 != cols or r + 1 != rows:
                fout.write(", ")
        fout.write("\n")
    fout.write("};\n")

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--dim", dest="dim", type="int", 
                      default=10, help="total size of the generated sparse matrix, plus/minus dim_tol")
    parser.add_option("--num_blocks", dest="num_blocks", type="int", 
                      default=None, help="Number of blocks generated, each block size is sampled from block_sizes. Overrides dim")
    parser.add_option('--block_sizes', dest="block_sizes",
                      default=None, help="vector of block sizes")
    parser.add_option("--num_factor", dest="num_factor", type="int",
                      default=None, help="number of factors to generate. Default: 10")
    parser.add_option("--factor_dims", dest="factor_dims",
                      default=None, help="set of factor dimensions to sample from.")
    parser.add_option("--num_factor_vars", dest="num_factor_vars",
                      default=None, help="potential number of blocks involved in a sparse factor, not including the last row")
    parser.add_option("--max_supernode_width", dest="max_supernode_width", type="int",
                      default=20, help="Maximum supernode width.")
    parser.add_option('--multiplier', dest="multiplier", type="float",
                      default=5, help="multiply output by multiplier")
    parser.add_option("--outfile", dest="outfile", 
                      default=None, help="The path to the output header file")
    parser.add_option("--seed", dest="seed", 
                      default=None, help="random seed for numpy sampling")
    (options, args) = parser.parse_args()

    dim = options.dim
    num_blocks = options.num_blocks
    num_factor = options.num_factor
    factor_dims = options.factor_dims
    num_factor_vars = options.num_factor_vars
    max_supernode_width = options.max_supernode_width
    multiplier = options.multiplier
    outfile = options.outfile

    block_sizes = np.array(sorted(list(set([int(x) for x in options.block_sizes.split()]))))
    factor_dims = np.array(sorted(list(set([int(x) for x in options.factor_dims.split()]))))
    num_factor_vars = np.array(sorted(list(set([int(x) for x in options.num_factor_vars.split()]))))

    if options.seed is not None:
        np.random.seed(int(options.seed))

    print(block_sizes)

    dim_tol = math.ceil(min(block_sizes) / 2)

    print(dim_tol)

    if num_blocks is None:
        assert(dim > 0)
        # If dim is defined, construct a sequence of block_sizes that add up to dim +- dim_tol
        seq = sample_sequence_with_target(block_sizes, dim - 1, dim_tol)
        np.random.shuffle(seq)
    else:
        assert(num_blocks > 0)
        seq = sample_sequence_with_len(block_sizes, num_blocks)
    seq.resize((seq.shape[0] + 1,))
    seq[-1] = 1
    print("seq = ", seq)
    print(np.sum(seq))

    seq_len = len(seq)
    seq_pos = [np.sum(seq[:i]) for i in range(seq_len)]

    total_dim = np.sum(seq)

    print(total_dim)
    print(num_factor)

    # Set up supernode
    supernode_width = 0
    block_i = 0
    while True:
        if supernode_width + seq[block_i] < max_supernode_width:
            supernode_width += seq[block_i]
        else:
            break
        block_i += 1
    supernode_blocks = block_i

    if num_factor is None:
        num_factor = int(len(seq) * 2.5)

    factors = {"vars": [], "matrix": []}

    for i in range(num_factor):
        num_factor_var = np.random.choice(num_factor_vars)
        first_var = np.random.choice(np.arange(0, supernode_blocks))
        var_set = list(np.arange(0, len(seq) - 1))
        var_set.remove(first_var)
        factor_vars = sorted(list(np.random.choice(var_set, num_factor_var, replace=False)))
        factor_vars.append(first_var)
        factor_vars.append(len(seq) - 1)
        factor_vars = sorted(factor_vars)
        factor_dim = np.random.choice(factor_dims)

        factor_height = np.sum(seq[factor_vars])
        print(num_factor_var, factor_vars, factor_dim, factor_height)
        factor_matrix = multiplier * np.random.standard_normal((factor_height, factor_dim))

        factors["vars"].append(factor_vars)
        factors["matrix"].append(factor_matrix)

    A = multiplier * np.random.standard_normal((total_dim, total_dim))
    H = A @ A.T

    H_cor = deepcopy(H)
    for i in range(len(factors["vars"])):
        m = factors["matrix"][i]
        dense_m = np.zeros((total_dim, m.shape[1]))
        cur_pos = 0
        print(factors["vars"][i])
        for v in factors["vars"][i]:
            dense_m[seq_pos[v]:seq_pos[v] + seq[v], :] = m[cur_pos:cur_pos + seq[v], :]
            cur_pos += seq[v]

        H_cor += dense_m @ dense_m.T

    w = supernode_width
    h = total_dim
    A = H_cor[:w, :w]
    B = H_cor[w:h, :w]
    C = H_cor[w:h, w:h]

    M = np.zeros_like(H)
    M[:w, :w] = A
    M[w:h, :w] = B
    M[w:h, w:h] = C

    M = M.astype(np.float32)

    M_cond = np.linalg.cond(M)
    print(M_cond)

    LA = np.linalg.cholesky(A)

    LB = scipy.linalg.solve_triangular(LA, B.T, lower=True).T

    LC = C - LB @ LB.T

    M_cor = np.zeros((h, h)).astype(np.float32)

    M_cor[:w, :w] = LA
    M_cor[w:h, :w] = LB
    M_cor[w:h, w:h] = LC

    with open(outfile, "w") as fout:
        fout.write("#pragma once\n\n")
        nfactors = len(factors["vars"])
        fout.write(f"int nfactors = {nfactors};\n\n")
        fout.write(f"int supernode_width = {supernode_width};\n\n")
        write_factors(fout, factors, seq, seq_pos)
        fout.write(f"int H_ridx[{total_dim}] = {{")
        for i in range(total_dim):
            fout.write(f"{i}, ")
        fout.write("};\n\n")
        write_matrix(fout, H, "H")
        write_matrix(fout, H_cor, "H_cor")
        write_matrix(fout, M_cor, "M_cor")
