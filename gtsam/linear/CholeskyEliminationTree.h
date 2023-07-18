/**
* @file    CholeskyEliminationTree.h
* @brief   Elimination tree structure to perform symbolic factorization and Cholesky factorization
* @author  Roger Hsiao (rogerhh)
* @date    Feb. 8, 2023
*/

#pragma once

#include <gtsam/base/Matrix.h>
#include <gtsam/base/Workspace.h>
#include <gtsam/linear/CholeskyEliminationTreeTypes.h>
#include <gtsam/nonlinear/NonlinearFactorGraph.h>
#include <gtsam/nonlinear/ISAM2UpdateParams.h>
#include <vector>
#include <unordered_map>
#include <utility>
#include <iostream>
#include <boost/optional.hpp>

namespace gtsam {

class GTSAM_EXPORT CholeskyEliminationTree {
private:
  class Node;
  class Clique;
  class FactorWrapper;   // A wrapper around Factor, can contain nonlinear or linear factors

public:
  typedef std::shared_ptr<Node> sharedNode;
  typedef std::shared_ptr<Clique> sharedClique;
  typedef std::weak_ptr<Clique> weakClique;
  typedef std::shared_ptr<FactorWrapper> sharedFactorWrapper;
  typedef NonlinearFactor::shared_ptr sharedFactor;
  typedef GaussianFactor::shared_ptr sharedLinearFactor;

  static constexpr size_t BLOCK_INDEX_KEY = 0;
  static constexpr size_t BLOCK_INDEX_ROW = 1;
  static constexpr size_t BLOCK_INDEX_HEIGHT = 2;
  
  friend std::ostream& operator<<(std::ostream& os, const Clique& clique);

private:
    std::vector<sharedNode> nodes_;
    // The clique that owns each node. May be shared between nodes. We need this to 
    // avoid circular references and also make sure something owns the sharedClique's
    std::vector<sharedClique> cliques_;   
    sharedClique root_;

    // Transform random key indices into ordered key indices starting at 1
    // 0 is used for the Atb row
    std::unordered_map<Key, RemappedKey> keyTransformMap_;
    // unmappedKeys transforms the sequential remappedKeys back to unmapped keys
    std::vector<Key> unmappedKeys_;

    std::vector<RemappedKey> keyToOrdering_; // Key to index
    std::vector<size_t> orderingToKey_;         // Index to key

    size_t orderingVersion_ = 0;

    struct OrderingLess {
        CholeskyEliminationTree* etree = nullptr;
        OrderingLess() : etree(nullptr) {}
        OrderingLess(CholeskyEliminationTree* etree_in) : etree(etree_in) {}
        bool operator()(const RemappedKey lhs, const RemappedKey rhs) const {
          assert(etree);
          return etree->keyToOrdering_.at(lhs) < etree->keyToOrdering_.at(rhs);
        }
    };

    OrderingLess orderingLess_;

    std::vector<sharedFactorWrapper> factors_;

    Workspace workspace_;

    bool postOrder_ = false;
    
    // TODO: Remove DEBUG
    std::vector<std::vector<RemappedKey>> descendants_;
    std::vector<std::vector<RemappedKey>> changedDescendants_;

public:
  CholeskyEliminationTree();

  void addVariables(const Values& newTheta);
  
  // Mark directly changed keys and keys that we explicitly want to update (extraKeys)
  // observedKeys are the keys associated with the new factors
  void markAffectedKeys(const NonlinearFactorGraph& nonlinearFactors,
                        const FactorIndices& newFactorIndices,
                        const KeySet& relinKeys, 
                        const ISAM2UpdateParams& updateParams,
                        // const boost::optional<FastList<Key>>& extraKeys,
                        RemappedKeySet* affectedKeys,
                        RemappedKeySet* observedKeys);

  // Mark all ancestors of directly changed keys and disconnect child from parent 
  // As parent might change. But do not reset lambdaStructure as that does not change
  void markAncestors(const RemappedKeySet& affectedKeys, RemappedKeySet* markedKeys);

