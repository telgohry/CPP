#include <iostream>
#include <string>

char ReadCharacter() {
	char ch; 

	std::cout << "Please enter a character:\n";
	std::cin >> ch; 

	return ch; 
}

/* Invert Character Case */
char InvertCharacterCase(char ch) {
	/*
	if (ch >= 65 && ch <= 90) {
		ch = tolower(ch);
	}
	else if (ch >= 97 && ch <= 122) {
		ch = toupper(ch);
	}

	return ch; 
	*/

	return isupper(ch) ? tolower(ch) : toupper(ch); 
}

int main() {
	//srand((unsigned)time(NULL));
	char ch = ReadCharacter();

	std::cout << "\nCharacter after inverting case:\n";
	ch = InvertCharacterCase(ch); 
	std::cout << ch << "\n"; 
}