#include <iostream>
#include <string>

std::string ReadString() {
	std::string str; 

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
}

/* Lower First Letter of Each Word */
std::string LowerFirstLetterOfEachWord(std::string str) {
	std::cout << "\nString after conversion:\n";

	if (str[0] != ' ') {
		str[0] = tolower(str[0]);
	}

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			str[i + 1] = tolower(str[i + 1]);
		}
	}

	return str;
}

int main() {
	//srand((unsigned)time(NULL));
	std::string str = ReadString(); 

	str = LowerFirstLetterOfEachWord(str);
	std::cout << str << "\n"; 
}