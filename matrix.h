#ifndef __MATRIX_H_INCLUDED__
#define __MATRIX_H_INCLUDED__

#include <cstdlib>

typedef int** matrix;

// generate an n x m matrix
matrix generate_matrix(int rows, int columns);


// or, generate a random matrix
matrix generate_random_matrix();


// populate your matrix
matrix populate_matrix(matrix m, int rows, int columns);

// randomly populate your matrix
matrix populate_random_matrix(matrix m, int rows, int columns);

// determine whether matrix is invertible 
bool invertible(matrix m, int rows);


// calculate determinant of matrix
// note: no need for columns, for non-square matrices the determinant is not defined
int calculate_determinant(matrix m, int rows);


// calculate eigenvalues


// calculate eigenvectors


// orthonormal basis


// SVD

#endif	



