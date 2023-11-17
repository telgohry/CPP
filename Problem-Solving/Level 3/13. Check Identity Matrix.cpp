#include <iostream>

/* Print Matrix */
void PrintMatrix(int Matrix[3][3], short Rows, short Cols) {
	for (short Row = 0; Row < Rows; Row++) {
		for (short Col = 0; Col < Cols; Col++) {
			//std::cout << std::setw(3) << Matrix[Row][Col] << "\t";
			printf(" %0*d\t", 2, Matrix[Row][Col]);
		}
		std::cout << "\n"; 
	}
}

/* Check Identity Matrix */
bool isIdentitiyMatrix(int Matrix[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			if (i == j && Matrix[i][j] != 1) {
				return 0; 
			}
			else if (i != j && Matrix[i][j] != 0) {
				return 0;
			}
		}
	}

	return 1; 
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };

	PrintMatrix(Matrix, 3, 3); 

	if (isIdentitiyMatrix(Matrix, 3, 3)) {
		std::cout << "\nYES, Matrix is identity.\n";
	}
	else {
		std::cout << "\nNO, Matrix is NOT identity.\n";
	}
}