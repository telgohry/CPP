#include <iostream>

/*Print Matrix*/
void PrintMatrix(int Matrix[3][3], short Rows, short Cols) {
	for (short Row = 0; Row < Rows; Row++) {
		for (short Col = 0; Col < Cols; Col++) {
			//std::cout << std::setw(3) << Matrix[Row][Col] << "\t";
			printf(" %0*d\t", 2, Matrix[Row][Col]);
		}
		std::cout << "\n"; 
	}
}

/* Count Number in Matrix */
short CountNumberInMatrix(int Matrix[3][3], short Rows, short Cols, int Number) {
	short Count = 0;


	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (Matrix[i][j] == Number) {
				Count++; 
			}
		}
	}

	return Count; 
}

/* Check Sparse Matrix */
bool isSparseMatrix(int Matrix[3][3], short Rows, short Cols) {
	short ZeroCount = 0, NonZeroCount = 0;

	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (Matrix[i][j] == 0) {
				ZeroCount++;
			}
			else {
				NonZeroCount++;
			}
		}
	}

	if (ZeroCount >= NonZeroCount) {
		return 1;
	}
	else {
		return 0; 
	}
}

bool isSparseMatrixMethod2(int Matrix[3][3], short Rows, short Cols) {
	short MatrixSize = Rows * Cols;
	
	return (CountNumberInMatrix(Matrix, 3, 3, 0) >= (MatrixSize / 2)); 
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3] = { {10,0,12}, {20,15,1}, {0,0,9} };

	std::cout << "\nMatrix:\n"; 
	PrintMatrix(Matrix, 3, 3); 

	if (isSparseMatrix(Matrix, 3, 3)) {
		std::cout << "\nYES, It is sparse matrix\n";
	} else{
		std::cout << "\nNO, It is NOT sparse matrix\n";
	}
}