"""
generate_AtA_cascading_supernode2.py
Generate several cascading supernodes that follow one another. 
The row indices of a supernode should be a superset of the subdiagonal row indices of its child and should have the same ordering. 
The matrix formed by the supernodes should be SPD. Each supernode should have minimum width of some small block size, The block sizes are randomly generated and can be specified by the cmdline argument block_sizes
but multiple block columns can merge if they have the same nonzero structure
For each supernode, generate factors that will go into each supernode

Arguments: --dim=DIM
                total size of the generated sparse matrix, plus/minus a tolerance dim_tol
           --num_blocks=NUM_BLOCKS
                number of blocks generated, each block size is sampled from block_sizes. Overrides dim
           --num_levels=LEVEL 
                number of cascading supernodes
           --block_sizes=BLOCK_SIZE1 BLOCK_SIZE2 ...
                set of block sizes to sample from.
           --num_factor_per_var=NUM_FACTOR
                number of factors per variable
           --factor_dims=DIM1 DIM2 ...
                set of factor dimensions to sample from. 
           --num_factor_vars=NUM1 NUM2 ...
                potential number of blocks involved in a sparse factor, not including the last row
           --sample_rate=RATE
                How many row indices to sample from the parent block. Essentially corresponds to the density of the child C compared to the parent [A 0; B C] (sample_rate^2)")
           --multiplier=MULTIPLIER
                multiply output matrix by MULTIPLIER
           --outfile=FILE
                output file path
           --seed=SEED 
                random seed

Note: dim_tol is the tolerance of the generated total dimension from the specified value. dim_tol is set to ceil(min_block_size / 2) to gaurantee that there exists a viable sequence of block sizes. 

Example Commands: 
    python3 generate_cascading_supernode.py --dim 200 --num_levels 10 --block_sizes "3 6 9" --num_factors_per_var 4 --factor_dims "3 6 9" --num_factor_vars "2 3" --sample_rate 0.5 --seed 0 --outfile baremetal_tests/cascading_supernode_dim-200_level-10.h
"""
