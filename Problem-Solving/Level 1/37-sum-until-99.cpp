// Program that keeps reading numbers from the user until the user enters -99 then print the sum of the screen

#include <iostream>


int read_number(){
  int number;
  std::cout << "\nEnter a number: ";
  std::cin >> number;

  return number;
}

int calculate_sum(){
  int number = read_number();
  int sum = 0;

  while (number != -99){
    sum += number;
    number = read_number();
  }

  return sum;
}

void print_sum(int sum){
  std::cout << "\nSum = " << sum << "\n";
}

int main() {
  int sum = calculate_sum();
  print_sum(sum);
}