// Program that prints the sum of the odd numbers from 1 to N

#include <iostream>

int read_number(){
  int number;
  std::cout << "\nPlease enter a number\n";
  std::cin >> number;
  return number;
}

int calculate_sum(int number){
  int sum=0;
  for(int i=1; i<=number; i++){
    if(i%2 != 0){
      sum += i;
    }
  }

  return sum;
}

void print_sum(int sum){
  std::cout<< "\nSum of odd numbers = " << sum << "\n\n";
}

int main() {
  int number = read_number();
  int sum = calculate_sum(number);
  print_sum(sum);
}