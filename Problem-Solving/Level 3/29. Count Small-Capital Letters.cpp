#include <iostream>
#include <string>

std::string ReadString() {
	std::string str;

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
}

/* Count Small-Capital Letters */
int CountCapitalLetters(std::string str) {
	int counter = 0;

	for (int i = 0; i < str.length(); i++) {
		if (isupper(str[i])) {
			counter++; 
		}
	}

	return counter; 
}

int CountSmallLetters(std::string str) {
	int counter = 0;

	for (int i = 0; i < str.length(); i++) {
		if (islower(str[i])) {
			counter++;
		}
	}

	return counter;
}

int main() {
	//srand((unsigned)time(NULL));
	std::string str = ReadString();

	std::cout << "\n";
	std::cout << "String Length         = " << str.length() << "\n";
	std::cout << "Capital letters count = " << CountCapitalLetters(str) << "\n";
	std::cout << "Small letters count   = " << CountSmallLetters(str) << "\n";
}