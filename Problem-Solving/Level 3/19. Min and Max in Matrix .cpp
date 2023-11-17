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

/* Min/Max in Matrix */
int MaxInMatrix(int Matrix[3][3], short Rows, short Cols) {
	int Max = Matrix[0][0];

	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (Matrix[i][j] > Max) {
				Max = Matrix[i][j]; 
			}
		}
	}

	return Max; 
}

int MinInMatrix(int Matrix[3][3], short Rows, short Cols) {
	int Min = Matrix[0][0];

	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (Matrix[i][j] < Min) {
				Min = Matrix[i][j];
			}
		}
	}

	return Min;
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3] = { {77,5,12}, {22,20,1}, {14,3,9} };

	std::cout << "\nMatrix:\n"; 
	PrintMatrix(Matrix, 3, 3);

	std::cout << "\nMinimum Number is: " << MinInMatrix(Matrix, 3, 3) << "\n";
	std::cout << "\nMaximum Number is: " << MaxInMatrix(Matrix, 3, 3) << "\n";

	
}
