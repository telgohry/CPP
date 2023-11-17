// Program that calculates circle area and the circle described around an arbitary triangle then print it on the screen

// Area = π * pow(((a*b*c) / (4 * sqrt(p * (p-a)*(p-b)*(p-c)))), 2)
// p = (a+b+c) / 2

#include <iostream>
#include <cmath>

void read_triangle_data(float &a, float &b, float &c){
  std::cout << "\nPlease enter the triangle data (a,b, and c)\n";
  std::cin >> a >> b >> c;
}

float calculate_circle_area(float a, float b, float c){
  constexpr float PI = 3.14159265359;
  float p = (a+b+c) / 2;
  return PI * pow((a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c))),2);
}

void print_circle_area(float area){
  std::cout << "\nCircle area = " << area << "\n\n";
}


int main() {
  float a,b,c;
  read_triangle_data(a,b,c);
  float area = calculate_circle_area(a,b,c);
  print_circle_area(area);
}