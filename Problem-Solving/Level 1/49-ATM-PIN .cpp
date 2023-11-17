// Program that reads ATM PIN from the user, then check if PIN Code = 1234, then show the balance to the user, otherwise print "Wrong PIN" and ask the user to enter the PIN again 

#include <iostream>

int ReadPIN(){
  int PIN;
  std::cout << "Please enter your PIN code?\n";
  std::cin >> PIN;

  return PIN;
}

bool CheckPIN(int PIN){
  if(PIN == 1234){
    return 1;
  } else {
    return 0;
  }
}

void ShowBalance(){
  int PIN = ReadPIN();
  int Balance = 7500;
  while(!CheckPIN(PIN)){
    std::cout << "\nWrong PIN code, Please try again\n";
    PIN = ReadPIN();
  }
  std::cout << "\nYour Balance is: " << Balance << "\n";
}

int main() {
  ShowBalance();
}