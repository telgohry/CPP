// 51. Update Client By Account Number

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
  bool MarkForDelete = false; 
  bool MarkForUpdate = false; 
};

stClientData ReadNewClient() {

	stClientData ClientData;

	std::cout << "Enter Pincode? ";
	getline(std::cin >> std::ws, ClientData.PinCode);

	std::cout << "Enter Name? ";
	getline(std::cin, ClientData.Name);

	std::cout << "Enter Phone? ";
	getline(std::cin, ClientData.Phone);
	

	std::cout << "Enter Account Balance? ";
	std::cin >> ClientData.AccountBalance; 

	return ClientData; 
}

void PrintClientRecord(stClientData ClientData) {
	std::cout << "Account Number : " << ClientData.AccountNumber << "\n";
	std::cout << "Pin Code       : " << ClientData.PinCode << "\n";
	std::cout << "Name           : " << ClientData.Name << "\n";
	std::cout << "Phone          : " << ClientData.Phone << "\n";
	std::cout << "Account Balance: " << ClientData.AccountBalance << "\n"; 
}

std::string ConvertRecordToLine(stClientData ClientData, std::string Separator = "#//#") {
	
	std::string sClientRecord = ""; 

	sClientRecord += ClientData.AccountNumber + Separator; 
	sClientRecord += ClientData.PinCode + Separator; 
	sClientRecord += ClientData.Name + Separator; 
	sClientRecord += ClientData.Phone + Separator; 
	sClientRecord += std::to_string(ClientData.AccountBalance); 

	return sClientRecord; 
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

void SaveVectorToFile(std::string FileName, std::vector <stClientData> &vClients) {
	std::fstream MyFile;

	MyFile.open(FileName, std::ios::out); 

	if (MyFile.is_open()) {

		std::string Line = "";

		for (stClientData &C : vClients) {
				Line = ConvertRecordToLine(C);
				MyFile << Line << "\n"; 
		}
		MyFile.close();
	}

}

/* Update Client By Account Number */
bool MarkClientForUpdateByAccountNumber(std::string AccountNumber, std::vector <stClientData>& vClients) {
	for (stClientData& C : vClients) {
		if (C.AccountNumber == AccountNumber) {
			C.MarkForUpdate = true; 
			return true;
		}
	}

	return false; 
}

bool UpdateClientByAccountNumber(std::string AccountNumber, std::vector <stClientData>& vClients) {
	for (stClientData& C : vClients) {
		if (C.MarkForUpdate == true) {
			C = ReadNewClient(); 
      C.AccountNumber = AccountNumber; 
			return true;
		}
	}
	return false; 
}

void UpdateRecordFromFileByAccountNumber(std::string FileName, std::string AccountNumber, std::vector <stClientData>& vClients) {
	stClientData Client;
	char UpdateChoice = 'n';

	if (FindClientByAccountNumber(AccountNumber, Client)) {
		std::cout << "\nThe following are client details:\n\n";
		PrintClientRecord(Client);

		std::cout << "\nAre you sure you want to update this client? [y/n]? ";
		std::cin >> UpdateChoice;

    std::cout << "\n\n"; 

		if (UpdateChoice == 'y' || UpdateChoice == 'Y') {
			MarkClientForUpdateByAccountNumber(AccountNumber, vClients);
			UpdateClientByAccountNumber(AccountNumber, vClients);
			SaveVectorToFile("Clients.txt", vClients);

			vClients = GetClientsRecordsFromFile("Clients.txt");

			std::cout << "\n\nClient Updated Successfully.\n";
		}
	}
	else {
		std::cout << "\nClient with account number (" << AccountNumber << ") NOT found!\n";
	}
}

int main() {
	
	std::vector <stClientData> vClients = GetClientsRecordsFromFile("Clients.txt"); 

	std::string AccountNumber = ReadString("Please enter account number? "); 

	UpdateRecordFromFileByAccountNumber("Clients.txt", AccountNumber, vClients);
}