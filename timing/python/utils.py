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

