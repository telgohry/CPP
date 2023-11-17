// Program that reads the ATM PIN code from the user, then check if PIN code = 1234, the show the balance to the user, otherwise print "Wrong PIN" and ask the user to enter PIN code again 

// Only allow user to enter PIN 3 times, If it fails print "Card is Looked"

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
  int Trail = 1;
  int Balance = 7500;

  while(Trail <= 3){
    if(CheckPIN(PIN)){
      std::cout << "\nYour balance is: " << Balance << "\n";
      exit(0);
    } else {
      std::cout << "\nWrong PIN code, ";
      PIN = ReadPIN();
    }
    Trail++;
  }
  std::cout << "\nYou've exceeded 3 trails, Card is locked\n";
}

int main() {
  ShowBalance();
}