#ifndef GENERAL_H
#define GENERAL_H

#include <iostream>
#include <cmath>
#include <limits>
#include <memory>

// C++ standard usings

using std::shared_ptr;
using std::make_shared;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

// Common Headers

#include "ray.h"
#include "vec3.h"
#include "color.h"
#include "interval.h"

#endif