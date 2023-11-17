#include <iostream>
#include <iomanip>

/* 3x3 Ordered Matrix */
void FillMatrixWithOrderedNumbers(int Matrix[3][3], short Rows, short Cols) {
	short order = 1;
	for (short Row = 0; Row < Rows; Row++) {
		for (short Col = 0; Col < Cols; Col++) {
			Matrix[Row][Col] = order++; 
		}
	}
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols) {
	for (short Row = 0; Row < Rows; Row++) {
		for (short Col = 0; Col < Cols; Col++) {
			std::cout << std::setw(3) << Matrix[Row][Col] << "\t";
		}
		std::cout << "\n"; 
	}
}

/* Transpose Matrix */
void TransposeMatrix(int Matrix[3][3], int Transposed[3][3], short Rows, short Cols) {
	for (short Row = 0; Row < Rows; Row++) {
		for (short Col = 0; Col < Cols; Col++) {
			Transposed[Row][Col] = Matrix[Col][Row]; 
		}
	}
}

void PrintTransposedMatrix(int Matrix[3][3], short Rows, short Cols) {
	std::cout << "\nThe following is a 3x3 transposed matrix:\n";
	for (short Row = 0; Row < Rows; Row++) {
		for (short Col = 0; Col < Cols; Col++) {
			std::cout << std::setw(3) << Matrix[Row][Col] << "\t";
		}
		std::cout << "\n";
	}
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3], Transposed[3][3];
	FillMatrixWithOrderedNumbers(Matrix,3,3);
	std::cout << "\nThe following is a 3x3 ordered matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	TransposeMatrix(Matrix, Transposed, 3, 3);
	std::cout << "\nThe following is a 3x3 transposed matrix:\n";
	PrintMatrix(Transposed, 3, 3);
	
}
