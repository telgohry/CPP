#include <iostream>
#include <vector>
#include <string>

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

struct stClientData {
	std::string AccountNumber = ""; 
	std::string PinCode = ""; 
	std::string Name = ""; 
	std::string Phone = "";
	double AccountBalance = 0; 
};

/* Convert Line Data to Record */
stClientData ConvertLineToRecord(std::string sClientRecord, std::string Separator = "#//#") {
	std::vector <std::string> vClient; 
	vClient = SplitString(sClientRecord, Separator);

	stClientData Client; 

	Client.AccountNumber = vClient[0];
	Client.PinCode = vClient[1];
	Client.Name = vClient[2];
	Client.Phone = vClient[3];
	Client.AccountBalance = std::stod(vClient[4]);

	return Client; 
}


void PrintClientRecord(stClientData ClientData) {
	std::cout << "Account Number : " << ClientData.AccountNumber << "\n";
	std::cout << "Pin Code       : " << ClientData.PinCode << "\n";
	std::cout << "Name           : " << ClientData.Name << "\n";
	std::cout << "Phone          : " << ClientData.Phone << "\n";
	std::cout << "Account Balance: " << ClientData.AccountBalance << "\n"; 
}

int main() {
	
	std::string stLine = "A200#//#1234#//#Tarek Gohry#//#01093343359#//#5270.000000"; 
	std::cout << "Line record is:\n";
	std::cout << stLine << "\n";

	stClientData Client = ConvertLineToRecord(stLine); 

	
	std::cout << "\n\nThe following is the extracted client record:\n\n";
	PrintClientRecord(Client);
	
}