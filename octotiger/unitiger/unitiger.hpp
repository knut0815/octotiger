//  Copyright (c) 2019 AUTHORS
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef UNITIGER_HPP_
#define UNITIGER_HPP_

#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <cassert>
#include <limits>
#include <silo.h>

#define CONSTEXPR

#define NO_POS_ENFORCE
//#define FACES_ONLY
//#define KURGANOV_TADMOR
//#define CONSTANT_RECONSTRUCTION
//#define FIRST_ORDER_TIME

#ifdef OCTOTIGER_GRIDDIM
#include "octotiger/hydro_defs.hpp"
#else
//constexpr int NDIM = 2;

#endif
constexpr int ORDER = 3;



#endif /* UNITIGER_HPP_ */
