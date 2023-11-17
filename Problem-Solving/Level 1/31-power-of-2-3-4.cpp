// Program that reads a number from a user and calculates the power of 2,3,4 for that number and then print them on the screen

#include <iostream>

int read_number(){
  int number;
  std::cout << "\nPlease enter a number\n";
  std::cin >> number;
  return number;
}

int power_2(int number){
  return number * number;
}

int power_3(int number){
  return number * number * number;
}

int power_4(int number){
  return number * number * number * number;
}

void print_power_2(int number){
  std::cout << number << " ^ 2 = " << power_2(number) << "\n";
}

void print_power_3(int number){
  std::cout << number << " ^ 3 = " << power_3(number) << "\n";
}

void print_power_4(int number){
  std::cout << number << " ^ 4 = " << power_4(number) << "\n";
}



int main() {
  int number = read_number();
  print_power_2(number);
  print_power_3(number);
  print_power_4(number);
}