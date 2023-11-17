#include <iostream>
#include <string>

std::string ReadString() {
	std::string str;

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
}

/* Count Each Word In String */
short CountEachWordInString(std::string Str) {
	std::string Delimeter = " ";
	short Pos = 0; 
	std::string sWord = ""; 
	short Counter = 0; 

	while ((Pos = Str.find(Delimeter)) != std::string::npos) {

		sWord = Str.substr(0, Pos); 

		if (sWord != "") {
			Counter++; 
		}

		Str.erase(0, Pos + Delimeter.length());
	}

	if (Str != "") {
		Counter++;
	}

	return Counter; 
}

int main() {
	std::string Str = ReadString();

	std::cout << "\nThe number of words in your string is: " << CountEachWordInString(Str) << "\n";
}