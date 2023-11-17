#include <iostream>
#include <string>

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

/* Count Vowel */
short CountVowels(std::string str) {
	short Counter = 0; 
	
	for (short i = 0; i < str.length(); i++) {
		if (IsVowel(str[i])) {
			Counter++;
		}
	}

	return Counter; 
}

int main() {
	std::string Str = ReadString();

	std::cout << "\nNumber of vowels is: " << CountVowels(Str) << "\n"; 
}