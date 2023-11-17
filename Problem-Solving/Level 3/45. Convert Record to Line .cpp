#include <iostream>
#include <string>

std::string ReadString(std::string Msg) {
	std::string str;

	std::cout << Msg;
	getline(std::cin, str);

	return str;
}

double ReadDoubleNumber(std::string Msg) {
	double Number;

	std::cout << Msg;
	std::cin >> Number;

	return Number;
}

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

	ClientData.AccountNumber = ReadString("Enter Account Number? ");
	ClientData.PinCode = ReadString("Enter Pincode? ");
	ClientData.Name = ReadString("Enter Name? ");
	ClientData.Phone = ReadString("Enter Phone? ");
	ClientData.AccountBalance = ReadDoubleNumber("Enter Account Balance? "); 

	return ClientData; 
}

std::string ConvertRecordToLine(stClientData ClientData, std::string Seperator = "#//#") {
	
	std::string sClientRecord = ""; 

	sClientRecord += ClientData.AccountNumber + Seperator; 
	sClientRecord += ClientData.PinCode + Seperator; 
	sClientRecord += ClientData.Name + Seperator; 
	sClientRecord += ClientData.Phone + Seperator; 
	sClientRecord += std::to_string(ClientData.AccountBalance); 

	return sClientRecord; 
}

int main() {

	std::cout << "Please enter client data:\n\n";

	stClientData Client1; 
	Client1 = ReadNewClient();
	
	std::cout << "\n\nClient record for saving is:\n";
	std::cout << ConvertRecordToLine(Client1) << "\n";
}