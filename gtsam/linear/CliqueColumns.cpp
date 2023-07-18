#include <gtsam/linear/CliqueColumns.h>

using namespace std;

namespace gtsam {

std::ostream& operator<<(std::ostream& os, const CliqueColumns& cliqueColumns) {
  Eigen::Map<ColMajorMatrix> m(cliqueColumns.matrixData_, cliqueColumns.rows_, cliqueColumns.cols_);
  os << m;
  return os; 
}

} // namespace gtsam
