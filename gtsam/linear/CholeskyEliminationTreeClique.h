/**
* @file    CholeskyEliminationTreeClique.h
* @brief   A group of fully connected node in the CholeskyEliminationTree
* @author  Roger Hsiao (rogerhh)
* @date    Feb. 8, 2023
*/

#pragma once

#include <cstddef>
#include <gtsam/linear/CholeskyEliminationTree.h>
#include <gtsam/base/LowerTriangularColumnMatrix.h>
#include <utility>
#include <vector>
#include <unordered_set>
#include <iostream>

namespace gtsam {

class CholeskyEliminationTree::Clique : 
    public std::enable_shared_from_this<CholeskyEliminationTree::Clique> {

public:

// <matrix_source, vector_source, num_rows, start row/col, width>
// Gather source uniquely defines a fragmentation of <width> columns (and <width> 
// entries from the delta column)
// from a lower triangular matrix pointed to by <matrix_source> and a delta column 
// pointed to by <vector_source>. The lower triangular matrix is of height <num_rows> 
// and has any number of columns
// We need a starting row/col and the width of the fragment
typedef std::tuple<std::shared_ptr<std::vector<double>>,
                   std::shared_ptr<std::vector<double>>,
                   size_t, size_t, size_t> GatherColumnSource;

static constexpr size_t MATRIX_SOURCE = 0;
static constexpr size_t VECTOR_SOURCE = 1;
static constexpr size_t MATRIX_NUM_ROWS = 2;
static constexpr size_t GATHER_START_ROW = 3;
static constexpr size_t GATHER_WIDTH = 4;

enum Status {UNMARKED, EDIT, RECONSTRUCT, NEW};

private:
    CholeskyEliminationTree* etree = nullptr;

public:

    sharedClique get_ptr() {
        return shared_from_this();
    }

    // Ordered list of nodes belonging to this clique
    std::vector<sharedNode> nodes;

    sharedClique parent = nullptr;
    std::set<sharedClique> children;

    bool reconstructClique = true;
    bool hasReconstructAncestor = false;
    bool marked = false; 

    Status status = UNMARKED;

    // The memory allocated for this clique
    size_t workspaceIndex = -1;

    // The column structure of this clique, starting from the first column
    BlockIndexVector blockIndices;

    // The ordering version of this clique, if not the same as the etree's ordering version
    // then we need to reorder this clique
    size_t orderingVersion = -1;

    // The clique splitting issue. Currently, if a node in the middle of a clique is marked
    // We would split it into an unmarked clique and marked cliques
    // However, if the unmarked clique is later affected, and it can be merged back into 
    // the marked cliques, we would need to gather column from different locations
    // 06/20/2023: This is needed for deleting factors 
    // or adding factors in the middle of the clique anyways

    // col_data is where the matrix lives during and after cholesky
    // But after markAncestors, cliques might be broken up, col_data_ptr points to the 
    // underlying vector the matrix currently lives in. If col_data_start == 0,
    // then this clique owns the matrix
    std::vector<GatherColumnSource> gatherSources;

    // How much memory is needed at this clique and all its children
    size_t accumSize = 0;
    // How much memory is needed just for this node
    size_t selfSize = 0;

    Clique(CholeskyEliminationTree* etree);

    // add node to clique
    void addNode(sharedNode node);

    // Mark clique starting from lowest key. Detach all nodes from this clique
    // and add into their own cliques. Children cliques of this clique
    // are kept in this clique. Detach parent and return it
    sharedClique markClique(const RemappedKey lowestKey, KeySet* markedKeys);

    // Reorder the clique's blocks. Assume the clique's columns are in the same source
    // and we own that source
    void reorderClique();

    // Find new parent clique as the lowest nonzero index in any column of the clique
    // not including the diagonal
    void findParent();

    // Set parent to nullptr
    void detachParent();

    void setParent(sharedClique newParent);

    // Merge otherClique into this clique
    void mergeClique(sharedClique otherClique);

    // Merge our column structure based on blockIndices into parentColStructure
    void mergeColStructure(std::vector<RemappedKey>* parentColStructure);

    // Populate blockIndices given a colStructure
    void populateBlockIndices(const std::vector<RemappedKey>& colStructure);

    // Reorder underlying matrix. Return false if nothing needs to be done
    bool reorderColumn(BlockIndexVector& newBlockIndices);

  // Determine if a clique needs to be edited or reconstructed
  // Right now, the algorithm should be that, if any changed descendant is unmarked
  // we set it to EDIT
  void setEditOrReconstruct();

  void checkEditOrReconstruct(
      Status mode, std::vector<Key>* destCols);

  // After splitting a clique, if there is a reordering, we need to deallocate 
  // all old columns as all the marked variables will be reconstruct
  void deallocateExcessCols();

  sharedNode front();
  sharedNode back();

  Key frontKey();
  Key backKey();

  // Number of nodes in this clique
  size_t cliqueSize() const;

  size_t diagonalSize() const;

  size_t subdiaongalSize() const;

  void printClique(std::ostream& os);

  // Check if we own our columns
  bool ownColumns() const;
};

} // namespace gtsam
