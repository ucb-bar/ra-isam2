# Data that is read at every timestep
from factor import Factor
from clique import Clique
import numpy as np
from utils import *

def read_until(fin, s):
    while True:
        line = fin.readline()
        if not line:
            print("Line not found")
            exit(0)

        if s in line:
            break

def group_block_indices(A_ridx, B_ridx):
    in_blk = False
    Ai = 0
    A_blk_start = []
    B_blk_start = []
    blk_width = []
    for Bi in range(len(B_ridx) - 1):   # Don't do last row
        if A_ridx[Ai] == B_ridx[Bi]:
            if not in_blk:
                in_blk = True
                A_blk_start.append(Ai)
                B_blk_start.append(Bi)
                blk_width.append(1)
            else:
                blk_width[-1] += 1
            Ai += 1
        else:
            if in_blk:
                in_blk = False

    return A_blk_start, B_blk_start, blk_width


class Timestep:
    vio_scale = 1.0

    def map_keys_to_cliques(self):
        self.key_to_clique = [None for _ in range(self.num_keys)]
        for clique in self.cliques:
            for key in clique.keys:
                self.key_to_clique[key] = clique

    def map_cliques_to_parents(self):
        for clique in self.cliques:
            if clique.clique_size < clique.block_indices_size:
                parent_key = clique.block_indices[clique.clique_size][0]
                clique.parent = self.key_to_clique[parent_key]

    def __init__(self, fin, step, vio=False):
        # ======================================== #
        # Variable initialization
        # ======================================== #

        self.step = step
        self.is_reconstruct = True

        # ======================================== #
        # END Variable initialization
        # ======================================== #

        read_until(fin, "ordering and width")

        self.num_keys = int(fin.readline())
        self.ordering_to_key = []
        self.key_width = [0 for _ in range(self.num_keys)]

        for _ in range(self.num_keys):
            arr = fin.readline().split()
            key = int(arr[0])
            width = int(arr[1])
            self.ordering_to_key.append(key)
            self.key_width[key] = width

        if vio:
            assert(self.ordering_to_key[-1] == 0)
            self.ordering_to_key[:-1] = sorted(self.ordering_to_key[:-1])

        self.key_to_ordering = [None for _ in range(len(self.ordering_to_key))]
        for order, key in enumerate(self.ordering_to_key):
            self.key_to_ordering[key] = order

        read_until(fin, "factors")

        self.num_factors = int(fin.readline())

        self.factors = []

        for _ in range(self.num_factors):
            self.factors.append(Factor(fin, key_width=self.key_width, key_to_ordering=self.key_to_ordering))

        self.factor_max_height = 0
        self.factor_max_width = 0
        for factor in self.factors:
            if self.factor_max_height < factor.height:
                self.factor_max_height = factor.height
            if self.factor_max_width < factor.width:
                self.factor_max_width = factor.width


        read_until(fin, "cliques")

        self.num_cliques = int(fin.readline())

        self.cliques = []

        for i in range(self.num_cliques):
            self.cliques.append(Clique(fin, i))

        self.map_keys_to_cliques()
        self.map_cliques_to_parents()

        read_until(fin, "new keys")
        self.num_new_keys = int(fin.readline())
        self.new_keys = []

        for k in range(self.num_new_keys):
            line = fin.readline()
            self.new_keys.append(int(line))

        read_until(fin, "relin keys")
        self.num_relin_keys = int(fin.readline())
        self.relin_keys = []

        for k in range(self.num_relin_keys):
            line = fin.readline()
            self.relin_keys.append(int(line))

        read_until(fin, "deltas")

        line = fin.readline()

        assert(int(line) == self.num_keys - 1)

        self.deltas = [None for _ in range(self.num_keys)]

        for k in range(1, self.num_keys):
            line = fin.readline()
            arr = line.split()
            arr = [float(a) for a in arr]

            vec = np.array(arr)

            self.deltas[k] = vec

            self.prefix = f"step{self.step}_"

    def print_header_vio(self, fout, vio_lag, prev_matrix):
        fout.write(f"const bool step{self.step}_is_reconstruct = true;\n\n")

        # For VIO, the tree structure is not important, we just need to pick
        # keys that are within vio_lag of the current timestep

        max_key = max(self.ordering_to_key)
        age_cutoff = max(1, max_key - vio_lag)


        # Get max width
        inverse_block_indices = {}
        height_needed = 0
        for key in range(age_cutoff, max_key+1):
            height = self.key_width[key]
            inverse_block_indices[key] = [key, height_needed, height]
            height_needed += height

        # Last row
        inverse_block_indices[0] = [key, height_needed, 1]
        height_needed += 1

        self.vio_height_needed = height_needed
        print(max_key, age_cutoff, height_needed)

        # Construct inverse block indices

        # Print all factors
        factor_indices = []
        for factor in self.factors:
            if factor is None:
                continue

            factor_indices.append(factor.index)
            factor.print_factor(fout, inverse_block_indices=inverse_block_indices, prefix=self.prefix, lowest_key=age_cutoff)

        step_factor_max_num_blks = 0
        for factor in self.factors:
            if factor is None:
                continue
            if factor.num_blks > step_factor_max_num_blks:
                step_factor_max_num_blks = factor.num_blks

        fout.write(f"const int step{self.step}_factor_max_num_blks = {step_factor_max_num_blks};\n\n")

        # This is transposed
        step_factor_max_width = 0
        for factor in self.factors:
            if factor is None:
                continue
            if factor.width > step_factor_max_width:
                step_factor_max_width = factor.width

        fout.write(f"const int step{self.step}_factor_max_height = {step_factor_max_width};\n\n")

        Factor.print_metadata(fout, factor_indices, self.prefix)

        # Calculate correct data, before and after choleksy
        workspace = np.zeros((height_needed, height_needed)).astype(np.float32)

        has_marginal = max_key - vio_lag > 1
        marginalized_width = 0

        if has_marginal:
            marginalized_key = max_key - vio_lag - 1
            marginalized_width = self.key_width[marginalized_key]

            marginal_factor = prev_matrix[marginalized_width:, :marginalized_width].astype(np.float32)

            LLT = marginal_factor @ marginal_factor.T

            assert(LLT.shape[0] == height_needed - marginalized_width)
            LLT_height = height_needed - marginalized_width

            workspace[0:LLT_height-1, 0:LLT_height-1] -= self.vio_scale * LLT[0:LLT_height-1, 0:LLT_height-1]
            workspace[-1, 0:LLT_height-1] -= self.vio_scale * LLT[-1, 0:LLT_height-1]

        # Allocate [A B] matrix plus root node
        fout.write(f"const int step{self.step}_vio_node_height = {self.vio_height_needed};\n")
        fout.write(f"const int step{self.step}_vio_node_width = {self.vio_height_needed - 1};\n")
        fout.write(f"const int step{self.step}_vio_marginal_width = {marginalized_width};\n")
        fout.write("\n")

        for factor in self.factors:
            if factor is None:
                continue

            Hi = (factor.reduced_matrix.T @ factor.reduced_matrix).astype(np.float32)

            cur_col = 0
            for kj in factor.reduced_keys:
                _, col, width = inverse_block_indices[kj]
                cur_row = 0
                for ki in factor.reduced_keys:
                    _, row, height = inverse_block_indices[ki]
                    workspace[row:row+height, col:col+width] += Hi[cur_row:cur_row+height, cur_col:cur_col+width]

                    cur_row += height
                cur_col += width

        # Condition number does not count the root node, add something to it to ensure positive definiteness
        workspace[height_needed-1, height_needed-1] += 1
        H_cond = np.linalg.cond(workspace[:height_needed-1, :height_needed-1]);

        fout.write(f"const float step{self.step}_H_correct_cond = {H_cond};\n")
        fout.write(f"float step{self.step}_H_correct_data[] = {{\n")
        for j in range(height_needed - 1):
            for i in range(height_needed):
                fout.write(f"{workspace[i, j]:.7f}, ")
            fout.write("\n")
        fout.write("};\n\n")

        M = np.linalg.cholesky(workspace.astype(np.float32))

        fout.write(f"float step{self.step}_M_correct_data[] = {{\n")
        for j in range(height_needed - 1):
            for i in range(height_needed):
                fout.write(f"{M[i, j]:.7f}, ")
            fout.write("\n")
        fout.write("};\n\n")

        prev_matrix = M
        return prev_matrix



    @staticmethod
    def print_metadata_vio(fout, timesteps, stepfile_format):
        
        start_step = None
        for timestep in timesteps:
            if timestep is not None:
                stepfile = f"{stepfile_format.format(timestep.step)}"
                fout.write(f"#include \"{stepfile}\"\n")

                if start_step is None:
                    start_step = timestep.step

        fout.write("\n\n")

        fout.write(f"const int timestep_start = {start_step};\n\n")

        timestep_count = 0
        for timestep in timesteps:
            if timestep is not None:
                timestep_count += 1

        fout.write(f"const int num_timesteps = {timestep_count};\n\n")

        fout.write(f"bool step_is_reconstruct[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_is_reconstruct, ")
        fout.write("};\n\n")

        fout.write(f"const int step_num_factors[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_num_factors, ")
        fout.write("};\n\n")

        fout.write(f"const int* step_factor_height[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_factor_height, ")
        fout.write("};\n\n")

        fout.write(f"const int* step_factor_width[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_factor_width, ")
        fout.write("};\n\n")

        fout.write(f"int** step_factor_ridx[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_factor_ridx, ")
        fout.write("};\n\n")
        
        fout.write(f"float** step_factor_data[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_factor_data, ")
        fout.write("};\n\n")

        fout.write(f"int step_factor_max_num_blks[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_factor_max_num_blks, ")
        fout.write("};\n\n")

        fout.write(f"int step_factor_max_height[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_factor_max_height, ")
        fout.write("};\n\n")

        fout.write(f"int* step_factor_num_blks[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_factor_num_blks, ")
        fout.write("};\n\n")

        fout.write(f"int** step_factor_A_blk_start[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_factor_A_blk_start, ")
        fout.write("};\n\n")

        fout.write(f"int** step_factor_B_blk_start[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_factor_B_blk_start, ")
        fout.write("};\n\n")

        fout.write(f"int** step_factor_blk_width[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_factor_blk_width, ")
        fout.write("};\n\n")

        fout.write(f"const int step_vio_node_height[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_vio_node_height, ")
        fout.write("};\n")

        fout.write(f"const int step_vio_node_width[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_vio_node_width, ")
        fout.write("};\n")

        fout.write(f"const int step_vio_marginal_width[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_vio_marginal_width, ")
        fout.write("};\n")
        fout.write("\n")

        max_vio_height_needed = 0
        for timestep in timesteps:
            if timestep is not None:
                if max_vio_height_needed < timestep.vio_height_needed:
                    max_vio_height_needed = timestep.vio_height_needed

        fout.write(f"const float vio_scale = {Timestep.vio_scale};\n\n")
        fout.write(f"const int vio_node_max_height = {max_vio_height_needed};\n")
        fout.write(f"const int vio_node_max_width = {max_vio_height_needed - 1};\n")
        fout.write(f"float vio_node_data[] = {{\n")
        for j in range(max_vio_height_needed - 1):
            for i in range(max_vio_height_needed):
                fout.write("0.0, ")
            fout.write("\n")
        fout.write("};\n\n")

        fout.write(f"float step_H_correct_cond[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_H_correct_cond, ")
        fout.write("};\n")

        fout.write(f"float* step_H_correct_data[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_H_correct_data, ")
        fout.write("};\n")

        fout.write(f"float* step_M_correct_data[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_M_correct_data, ")
        fout.write("};\n")
        fout.write("\n")

    # Go through relin keys and new keys and determine if marked or fixed
    def mark_cliques(self):
        print(self.relin_keys)
        print(self.new_keys)

        for relin_key in self.relin_keys:
            self.key_to_clique[relin_key].mark_clique_and_ancestors()

        for new_key in self.new_keys:
            self.key_to_clique[new_key].mark_clique_and_ancestors()

    # Go through all cliques. If a nonmarked clique has a marked ancestor, then it is fixed
    def fix_cliques(self):
        for clique in self.cliques:
            if clique.marked:
                continue

            # Second to last because we are not considering last row
            second_to_last_index = clique.block_indices_size - 2

            if second_to_last_index >= clique.clique_size:
                second_to_last_key = clique.block_indices[second_to_last_index][0]


                ancestor_clique = self.key_to_clique[second_to_last_key]

                if ancestor_clique.marked:
                    clique.fixed = True

    def same_ordering(self, prev):
        assert(len(self.ordering_to_key) == len(prev.ordering_to_key) + 1)
        for i in range(len(prev.ordering_to_key)):
            if self.ordering_to_key[i] != prev.ordering_to_key[i]:
                return False
        return True
        

    def print_header_reconstruct(self, fout):
        fout.write(f"const bool step{self.step}_is_reconstruct = true;\n\n")

        for clique in self.cliques:
            clique.build_inverse_block_indices()

        # First figure out which factors are used. Any factors that contain
        # a marked clique is needed
        active_factors = set()
        for factor in self.factors:
            if factor is None:
                continue

            for key in factor.keys:
                if key == 0:
                    continue
                clique = self.key_to_clique[key]
                if clique.marked:
                    active_factors.add(factor)
                    break

        factor_indices = []
        for factor in active_factors:
            lowest_key = factor.sorted_keys[0]
            clique = self.key_to_clique[lowest_key]
            clique.active_factor_indices.append(factor.index)
            factor_indices.append(factor.index)

            factor.print_factor(fout, 
                                inverse_block_indices=clique.inverse_block_indices, 
                                prefix=self.prefix, lowest_key=lowest_key)

        # Print all marked and fixed cliques
        clique_indices = []
        for clique in self.cliques:
            if clique.marked or clique.fixed:
                clique_indices.append(clique.index)
                clique.print_clique(fout, step=self.step)

        Clique.print_clique_metadata(fout, step=self.step, active_clique_indices=clique_indices, max_clique=len(self.cliques))

    @staticmethod
    def print_metadata_incremental(fout, timesteps, stepfile_format):
        start_step = None
        for timestep in timesteps:
            if timestep is not None:
                stepfile = f"{stepfile_format.format(timestep.step)}"
                fout.write(f"#include \"{stepfile}\"\n")

                if start_step is None:
                    start_step = timestep.step

        fout.write("\n\n")

        fout.write(f"const int timestep_start = {start_step};\n\n")

        timestep_count = 0
        for timestep in timesteps:
            if timestep is not None:
                timestep_count += 1

        fout.write(f"const int num_timesteps = {timestep_count};\n\n")

        max_factor_height = 0
        max_factor_width = 0
        for timestep in timesteps:
            if timestep is not None:
                if max_factor_height < timestep.factor_max_height:
                    max_factor_height = timestep.factor_max_height
                if max_factor_width < timestep.factor_max_width:
                    max_factor_width = timestep.factor_max_width

        # Transpose height and width
        fout.write(f"const int max_factor_height = {max_factor_width};\n")
        fout.write(f"const int max_factor_width = {max_factor_height};\n\n")

        fout.write(f"bool step_is_reconstruct[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_is_reconstruct, ")
        fout.write("};\n")

        fout.write(f"int step_nnodes[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_nnodes, ")
        fout.write("};\n")

        fout.write(f"bool* step_node_marked[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_marked, ")
        fout.write("};\n")

        fout.write(f"bool* step_node_fixed[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_fixed, ")
        fout.write("};\n")

        fout.write(f"int* step_node_num_factors[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_num_factors, ")
        fout.write("};\n")

        fout.write(f"int** step_node_factor_height[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_factor_height, ")
        fout.write("};\n")

        fout.write(f"int** step_node_factor_width[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_factor_width, ")
        fout.write("};\n")

        fout.write(f"int*** step_node_factor_ridx[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_factor_ridx, ")
        fout.write("};\n")

        fout.write(f"float*** step_node_factor_data[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_factor_data, ")
        fout.write("};\n")

        fout.write(f"int** step_node_factor_num_blks[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_factor_num_blks, ")
        fout.write("};\n")

        fout.write(f"int*** step_node_factor_A_blk_start[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_factor_A_blk_start, ")
        fout.write("};\n")

        fout.write(f"int*** step_node_factor_B_blk_start[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_factor_B_blk_start, ")
        fout.write("};\n")

        fout.write(f"int*** step_node_factor_blk_width[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_factor_blk_width, ")
        fout.write("};\n")

        fout.write(f"int* step_node_parent[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_parent, ")
        fout.write("};\n")

        fout.write(f"int* step_node_height[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_height, ")
        fout.write("};\n")

        fout.write(f"int* step_node_width[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_width, ")
        fout.write("};\n")

        fout.write(f"float** step_node_data[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_data, ")
        fout.write("};\n")

        fout.write(f"int* step_node_num_blks[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_num_blks, ")
        fout.write("};\n")

        fout.write(f"int** step_node_A_blk_start[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_A_blk_start, ")
        fout.write("};\n")

        fout.write(f"int** step_node_B_blk_start[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_B_blk_start, ")
        fout.write("};\n")

        fout.write(f"int** step_node_blk_width[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_blk_width, ")
        fout.write("};\n")

        fout.write(f"float* step_node_H_correct_cond[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_H_correct_cond, ")
        fout.write("};\n")

        fout.write(f"float** step_node_H_correct_data[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_H_correct_data, ")
        fout.write("};\n")

        fout.write(f"float** step_node_M_correct_data[] = {{")
        for timestep in timesteps:
            if timestep is not None:
                step = timestep.step
                fout.write(f"step{step}_node_M_correct_data, ")
        fout.write("};\n")

        fout.write("\n\n")


            


