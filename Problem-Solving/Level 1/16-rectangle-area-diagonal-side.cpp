// Program to calculate rectangle area through diagonal and side area of rectangle and print it on screen 

#include <iostream>
#include <cmath>

struct Rectangle {
  float length;
  float diagonal;
};

Rectangle read_rectangle_dimensions(){
  Rectangle rectangle;

  std::cout << "\nPlease enter the length of the rectangle\n";
  std::cin >> rectangle.length;

  std::cout << "\nPlease enter the diagonal of the rectangle\n";
  std::cin >> rectangle.diagonal;

  return rectangle;
}

float calcualte_area(Rectangle rectangle){
  return rectangle.length * sqrt(pow(rectangle.diagonal,2) - pow(rectangle.length,2));
}

void print_rectangle_area(float area){
  std::cout << "\nThe area of the rectangle is: " << area << "\n\n";
}


int main() {
  Rectangle r = read_rectangle_dimensions();
  float area = calcualte_area(r);
  print_rectangle_area(area);
}