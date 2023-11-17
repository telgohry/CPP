// Program that calculates circle area through diameter, Then print it on the screen

// area = (π * diameter ^ 2) / 4

#include <iostream>

const float PI = 3.14159265359;

void read_diameter(float &diameter){
  std::cout << "\nPlease enter the circle diameter\n";
  std::cin >> diameter;
}

float calcualte_circle_area(float diameter){
  return (PI * diameter * diameter) / 4;
}

void print_circle_area(float area){
  std::cout << "\nCircle area = " << area << "\n\n";
}

#include <iostream>

int main() {
  float diameter;
  read_diameter(diameter);
  float area = calcualte_circle_area(diameter);
  print_circle_area(area);
}