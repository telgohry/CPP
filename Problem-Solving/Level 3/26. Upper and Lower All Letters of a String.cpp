#include <iostream>
#include <string>

std::string ReadString() {
	std::string str; 

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
}

/* Upper/Lower All Letters of a String */
std::string UpperAllLettersOfString(std::string str) {
	
	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]); 
	}

	return str; 
}

std::string LowerAllLettersOfString(std::string str) {

	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}

	return str;
}

int main() {
	//srand((unsigned)time(NULL));
	std::string str = ReadString(); 

	std::cout << "\nString after upper:\n";
	str = UpperAllLettersOfString(str);
	std::cout << str << "\n"; 

	std::cout << "\nString after lower:\n";
	str = LowerAllLettersOfString(str);
	std::cout << str << "\n";
}