import sys
from optparse import OptionParser
import random
from copy import deepcopy

def read_until(fin, match):
    while True:
        line = fin.readline()
        if not line:
            return False

        if match in line:
            return True

def write_matrix(fin, fout):
    arr = fin.readline().split()
    name = arr[0]
    rows = int(arr[1])
    cols = int(arr[2])
    fout.write(f"size_t {name}_rows = {rows};\nsize_t {name}_cols = {cols};\nelem_t {name}[{rows * cols}] = {{\n")
    for r in range(rows):
        line = fin.readline()
        arr = line.split()
        fout.write("\t")
        for c in range(cols):
            fout.write(f"{arr[c]}")
            if not (r == rows - 1 and c == cols - 1):
                fout.write(", ")
            
        fout.write("\n")
    fout.write(f"}};\n\n")

def read_gemv_inputs(fin, fout):
    arr = fin.readline().split()
    d = dict()
    d["dim_I"] = arr[0]
    d["dim_J"] = arr[1]
    d["A_r1"] = arr[2]
    d["A_c1"] = arr[3]
    d["x_c1"] = arr[4]
    d["y_c1"] = arr[5]
    d["stride_A"] = arr[6]
    scale_factor_A = arr[7]

    for name, val in d.items():
        fout.write(f"size_t {name} = {val};\n")

    fout.write(f"scale_t scale_factor_A = {scale_factor_A};\n\n")


if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--infile", "-f", dest="infile",
                      default="", help="The full path to the file that contains the gemv test matrices.")
    parser.add_option("--outdir", dest="outdir",
                      default="", help="Output directory.")
    (options, args) = parser.parse_args()

    infile = options.infile
    count = 0
    base_file_name = options.outdir + "/gemv_test"

    with open(infile, "r") as fin:
        while read_until(fin, "MATRIX_INPUTS"):
            outfile = base_file_name + str(count) + ".h"
            count += 1
            with open(outfile, "w") as fout:
                fout.write("#pragma once\n\n")
                read_until(fin, "Matrix")
                write_matrix(fin, fout)
                read_until(fin, "rhs")
                write_matrix(fin, fout)
                read_until(fin, "lhs")
                write_matrix(fin, fout)
                read_until(fin, "GEMV_INPUTS")
                read_gemv_inputs(fin, fout)
                read_until(fin, "GEMV_OUTPUTS")
                read_until(fin, "lhs")
                write_matrix(fin, fout)
                    
            

