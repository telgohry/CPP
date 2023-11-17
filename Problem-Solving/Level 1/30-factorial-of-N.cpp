// Program that calculates the factorial of N and then print it on the screen

#include <iostream>

int read_number(){
  int number;
  std::cout << "\nPlease enter a number\n";
  std::cin >> number;
  return number;
}

int calculate_factorial(int number){
  int fact = 1;
  for(int i = 1; i <= number; i++){
    fact *= i;
  }

  return fact;
}

void print_factorial(int fact){
  std::cout << "\nFactorial = " << fact << "\n\n";
}

int main() {
  int number = read_number();
  int fact = calculate_factorial(number);
  print_factorial(fact);
}