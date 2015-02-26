#ifndef __MATRIX_H_INCLUDED__
#define __MATRIX_H_INCLUDED__

/* ================== Error Codes ===================  */

#define NOT_DEFINED		            1
#define NO_ERROR					0

/* =================================================== */

#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

//typedef std::vector<int> column;

class Matrix {

public:

	// generate an n x m matrix
	Matrix(int rows, int columns);

	// destructor
	~Matrix();

	// print the entries of the matrix
	void print();

	// get element
	int get_element(int row, int column);		

	// add element
	void add_element(int row, int column, int val);

	// populate with random values between 0 and 9
	void randomise();

	// populate your matrix
	void populate();

	// transpose the matrix. rows become columns. 
	void transpose();

	// return the trace of the matrix
	int trace();

	// create a sub matrix, removing row and col from original
	Matrix* sub_matrix(int row, int col);

	// calculate determinant of matrix
	// note: for non-square matrices the determinant is not defined
	int determinant();

	// determine whether matrix is invertible 
	bool invertible();

	// calculate eigenvalues
	int* eigenvalues();

	// calculate eigenvectors
	int** eigenvectors();

	// orthonormal basis
	int** orthonormal_basis();

	// SVD: Singular Value Decomposition
	int** svd();


private:
	int n_rows;
	int n_columns;
	int** data;

};

#endif	



