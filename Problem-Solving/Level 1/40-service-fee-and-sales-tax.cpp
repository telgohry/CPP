// Program that reads bill value from the user and add service fee and sales tax then print total bill on the screen

#include <iostream>

constexpr float service_fee = 0.1;
constexpr float sales_tax = 0.16;

float read_bill_value(){
  float bill_value;
  std::cout << "\nPlease enter the bill value\n";
  std::cin >> bill_value;

  return bill_value;
}

float calculate_total_bill(){
  float bill_value = read_bill_value();
  float total_bill = bill_value + (bill_value * service_fee);
  total_bill = total_bill + (total_bill * sales_tax);

  return total_bill;
}

void print_total_bill(){
  float total_bill = calculate_total_bill();
  std::cout << "\nTotal bill = " << total_bill << "\n";
}

int main() {
  print_total_bill();
}