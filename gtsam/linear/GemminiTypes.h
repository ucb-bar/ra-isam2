/**
* @file    GemminiTypes.h
* @brief   Common types used by gemmini
* @author  Roger Hsiao (rogerhh)
* @date    Dec. 20, 2023
*/

#pragma once

#define GEMMINI_IS_FLOAT  0
#define GEMMINI_IS_DOUBLE 1
#define GEMMINI_TYPE_CHECK GEMMINI_FLOAT
typedef float GEMMINI_TYPE;
typedef GEMMINI_TYPE elem_t;
typedef GEMMINI_TYPE scale_t;
// #define elem_t GEMMINI_TYPE
// #define scale_t GEMMINI_TYPE

#include <gtsam/base/Matrix.h>

typedef Eigen::Matrix<GEMMINI_TYPE, Eigen::Dynamic, Eigen::Dynamic> GemminiMatrix;
