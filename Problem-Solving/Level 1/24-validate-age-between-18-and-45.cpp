/* Program that reads age from the user and

    - Print "Valid Age": if age is between 18 and 45

    - Print "Invalid Age": Otherwise

*/ 

#include <iostream>

void read_age(int &age){
  std::cout << "\nPlease enter your age\n";
  std::cin >> age;
}

bool validate_age_in_range(int age, int from, int to){
  return (age >= from && age <= to);
}

void print_result(int age){
  if(validate_age_in_range(age,18,45)){
    std::cout << age <<" is Valid Age\n\n";
  } else {
    std::cout << age << " is Invalid Age\n\n";
  }
}

int main() {
  int age;
  read_age(age);
  print_result(age);
}