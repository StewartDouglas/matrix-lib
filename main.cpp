#include "matrix.h"

int main(int argc, const char * argv[]){
	
	std::cout << std::endl << "<====== Matrix creation and manipulation ======>" << std::endl << std::endl;

	std::cout << "-- 1) Create 5x5 matrix of 0's --" << std::endl << std::endl;

	Matrix matrix1(3,3);

	std::cout << "-- 2) Display the matrix --" << std::endl << std::endl;

	matrix1.print();
	
	std::cout << std::endl << "-- 3) Randomise the entries in the matrix (between 0 and 9) --" << std::endl << std::endl;

	matrix1.randomise();
	
	std::cout << "-- 4) Display the matrix --" << std::endl << std::endl;

	matrix1.print();

	std::cout << std::endl << "-- 5) Calculate trace --" << std::endl << std::endl;

	std::cout << matrix1.trace() << std::endl;

	std::cout << std::endl << "-- 6) Calculate determinant --" << std::endl << std::endl;

	std::cout << matrix1.determinant() << std::endl;

	std::cout << std::endl << "-- 7) Transpose --" << std::endl << std::endl;

	matrix1.transpose();

	matrix1.print();

	std::cout << std::endl;

}