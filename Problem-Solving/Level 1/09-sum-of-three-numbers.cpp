#include <iostream>

void read_numbers(int &num1, int &num2, int &num3){
  std::cout << "\nPlease enter three numbers\n";
  std::cin >> num1 >> num2 >> num3;  
}

int calculate_sum(int num1, int num2, int num3){
  return num1 + num2 + num3; 
}

void print_sum(int sum){
  std::cout << "\nThe sum is: " << sum << "\n";  
}


int main() {
  int num1, num2, num3;
  read_numbers(num1, num2, num3);
  print_sum(calculate_sum(num1,num2,num3));
}
