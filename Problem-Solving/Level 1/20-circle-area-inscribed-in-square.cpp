// Program that calculates circle area inscribed in a square, then print it on the screen

// area = π * pow(A/2, 2) = (π * pow(A,2)) / 4

#include <iostream>

const float PI = 3.14159265359;

void read_square_length(float &length){
  std::cout << "\nPlease enter the square length\n";
  std::cin >> length;
}

float calculate_circle_area(float length){
  return (PI * length * length) / 4;
}

void print_circle_area(float area){
  std::cout << "\nCircle area = " << area << "\n\n";
}



int main() {
  float square_length;
  read_square_length(square_length);
  float area = calculate_circle_area(square_length);
  print_circle_area(area);
}