"""
generate_full_tree.py
Generate several cascading supernodes in a tree structure. 
Takes in a tree structure file

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

def write_factors(fout, factors, nodes):
    factor_max_height = 0
    factor_max_width = 0
    for factor in factors:
        height = factor["height"]
        width = factor["width"]
        if factor_max_height < height:
            factor_max_height = height
        if factor_max_width < width:
            factor_max_width = width
    fout.write(f"const int factor_max_height = {factor_max_height};\n")
    fout.write(f"const int factor_max_width = {factor_max_width};\n\n")

    for factor in factors:
        index = factor["index"]
        height = factor["height"]
        width = factor["width"]
        matrix = factor["matrix"].astype(np.float32)
        keys = factor["keys"]
        fout.write(f"const int factor{index}_height = {height};\n")
        fout.write(f"const int factor{index}_width = {width};\n")
        fout.write(f"int factor{index}_ridx[{height}] = {{\n")

        indices = []
        for key in keys:
            node = nodes[key]
            _, node_row, node_height = node

            for idx in range(node_row, node_row + node_height):
                fout.write(f"{idx}, ")

        fout.write("\n};\n")

        fout.write(f"float factor{index}_data[{height * width}] = {{\n")
        for j in range(width):
            for i in range(height):
                fout.write(f"{matrix[i,j]}, ")
            fout.write("\n")

        fout.write("};\n\n")

    nfactors = len(factors)
    fout.write(f"const int nfactors = {nfactors};\n")
    fout.write(f"const int factor_height[{nfactors}] = {{")
    for factor in factors:
        index = factor["index"]
        fout.write(f"factor{index}_height, ")
    fout.write("};\n")
    fout.write(f"const int factor_width[{nfactors}] = {{")
    for factor in factors:
        index = factor["index"]
        fout.write(f"factor{index}_width, ")
    fout.write("};\n")
    fout.write(f"int* factor_ridx[{nfactors}] = {{")
    for factor in factors:
        index = factor["index"]
        fout.write(f"factor{index}_ridx, ")
    fout.write("};\n")
    fout.write(f"float* factor_data[{nfactors}] = {{")
    for factor in factors:
        index = factor["index"]
        fout.write(f"factor{index}_data, ")
    fout.write("};\n")
    fout.write("\n\n")

def write_clique(fout, cliques, factors, nodes):
    factor_map = {}
    for factor in factors:
        index = factor["index"]
        factor_map[index] = len(factor_map)

    max_factor_height_clique = []
    max_factor_width_clique = []

    for clique_i, clique in enumerate(cliques):
        clique_factors = clique["factors"]
        clique_parent = clique["parent"]
        fout.write(f"const int node{clique_i}_nfactors = {len(clique_factors)};\n")
        fout.write(f"const int node{clique_i}_factors[] = {{")

        for clique_factor in clique_factors:
            factor_i = factor_map[clique_factor]
            fout.write(f"{factor_i}, ")

        fout.write("};\n")

        fout.write(f"const int node{clique_i}_factor_height[] = {{")
        for clique_factor in clique_factors:
            fout.write(f"factor{clique_factor}_height, ")
        fout.write("};\n")

        fout.write(f"const int node{clique_i}_factor_width[] = {{")
        for clique_factor in clique_factors:
            fout.write(f"factor{clique_factor}_width, ")
        fout.write("};\n")

        fout.write(f"int* node{clique_i}_factor_ridx[] = {{")
        for clique_factor in clique_factors:
            fout.write(f"factor{clique_factor}_ridx, ")
        fout.write("};\n")

        fout.write(f"float* node{clique_i}_factor_data[] = {{")
        for clique_factor in clique_factors:
            fout.write(f"factor{clique_factor}_data, ")
        fout.write("};\n")

        max_factor_height_per_clique = 0
        max_factor_width_per_clique = 0

        for clique_factor in clique_factors:
            factor_i = factor_map[clique_factor]
            factor = factors[factor_i]
            if factor["width"] > max_factor_width_per_clique:
                max_factor_width_per_clique = factor["width"]
            if factor["height"] > max_factor_height_per_clique:
                max_factor_height_per_clique = factor["height"]

        fout.write(f"const int node{clique_i}_factor_max_height = {max_factor_height_per_clique};\n")
        fout.write(f"const int node{clique_i}_factor_max_width = {max_factor_width_per_clique};\n")

        fout.write(f"const int node{clique_i}_parent = {clique_parent};\n")

        fout.write("\n")


    fout.write("const int node_nfactors[] = {")
    for clique_i, clique in enumerate(cliques):
        fout.write(f"node{clique_i}_nfactors, ")
    fout.write("};\n\n")
    fout.write("const int* node_factors[] = {")
    for clique_i, clique in enumerate(cliques):
        fout.write(f"node{clique_i}_factors, ")
    fout.write("};\n\n")

    fout.write("const int* node_factor_height[] = {")
    for clique_i, clique in enumerate(cliques):
        fout.write(f"node{clique_i}_factor_height, ")
    fout.write("};\n\n")

    fout.write("const int* node_factor_width[] = {")
    for clique_i, clique in enumerate(cliques):
        fout.write(f"node{clique_i}_factor_width, ")
    fout.write("};\n\n")

    fout.write("int** node_factor_ridx[] = {")
    for clique_i, clique in enumerate(cliques):
        fout.write(f"node{clique_i}_factor_ridx, ")
    fout.write("};\n\n")

    fout.write("float** node_factor_data[] = {")
    for clique_i, clique in enumerate(cliques):
        fout.write(f"node{clique_i}_factor_data, ")
    fout.write("};\n\n")

    fout.write("const int node_factor_max_height[] = {")
    for clique_i, clique in enumerate(cliques):
        fout.write(f"node{clique_i}_factor_max_height, ")
    fout.write("};\n\n")

    fout.write("const int node_factor_max_width[] = {")
    for clique_i, clique in enumerate(cliques):
        fout.write(f"node{clique_i}_factor_max_width, ")
    fout.write("};\n\n")

    fout.write("const int node_parent[] = {")
    for clique_i, clique in enumerate(cliques):
        fout.write(f"node{clique_i}_parent, ")
    fout.write("};\n\n")

    fout.write("\n")

    

def write_matrix(fout, name, matrix, cliques, nodes):
    matrix = deepcopy(matrix.astype(np.float32))
    for clique_i, clique in enumerate(cliques):
        node_size = clique["node_size"]
        block_indices = clique["block_indices"]
        clique_width = block_indices[node_size - 1][1] + block_indices[node_size - 1][2]
        clique_height = block_indices[-1][1] + block_indices[-1][2]
        clique_start_col = nodes[block_indices[0][0]][1]

        clique_matrix = np.zeros((clique_height, clique_height))

        for j in range(node_size):
            jkey, jcrow, jheight = block_indices[j]
            jrow = nodes[jkey][1]
            for i in range(len(block_indices)):
                ikey, icrow, iheight = block_indices[i]
                irow = nodes[ikey][1]

                clique_matrix[icrow:icrow+iheight, jcrow:jcrow+jheight] = matrix[irow:irow+iheight, jrow:jrow+jheight]
                matrix[irow:irow+iheight, jrow:jrow+jheight] = 0

        fout.write(f"const int {name}_w{clique_i} = {clique_width};\n")
        fout.write(f"const int {name}_h{clique_i} = {clique_height};\n")

        fout.write(f"int {name}_ridx{clique_i}[{clique_height}] = {{\n")

        for key, _, height in block_indices:
            row = nodes[key][1]

            for idx in range(row, row + height):
                fout.write(f"{idx}, ")

        fout.write("\n};\n\n")

        fout.write(f"float {name}{clique_i}[{clique_height * clique_height}] = {{\n")

        for j in range(clique_height):
            for i in range(clique_height):
                fout.write(f"{clique_matrix[i, j]}, ")

            fout.write("\n")

        fout.write("};\n\n")

    assert(np.allclose(np.tril(matrix), np.zeros_like(matrix)))

    num_cliques = len(cliques)

    fout.write(f"const int {name}_nnode = {num_cliques};\n")
    fout.write(f"const int {name}_width[{num_cliques}] = {{")
    for clique_i in range(num_cliques):
        fout.write(f"{name}_w{clique_i}, ")
    fout.write("};\n")
    fout.write(f"const int {name}_height[{num_cliques}] = {{")
    for clique_i in range(num_cliques):
        fout.write(f"{name}_h{clique_i}, ")
    fout.write("};\n")
    fout.write(f"int* {name}_row_indices[{num_cliques}] = {{")
    for clique_i in range(num_cliques):
        fout.write(f"{name}_ridx{clique_i}, ")
    fout.write("};\n")
    fout.write(f"float* {name}[{num_cliques}] = {{")
    for clique_i in range(num_cliques):
        fout.write(f"{name}{clique_i}, ")
    fout.write("};\n")
    fout.write("\n\n")



def read_until(fin, match):
    while True:
        line = fin.readline()
        if not line:
            break
        if match in line:
            break

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--infile", dest="infile", 
                      default=None, help="The path to the input tree structure file")
    parser.add_option('--multiplier', dest="multiplier", type="float",
                      default=1, help="multiply output by multiplier")
    parser.add_option("--outfile", dest="outfile", 
                      default=None, help="The path to the output header file")
    parser.add_option("--seed", dest="seed", 
                      default=None, help="random seed for numpy sampling")
    (options, args) = parser.parse_args()

    infile = options.infile
    outfile = options.outfile
    seed = options.seed
    multiplier = options.multiplier

    if options.seed is not None:
        np.random.seed(int(options.seed))

    factors = []
    cliques = []
    nodes = {}
    last_row = 0
    
    with open(infile, "r") as fin:
        read_until(fin, "factors")

        num_factors = int(fin.readline())

        for _ in range(num_factors):
            factors.append({})

            line = fin.readline()
            arr = [int(a) for a in line.split()]

            # Transpose the factors
            factor_height = arr[2]
            factor_width = arr[1]

            factors[-1]["index"] = arr[0]
            factors[-1]["height"] = factor_height
            factors[-1]["width"] = factor_width
            factors[-1]["num_keys"] = arr[3]
            factors[-1]["keys"] = []


            factors[-1]["matrix"] = multiplier * np.random.standard_normal((factor_height, factor_width))

            for k in range(4, len(arr)):
                factors[-1]["keys"].append(arr[k])

        read_until(fin, "cliques")

        num_cliques = int(fin.readline())

        max_factors_per_node = 0
        for _ in range(num_cliques):
            cliques.append({})

            read_until(fin, "clique")
            line = fin.readline()
            arr = line.split()

            cliques[-1]["index"] = int(arr[0])
            cliques[-1]["parent"] = int(arr[1])
            cliques[-1]["node_size"] = int(arr[2])
            cliques[-1]["block_index_size"] = int(arr[3])
            cliques[-1]["block_indices"] = []

            for k in range(cliques[-1]["block_index_size"]):
                arr1 = [int(a) for a in fin.readline().split()]
                cliques[-1]["block_indices"].append(arr1)

                key, row, height = arr1
                if key not in nodes.keys():
                    nodes[key] = [key, -1, height]
                    last_row += height



            read_until(fin, "clique factors")

            num_factors_clique = int(fin.readline())

            if max_factors_per_node < num_factors_clique:
                max_factors_per_node = num_factors_clique

            cliques[-1]["factors"] = []
            for k in range(num_factors_clique):
                line = fin.readline()
                print(line)
                cliques[-1]["factors"].append(int(line))


        print(cliques)

        total_height = last_row

        for clique in reversed(cliques):
            for key, row, height in reversed(clique["block_indices"]):
                if nodes[key][1] == -1:
                    last_row -= height
                    nodes[key][1] = last_row
        print(nodes)

        # Sort the factors based on node rows

        for factor in factors:
            factor["keys"].sort(key=lambda k: nodes[k][1])

        # H = np.eye(total_height, total_height)
        H = np.zeros((total_height, total_height))

        # for clique in cliques:
        #     node_size = clique["node_size"]
        #     block_indices = clique["block_indices"]
        #     print(block_indices, node_size)
        #     clique_width = block_indices[node_size - 1][1] + block_indices[node_size - 1][2]

        #     clique_m = np.zeros((clique_width, total_height))

        #     for key, _, height in block_indices:
        #         row = nodes[key][1]

        #         clique_m[:, row:row+height] = multiplier * np.random.standard_normal((clique_width, height))
        #     H += clique_m.T @ clique_m

        # print(H)

        H_cor = deepcopy(H)

        max_factor_height = 0
        for factor in factors:
            index = factor["index"]
            height = factor["height"]
            width = factor["width"]
            matrix = factor["matrix"].astype(np.float32)
            keys = factor["keys"]

            if max_factor_height < height:
                max_factor_height = height

            if nodes[keys[0]][1] == 0:
                print("matrix = \n", matrix[:3,:3])

            Hi = matrix @ matrix.T

            ifrow = 0
            for ikey in keys:
                _, irow, iheight = nodes[ikey]
                jfrow = 0
                for jkey in keys:
                    _, jrow, jheight = nodes[jkey]

                    H_cor[irow:irow+iheight, jrow:jrow+jheight] += Hi[ifrow:ifrow+iheight, jfrow:jfrow+jheight]
                    jfrow += jheight
                ifrow += iheight


            if nodes[keys[0]][1] == 0:
                print(Hi[:3,:3])
                print(H_cor[:3,:3])

        M = deepcopy(H_cor)

        print(M - H)

        M_cond = np.linalg.cond(M)
        M_cor = np.linalg.cholesky(M)

        Atb = M_cor[-1, :-1]

        if outfile is not None:
            with open(outfile, "w") as fout:
                print(f"Write to {outfile}")
                with open(outfile, "w") as fout:
                    write_comment_header(fout)
                    write_python_command(fout)
                    write_comment_footer(fout)

                    fout.write(f"#pragma once\n\n")
                    fout.write(f"#define MAX_NFACTOR_PER_NODE {max_factors_per_node}\n\n")
                    fout.write(f"#define MAX_FACTOR_HEIGHT {max_factor_height}\n\n")
                    fout.write(f"#define MAX_H_NNODE {len(cliques)}\n\n")
                    fout.write(f"const int m_dim = {total_height};\n\n")
                    fout.write(f"double cond = {M_cond};\n\n")

                    write_factors(fout, factors, nodes)
                    write_clique(fout, cliques, factors, nodes)
                    write_matrix(fout, "H", H, cliques, nodes);
                    write_matrix(fout, "M", M, cliques, nodes);
                    write_matrix(fout, "M_correct", M_cor, cliques, nodes);






