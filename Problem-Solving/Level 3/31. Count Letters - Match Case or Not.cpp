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

/* Count Letters - Match Case or Not */
short CountLettersRegardlessCase(std::string str, char ch) {
	short counter = 0; 
	
	for (short i = 0; i < str.length(); i++) {
		if (tolower(str[i]) == tolower(ch)) {
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
	std::cout << "Letter \'" << ch << "\' or \'" << InvertCharacterCase(ch) << "\' count = " << CountLettersRegardlessCase(str, ch) << "\n";
	
}