// Program that calculates circle area along circumference and then print it on the screen

// Area = (l*l) / (4 * π)

#include <iostream>

constexpr float PI = 3.14159265359;

void read_circumference(float &l){
  std::cout << "\nPlease enter circumference\n";
  std::cin >> l;
}

float calculate_area(float l){
  return (l * l) / (4 * PI);
}

void print_result(float area){
  std::cout << "\nArea = " << area << "\n\n";
}

int main() {
  float circumference;
  read_circumference(circumference);
  float area = calculate_area(circumference);
  print_result(area);
}