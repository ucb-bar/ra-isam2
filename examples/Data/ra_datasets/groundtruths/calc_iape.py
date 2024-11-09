import sys
from optparse import OptionParser
from copy import deepcopy
import matplotlib.pyplot as plt

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--infiles", dest="infiles",
                      default=None, help="input file paths")
    parser.add_option("--start_step", dest="start_step", type="int",
                      default=2, help="input file path")
    parser.add_option("--dataset", dest="dataset", type="string",
                      default="", help="dataset name")
    parser.add_option("--names", dest="names", type="string",
                      default=None, help="names of the datasets")
    (options, args) = parser.parse_args()

    infiles = options.infiles.split()
    dataset = options.dataset
    names = infiles if options.names is None else options.names.split()
    start_step = options.start_step

    t = []
    rmse = []
    max_error = []
    min_error = []

    for i, infile in enumerate(infiles):
        t.append([])
        rmse.append([])
        max_error.append([])
        start_step = options.start_step
        with open(infile, "r") as fin:
            index = -1
            while True:
                line = fin.readline()
                if not line:
                    break

                arr = line.split()

                if "not aligned" in line:
                    t[-1].append(start_step)
                    start_step += 1
                    index += 1

                if "max" in line:
                    e = float(arr[1])
                    max_error[-1].append(e)
                if "rmse" in line:
                    e = float(arr[1])
                    rmse[-1].append(e)

    print("Dataset: ", dataset)
    
    for i, infile in enumerate(infiles):
        sum_steps = sum(t[i])
        irmse = 0
        max_e = max(max_error[i])
        for j in range(len(t[i])):
            step = t[i][j]
            irmse += step * rmse[i][j]
        irmse /= sum_steps

        print(f"{names[i]}: max = {max_e}, irmse = {irmse}")

    print("\n======================================\n")
            

