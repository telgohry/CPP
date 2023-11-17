#include <iostream>

int ReadNumber(std::string msg) {
	int Number; 

	std::cout << msg;
	std::cin >> Number;

	return Number; 
}

/* Print Fibonacci Series */
void PrintFibonacciSeries(int Number) {
	std::cout << "\nPrint " << Number << " of fibonacci series:\n";
	int FibNumber = 0; 
	int Prev2 = 0, Prev1 = 1;

	std::cout << Prev1 << "   ";

	for (int i = 2; i <= Number; i++) {
		FibNumber = Prev1 + Prev2;
		std::cout << FibNumber << "   "; 
		Prev2 = Prev1; 
		Prev1 = FibNumber; 
	}

	std::cout << "\n"; 
}

int main() {
	//srand((unsigned)time(NULL));
	
	int Number = ReadNumber("Please enter the number of fibonacci series: ");

	PrintFibonacciSeries(Number);
}