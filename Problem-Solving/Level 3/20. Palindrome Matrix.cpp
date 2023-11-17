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

/* Palindrome Matrix */
bool isPalindromeMatrix(int Matrix[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols / 2; j++) {
			if (Matrix[i][j] != Matrix[i][Cols - 1 - j]) {
				return 0; 
			}
		}
	}

	return 1; 
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3] = { {1,2,1}, {5,5,5}, {7,3,7} };

	std::cout << "\nMatrix:\n"; 
	PrintMatrix(Matrix, 3, 3);

	if (isPalindromeMatrix(Matrix, 3, 3)) {
		std::cout << "\nYES, It is palindrome\n";
	}
	else {
		std::cout << "\nNO, It is NOT palindrome\n";
	}
	
}