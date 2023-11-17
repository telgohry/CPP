#include <iostream>

std::string ReadString() {
	std::string str;

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
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

/* Print All Vowels In String */
void PrintVowels(std::string Str) {
	std::cout << "\nVowels in string are: ";

	for (short i = 0; i < Str.length(); i++) {
		if (IsVowel(Str[i])) {
			std::cout << Str[i] << "   ";
		}
	}

	std::cout << "\n"; 
}

int main() {
	std::string Str = ReadString();

	PrintVowels(Str); 

}
