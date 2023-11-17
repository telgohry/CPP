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

/* Search In Matrix */
bool SearchInMatrix(int Matrix[3][3], int Number, short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (Matrix[i][j] == Number) {
				return 1;
			}
		}
	}

	return 0; 
}


/* Print Intersected Numbers in Two Matrices*/
void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (SearchInMatrix(Matrix2, Matrix1[i][j], 3, 3)) {
				std::cout << Matrix1[i][j] << "\t";
			}
		}
	}

	std::cout << "\n";
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {77,5,12}, {22,20,1}, {1,0,9} };
	int Matrix2[3][3] = { {5,80,90}, {22,77,1}, {10,8,33}};

	std::cout << "\nMatrix1:\n"; 
	PrintMatrix(Matrix1, 3, 3);

	std::cout << "\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);

	std::cout << "\nIntersected Numbers are:\n"; 
	PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3); 
}