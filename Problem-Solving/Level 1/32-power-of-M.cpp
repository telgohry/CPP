// Program that reads a number from a user and the power then calculates and power of the number and print it on the screen

#include <iostream>

int read_number(){
  int number; 
  std::cout << "\nPlease enter a number\n";
  std::cin >> number;

  return number;
}

int read_power(){
  int power;
  std::cout << "\nPlease enter the power\n";
  std::cin >> power;

  return power;
}

int calculate_power(int number, int power){
  if(power == 0){
    return 1;
  }
  
  int pow = number;
  for(int i=0; i<power-1; i++){
    pow *= number;
  }

  return pow;
}

void print_power(int number, int power){
  std::cout << number << " ^ " << power << " = " << calculate_power(number, power) << "\n";
}

int main() {
  int number = read_number();
  int power = read_power();
  print_power(number, power);
}