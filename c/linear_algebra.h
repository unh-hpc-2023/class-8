
#ifndef LINEAR_ALGEBRA_H
#define LINEAR_ALGEBRA_H

double vector_dot(const double* x, const double* y, int n);
void vector_add(const double* x, const double* y, double* z, int n);

void matrix_vector_mul(int n, const double A[n][n], const double* x, double* y);

#endif
