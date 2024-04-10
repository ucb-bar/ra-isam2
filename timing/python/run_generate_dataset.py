import yaml
import numpy as np
import scipy
from scipy.stats import special_ortho_group
import sys
from optparse import OptionParser
import math
from copy import deepcopy
from utils import *
import glob
import os
from subprocess import Popen, PIPE, CalledProcessError

def get_yes_no_input(prompt):
    while True:
        user_input = input(prompt).strip().lower()
        if user_input in {'y', 'n'}:
            return user_input == 'y'
        print("Invalid input. Please enter 'Y' or 'N'.")

def run_system_cmd(cmd):
    print(cmd)
    with Popen(cmd, shell=True, stdout=PIPE, bufsize=1, universal_newlines=True) as p:
        for line in p.stdout:
            print(line, end='') # process line here

        p.wait()

        if p.returncode != 0:
            raise CalledProcessError(p.returncode, p.args)

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--config", dest="config", 
                      default="config_datasets.yaml", help="The path to the config file")
    (options, args) = parser.parse_args()

    with open(options.config, "r") as config_fin:
        config = yaml.safe_load(config_fin)

    #######################################
    # Metadata
    #######################################
    scriptdir = os.path.abspath(config["metadata"]["scriptdir"])
    headerdir = os.path.abspath(config["metadata"]["headerdir"])
    builddir = os.path.abspath(config["metadata"]["builddir"])
    recompile = config["metadata"]["recompile"]
    make_flags = config["metadata"]["make_flags"]

    binary_str = ""
    for binary in config["metadata"]["target_binary"]:
        binary_str += f"{binary} "

    if recompile:
        run_system_cmd(f"cd {builddir} && cmake .. && make {make_flags} {binary_str}")

    #######################################
    # Run RA
    #######################################

    if config["RA"]["dataset"] is not None:

        output_format = config["RA"]["output_format"]
        header_format = config["RA"]["header_format"]

        for dataset in config["RA"]["dataset"]:
            d = config["dataset"][dataset]
            d["dataset"] = dataset
            d.update(config["RA"]["params"])

            output_name = eval(f'f"{output_format}"', d)
            header_name = eval(f'f"{output_format}"', d)

            is3D = d["is3D"]
            dataset_path = d["path"]
            relin_thresh = d["relin_thresh"]
            start_step = d["start_step"]
            end_step = d["end_step"] + 1
            period = d["period"]
            num_threads = d["num_threads"]
            num_threads_file = d["num_threads_file"]
            output_dir = f"{builddir}/{output_name}"
            header_dir = f"{headerdir}/{header_name}"
            output_log = f"{output_dir}.log"

            print_dataset = d["print_dataset"]
            print_values = d["print_values"]
            print_pred = d["print_pred"]
            print_traj = d["print_traj"]

            exe = f"{builddir}/timing/" + "testGtsamIncremental3D-ra" if is3D else "testGtsamIncremental-ra"

            run_dset = True
            if os.path.isdir(output_dir):
                run_dset = get_yes_no_input(f"Dataset is already run and has output at {output_dir}. Do you want to rerun dataset? [Y/n] ")

            if run_dset:
                print(f"Running dataset {dataset} and write output to {output_dir}")
                run_system_cmd(f"mkdir -p {output_dir}")
                cmd = f"{exe} -f {dataset_path} \
                              --num_steps {end_step} \
                              --relin_thresh {relin_thresh} \
                              --dataset_outdir {output_dir} \
                              {'--print_dataset' if print_dataset else ''} \
                              {'--print_values' if print_values else ''} \
                              {'--print_pred' if print_pred else ''} \
                              {'--print_traj' if print_traj else ''} \
                              {'--num_threads {}'.format(num_threads) if not num_threads_file else '--num_threads_infile {}'.format(num_threads_file)} \
                              2>&1 | tee {output_log} \
                              "
                run_system_cmd(cmd)

            """
            # Generate relin keys file
            cmd = f"python3 {scriptdir}/generate_relin_keys_file.py \
                    --indir {output_dir} --outfile {output_dir}/relin_keys \
                    --start_step {start_step} \
                    --end_step {end_step - 1} \
                    {'--no_values' if not print_values else ''} \
                    "
            run_system_cmd(cmd)
            """

            # Generate header
            run_system_cmd(f"mkdir -p {headerdir}")
            cmd = f"python3 {scriptdir}/generate_dataset.py \
                    --indir {output_dir} --outdir {headerdir} \
                    --start_step {start_step} \
                    --end_step {end_step - 1} \
                    --period {period} \
                    {'--no_values' if not print_values else ''} \
                    "
            print(cmd)
            run_system_cmd(cmd)


    #######################################
    # Run Incremental
    #######################################

    if config["Incremental"]["dataset"] is not None:

        output_format = config["Incremental"]["output_format"]
        header_format = config["Incremental"]["header_format"]

        for dataset in config["Incremental"]["dataset"]:
            d = config["dataset"][dataset]
            d["dataset"] = dataset
            d.update(config["Incremental"]["params"])

            output_name = eval(f'f"{output_format}"', d)
            header_name = eval(f'f"{header_format}"', d)

            is3D = d["is3D"]
            dataset_path = d["path"]
            relin_thresh = d["relin_thresh"]
            start_step = d["start_step"]
            end_step = d["end_step"] + 1
            period = d["period"]
            output_dir = f"{builddir}/{output_name}"
            header_dir = f"{headerdir}/{header_name}"
            output_log = f"{output_dir}.log"

            print_dataset = d["print_dataset"]
            print_values = d["print_values"]
            print_pred = d["print_pred"]
            print_traj = d["print_traj"]

            exe = f"{builddir}/timing/" + "testGtsamIncremental3D-datasetgen" if is3D else "testGtsamIncremental-datasetgen"

            run_dset = True
            if os.path.isdir(output_dir):
                run_dset = get_yes_no_input(f"Dataset is already run and has output at {output_dir}. Do you want to rerun dataset? [Y/n] ")

            if run_dset:
                print(f"Running dataset {dataset} and write output to {output_dir}")
                run_system_cmd(f"mkdir -p {output_dir}")
                cmd = f"{exe} -f {dataset_path} \
                              --num_steps {end_step} \
                              --relin_thresh {relin_thresh} \
                              --dataset_outdir {output_dir} \
                              {'--print_dataset' if print_dataset else ''} \
                              {'--print_values' if print_values else ''} \
                              {'--print_pred' if print_pred else ''} \
                              {'--print_traj' if print_traj else ''} \
                              2>&1 | tee {output_log} \
                              "
                run_system_cmd(cmd)

            """
            # Generate relin keys file
            cmd = f"python3 {scriptdir}/generate_relin_keys_file.py \
                    --indir {output_dir} --outfile {output_dir}/relin_keys \
                    --start_step {start_step} \
                    --end_step {end_step - 1} \
                    {'--no_values' if not print_values else ''} \
                    "
            run_system_cmd(cmd)
            """

            # Generate header
            run_system_cmd(f"mkdir -p {headerdir}")
            cmd = f"python3 {scriptdir}/generate_dataset.py \
                    --indir {output_dir} --outdir {headerdir} \
                    --start_step {start_step} \
                    --end_step {end_step - 1} \
                    --period {period} \
                    {'--no_values' if not print_values else ''} \
                    "
            print(cmd)
            run_system_cmd(cmd)


            

            

