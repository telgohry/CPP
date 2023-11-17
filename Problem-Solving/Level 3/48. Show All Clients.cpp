#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

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

/* Show All Clients */
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

void PrintClientRec(stClientData ClientRecord) {
	std::cout << "| " << std::left << std::setw(15) << ClientRecord.AccountNumber;
	std::cout << "| " << std::left << std::setw(10) << ClientRecord.PinCode;
	std::cout << "| " << std::left << std::setw(40) << ClientRecord.Name;
	std::cout << "| " << std::left << std::setw(12) << ClientRecord.Phone;
	std::cout << "| " << std::left << std::setw(12) << ClientRecord.AccountBalance;
}

void PrintAllClientRecords(std::vector <stClientData> vClients) {

	std::cout << "\n\t\t\t\tClients List (" << vClients.size() << ") Client(s)." << "\n";
	std::cout << "_________________________________________________________________________________________________\n\n";
	std::cout << "| " << std::left << std::setw(15) << "Account Number";
	std::cout << "| " << std::left << std::setw(10) << "Pin Code";
	std::cout << "| " << std::left << std::setw(40) << " Client Name";
	std::cout << "| " << std::left << std::setw(12) << " Phone";
	std::cout << "| " << std::left << std::setw(12) << " Balance";
	std::cout << "\n_________________________________________________________________________________________________\n\n";


	for (int i = 0; i < vClients.size(); i++) {
		PrintClientRec(vClients[i]);
		std::cout << "\n";
	}
	std::cout << "\n_________________________________________________________________________________________________\n";
}

int main() {
	std::vector <stClientData> vClients = GetClientsRecordsFromFile("Clients.txt");

	PrintAllClientRecords(vClients);
}