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

    vertices = []
    edges = {}

    pairs = {}

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

                if max_key not in edges.keys():
                    edges[max_key] = []
                    pairs[max_key] = []

                # cubicle specific fix
                if "cubicle" in infile and len(pairs[max_key]) > 0 and min_key == pairs[max_key][-1]:
                        edges[max_key][-1] = line
                else:
                    edges[max_key].append(line)
                    pairs[max_key].append(min_key)

    with open(outfile, "w") as fout:
        for line in vertices:
            fout.write(line)

        for key in sorted(edges.keys()):
            for line in edges[key]:
                fout.write(line)



