#include <iostream>
#include <string>

std::string ReadString() {
	std::string str;

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
}

char ReadCharacter() {
	char ch; 

	std::cout << "Please enter a character:\n";
	std::cin >> ch; 

	return ch; 
}

/* Count Letter */
short CountLetter(std::string str, char ch) {
	short counter = 0; 
	
	for (short i = 0; i < str.length(); i++) {
		if (str[i] == ch) {
			counter++;
		}
	}

	return counter;
}

int main() {
	//srand((unsigned)time(NULL));
	std::string str = ReadString();
	std::cout << "\n";

	char ch = ReadCharacter();

	std::cout << "\nLetter \'" << ch << "\' Count = " << CountLetter(str, ch) << "\n"; 
}