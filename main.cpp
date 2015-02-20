#include "matrix.h"

int main(int argc, const char * argv[]){
	
	std::cout << std::endl << "<====== Matrix creation and manipulation ======>" << std::endl << std::endl;

	std::cout << "-- 1) Create 5x5 matrix of 0's --" << std::endl << std::endl;

	Matrix matrix1(5,5);

	std::cout << "-- 2) Display the matrix --" << std::endl << std::endl;

	matrix1.print();
	
	std::cout << std::endl << "-- 3) Randomise the entries in the matrix (between 0 and 9) --" << std::endl << std::endl;

	matrix1.randomise();
	
	std::cout << "-- 4) Display the matrix --" << std::endl << std::endl;

	matrix1.print();

	std::cout << std::endl;
}