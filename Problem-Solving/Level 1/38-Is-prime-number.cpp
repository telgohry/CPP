// Program that reads a number from a user and check if it is prime or not then print the result on the screen

#include <iostream>

int read_number(){
  int number;
  std::cout << "\nPlease enter a number\n";
  std::cin >> number;

  return number;
}

bool is_prime(int number){
  int m = number / 2;
  if(number == 2){
    return 1;
  } else if (number <= 0 || number == 1){
    return 0;
  } else {    
    for(int i=2; i<m; i++){
      if(number%i == 0){
        return 0;
      }
    }  
  }
  return 1;
}

void print_result(int number){
  if(is_prime(number)){
    std::cout << "\n" << number << " is prime\n";
  } else {
    std::cout << "\n" << number << " is not prime\n";
  }
}

int main() {
  int number = read_number();
  print_result(number);
}