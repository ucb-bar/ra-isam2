Generating random factors/variables to remove/marginalize
---------------------------------------------------------

To test an implementation of removing/marginalizing factors/variables, not only do we need a dataset of constraints, we also need a set of inputs specifying which factors/variables are removed/marginalized at which timestep. Use the  `generate_random_removes_marginalize.py` script to take in a incremental dataset and generate a set of timestep-dependent inputs. (Incremental dataset means that all constraints at any timestep only connects to the variable at the current timestep and a variable at an earlier timestep.) We generate factors/variables to remove/marginalize based on the following rules.
Removing factors:
1) Removed factor cannot be a factor between two adjacent keys
2) Both keys need to have at least two active factors after removing a factor
3) Removed factor cannot be a new factor

Marginalizing variables:
1) Marginalized variables must be earlier than the `current timestep - marginalization_lag`

Run `python3 generate_random_removes_marginalize.py -f <dataset> --print_to <output filename>` to generate a random input file.

For example, `python3 generate_random_removes_marginalize.py -f w10000 --print_to remove_marginalize1.out --num_steps 350` will generate the example marginalize input file `remove_marginalize1.out`.

Run `python3 generate_random_removes_marginalize.py --help` for more information.
