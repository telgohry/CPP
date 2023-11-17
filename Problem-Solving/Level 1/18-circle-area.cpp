// Program that calculates circle area and print it on the screen
// area = π * radius^2

#include <iostream>

const float PI = 3.14159;

void read_radius(float &radius){
  std::cout << "\nPlease enter the circle radius\n";
  std::cin >> radius;
}

float calculate_circle_area(float radius){
  return PI * radius * radius;
}

void print_circle_area(float area){
  std::cout << "\nCircle area = " << area << "\n\n";
}


int main() {
  float radius;
  read_radius(radius);
  float area = calculate_circle_area(radius);
  print_circle_area(area);
}