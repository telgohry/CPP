#include <iostream>
#include <string>

std::string ReadString() {
	std::string str;

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
}

/* Print Each Word In String */
void PrintEachWordInString(std::string Str) {
	std::cout << "\nString Words Are:\n\n";
	for (short i = 0; i < Str.length(); i++) {
		if (Str[i] == ' ') {
			std::cout << "\n";
		}
		else {
			std::cout << Str[i]; 
		}
	}
	std::cout << "\n"; 
}

void PrintEachWordInStringMethod2(std::string Str) {
	std::cout << "\nString Words Are:\n\n";
	
	std::string Delim = " ";
	short Pos = 0; 
	std::string sWord;

	while ((Pos = Str.find(Delim)) != std::string::npos) {

		sWord = Str.substr(0, Pos);

		if (sWord != "") {
			std::cout << sWord << "\n";
		}

		Str.erase(0, Pos + Delim.length()); 
	}

	if (Str != "") {
		std::cout << Str << "\n"; 
	}
}

int main() {
	std::string Str = ReadString();

	PrintEachWordInStringMethod2(Str);

}