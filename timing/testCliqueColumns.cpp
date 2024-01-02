#include <iostream>
#include <vector>
#include <Eigen/Core>  
#include <gtsam/linear/CliqueColumns.h>

using namespace std;
using namespace gtsam;

int main() {
    vector<GEMMINI_TYPE> data(10000, 0);

    // shared_ptr<BlockIndexVector> blockIndices 
    //  = make_shared<BlockIndexVector>({{1, 0, 3}, {2, 3, 4}, {5, 7, 2}, {4, 9, 3}, {0, 12, 1}});
    shared_ptr<BlockIndexVector> blockIndices = make_shared<BlockIndexVector>();
    vector<tuple<size_t, size_t>> keyWidthPairs({{1, 2}, {2, 3}, {4, 2}, {0, 1}});
    size_t curRow = 0;
    for(auto&[key, height] : keyWidthPairs) {
        blockIndices->push_back({key, curRow, height});
        curRow += height;
    }

    size_t startIndex = 0, endIndex = 3;

    CliqueColumns cliqueColumns(data.data(), blockIndices.get(), startIndex, endIndex);

    auto m = cliqueColumns.matrix();

    size_t colOffset = get<BLOCK_INDEX_ROW>(blockIndices->at(startIndex));
    for(size_t i = startIndex; i < endIndex; i++) {
        auto[colKey, col, width] = blockIndices->at(i);
        col -= colOffset;
        for(size_t k1 = 0; k1 < width; k1++) {
            for(size_t j = i; j < blockIndices->size(); j++) {
                auto[rowKey, row, height] = blockIndices->at(j);
                for(size_t k2 = 0; k2 < height; k2++) {
                  cout << row + k2 << " " << col + k1 << endl;
                    m(row + k2, col + k1) = colKey * 1000 + k1 * 100 + rowKey * 10 + k2;
                }
            }
        }
    }


    shared_ptr<BlockIndexVector> blockIndices2 = make_shared<BlockIndexVector>();
    vector<tuple<size_t, size_t>> keyWidthPairs2({{5, 2}, {1, 2}, {2, 3}, {6, 3}, {4, 2}, {7, 1}, {0, 1}});
    curRow = 0;
    for(auto&[key, height] : keyWidthPairs2) {
        blockIndices2->push_back({key, curRow, height});
        curRow += height;
    }

    // size_t startIndex = 0, endIndex = 3;

    size_t height1 = get<BLOCK_INDEX_ROW>(blockIndices->back()) + 1;
    CliqueColumns cliqueColumns2(data.data() + sizeof(GEMMINI_TYPE) * height1 * height1, blockIndices2.get());

    cout << "parentClique:\n" << cliqueColumns2 << endl << endl;

    cliqueColumns2.addCliqueColumns(cliqueColumns);

    cout << "parentClique after scatter-add:\n" << cliqueColumns2 << endl << endl;

    auto cliqueColumns3 = cliqueColumns2.split(3);

    cout << "splitParentClique1:\n" << cliqueColumns2 << endl << endl;
    cout << "splitParentClique2:\n" << cliqueColumns3 << endl << endl;

    auto cliqueColumns6 = cliqueColumns3;
    auto cliqueColumns4 = cliqueColumns3.split(4);

    cout << "splitParentClique3:\n" << cliqueColumns3 << endl << endl;
    cout << "splitParentClique4:\n" << cliqueColumns4 << endl << endl;

    bool mergeRes = cliqueColumns2.merge(cliqueColumns4);
    assert(!mergeRes);

    cout << "notMergedParentClique1:\n" << cliqueColumns2 << endl << endl;

    mergeRes = cliqueColumns2.merge(cliqueColumns3);
    assert(mergeRes);

    cout << "mergedParentClique1:\n" << cliqueColumns2 << endl << endl;

    CliqueColumns cliqueColumn5(data.data() + sizeof(GEMMINI_TYPE) * height1 * height1, blockIndices2.get(), 0, 2);



}
