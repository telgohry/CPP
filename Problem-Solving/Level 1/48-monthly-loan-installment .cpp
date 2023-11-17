// Program that reads a loan amount and number of months then calculate the monthly payment and print it on the screen

#include <iostream>

int ReadPositiveNumber(std::string message){
  int number;
  do {
    std::cout << message;
    std::cin >> number;
  } while (number <= 0);

  return number;
}

int CalulateMonthlyPayment(int LoanAmount, int MonthsNumber){
  return LoanAmount / MonthsNumber;
}

int main() {
  int LoanAmount = ReadPositiveNumber("Please enter the loan amount?\n");
  int MonthsNumber = ReadPositiveNumber("Please enter the number of months?\n");
  std::cout << "\nMonthly Payment = " << CalulateMonthlyPayment(LoanAmount, MonthsNumber) << "\n";
}