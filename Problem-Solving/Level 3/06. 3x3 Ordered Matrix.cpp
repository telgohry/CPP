#include <iostream>
#include <iomanip>

/* GENERAL */
int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From; 
}
/* 3x3 Ordered Matrix */
void FillMatrixWithOrderedNumbers(int Matrix[3][3], short Rows, short Cols) {
	short order = 1;
	for (short Row = 0; Row < Rows; Row++) {
		for (short Col = 0; Col < Cols; Col++) {
			Matrix[Row][Col] = order++; 
		}
	}
}

void PrintOrderedMatrix(int Matrix[3][3], short Rows, short Cols) {
	std::cout << "\nThe following is a 3x3 ordered matrix:\n";
	for (short Row = 0; Row < Rows; Row++) {
		for (short Col = 0; Col < Cols; Col++) {
			std::cout << std::setw(3) << Matrix[Row][Col] << "\t";
		}
		std::cout << "\n"; 
	}
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3]; 
	FillMatrixWithOrderedNumbers(Matrix,3,3);
	PrintOrderedMatrix(Matrix, 3, 3); 
	
	
}
