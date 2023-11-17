// Program that prints numbers from N to 1

#include <iostream>

int read_number(){
  int number;
  std::cout << "\nPlease enter a number\n";
  std::cin >> number;
  return number;
}

void print_numbers(int number){
  std::cout << "\nPrint numbers from " << number << " to 1 using for loop:\n";
  for(int i=number; i>=1; i--){
    std::cout << i << "\n";
  }
  std::cout << "\n";
}


int main() {
  int number = read_number();
  print_numbers(number);
}