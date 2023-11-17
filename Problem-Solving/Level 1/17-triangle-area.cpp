// Program to calculate triangle area then print it on the screen
// area = (base * height) / 2

#include <iostream>

void read_triangle_dimensions(float &base, float &height){
  std::cout << "\nPlease enter the base of the triangle\n";
  std::cin >> base;

  std::cout << "\nPlease enter the height of the triangle\n";
  std::cin >> height;
}

float calculate_triangle_area(float base, float height){
  return (base * height) / 2; 
}

void print_triangle_area(float area){
  std::cout << "\nThe area of the triangle is: " << area << "\n\n";
}


int main() {
  float base, height;
  read_triangle_dimensions(base,height);
  float area = calculate_triangle_area(base, height);
  print_triangle_area(area);
}