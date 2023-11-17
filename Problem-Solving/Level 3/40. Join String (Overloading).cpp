#include <iostream>
#include <string>
#include <vector>



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

/* Join String (Overloading) */
std::string JoinString(std::string Arr[5], short Size, std::string Delimeter) {
	std::string Str = "";

	for (short i = 0; i < Size; i++){
		Str += Arr[i];
		Str += Delimeter;
	}

	return Str.substr(0, Str.length() - Delimeter.length());
}

int main() {
	std::string Arr[] = { "Tarek", "Muhammed", "Ahmed", "Ali", "Heema"};
	std::vector <std::string> vWords { "Tarek", "Muhammed", "Ahmed", "Ali", "Heema"};
	
	std::cout << "Vector after join:\n"; 
	std::cout << JoinString(vWords, "@") << "\n";

	std::cout << "\nArray after join:\n";
	std::cout << JoinString(Arr, 5, "@") << "\n";
}