import sys
from optparse import OptionParser
from copy import deepcopy

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--infile", dest="infile",
                      default=None, help="input file path")
    parser.add_option("--reffile", dest="reffile",
                      default=None, help="ref file path")
    parser.add_option("--outfile", dest="outfile",
                      default=None, help="output file path")
    (options, args) = parser.parse_args()

    infile = options.infile
    reffile = options.reffile
    outfile = options.outfile

    vertices = []
    edges = {}

    pairs = set()

    with open(reffile, "r") as fin:
        while True:
            line = fin.readline()

            if not line:
                break

            if "VERTEX" in line:
                vertices.append(line)

            if "EDGE" in line:
                arr = line.split()

                key1 = int(arr[1])
                key2 = int(arr[2])

                max_key = max(key1, key2)
                min_key = min(key1, key2)

                pairs.add((max_key, min_key))


    with open(outfile, "w") as fout:
        with open(infile, "r") as fin:
            while True:
                line = fin.readline()

                if not line:
                    break

                if "VERTEX" in line:
                    vertices.append(line)

                if "EDGE" in line:
                    arr = line.split()

                    key1 = int(arr[1])
                    key2 = int(arr[2])

                    max_key = max(key1, key2)
                    min_key = min(key1, key2)

                    if (max_key, min_key) in pairs:
                        fout.write(f"{line}")

