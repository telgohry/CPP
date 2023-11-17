#include <iostream>
#include <string>

std::string ReadString() {
	std::string str; 

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
}

/* Upper First Letter of Each Word */
std::string UpperFirstLetterOfEachWord(std::string str) {
	std::cout << "\nString after conversion:\n";

	if (str[0] != ' ') {
		str[0] = (char) toupper(str[0]);
	}

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			str[i+1] = (char)toupper(str[i+1]);
		}
	}

	return str; 
}

int main() {
	//srand((unsigned)time(NULL));
	std::string str = ReadString(); 

	str = UpperFirstLetterOfEachWord(str);
	std::cout << str << "\n"; 
}