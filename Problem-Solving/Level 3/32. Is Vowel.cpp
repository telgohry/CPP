#include <iostream>

char ReadCharacter() {
	char ch; 

	std::cout << "Please enter a character:\n";
	std::cin >> ch; 

	return ch; 
}

/* Is Vowel */
bool IsVowel(char ch) {

	ch = tolower(ch);

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
		return 1;
	}
	else {
		return 0; 
	}
}

int main() {
	char ch = ReadCharacter();

	if (IsVowel(ch)) {
		std::cout << "\nYES, Letter \'" << ch << "\' is vowel\n";
	}
	else {
		std::cout << "\nNO, Letter \'" << ch << "\' is NOT vowel\n";
	}

	
}