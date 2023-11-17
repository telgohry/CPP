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

/* Join String */
std::string JoinString(std::vector <std::string> vWords, std::string Delimeter) {
	
	std::string Str = "";

	/*
	for (short i = 0; i < vWords.size(); i++) {
		if (i == vWords.size() - 1) {
			Str = Str + vWords[i]; 
		}
		else {
			Str = Str + vWords[i]; 
			Str = Str + Delimeter; 
		}
	}
	*/

	for (std::string& vWord : vWords) {
		Str = Str + vWord + Delimeter; 
	}



	return Str.substr(0, Str.length() - Delimeter.length());
}

/* Replace Words */
std::string ReplaceWords(std::string Str, std::string StringToReplace, std::string ReplaceTo) {
	std::vector <std::string> vWords;

	vWords = SplitString(Str, " ");

	std::string ReplacedWords = ""; 

	/*
	for (int i = 0; i < vWords.size(); i++) {
		if (vWords[i] == StringToReplace) {
			vWords[i] = ReplaceTo; 
		}
	}
	*/

	for (std::string& Word : vWords) {
		if (Word == StringToReplace) {
			Word = ReplaceTo;
		}
	}

	ReplacedWords = JoinString(vWords, " "); 

	return ReplacedWords; 
}

std::string ReplaceWordsUsingBuiltInFunctions(std::string Str, std::string StringToReplace, std::string ReplaceTo) {
	int Pos = Str.find(StringToReplace); 

	while (Pos != std::string::npos) {
		Str.replace(Pos, StringToReplace.length(), ReplaceTo); 
		Pos = Str.find(StringToReplace); 
	}

	return Str; 
}

int main() {
	std::string Str = ReadString(); 

	std::cout << "\n\nString after replace:\n";
	std::cout << ReplaceWords(Str, "Egypt", "USA") << "\n";
}