import sys
from optparse import OptionParser
from copy import deepcopy
import matplotlib.pyplot as plt

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--infiles", dest="infiles",
                      default=None, help="input file path")
    parser.add_option("--start_step", dest="start_step", type="int",
                      default=2, help="input file path")
    (options, args) = parser.parse_args()

    infiles = options.infiles.split()
    start_step = options.start_step


    t = []
    rmse = []
    max_error = []
    min_error = []

    for infile in infiles:
        t.append([])
        rmse.append([])
        max_error.append([])
        start_step = options.start_step
        with open(infile, "r") as fin:
            while True:
                line = fin.readline()
                if not line:
                    break

                arr = line.split()

                if "not aligned" in line:
                    t[-1].append(start_step)
                    start_step += 1

                if "max" in line:
                    e = float(arr[1])
                    max_error[-1].append(e)
                if "rmse" in line:
                    e = float(arr[1])
                    rmse[-1].append(e)

        print(rmse)

        plt.plot(t[-1], rmse[-1], label="rmse")
        plt.plot(t[-1], max_error[-1], label="max")
    plt.xlabel("step")
    plt.ylabel("error (m)")

    plt.legend()

    plt.show()



