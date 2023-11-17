#include <iostream>

/* Read Number */
int ReadNumber(std::string msg) {
	int Number; 

	std::cout << msg;
	std::cin >> Number;

	return Number; 
}

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

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3] = { {9,1,12}, {0,9,1}, {0,9,9} };

	std::cout << "\nMatrix:\n"; 
	PrintMatrix(Matrix, 3, 3); 

	int Number = ReadNumber("\nPlease enter the number to count in matrix: ");

	std::cout << "\nNumber " << Number << " count in matrix is " << CountNumberInMatrix(Matrix, 3, 3, Number) << "\n";
	;
}