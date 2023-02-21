
#include "linear_algebra.h"

// ----------------------------------------------------------------------
// vector_dot
//
// returns the dot product of the two vectors
// x: first vector
// y: second vector

double vector_dot(const double* x, const double* y, int n)
{
  double sum = 0.f;
  for (int i = 0; i < n; i++) {
    sum += x[i] * y[i];
  }
  return sum;
}
