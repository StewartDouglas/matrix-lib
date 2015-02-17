#ifndef __MATRIX_CPP_INCLUDED__
#define __MATRIX_CPP_INCLUDED__

#include "matrix.h"

// generate an rows x columns matrix
matrix generate_matrix(int rows, int columns){

	matrix m;
	m = new int*[rows];	

	for(int i = 0; i < rows; ++i)
		m[i] = new int[columns];
	
	for(int j = 0; j < columns; ++j){
		for(int k = 0; k < columns; k++){
	     	m[j][k] = 0;
		}
	}

	return m;

}


// or, generate a random matrix
matrix generate_random_matrix(){
	matrix m;
	return m;
}


// populate your matrix
matrix populate_matrix(matrix m, int rows, int columns){
	return m;
}


// randomly populate your matrix
matrix populate_random_matrix(matrix m, int rows, int columns){
	return m;
}


// calculate whether matrix is invertible 
bool invertible(matrix m, int rows){
	bool b = true;
	return b;
}


// calculate determinant of matrix
// note: no need for columns, for non-square matrices the determinant is not defined
int calculate_determinant(int* matrix, int rows){
	int d = 0;
	return d;
}


// calculate eigenvalues


// calculate eigenvectors


// orthonormal basis


// SVD



#endif


