#include <iostream>
#include <string>
#include <vector>

std::string ReadString() {
	std::string str;

	std::cout << "Please Enter Your String\n";
	getline(std::cin, str);

	return str;
}

/* Split String */
std::vector <std::string> SplitString(std::string Str, std::string Delimeter) {
	std::vector <std::string> vTokens;
	short Pos = 0;
	std::string sWord = "";

	while ((Pos = Str.find(Delimeter)) != std::string::npos) {

		sWord = Str.substr(0, Pos);

		if (sWord != Delimeter) {
			vTokens.push_back(sWord); 
		}

		Str.erase(0, Pos + Delimeter.length()); 
	}

	if (Str != Delimeter) {
		vTokens.push_back(Str);
	}

	return vTokens;
}

void PrintTokens(std::vector <std::string> &vTokens) {

	for (std::string& Token : vTokens) {
		std::cout << Token << "\n";	
	}
}

int main() {
	std::string Str = ReadString();
	std::vector <std::string> vTokens; 

	vTokens = SplitString(Str, " "); 

	std::cout << "\nTokens = " << vTokens.size() << "\n\n";

	PrintTokens(vTokens);
}