// Program that reads age from the user and keep asking till the user's age is between 18 and 45 then

/*
  - Print "Valid Age": If age is between 18 and 45
  - Print "Invalid age, please try again": Otherwise
*/

#include <iostream>

void read_age(int &age){
  std::cout << "\nPlease enter your age\n"; 
  std::cin >> age;

  while(!(age >= 18 && age <=45)){
    std::cout << "\n" << age <<" is Invalid age,please try again\n";
    std::cin >> age;
  }
}

/*
bool validate_age(int age){
  return (age >= 18 && age <= 45);
}
*/

void print_result(int age){
    std::cout << "\n" << age << " is valid age\n\n";
}

int main() {
  int age;
  read_age(age);
  print_result(age);
}