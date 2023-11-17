#include <iostream>
#include <string>

std::string ReadString() {
	std::string str;

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
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

/* Invert All Letters Case */
std::string InvertAllLettersCase(std::string str) {
	for (int i = 0; i < str.length(); i++) {
		str[i] = InvertCharacterCase(str[i]);
	}

	return str; 
}

int main() {
	//srand((unsigned)time(NULL));
	std::string str = ReadString();

	std::cout << "\nString after inverting all letters case:\n";
	str = InvertAllLettersCase(str); 
	std::cout << str << "\n"; 
}