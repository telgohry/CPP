// Program that reads a number and print half of it 

#include <iostream>

double read_number(){
  double number;
  std::cout << "\nEnter a number\n";
  std::cin >> number;

  return number;
}

double calc_half_number(double number){
  return number/2;
}

void print_half_number(double number){
  std::cout << "\nHalf of " << number << " is " << calc_half_number(number) << "\n";
}

int main() {
  print_half_number(read_number());
}
