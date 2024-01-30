"""
generate_cascading_supernode.py
Generate several cascading supernodes that follow one another. 
The row indices of a supernode should be a superset of the subdiagonal row indices of its child and should have the same ordering. 
The matrix formed by the supernodes should be SPD. Each supernode should have minimum width of some small block size, The block sizes are randomly generated and can be specified by the cmdline arguments min_block_size <= block_size <= max_block_size
but multiple block columns can merge if they have the same nonzero structure

Arguments: --dim=DIM
                total size of the generated sparse matrix, plus/minus a tolerance dim_tol
           --num_blocks=NUM_BLOCKS
                number of blocks generated, each block size is sampled from either [min_block_size, max_block_size] or block_sizes. Overrides dim
           --num_levels=LEVEL 
                number of cascading supernodes
           --max_block_size=MAX_SIZE
                maximum generated block size. Default: 20
           --min_block_size=MIN_SIZE 
                miminum generated block size. Default: 3
           --block_sizes=BLOCK_SIZE1 BLOCK_SIZE2 ...
                set of block sizes to sample from. Overrides the [min_block_size, max_block_size] bound
           --sample_rate=RATE
                How many row indices to sample from the parent block. Essentially corresponds to the density of the child C compared to the parent [A 0; B C] (sample_rate^2)")
           --multiplier=MULTIPLIER
                multiply output matrix by MULTIPLIER
           --outfile=FILE
                output file path
           --seed=SEED 
                random seed

Note: dim_tol is the tolerance of the generated total dimension from the specified value. dim_tol is set to ceil(min_block_size / 2) to gaurantee that there exists a viable sequence of block sizes. 

Example Commands: 
    python3 generate_cascading_supernode.py --dim 200 --num_levels 10 --max_block_size 20 --min_block_size 3 --sample_rate 0.5 --seed 0 --outfile baremetal_tests/cascading_supernode_dim-200_level-10.h
    python3 generate_cascading_supernode.py --dim 200 --num_levels 10 --block_sizes "3 6 9" --seed 0 --outfile baremetal_tests/cascading_supernode_dim-200_level-10.h
    python3 generate_cascading_supernode.py --num_blocks 30 --num_levels 10 --block_sizes "3 6 9" --seed 0 --outfile baremetal_tests/cascading_supernode_block-30_level-10.h
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

def split_sampling(seq_len, sample_rate, num_levels):
    print(seq_len)
    # This is a simple algorithm to sort the gaps between the split points
    min_split = 1
    block_indices = np.arange(seq_len)
    tmp_split_indices = sorted(np.random.choice(np.arange(seq_len - min_split), num_levels - 1, replace=False) + min_split)
    tmp_split_indices1 = np.zeros((num_levels + 1,), dtype="int")
    tmp_split_indices1[1:-1] = tmp_split_indices
    tmp_split_indices1[-1] = seq_len
    print(tmp_split_indices1)
    tmp_split_diff = sorted(tmp_split_indices1[1:] - tmp_split_indices1[:-1])
    print(tmp_split_diff)
    split_indices = [int(np.sum(tmp_split_diff[:i])) for i in range(num_levels)]
    print(split_indices)

    sel_ancestors = {}

    for i, split_index in enumerate(reversed(split_indices)):
        sel_ancestors[split_index] = set()

        next_split_index = seq_len if i <= 0 else split_indices[-i]
        print(split_index, next_split_index)

        valid_choices = set() if next_split_index == seq_len else sel_ancestors[next_split_index]

        n = math.ceil(len(valid_choices) * sample_rate)

        selected = sorted(np.random.choice(list(valid_choices), n, replace=False))

        print(selected)

        sel_ancestors[split_index].update(set(selected))
        sel_ancestors[split_index].update(set(range(split_index, next_split_index)))

    for ancestors in sel_ancestors.values():
        ancestors.add(seq_len - 1)   # Add last row

    print(sel_ancestors)

    return sel_ancestors

def write_matrix(fout, matrix, matrix_name):
    matrix_f = matrix.astype(np.float32)
    # print(matrix_f)
    fout.write(f"float {matrix_name}[] = {{\n" )
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

def write_block_sparse_matrix(fout, matrix, matrix_name, seq, seq_pos, sel_ancestors, supernode_heights, supernode_ridx):
    M = deepcopy(matrix)

    supernode_indices = sorted(sel_ancestors.keys())
    seq_len = len(seq)
    for i, start_index in enumerate(supernode_indices):
        start_pos = seq_pos[start_index]
        next_start_index = -1 if i == len(supernode_indices) - 1 else supernode_indices[i + 1]
        next_start_pos = seq_pos[-1] + 1 if next_start_index == -1 else seq_pos[next_start_index]
        node_width = next_start_pos - start_pos
        node_height = supernode_heights[start_index]

        fout.write(f"const int {matrix_name}_w{i} = {node_width};\n")
        fout.write(f"const int {matrix_name}_h{i} = {node_height};\n")

        ancestors = sorted(sel_ancestors[start_index])

        dense_col = np.zeros((node_height, node_height))

        cur_row = 0
        for ans in ancestors:
            ans_pos = seq_pos[ans]
            ans_height = seq[ans]
            dense_col[cur_row:cur_row + ans_height, :node_width] = M[ans_pos:ans_pos + ans_height, start_pos:start_pos + node_width]
            cur_row += ans_height

            M[ans_pos:ans_pos + ans_height, start_pos:start_pos + node_width] *= 0

        fout.write(f"const int {matrix_name}_ridx{i}[] = {{")
        for ridx in supernode_ridx[start_index]:
            fout.write(f"{ridx}, ")
        fout.write("};\n")
        write_matrix(fout, dense_col, f"{matrix_name}{i}")

    fout.write("\n\n")

    fout.write(f"const int {matrix_name}_nnode = {len(supernode_indices)};\n")

    fout.write(f"int {matrix_name}_width[] = {{")
    for i in range(len(supernode_indices)):
        fout.write(f"{matrix_name}_w{i}, ")
    fout.write("};\n")

    fout.write(f"int {matrix_name}_height[] = {{")
    for i in range(len(supernode_indices)):
        fout.write(f"{matrix_name}_h{i}, ")
    fout.write("};\n")

    fout.write(f"int* {matrix_name}_row_indices[] = {{")
    for i in range(len(supernode_indices)):
        fout.write(f"{matrix_name}_ridx{i}, ")
    fout.write("};\n")

    fout.write(f"float* {matrix_name}[] = {{")
    for i in range(len(supernode_indices)):
        fout.write(f"{matrix_name}{i}, ")
    fout.write("};\n")

    assert(np.allclose(np.tril(M), np.zeros(M.shape)))

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--dim", dest="dim", type="int", 
                      default=10, help="total size of the generated sparse matrix, plus/minus dim_tol")
    parser.add_option("--num_blocks", dest="num_blocks", type="int", 
                      default=None, help="Number of blocks generated, each block size is sampled from either [min_block_size, max_block_size] or block_sizes. Overrides dim")
    parser.add_option("--num_levels", dest="num_levels", type="int",
                      default=3, help="Number of cascading supernodes")
    parser.add_option("--max_block_size", dest="max_block_size", type="int",
                      default=16, help="maximum generated block size")
    parser.add_option("--min_block_size", dest="min_block_size", type="int",
                      default=3, help="minimum generated block size")
    parser.add_option('--block_sizes', dest="block_sizes",
                      default=None, help="vector of block sizes")
    parser.add_option('--sample_rate', dest="sample_rate", type="float",
                      default=0.5, help="How many row indices to sample from the parent block. Essentially corresponds to the density of the child C compared to the parent [A 0; B C] (sample_rate^2)")
    parser.add_option('--multiplier', dest="multiplier", type="float",
                      default=200, help="multiply output by multiplier")
    parser.add_option("--outfile", dest="outfile", 
                      default=None, help="The path to the output header file")
    parser.add_option("--seed", dest="seed", 
                      default=None, help="random seed for numpy sampling")
    (options, args) = parser.parse_args()

    dim = options.dim
    num_blocks = options.num_blocks
    num_levels = options.num_levels
    sample_rate = options.sample_rate
    multiplier = options.multiplier
    outfile = options.outfile

    if options.seed is not None:
        np.random.seed(int(options.seed))

    if options.block_sizes is not None:
        block_sizes = sorted(list(set([int(x) for x in options.block_sizes.split()])))
    else:
        block_sizes = list(range(options.min_block_size, options.max_block_size + 1))

    
    block_sizes = np.array(block_sizes)
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

    sel_ancestors = split_sampling(seq_len, sample_rate, num_levels)

    total_dim = np.sum(seq)

    print("total_dim = ", total_dim)

    supernode_heights = {}
    supernode_ridx = {}

    M = np.zeros((total_dim, total_dim))

    # Generate a factor relating all the variables in a supernode and their direct ancestors
    # This is okay to do because we only have a single-path tree
    for split_index, ancestors in sel_ancestors.items():
        split_dim = 0
        col_indices = []
        for ans in ancestors:
            split_dim += seq[ans]
            col_indices.extend(range(seq_pos[ans], seq_pos[ans] + seq[ans]))
        col_indices = sorted(col_indices)
        print(split_dim)
        print(col_indices)

        supernode_heights[split_index] = split_dim
        supernode_ridx[split_index] = col_indices

        A = np.zeros((split_dim, total_dim))
        A_sub = np.random.randn(split_dim, split_dim)
        A[:, col_indices] = A_sub

        M += A.T @ A

    M *= multiplier

    M = M.astype(np.float32)

    # Compute correct answer
    M_cond = np.linalg.cond(M)
    M_cor = np.linalg.cholesky(M)

    # M_double = M.astype(np.float64)
    # M_cor_double = M_cor.astype(np.float64)
    # assert(np.allclose(M_double, M_cor_double @ M_cor_double.T, rtol=np.finfo(np.float32).eps))


    if outfile is not None:
        print(f"Write to {outfile}")
        with open(outfile, "w") as fout:
            fout.write(f"#pragma once\n\n")
            fout.write(f"const int m_dim = {total_dim};\n\n")
            fout.write(f"double cond = {M_cond};\n\n")
            write_block_sparse_matrix(fout, M, "m", seq, seq_pos, sel_ancestors, supernode_heights, supernode_ridx)
            fout.write("\n\n")
            write_block_sparse_matrix(fout, M_cor, "m_correct", seq, seq_pos, sel_ancestors, supernode_heights, supernode_ridx)
            fout.write("\n\n")


