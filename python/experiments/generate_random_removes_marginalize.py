import sys
from optparse import OptionParser
import random
from copy import deepcopy

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--dataset", "-f", dest="dataset",
                      default="", help="The full path to the file that contains data.")
    parser.add_option("--print_to", dest="outfile",
                      default="file.out", help="Output file path.")
    parser.add_option("--max_step", dest="max_step",
                      default="350", help="Maximum step at which to generate removes or marginalizations")
    parser.add_option("--min_step", dest="min_step",
                      default="20", help="Minimum step at which to generate removes or marginalizations")
    parser.add_option("--max_removes", dest="max_removes",
                      default="10", help="Maximum removed factors at any step")
    parser.add_option("--remove_rate", dest="remove_rate",
                      default="0.2", help="Rate at which a step will be chosen to remove factors")
    parser.add_option("--max_marginalize", dest="max_marginalize",
                      default="10", help="Maximum marginalized variables at any step")
    parser.add_option("--marginalize_rate", dest="marginalize_rate",
                      default="0.1", help="Rate at which a step will be chosen to marginalize variables")
    parser.add_option("--marginalization_lag", dest="marginalization_lag",
                      default="10", help="Max key that can be marginalized behind current step")
    parser.add_option("--seed", dest="seed",
                      default="0", help="Rand seed")
    (options, args) = parser.parse_args()



    dataset = options.dataset
    outfile = options.outfile
    max_step = int(options.max_step)
    min_step = int(options.min_step)
    max_removes = int(options.max_removes)
    remove_rate = float(options.remove_rate)
    max_marginalize = int(options.max_marginalize)
    marginalize_rate = float(options.marginalize_rate)
    marginalization_lag = float(options.marginalize_rate)
    seed = int(options.seed)

    random.seed(seed)

    step_max_factor = {}
    step_factors = {}
    factors = {}
    factor_index = 0


    with open(dataset, "r") as fin:
        while True:
            line = fin.readline()
            if not line:
                break
            arr = line.split()
            if "VERTEX" in line:
                step = int(arr[1])
                step_factors[step] = []
                step_max_factor[step] = 0

            elif "EDGE" in line:
                key1 = int(arr[1])
                key2 = int(arr[2])
                step = max(key1, key2)

                if step > max_step:
                    break

                step_max_factor[step] = factor_index
                factors[factor_index] = (key1, key2)

                factor_index += 1

    
    with open(outfile, "w") as fout:
        fout.write(f"METADATA\n")
        fout.write(f"SEED {seed}\n\n")
        fout.write(f"START\n")

        marginalize_steps = random.sample(range(min_step, max_step), k=int(marginalize_rate * (max_step - min_step)))
        remove_steps = random.sample(range(min_step, max_step), k=int(marginalize_rate * (max_step - min_step)))
        marginalize_steps.sort()
        remove_steps.sort()

        print(remove_steps)

        prev_factor_index = 0
        cur_factors = set()
        cur_keys = set()
        print("remove_steps = ", remove_steps)
        for step in range(max_step):
            print(f"step = {step}")
            cur_keys.add(step)

            # Add factors for that step
            max_factor_index = step_max_factor[step]
            for factor_index in range(prev_factor_index, max_factor_index + 1):
                key1, key2 = factors[factor_index]
                if key1 in cur_keys and key2 in cur_keys:
                    step_factors[key1].append(factor_index)
                    step_factors[key2].append(factor_index)
                    cur_factors.add(factor_index)
            prev_factor_index = max_factor_index + 1
            
            actually_removed = []
            if len(remove_steps) > 0 and step == remove_steps[0]:
                remove_steps.pop(0)

                num_removes = random.randrange(1, max_removes)
                remove_factor_indices = random.sample(tuple(cur_factors), k=num_removes)

                print("remove factor indices = ", remove_factor_indices)

                # Check if valid for remove
                # 1. Factor cannot be a factor between 2 adjacent keys
                # 2. Both keys need to have at least 2 active factors
                # 3. Removed factor cannot be new
                for factor_index in remove_factor_indices:
                    key1, key2 = factors[factor_index]
                    valid = True
                    if abs(key1 - key2) == 1:
                        valid = False
                    elif len(step_factors[key1]) < 2 or len(step_factors[key2]) < 2:
                        valid = False
                    elif key1 == step or key2 == step:
                        valid = False
                    if valid:
                        step_factors[key1].remove(factor_index)
                        step_factors[key2].remove(factor_index)
                        cur_factors.remove(factor_index)
                        actually_removed.append(factor_index)
                        print(f"key1 {key1} key2 {key2}")

                print("actually removed = ", actually_removed)

            actually_marginalized = []
            if len(marginalize_steps) > 0 and step == marginalize_steps[0]:
                marginalize_steps.pop(0)

                num_marginalize = random.randrange(1, max_marginalize)
                print(f"num marginalize = {num_marginalize}, cur_keys = {len(cur_keys)}")
                marginalize_keys = random.sample(tuple(cur_keys), k=num_marginalize)

                # Check if key is valid for marginalize
                # 1. Key cannot be the latest key

                # After marginalization, all existing factors related to the marginalized
                # will still exist, but no new factors may come in. Marginalized factors 
                # may not be removed
                for key in marginalize_keys:
                    if key < step - marginalization_lag:
                        cur_keys.remove(key)
                        actually_marginalized.append(key)
                        print("marginalized: ", key, step_factors[key])
                        print("cur factors: ", cur_factors)
                        # Remove all factors of that key from active factors list
                        remove_factors_indices = deepcopy(step_factors[key])
                        for factor_index in remove_factors_indices:
                            key1, key2 = factors[factor_index]
                            step_factors[key1].remove(factor_index)
                            step_factors[key2].remove(factor_index)
                            cur_factors.remove(factor_index)


            if len(actually_removed) > 0 or len(actually_marginalized) > 0:
                fout.write(f"STEP {step}\nREMOVE {len(actually_removed)}\n")
                for factor_index in actually_removed:
                    fout.write(f"{factor_index} ")
                fout.write("\n")
                fout.write(f"MARGINALIZE {len(actually_marginalized)}\n")
                for key in actually_marginalized:
                    fout.write(f"{key} ")
                fout.write("\n\n")