  void updateOrdering(const RemappedKeySet& markedKeys, const RemappedKeySet& observedKeys);

  void symbolicElimination(const RemappedKeySet& markedKeys);

  void choleskyElimination(const Values& theta);

  void backsolve(VectorValues* delta_ptr, double tol);

private:
  // Add new unmapped Key to transform map and return the mapped key, 
  // If key already exists, just return the mapped key
  // The new key is added to the end of the variable ordering (but before the last row)
  RemappedKey addRemapKey(const Key unmappedKey);
  RemappedKey getRemapKey(const Key unmappedKey);
  Key unmapKey(const RemappedKey remappedKey);

  void addNewNode(const Key unmappedKey, const size_t width);
  
  void markKey(const RemappedKey key, RemappedKeySet* markedKeys);
  
  // Perform symbolic elimination on the columns of variable key
  void symbolicEliminateKey(const RemappedKey key);

  // Post reordering is used to make sure nodes in the same clique is 
  // adjacent in ordering
  // We need this so that when performing a structure altering operation (removing factors
  // or adding factors in the middle, we can retain some structure. Need to prove this)
  void postReordering();
  
  // Allocate required memory for outer products
  // Required memory is the max sum of matrix sizes for any path from root to leaf
  // This function also sets the update mode of the clique to EDIT or RECONSTRUCT
  // We want to minimize clique traversal, so we will set everything whose changed 
  // descendants have a fixed clique to be EDIT, otherwise RECONSTRUCT
  void allocateStack();
  void deallocateStack();

  // Allocate and gather columns of the clique to a new workspace
  // If reconstruct is true, will not gather but simply reset the columns
  void allocateAndGatherClique(sharedClique clique, bool allocate, bool reconstruct);

  void editOrReconstructFromClique(
         sharedClique clique,
         const std::vector<Key>& destCols,
         double sign);
  
  void restoreClique(sharedClique clique);
  
  // Reset the first diagWidth columns in the clique's workspace
  void resetCliqueColumns(sharedClique clique);
  
  // ADD AtA of factors. Handle edits of AtA here as well
  void constructLambdaClique(sharedClique clique, const Values& theta);

  void eliminateClique(sharedClique clique);

  void mergeWorkspaceClique(sharedClique clique);

  // Copy the data in the workspace to a local memory owned by the clique
  void scatterClique(sharedClique clique);

  void backsolveClique(sharedClique clique, VectorValues* delta_ptr, double tol);

  bool valuesChanged(const Vector& diff, double tol);

  size_t colWidth(const RemappedKey key) const;

  bool checkSortedNoDuplicates(const std::vector<Key>& v) const;

  void checkInvariant_afterSymbolic() const;
  void checkInvariant_afterCholesky() const;
  void checkInvariant_afterBackSolve() const;

  // Public testing functions
public:
  void testFactorWrapper(const Values& theta);
};

}

