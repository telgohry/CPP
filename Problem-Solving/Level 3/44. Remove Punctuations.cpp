#include <iostream>
#include <string>

/* Remove Punctuations */
std::string RemovePunctuations(std::string Str) {

	for (int i = 0; i < Str.length(); i++) {
		if (ispunct(Str[i])) {
			Str.erase(Str.begin() + i);
		}
	}

	return Str; 
}

int main() {
	std::string Str = "Welcome to Egypt, Egypt is a great country; It's amazing."; 


	std::cout << "\nOriginal String:\n";
	std::cout << Str << "\n";

	std::cout << "\nPunctuations Removed:\n";
	std::cout << RemovePunctuations(Str) << "\n";
}