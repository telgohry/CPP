#include <iostream>

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


/* Sum of Matrix */
int SumOfMatrix(int Matrix[3][3], short Rows, short Cols) {
	int Sum = 0; 

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			Sum += Matrix[i][j]; 
		}
	}

	return Sum; 
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3];
	FillMatrixWithRandomNumbers(Matrix);
	std::cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	std::cout << "\nSum of Matrix is: " << SumOfMatrix(Matrix, 3, 3) << "\n";

}
