// Program that reads two numbers from the user 
/*
  - Print two numbers
  - Swap the numbers
  - Print them 
*/

#include <iostream>

void read_numbers(int &num1, int &num2){
  std::cout << "\nPlease enter the first number\n";
  std::cin >> num1;

  std::cout << "\nPlease enter the second number\n";
  std::cin >> num2;
}

void swap_two_numbers(int &num1, int &num2){
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp; 
}

void print(int num1, int num2){
  std::cout << "\n" << num1 << "\n" << num2 << "\n\n"; 
}



int main() {
  int num1, num2;
  read_numbers(num1, num2);
  print(num1, num2);
  swap_two_numbers(num1,num2);
  print(num1, num2);
}