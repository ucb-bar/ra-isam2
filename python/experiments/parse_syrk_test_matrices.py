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
    fout.write(f"int {name}_rows = {rows};\nint {name}_cols = {cols};\nelem_t {name}[{rows * cols}] = {{\n")
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

def read_syrk_inputs(fin, fout):
    arr = fin.readline().split()
    d = dict()
    d["dim_I"] = arr[0]
    d["dim_J"] = arr[1]
    d["dim_K"] = arr[2]
    d["A_r1"] = arr[3]
    d["A_c1"] = arr[4]
    d["B_r1"] = arr[5]
    d["B_c1"] = arr[6]
    d["C_r1"] = arr[7]
    d["C_c1"] = arr[8]
    d["stride_A"] = arr[9]
    d["stride_B"] = arr[10]
    d["stride_C"] = arr[11]
    scale_factor_A = arr[12]
    scale_factor_B = arr[13]
    transpose_A = arr[14]
    transpose_B = arr[15]

    for name, val in d.items():
        fout.write(f"int {name} = {val};\n")

    fout.write(f"scale_t scale_factor_A = {scale_factor_A};\n")
    fout.write(f"scale_t scale_factor_B = {scale_factor_B};\n")
    fout.write(f"bool transpose_A = {transpose_A};\n")
    fout.write(f"bool transpose_B = {transpose_B};\n\n")


if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--infile", "-f", dest="infile",
                      default="", help="The full path to the file that contains the syrk test matrices.")
    parser.add_option("--outdir", dest="outdir",
                      default="", help="Output directory.")
    (options, args) = parser.parse_args()

    infile = options.infile
    count = 0
    base_file_name = options.outdir + "/syrk_test"

    with open(infile, "r") as fin:
        while read_until(fin, "MATRIX_INPUTS"):
            outfile = base_file_name + str(count) + ".h"
            count += 1
            with open(outfile, "w") as fout:
                fout.write("#pragma once\n\n")
                read_until(fin, "Matrix")
                write_matrix(fin, fout)
                read_until(fin, "SYRK_INPUTS")
                read_syrk_inputs(fin, fout)
                read_until(fin, "SYRK_OUTPUTS")
                read_until(fin, "Matrix")
                write_matrix(fin, fout)
                    
            

