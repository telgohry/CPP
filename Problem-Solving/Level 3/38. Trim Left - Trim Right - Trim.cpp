#include <iostream>
#include <string>

std::string ReadString() {
	std::string str;

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
}


/* Trim Left - Trim Right - Trim */
std::string TrimLeft(std::string Str) {

	for (short i = 0; i < Str.length(); i++) {
		if (Str[i] != ' ') {
			return Str.substr(i, Str.length() - 1); 
		}
	}

	return "";
}

std::string TrimRight(std::string Str) {

	for (short i = Str.length() - 1; i >= 0; i--) {
		if (Str[i] != ' ') {
			return Str.substr(0 , i + 1);
		}
	}

	return "";
}

std::string Trim(std::string Str) {
	Str = TrimLeft(Str);
	Str = TrimRight(Str);

	return Str; 
}

int main() {
	std::string Str = ReadString();
	
	std::cout << "String     = " << Str << "\n\n"; 

	
	std::cout << "Trim Left  = " << TrimLeft(Str) << "\n";
	std::cout << "Trim Right = " << TrimRight(Str) << "\n";
	std::cout << "Trim       = " << Trim(Str) << "\n";
}