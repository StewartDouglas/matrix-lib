#ifndef __MATRIX_CPP_INCLUDED__
#define __MATRIX_CPP_INCLUDED__

#include "matrix.h"

// generate a rows x columns matrix of 0's
Matrix::Matrix(int _rows, int _columns){

	n_rows = _rows;
	n_columns = _columns;
	data = new int*[_rows]; 

	for(int i = 0; i < _rows; ++i)
		data[i] = new int[_columns];
	
	for(int r = 0; r < n_rows; ++r){
		for(int c = 0; c < n_columns; ++c){
	     	data[r][c] = 0;
		}
	}
}


// generate a matrix with random values between 0 and 9
void Matrix::randomise(){
	
	for(int r = 0; r < n_rows; ++r){
		for(int c = 0; c < n_columns; ++c){
	     	data[r][c] = rand() % 10;
		}
	}

}

void Matrix::print(){

	for(int r = 0; r < n_rows; ++r){
		for(int c = 0; c < n_columns; ++c){
			std::cout << data[r][c] << " ";
		}
		std::cout << std::endl;
	}

}

// populate your matrix
void Matrix::populate(){

	// for(int r = 0; r < rows; ++r){
	// 	for(int c = 0; c < columns; ++c){
	// 		int input_value;
	// 		std::cout << "Current at position [" << r << "][" << c << "]" << ", New value: \t";
	// 		std::cin >> input_value;
	// 		m[r][c] = input_value;
	// 	}
	// }

	std::cout << "placeholder" << std::endl;
}


// calculate whether matrix is invertible 
bool Matrix::invertible(){
	bool b = true;
	return b;
}


// calculate determinant of matrix
// note: no need for columns, for non-square matrices the determinant is not defined
int Matrix::determinant(){
	int d = 0;
	return d;
}


// calculate eigenvalues


// calculate eigenvectors


// orthonormal basis


// SVD



#endif


