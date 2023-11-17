#include <iostream>
#include <string>
#include <vector>
#include <fstream>

/* Convert Record to Line */
struct stClientData {
	std::string AccountNumber = ""; 
	std::string PinCode = ""; 
	std::string Name = ""; 
	std::string Phone = "";
	double AccountBalance = 0; 
};

stClientData ReadNewClient() {

	stClientData ClientData;

	std::cout << "Enter Account Number? "; 
	getline(std::cin >> std::ws, ClientData.AccountNumber);

	std::cout << "Enter Pincode? ";
	getline(std::cin, ClientData.PinCode);

	std::cout << "Enter Name? ";
	getline(std::cin, ClientData.Name);

	std::cout << "Enter Phone? ";
	getline(std::cin, ClientData.Phone);
	

	std::cout << "Enter Account Balance? ";
	std::cin >> ClientData.AccountBalance; 

	return ClientData; 
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

/* Add Clients to File */

void AddDataLineToFile(std::string FileName, std::string stDataLine) {
	std::fstream MyFile;

	MyFile.open(FileName, std::ios::out | std::ios::app);

	if (MyFile.is_open()) {
		MyFile << stDataLine << "\n";
		MyFile.close();
	}
}

void AddNewClient() {
	stClientData NewClient;
	NewClient = ReadNewClient();
	AddDataLineToFile("Clients.txt", ConvertRecordToLine(NewClient));
}

void AddClients() { 
	std::string stClientRecord;
	char AddClient = 'Y';

	std::fstream MyFile; 

	do {
		system("cls"); 
		std::cout << "Adding New Client:\n\n";

		AddNewClient(); 

		std::cout << "\nClient Added Successfully, do you want to add more clients? ";
		std::cin >> AddClient; 
		std::cout << "\n\n"; 

	} while (toupper(AddClient) == 'Y');

}

int main() {
	AddClients();
}