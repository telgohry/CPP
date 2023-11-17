// Program that reads total bill and cash paid and calculate the reminder to paid back then print it on the screen

#include <iostream>

float read_total_bill(){
  float total_bill;
  std::cout << "\nPlease enter the total bill\n";
  std::cin >> total_bill;

  return total_bill;
}

float read_cash_paid(){
  float cash_paid;
  std::cout << "\nPlease enter the cash paid\n";
  std::cin >> cash_paid;

  return cash_paid;
}

float calculate_reminder(){
  float total_bill = read_total_bill();
  float cash_paid = read_cash_paid();

  return cash_paid - total_bill;
}

void print_reminder(){
  float reminder = calculate_reminder();
  std::cout << "\nReminder = " << reminder << "\n";
}

int main() {
  print_reminder();
}