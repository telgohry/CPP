// 49. Find Client by Account Number
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::string ReadString(std::string Msg) {
	std::string str;

	std::cout << Msg;
	getline(std::cin, str);

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

struct stClientData {
	std::string AccountNumber = ""; 
	std::string PinCode = ""; 
	std::string Name = ""; 
	std::string Phone = "";
	double AccountBalance = 0; 
};

void PrintClientRecord(stClientData ClientData) {
	std::cout << "Account Number : " << ClientData.AccountNumber << "\n";
	std::cout << "Pin Code       : " << ClientData.PinCode << "\n";
	std::cout << "Name           : " << ClientData.Name << "\n";
	std::cout << "Phone          : " << ClientData.Phone << "\n";
	std::cout << "Account Balance: " << ClientData.AccountBalance << "\n"; 
}

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

std::vector <stClientData> GetClientsRecordsFromFile(std::string FileName) {

	std::vector <stClientData> vClientsRecords; 

	std::fstream MyFile; 
	MyFile.open(FileName, std::ios::in);

	if (MyFile.is_open()) {

		std::string Line;
		stClientData stClient; 

		while (getline(MyFile, Line)) {
			stClient = ConvertLineToRecord(Line);
			vClientsRecords.push_back(stClient);
		}

		MyFile.close(); 
	}

	return vClientsRecords; 
}

bool FindClientByAccountNumber(std::string AccountNumber, stClientData &Client) {

	std::vector <stClientData> vClients = GetClientsRecordsFromFile("Clients.txt");

	for (stClientData &C : vClients) {
		if (C.AccountNumber == AccountNumber) {
			Client = C; 
			return 1; 
		} 
	}

	return 0;
}

int main() {
	
	stClientData Client; 

	std::string AccountNumber = ReadString("Please enter account number? "); 
	
	if (FindClientByAccountNumber(AccountNumber, Client)) {
		std::cout << "\nThe following are client details:\n\n";
			PrintClientRecord(Client);
	}
	else {
		std::cout << "\nClient with account number (" << AccountNumber << ") NOT found!\n";
	}

}