// Program to read three marks from the user 
/*
  - Print average 

  - Print "PASS": If average >= 50

  - Print "FAIL": Otherwise
*/

#include <iostream>

void read_marks(int &mark1, int &mark2, int &mark3){
  std::cout << "\nPlease enter mark #1\n";
  std::cin >> mark1;
  std::cout << "\nPlease enter mark #2\n";
  std::cin >> mark2;
  std::cout << "\nPlease enter mark #3\n";
  std::cin >> mark3;
}

float calculate_average(int mark1, int mark2, int mark3){
  return (float)(mark1 + mark2 + mark3) / 3;
}

void print_average(float average){
  std::cout << "\nThe average of the three marks is: " << average << "\n";
}

void print_result(float average){
  if(average >= 50){
    std::cout << "\nPASS\n";
  } else {
    std::cout << "\nFAIL\n";
  }
}


int main() {
  int mark1, mark2, mark3; 
  read_marks(mark1, mark2, mark3);
  float average = calculate_average(mark1, mark2,mark3); 
  print_average(average);
  print_result(average);
}