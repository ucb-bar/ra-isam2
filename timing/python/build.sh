
set -e

SCRIPT_DIR=$(cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)
HEADER_DIR=$SCRIPT_DIR/../baremetal_tests
BUILD_DIR=$SCRIPT_DIR/../../build

cd $BUILD_DIR

cmake ..

make -j4 testGtsamIncremental testGtsamIncremental3D testGtsamIncremental-treegen testGtsamIncremental3D-treegen testGtsamIncremental-datasetgen testGtsamIncremental3D-datasetgen
