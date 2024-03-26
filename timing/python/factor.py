import numpy as np

def group_block_indices(A_block_indices, B_block_indices):
    in_blk = False
    A_blk_start = []
    B_blk_start = []
    blk_width = []
    for key in A_block_indices.keys():
        if key == 0:
            continue

        _, A_row, A_width = A_block_indices[key]
        _, B_row, B_width = B_block_indices[key]

        if not in_blk or B_blk_start[-1] + blk_width[-1] != B_row:
            in_blk = True
            A_blk_start.append(A_row)
            B_blk_start.append(B_row)
            blk_width.append(A_width)
        else:
            blk_width[-1] += A_width

    return A_blk_start, B_blk_start, blk_width

class Factor:
    def __init__(self, fin):
        line = fin.readline()
        arr = line.split()

        self.index = int(arr[0])
        self.height = int(arr[1])
        self.width = int(arr[2])
        self.num_keys = int(arr[3])

        self.keys = []

        line = fin.readline()
        arr = line.split()

        assert(len(arr) == self.num_keys)

        for k in range(self.num_keys):
            self.keys.append(int(arr[k]))

        self.matrix = np.zeros((self.height, self.width))

        for i in range(self.height):
            line = fin.readline()
            arr = line.split()
            assert(len(arr) == self.width)
            for j in range(self.width):
                self.matrix[i, j] = float(arr[j])


    def __str__(self):
        return f"Factor {self.index} {self.keys}"

    def print_factor(self, fout, key_width, inverse_block_indices, prefix):
        # Print the transposed factor in a header file
        # The factor blocks need to be sorted according to the row ordering

        factor_block_indices = {}
        cur_col = 0
        for key in self.keys:
            width = key_width(key)
            factor_block_indices[key] = [key, cur_col, width]
            cur_col += width

        sorted_keys = []
        sorted_width = 0
        for key in self.keys:
            if key in inverse_block_indices.keys():
                sorted_keys.append(key)
                sorted_width += key_width(key)

        sorted_keys = sorted(sorted_keys, key=lambda key : inverse_block_indices[key][1])

        sorted_matrix = np.zeros((self.height, sorted_width))

        src_block_indices = {}
        cur_col = 0
        for key in sorted_keys:
            _, src_col, width = factor_block_indices[key]
            src_block_indices[key] = [key, cur_col, width]
            sorted_matrix[:, cur_col:cur_col+width] = self.matrix[:, src_col:src_col+width]
            cur_col += width

        self.sorted_matrix = sorted_matrix
        self.sorted_keys = sorted_keys

        # Write transpose of factor
        fout.write(f"const int {prefix}factor{self.index}_height = {sorted_width};\n")
        fout.write(f"const int {prefix}factor{self.index}_width = {self.height};\n")
        fout.write(f"int {prefix}factor{self.index}_ridx[] = {{")

        for key in sorted_keys:
            _, row, height = inverse_block_indices[key]
            for r in range(row, row+height):
                fout.write(f"{r}, ")

        fout.write("};\n")

        sorted_matrix = sorted_matrix.astype(np.float32)

        fout.write(f"float {prefix}factor{self.index}_data[] = {{\n")
        for j in range(self.height):
            for i in range(sorted_width):
                fout.write(f"{sorted_matrix[j, i]:.7f}, ")

            fout.write("\n")

        fout.write("};\n\n")

        # Group block indices
        A_blk_start, B_blk_start, blk_width = group_block_indices(src_block_indices, inverse_block_indices)

        fout.write(f"const int {prefix}factor{self.index}_num_blks = {len(blk_width)};\n")
        fout.write(f"int {prefix}factor{self.index}_A_blk_start[] = {{")
        for a in A_blk_start:
            fout.write(f"{a}, ")
        fout.write("};\n")
        fout.write(f"int {prefix}factor{self.index}_B_blk_start[] = {{")
        for a in B_blk_start:
            fout.write(f"{a}, ")
        fout.write("};\n")
        fout.write(f"int {prefix}factor{self.index}_blk_width[] = {{")
        for a in blk_width:
            fout.write(f"{a}, ")
        fout.write("};\n")
        fout.write("\n")

        self.num_blks = len(blk_width)

    @staticmethod
    def print_metadata(fout, factor_indices, prefix):
        fout.write(f"const int {prefix}num_factors = {len(factor_indices)};\n")
        fout.write(f"const int {prefix}factor_height[] = {{")
        for index in factor_indices:
            fout.write(f"{prefix}factor{index}_height, ")
        fout.write("};\n")
        fout.write(f"const int {prefix}factor_width[] = {{")
        for index in factor_indices:
            fout.write(f"{prefix}factor{index}_width, ")
        fout.write("};\n")
        fout.write(f"int* {prefix}factor_ridx[] = {{")
        for index in factor_indices:
            fout.write(f"{prefix}factor{index}_ridx, ")
        fout.write("};\n")
        fout.write(f"float* {prefix}factor_data[] = {{")
        for index in factor_indices:
            fout.write(f"{prefix}factor{index}_data, ")
        fout.write("};\n")
        fout.write(f"int {prefix}factor_num_blks[] = {{")
        for index in factor_indices:
            fout.write(f"{prefix}factor{index}_num_blks, ")
        fout.write("};\n")
        fout.write(f"int* {prefix}factor_A_blk_start[] = {{")
        for index in factor_indices:
            fout.write(f"{prefix}factor{index}_A_blk_start, ")
        fout.write("};\n")
        fout.write(f"int* {prefix}factor_B_blk_start[] = {{")
        for index in factor_indices:
            fout.write(f"{prefix}factor{index}_B_blk_start, ")
        fout.write("};\n")
        fout.write(f"int* {prefix}factor_blk_width[] = {{")
        for index in factor_indices:
            fout.write(f"{prefix}factor{index}_blk_width, ")
        fout.write("};\n")
        fout.write("\n")






