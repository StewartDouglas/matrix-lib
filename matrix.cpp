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

// destructor
Matrix::~Matrix(){
	for(int i = 0; i < n_rows;++i)
		delete [] data[i];
	delete [] data;
}

// print the entries of the matrix
void Matrix::print(){

	for(int r = 0; r < n_rows; ++r){
		for(int c = 0; c < n_columns; ++c){
			std::cout << data[r][c] << " ";
		}
		std::cout << std::endl;
	}

}

// get element
int Matrix::get_element(int row, int column){
	return data[row][column];
}	

// add element as position (row, column)
void Matrix::add_element(int row, int column, int val){
	data[row][column] = val;
}

// generate a matrix with random values between 0 and 9
void Matrix::randomise(){
	
	for(int r = 0; r < n_rows; ++r){
		for(int c = 0; c < n_columns; ++c){
	     	data[r][c] = rand() % 10;
		}
	}

}

// populate your matrix
void Matrix::populate(){

	for(int r = 0; r < n_rows; ++r){
		for(int c = 0; c < n_columns; ++c){
			std::cout << "Current at position [" << r << "][" << c << "]" << ", New value: \t";
			std::cin >> data[r][c];
		}
	}
}

// transpose the matrix. rows become columns. 
void Matrix::transpose(){

	int** new_data = new int*[n_columns];

	for(int i = 0; i < n_columns; ++i)
		new_data[i] = new int[n_rows];

	for(int r = 0; r < n_rows; ++r){
		for(int c = 0; c < n_columns; ++c){
			new_data[c][r] = data[r][c];
		}
	}

	// clean up memory
	for(int i = 0; i < n_rows;++i)
		delete [] data[i];
	delete [] data;

	// reassign the data pointer
	data = new_data;

	// exchnage rows and columns
	int temp = n_rows;
	n_rows = n_columns;
	n_columns = temp;

}

// return the trace of the matrix
int Matrix::trace(){
	if(n_rows != n_columns)
		throw NOT_DEFINED;
	int trace = 0;
	for(int i = 0; i < n_rows; ++i)
		trace += data[i][i];
	return trace;
}


// create a sub matrix
Matrix* Matrix::sub_matrix(int row_remove, int col_remove){

	int _rows = n_rows-1;
	int _columns = n_columns-1;
	int r_offset = 0;
	int c_offset = 0;

	Matrix* sub_matrix = new Matrix(_rows,_columns);

	for(int r = 0; r < _rows; ++r){
		for(int c = 0; c < _columns; ++c){
			if(r == row_remove)
				r_offset = 1;
			if(c == col_remove)
				c_offset = 1;
			int to_add = data[r+r_offset][c+c_offset]; 
			sub_matrix->add_element(r,c,to_add);
		}
	}

	return sub_matrix;

}

// calculate determinant of matrix
// note: no need for columns, for non-square matrices the determinant is not defined
int Matrix::determinant(){
	if(n_rows != n_columns) throw NOT_DEFINED;
	
	int determinant = 0;
	//recursive
	if(n_rows == 1)
		return data[0][0];
	else{
		for(int i = 0; i < n_columns; ++i){
			Matrix* sub_matrix = this->remove_row_col(0,i);
			determinant += pow(-1,i)*this->get_element(0,i)*sub_matrix->determinant();
		}
	}

	return determinant;
}


// calculate whether matrix is invertible 
bool Matrix::invertible(){
	return this->determinant() != 0;
}


// calculate eigenvalues


// calculate eigenvectors


// orthonormal basis


// SVD



#endif


