"""
Just want to test evo behavior when we shift each pose by a translation bias
"""

import sys
from optparse import OptionParser
from copy import deepcopy

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--infile", dest="infile",
                      default=None, help="input file path")
    parser.add_option("--outfile", dest="outfile",
                      default=None, help="output file path")
    (options, args) = parser.parse_args()

    infile = options.infile
    outfile = options.outfile


    with open(outfile, "w") as fout:
        with open(infile, "r") as fin:
            while True:
                line = fin.readline()
                if not line:
                    break

                arr = [float(x) for x in line.split()]
                arr[0] += 50


                for i, x in enumerate(arr):
                    fout.write(f"{x}")
                    if i != len(arr) - 1:
                        fout.write(" ")
                fout.write("\n")
            



