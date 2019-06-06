#ifndef BIND_FUN_RAYREFLECTION_H
#define BIND_FUN_RAYREFLECTION_H

#include <iostream>

#include "pybind11/complex.h"
#include "pybind11/eigen.h"
#include "pybind11/numpy.h"
#include "pybind11/pybind11.h"
#include "unsupported/Eigen/Polynomials"
#include <algorithm>
#include <random>
#include <math.h>
#include "rayreflection.h"

namespace py = pybind11;

void bind_rayreflection(py::module &m);

#endif /* BIND_FUN_REFLECTION_H */