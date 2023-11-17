// Program that reads three marks and print the average of them 

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

void print_result(float result){
  std::cout << "\nThe average of three marks is: " << result << "\n";
}


int main() {
  int mark1, mark2, mark3;
  read_marks(mark1,mark2,mark3);
  print_result(calculate_average(mark1, mark2, mark3));
}