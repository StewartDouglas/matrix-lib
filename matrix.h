#ifndef __MATRIX_H_INCLUDED__
#define __MATRIX_H_INCLUDED__

#include <iostream>
#include <cstdlib>
#include <vector>

//typedef std::vector<int> column;

class Matrix {

public:

	// generate an n x m matrix
	Matrix(int rows, int columns);

	// populate with random values between 0 and 9
	void randomise();

	// print the entries of the matrix
	void print();

	// populate your matrix
	void populate();

	// determine whether matrix is invertible 
	bool invertible();

	// calculate determinant of matrix
	// note: for non-square matrices the determinant is not defined
	int determinant();

	// calculate eigenvalues

	// calculate eigenvectors

	// orthonormal basis

	// SVD

private:
	int n_rows;
	int n_columns;
	int** data;

};

#endif	



