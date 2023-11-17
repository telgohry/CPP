#include <iostream>
#include <vector>
#include <string>

std::string LowerAllLettersOfString(std::string str) {

	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}

	return str;
}

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

/* Replace Words Match Case */
std::string ReplaceWordsWithMatchCase(std::string Str, std::string StringToReplace, std::string ReplaceTo, bool MatchCase = true) {
	std::vector <std::string> vWords;

	vWords = SplitString(Str, " ");

	std::string ReplacedWords = "";


	for (int i = 0; i < vWords.size(); i++) {
		if (MatchCase == true) {
			if (vWords[i] == StringToReplace) {
				vWords[i] = ReplaceTo;
			}
		}
		else if (MatchCase == false) {
			if (LowerAllLettersOfString(vWords[i]) == LowerAllLettersOfString(StringToReplace)) {
				vWords[i] = ReplaceTo; 
			}
		}
	}
	

	/*	for (std::string& Word : vWords) {
		if (Word == StringToReplace && MatchCase == true) {
			Word = ReplaceTo;
		}
		else if (LowerAllLettersOfString(Word) == LowerAllLettersOfString(ReplaceTo) && MatchCase == false) {
			Word = ReplaceTo;
		}
	}
	*/


	ReplacedWords = JoinString(vWords, " ");

	return ReplacedWords;
}

int main() {
	std::string Str = "Welcome to Egypt , Egypt is a great country"; 


	std::cout << "\nOriginal String:\n";
	std::cout << Str << "\n";

	std::cout << "\nReplace with match case:\n";
	std::cout << ReplaceWordsWithMatchCase(Str, "egypt", "USA") << "\n";

	std::cout << "\nReplace without match case:\n";
	std::cout << ReplaceWordsWithMatchCase(Str, "egypt", "USA", false) << "\n";
}