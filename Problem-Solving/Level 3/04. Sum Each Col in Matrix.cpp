#include <iostream>
#include <iomanip>

/* GENERAL */
int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From; 
}

/* 3 x 3 Random Matrix */
void FillMatrixWithRandomNumbers(int Matrix[3][3]) {
	for (short i = 0; i < 3; i++) {
		for (short j = 0; j < 3; j++) {
			Matrix[i][j] = GenerateRandomNumber(1, 100); 
		}
	}
}

void PrintMatrix(int Matrix[3][3]) {
	for (short i = 0; i < 3; i++) {
		for (short j = 0; j < 3; j++) {
			std::cout << std::setw(3) << Matrix[i][j] << "\t";
		}
		std::cout << "\n"; 
	}
}

/* Sum Each Col in Matrix */
int ColSum(int Matrix[3][3], short Rows, short Col) {
	int Sum = 0;

	for (short i = 0; i < Rows; i++) {
		Sum += Matrix[i][Col]; 
	}

	return Sum;
}

void PrintEachColSum(int Matrix[3][3], short Rows, short Cols) {
	for (short i = 0; i < Cols; i++) {
		std::cout << " Col [" << i + 1 << "] Sum = " << ColSum(Matrix, Rows, i) << "\n";
	}
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3]; 
	int RowSum[3]; 
	FillMatrixWithRandomNumbers(Matrix);
	std::cout << "The following is a 3x3 random matrix:\n";
	PrintMatrix(Matrix);

	std::cout << "\nThe following are the sum of each column in the matrix:\n";
	PrintEachColSum(Matrix, 3, 3);
}
