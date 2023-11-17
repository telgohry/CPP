#include <iostream>

int ReadNumber(std::string msg) {
	int Number; 

	std::cout << msg;
	std::cin >> Number;

	return Number; 
}

/* Print Fibonacci Series */
void PrintFibUsingRecursion(int Number, int Prev1, int Prev2) {

	int FibNumber = 0;
	
	if (Number > 0) {
		FibNumber = Prev1 + Prev2; 
		Prev2 = Prev1;
		Prev1 = FibNumber;
		std::cout << FibNumber << "   "; 
		PrintFibUsingRecursion(Number - 1, Prev1, Prev2);
	}
}

int main() {
	//srand((unsigned)time(NULL));
	
	int Number = ReadNumber("Please enter the number of fibonacci series: ");

	PrintFibUsingRecursion(Number, 0, 1);
}