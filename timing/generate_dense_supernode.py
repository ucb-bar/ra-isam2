"""
generate_dense_supernode.py
Generate a block lower triangular matrix of the form [A 0; B C]. A, C must by symmetric. A must be positive definite
A is width x width. C is (height - width) x (height - width)
Also generate the correctly partially-factored result
Write out both matrices in column major format in a C header
where int diag_width = width; int height = height;
"""
import numpy as np
import scipy
from scipy.stats import special_ortho_group
import sys
from optparse import OptionParser

def write_matrix(fout, matrix, matrix_name):
    matrix_f = matrix.astype(np.float32)
    print(matrix_f)
    fout.write(f"float {matrix_name}[] = {{\n" )
    rows, cols = matrix.shape
    for c in range(cols):
        for r in range(rows):
            f = matrix_f[r, c]
            # print(matrix_f[r, c])
            print(type(f))
            print(f)
            fout.write(str(f))
            if c + 1 != cols or r + 1 != rows:
                fout.write(", ")
        fout.write("\n")
    fout.write("\n};\n")



def gen_supernode_column(w, h, filename=None):
    eval_range = 1000
    assert(h > w)

    Q = special_ortho_group.rvs(w)
    D = np.random.rand(w)
    print(D)

    D = (D - 1) * (-eval_range)     # numpy rand() is sampled from [0, 1), so do shift and inverse to make sure it is > 0

    D = np.diag(D)

    print(D)

    A = Q @ D @ Q.T

    print(A)

    B = np.random.randn((h - w), w) * eval_range

    C = np.random.randn((h - w), (h - w)) * np.sqrt(eval_range)
    C = C @ C.T

    print(B)
    print(C)

    M = np.zeros((h, h))

    M[:w, :w] = A
    M[w:h, :w] = B
    M[w:h, w:h] = C

    print(M)

    LA = np.linalg.cholesky(A)
    print(LA)

    LB = scipy.linalg.solve_triangular(LA, B.T, lower=True).T

    LC = C - LB @ LB.T

    M_cor = np.zeros((h, h))

    M_cor[:w, :w] = LA
    M_cor[w:h, :w] = LB
    M_cor[w:h, w:h] = LC

    if filename is not None:
        print(f"Write to {filename}")
        with open(filename, "w") as fout:
            fout.write(f"#pragma once\n\n")
            fout.write(f"int diag_width = {w};\n")
            fout.write(f"int height = {h};\n\n")
            write_matrix(fout, M, "m")
            fout.write("\n\n")
            write_matrix(fout, M_cor, "m_correct")
            fout.write("\n\n")


if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--width", dest="width", 
                      default="", help="The width of the supernode")
    parser.add_option("--height", dest="height", 
                      default="", help="The height of the supernode; must be greater than width")
    parser.add_option("--outfile", dest="outfile", 
                      default=None, help="The path to the output header file")
    parser.add_option("--seed", dest="seed", 
                      default=None, help="Random seed to use for numpy sampling.")
    (options, args) = parser.parse_args()

    if options.seed is not None:
        np.random.seed(int(options.seed))

    w = int(options.width)
    h = int(options.height)

    gen_supernode_column(3, 6, options.outfile)

