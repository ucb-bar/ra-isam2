import sys

def write_python_command(fout):
    fout.write(" * Command: ")
    for s in sys.argv:
        fout.write(f"{s} ")
    fout.write("\n")

def write_comment_header(fout):
    fout.write("/*")
    for _ in range(80):
        fout.write("*")
    fout.write("\n")

def write_comment_footer(fout):
    for _ in range(80):
        fout.write("*")
    fout.write("*/\n\n")

def write_include_guard(fout):
    fout.write("#pragma once\n\n")

def read_until(fin, s):
    while True:
        line = fin.readline()
        if not line:
            print("Line not found")
            exit(0)

        if s in line:
            break


def read_timestep_file(fin):

    read_until(fin, "ordering")


