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
			Matrix[i][j] = GenerateRandomNumber(1, 10); 
		}
	}
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols) {
	for (short Row = 0; Row < Rows; Row++) {
		for (short Col = 0; Col < Cols; Col++) {
			//std::cout << std::setw(3) << Matrix[Row][Col] << "\t";
			printf(" %0*d\t", 2, Matrix[Row][Col]);
		}
		std::cout << "\n"; 
	}
}

/* Multiply Two Matrices */
void MultiplyTwoMatrices(int Matrix1[3][3], int Matrix2[3][3], int ResultMatrix[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			ResultMatrix[i][j] = Matrix1[i][j] * Matrix2[i][j]; 
		}
	}
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3], ResultMatrix[3][3]; 
	FillMatrixWithRandomNumbers(Matrix1);
	std::cout << "Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumbers(Matrix2);
	std::cout << "\nMatrix 2:\n";
	PrintMatrix(Matrix2, 3, 3);

	MultiplyTwoMatrices(Matrix1, Matrix2, ResultMatrix, 3, 3); 

	std::cout << "\nResult:\n";
	PrintMatrix(ResultMatrix, 3, 3);

	
}
