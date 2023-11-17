// Program that reads three numbers 
/*
  - Print the max number
*/

#include <iostream>

void read_numbers(int &num1, int &num2, int &num3){
  std::cout << "\nPlease enter the first number\n";
  std::cin >> num1;

  std::cout << "\nPlease enter the second number\n";
  std::cin >> num2;

  std::cout << "\nPlease enter the third number\n";
  std::cin >> num3;
}

int max_of_three_numbers(int num1, int num2, int num3){
  if(num1 > num2 && num1 > num3){
    return num1;
  } else if(num2 > num3){
    return num2;
  } else {
    return num3;
  }
}

void print_max(int max){
  std::cout << "\nThe max of three numbers is: " << max << "\n\n";
}



int main() {
  int num1, num2, num3;
  read_numbers(num1, num2, num3);
  print_max(max_of_three_numbers(num1, num2, num3));
}