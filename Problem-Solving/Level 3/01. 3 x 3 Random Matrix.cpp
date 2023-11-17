#include <iostream>
#include <iomanip>

int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From; 
}

void FillMatrixWithRandomNumbers(int Matrix[3][3]) {
	for (short i = 0; i < 3; i++) {
		for (short j = 0; j < 3; j++) {
			Matrix[i][j] = GenerateRandomNumber(1, 100); 
		}
	}
}

void PrintMatrix(int Matrix[3][3]) {
	std::cout << " The following is a 3x3 random matrix:\n ";
	for (short i = 0; i < 3; i++) {
		for (short j = 0; j < 3; j++) {
			std::cout << std::setw(3) << Matrix[i][j] << "\t";
		}
		std::cout << "\n "; 
	}
}

int main() {
  srand((unsigned)time(NULL));

	int Matrix[3][3]; 
	FillMatrixWithRandomNumbers(Matrix);
	PrintMatrix(Matrix);
}
