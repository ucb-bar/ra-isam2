import numpy as np

class Clique:
    def __init__(self, fin):
        line = fin.readline()
        arr = line.split()

        self.height = int(arr[0])
        self.width = int(arr[1])
        self.clique_size = int(arr[2])
        self.block_indices_size = int(arr[3])

        self.block_indices = []

        for i in range(self.block_indices_size):
            line = fin.readline()
            arr = line.split()

            self.block_indices.append([int(x) for x in arr])

        self.matrix = np.zeros((self.height, self.width))

        for i in range(self.height):
            line = fin.readline()
            arr = line.split()
            assert(len(arr) == self.width)
            for j in range(self.width):
                self.matrix[i, j] = float(arr[j])


