#include <iostream>

int ReadPositiveNumber(std::string message){
  int number;
  do{
    std::cout << message;
    std::cin >> number;
  } while (number <= 0);

  return number;
}

int CalculateLoanMonths(int LoanAmount, int MonthlyPayment){
  return LoanAmount / MonthlyPayment;
}


int main() {
  int LoanAmount = ReadPositiveNumber("Please enter the loan amount?\n");
  int MonthlyPayment = ReadPositiveNumber("Please enter the monthly payment?\n");

  std::cout << "\n"<< CalculateLoanMonths(LoanAmount, MonthlyPayment) << " Months\n";
}