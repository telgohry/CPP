// Program that calculates circle area inscribed in isosceles triangle and then print it on the screen

// Area = π * b^2/4 * ((2*a-b) / (2*a+b) )

#include <iostream>

constexpr float PI = 3.14159265359;

void read_triangle_dimensions(float &side_length, float &base){
  std::cout << "\nPlease enter the base of the triangle\n";
  std::cin >> base;

  std::cout << "\nPlease enter the side length of the triangle\n";
  std::cin >> side_length;
}

float calculate_area(float side_length, float base){
  return PI * (base * base / 4) * ((2*side_length-base) / (2*side_length+base));
}

void print_area(float area){
  std::cout << "\nCircle area = " << area << "\n\n";
}

int main() {
  float base = 0;
  float side_length = 0;
  read_triangle_dimensions(side_length, base);
  float area = calculate_area(side_length, base);
  print_area(area);
}