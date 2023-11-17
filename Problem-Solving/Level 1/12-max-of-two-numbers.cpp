// Program that reads two numbers 
/*
  - Print the max number
*/

#include <iostream>

void read_numbers(int &number1, int &number2){
  std::cout << "\nPlease enter the first number\n";
  std::cin >> number1;
  std::cout << "\nPlease enter the second number\n";
  std::cin >> number2;
}

int max(int number1, int number2){
  if(number1 > number2){
    return number1;
  } else {
    return number2;
  }
}

void print_max(int max){
  std::cout << "\nThe max is: " << max << "\n\n";
}

int main() {
  int number1, number2;
  read_numbers(number1, number2);
  print_max(max(number1, number2)); 
}