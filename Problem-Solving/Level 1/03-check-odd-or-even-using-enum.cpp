// Program that reads a number and check if the number is odd or even

#include <iostream>

enum enNumberType {Even = 1, Odd = 2};

int read_number(){
  int number;
  std::cout << "\nPlease enter a number to check odd or even?\n";
  std::cin >> number;

  return number;
}

enNumberType check_odd_or_even(int number){
  if(number % 2 == 0){
    return enNumberType::Even;
  } else {
    return enNumberType::Odd;
  }
}

void print_number_type(enNumberType number_type){
  if(number_type == enNumberType::Even){
    std::cout << "\nNumber is Even. \n";
  } else {
    std::cout << "\nNumber is Odd. \n";
  }
}


int main() {
  int number = read_number();
  enNumberType check_number = check_odd_or_even(number);
  print_number_type(check_number);
}
