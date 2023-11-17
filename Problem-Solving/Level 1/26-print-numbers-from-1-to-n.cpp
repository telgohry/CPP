// Program that prints numbers from 1 to N

#include <iostream>

int read_number(){
  int number;
  std::cout << "\nPlease enter a number\n";
  std::cin >> number;

  return number;
}

void print_numbers(int number){
  std::cout << "\n";
  for(int i=1; i<=number; i++){
    std::cout << i << "\n";
  }

  std::cout << "\n\n";
}

int main() {
  int number = read_number();
  print_numbers(number);
}