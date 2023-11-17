#include <iostream>

enum enOdd_or_Even{Odd = 1, Even = 2};

int read_number(){
  int number;
  std::cout << "\nPlease enter a number\n";
  std::cin >> number;
  return number;
}

enOdd_or_Even check_odd_or_even(int number){
  if(number % 2 != 0){
    return enOdd_or_Even::Odd;
  } else {
    return enOdd_or_Even::Even;
  }
}

int calculate_sum(int number){
  int sum = 0;
  for(int i = 1; i <= number; i++){
    if(check_odd_or_even(i) == enOdd_or_Even::Even){
      sum += i;
    }
  }

  return sum;
}

void print_sum(int sum){
  std::cout << "\nThe sum of even numbers = " << sum << "\n\n";
}

int main() {
  int number = read_number();
  int sum = calculate_sum(number);
  print_sum(sum);
}