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

/* Reverse Words */
std::string ReverseWords(std::string Str) {

	std::vector <std::string> vWords; 
	
	vWords = SplitString(Str, " "); 

	std::string ReversedString = "";

	for (int i = vWords.size() - 1; i >= 0; i--) {
		ReversedString += vWords[i];
		ReversedString += " ";
	}

	return ReversedString.substr(0, ReversedString.length()-1);
}

int main() {
	std::string Str = ReadString(); 

	std::cout << "\n\nString after reversing words:\n";
	std::cout << ReverseWords(Str) << "\n";
}