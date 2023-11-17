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

/* Print Middle Row and Col of Matrix */
void PrintMiddleRow(int Matrix[3][3], short Rows, short Cols) {
	short MidRow = Rows / 2; 

	for (int i = 0; i < Cols; i++) {
		printf(" %0*d\t", 2, Matrix[MidRow][i]);
	}
	std::cout << "\n";
}

void PrintMiddleCol(int Matrix[3][3], short Rows, short Cols) {
	short MidCol = Cols / 2;

	for (int i = 0; i < Rows; i++) {
		printf(" %0*d\t", 2, Matrix[i][MidCol]);
	}
	std::cout << "\n";
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3];
	FillMatrixWithRandomNumbers(Matrix);
	std::cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	std::cout << "\nMiddle Row of The Matrix:\n";
	PrintMiddleRow(Matrix, 3, 3); 

	std::cout << "\nMiddle Column of The Matrix:\n";
	PrintMiddleCol(Matrix, 3, 3);


	
}
