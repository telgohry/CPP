#include <iostream>
#include <string>

/* Print First Letter of Each Word  */
std::string ReadString() {
	std::string str; 

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
}

void PrintStringFirstLetters(std::string str) {
	std::cout << "\nFirst letters of this string:\n";

	if (str[0] != ' ') {
		std::cout << str[0] << "\n";
	}

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			std::cout << str[i + 1] << "\n"; 
		}
	}
}

int main() {
	//srand((unsigned)time(NULL));
	std::string str = ReadString(); 

	PrintStringFirstLetters(str);
}