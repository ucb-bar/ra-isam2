#include <iostream>
#include <vector>
#include <Eigen/Core>  
#include <gtsam/linear/CliqueColumns.h>

using namespace std;
using namespace gtsam;

int main() {
    vector<GEMMINI_TYPE> data(10000, 0);

    shared_ptr<BlockIndexVector> blockIndices = make_shared<BlockIndexVector>();
    vector<tuple<size_t, size_t>> keyWidthPairs({{1, 2}, {2, 3}, {4, 2}, {5, 2}, {6, 2}, {0, 1}});
    size_t curRow = 0;
    for(auto&[key, height] : keyWidthPairs) {
        blockIndices->push_back({key, curRow, height});
        curRow += height;
    }

    size_t startIndex = 0, endIndex = 2;

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
                    m(row + k2, col + k1) = colKey * 1000 + k1 * 100 + rowKey * 10 + k2;
                }
            }
        }
    }


    shared_ptr<BlockIndexVector> blockIndices2 = make_shared<BlockIndexVector>();
    vector<tuple<size_t, size_t>> keyWidthPairs2({{1, 2}, {2, 3}, {6, 2}, {4, 2}, {5, 2}, {0, 1}});
    curRow = 0;
    for(auto&[key, height] : keyWidthPairs2) {
        blockIndices2->push_back({key, curRow, height});
        curRow += height;
    }

    // size_t startIndex = 0, endIndex = 3;

    size_t height1 = get<BLOCK_INDEX_ROW>(blockIndices->back()) + 1;
    CliqueColumns cliqueColumns2(data.data() + sizeof(GEMMINI_TYPE) * height1 * height1, blockIndices2.get(), startIndex, endIndex);

    cout << "childClique:\n" << cliqueColumns << endl << endl;
    cout << "parentClique:\n" << cliqueColumns2 << endl << endl;

    cliqueColumns2.addCliqueColumns(cliqueColumns, true);

    cout << "parentClique after scatter-add:\n" << cliqueColumns2 << endl << endl;


}