// #include <gtsam/base/Matrix.h>
// #include <gtsam/base/MatrixSerialization.h>
// #include <gtsam/base/FastVector.h>
// #include <gtsam/nonlinear/NonlinearFactorGraph.h>
// #include <gtsam/linear/VectorValues.h>
// #include <Eigen/Core>
// #include <vector>
// #include <unordered_map>
// #include <unordered_set>
// #include <utility>
// #include <iostream>
// #include <gtsam/base/LowerTriangularColumnMatrix.h>
// #include <gtsam/base/SparseLowerTriangularBlockMatrix.h>
// #include <gtsam/base/SparseSymmetricBlockMatrix.h>
// #include <gtsam/linear/JacobianMatrix.h>
// #include <gtsam/base/Workspace.h>
// #include <boost/optional.hpp>
// 
// namespace gtsam {
// 
// class GTSAM_EXPORT CholeskyEliminationTree {
// private:
//     class Node;
//     class Clique;
// 
//     friend std::ostream& operator<<(std::ostream& os, const Clique& clique);
// 
// public:
//     typedef SparseColumnBlockMatrix::RowMajorMatrix RowMajorMatrix;
//     typedef SparseColumnBlockMatrix::ColMajorMatrix ColMajorMatrix;
//     typedef SparseColumnBlockMatrix::Block Block;
//     typedef SparseColumnBlockMatrix::constBlock constBlock;
//     typedef std::pair<size_t, size_t> RowHeightPair;
//     typedef LowerTriangularColumnMatrix::BlockIndexVector BlockIndexVector;
//     typedef std::shared_ptr<Node> sharedNode;
//     typedef std::shared_ptr<Clique> sharedClique;
//     typedef boost::shared_ptr<NonlinearFactor> sharedFactor;
// 
// private:
// 
//     std::vector<sharedNode> nodes_;
//     sharedClique root_;
//     std::vector<size_t> widths_;
//     SparseLowerTriangularBlockMatrix cholesky_;
//     SparseColumnBlockMatrix delta_;   // \Delta // We're solving AtA Delta = Atb
//     std::vector<size_t> ordering_; // Key to index
//     std::vector<Key> orderingToKey_; // index to Key
//     std::vector<sharedFactor> factors_;
//     std::vector<ColMajorMatrix> cachedLinearFactors_;
//     Workspace workspace;
// 
//     enum MarkedStatus {UNMARKED, EDIT, RECONSTRUCT, NEW};
//     std::vector<MarkedStatus> markedStatus_;
// 
//     enum LinearizeStatus {UNLINEARIZED, NEWLINEARIZED, RELINEARIZED, LINEARIZED};
//     
//     std::vector<LinearizeStatus> factorLinearizeStatus_;
// 
//     std::vector<std::vector<Key>> descendants_;
//     std::vector<std::vector<Key>> changedDescendants_;
// 
//     std::vector<bool> backSolveKeys_;
//     std::vector<Key> deltaReplaceMask_;
//     std::vector<bool> is_reordered_;
// 
//     bool groupCliqueFlag = false;
//     size_t lowestReorderedIndex = -1;
// 
//     static const size_t LAST_ROW;
// 
// public:
//     CholeskyEliminationTree();
// 
//     void addVariables(const Values& newTheta);
// 
//     // Mark directly changed keys and keys that we explicitly want to update (extraKeys)
//     // observedKeys are the keys associated with the new factors
//     void markAffectedKeys(const NonlinearFactorGraph& nonlinearFactors,
//                           const FactorIndices& newFactorIndices,
//                           const KeySet& relinKeys, 
//                           const boost::optional<FastList<Key>>& extraKeys,
//                           KeySet* affectedKeys,
//                           KeySet* observedKeys);
// 
//     // Mark all ancestors of directly changed keys and disconnect child from parent 
//     // As parent might change. But do not reset colStructure as that does not change
//     void markAncestors(const KeySet& affectedKeys, KeySet* markedKeys);
// 
//     void symbolicElimination(const KeySet& markedKeys);
// 
//     void choleskyElimination(const Values& theta);
// 
//     void updateOrdering(const KeySet& markedKeys, const KeySet& observedKeys);
//     
//     // Go from top of tree and solve for delta. Lt x = y
//     // Forward solve is already incorporated in Cholesky
//     void backwardSolve(VectorValues* delta_ptr, double tol = 0.001);
// 
//     void updateDelta(VectorValues* delta_ptr) const;
// 
//     void print(std::ostream& os);
// 
// private:
//     size_t colWidth(const Key key) const;
// 
//     void markKey(const Key key, KeySet* markedKeys);
// 
//     void symbolicEliminateKey(const Key key);
// 
//     void mergeChildColStructure(sharedNode parent, sharedNode child);
// 
//     // Allocate required memory for outer products
//     // Required memory is the max sum of matrix sizes for any path from root to leaf
//     void allocateStack();
//     void deallocateStack();
// 
//     struct OrderingLess {
//         CholeskyEliminationTree* eTreePtr = nullptr;
//         OrderingLess() : eTreePtr(nullptr) {}
//         OrderingLess(CholeskyEliminationTree* eTreePtr_in) : eTreePtr(eTreePtr_in) {}
//         bool operator()(const Key lhs, const Key rhs) const {
//             assert(eTreePtr);
//             return eTreePtr->ordering_.at(lhs) < eTreePtr->ordering_.at(rhs);
//         }
// 
//         bool operator()(const std::pair<Key, RowHeightPair>& lhs, 
//                         const std::pair<Key, RowHeightPair>& rhs) const {
//             assert(eTreePtr);
//             return eTreePtr->ordering_.at(lhs.first) < eTreePtr->ordering_.at(rhs.first);
//         }
//     };
// 
//     OrderingLess orderingLess;
//     size_t ordering_version_ = 0;     // When the ordering updates, only nodes that are touched
//                                       // need to reorder blocks. nodes that are not touched
//                                       // can delay the update
// 
//     void constructCSCMatrix(const std::vector<Key>& reorderKeys,
//                             const KeySet& observedKeys,
//                             int* nEntries,
//                             int* nVars,
//                             int* nFactors,
//                             std::vector<Key>* keyOrdering,
//                             std::vector<int>* A,
//                             std::vector<int>* p,
//                             std::vector<int>* cmember);
// 
//     // Get partial ordering of a subset of variables, this subset will be placed
//     // At the end of the total ordering regardless of the tree structure
//     // cmember is the constraint group.
//     void getPartialReordering(const std::vector<Key>& reorderKeys, 
//                               const KeySet& observedKeys,
//                               std::vector<Key>* partialOrdering);
// 
//     // After reordering, all child cliques of reordered nodes
//     // need to be detached and reordered, then attached to appropriate parents
//     // This needs to be done before symbolic elimination
//     void reparentOrphanClique(sharedClique clique);
// 
//     // Allocate and gather columns of the clique to a new workspace
//     // If reconstruct is true, will not gather but simply reset the columns
//     void allocateAndGatherClique(sharedClique clique, bool allocate, bool reconstruct);
// 
//     // Copy columns in the workspace back to the cholesky matrix
//     void scatterClique(sharedClique clique, bool scatter=true);
// 
//     // Reset the first diagWidth columns in the clique's workspace
//     void resetCliqueColumns(sharedClique clique);
// 
//     // Only handle edit coming from this clique, if clique is edit, also restore 
//     // clique columns, but don't subtract AtA block yet
//     void editAndRestoreFromClique(sharedClique clique);
// 
//     // Returns true if there is a reconstruct column
//     // in that case we need to propagate to children
//     void eliminateClique(sharedClique clique);
// 
//     // Merge outerproduct of a clique into its parent's workspace
//     // If parent is nullptr, do nothing
//     void mergeWorkspaceClique(sharedClique clique);
// 
//     void restoreClique(sharedClique clique);
// 
//     void editOrReconstructFromClique(
//             sharedClique clique,
//             const std::vector<Key>& destCols,
//             double sign);
// 
//     void setEditOrReconstruct(sharedClique clique);
// 
//     void checkEditOrReconstructClique(sharedClique clique, 
//                                       MarkedStatus mode, 
//                                       std::vector<Key>* destCols);
// 
//     // A is k x m, B is k x n, C is m x n
//     void simpleAtB(Block A, Block B, Block C, size_t m, size_t k, size_t n, bool add);
// 
//     // ADD AtA of factors. Handle edits of AtA here as well
//     void prepareEliminateClique(sharedClique clique, const Values& theta);
// 
//     // Reorder cliques that were not reset during the reordering
//     // Each node needs to have its data structures reordered
//     void reorderClique(sharedClique clique);
// 
//     void backwardSolveClique(sharedClique clique, VectorValues* delta_ptr, double tol = 0.001);
//     
//     void checkInvariant_afterMarkAffected() const;
//     void checkInvariant_afterMarkAncestors() const;
//     void checkInvariant_afterSymbolic() const;
//     void checkInvariant_afterCholesky() const;
//     void checkInvariant_afterBackSolve() const;
// 
//     bool sorted_no_duplicates(const std::vector<Key>& v) const;
// 
// };
// 
// 
// } // namespace gtsam
// 
