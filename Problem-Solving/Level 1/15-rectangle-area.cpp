// Program that reads rectangle length and width
/*
  - Calculate area 
  - Print area
*/

#include <iostream>

struct Rectangle{
  float length;
  float width;
};

Rectangle read_dimensions(){
  Rectangle rectangle;

  std::cout << "\nPlease enter the length of the rectangle\n";
  std::cin >> rectangle.length;

  std::cout << "\nPlease enter the width of the rectangle\n";
  std::cin >> rectangle.width;

  return rectangle;
}

float calculate_area(Rectangle rectangle){
  return rectangle.length * rectangle.width;
}

void print_area(float area){
  std::cout << "\nThe area of the rectangle is: " << area << "\n\n";
}

int main() {
  print_area(calculate_area(read_dimensions())); 
}