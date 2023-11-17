// Program that takes from the user two numbers and the operation (+, -, *, or /) and perfroms the operation then print it on the screen

#include <iostream>

void read_expression(float &number1, char &operation, float &number2){
  std::cout << "\nPlease enter the expression (eg. 1+2)\n";
  std::cout << "Note: we can do only four operations (+ , - , * , /)\n";
  std::cout << "\nExpression: ";
  std::cin >> number1 >> operation >> number2;
}

float calculate_result(float number1, char operation, float number2){
  switch(operation){
    case '+':
    return number1 + number2;
    break;
    case '-':
    return number1 - number2;
    break;
    case '*':
    return number1 * number2;
    break;
    case '/':
    return number1 / number2;
    break;
  }
}

void print_result(float result){
  std::cout << "\nResult = " << result << "\n\n";
}

int main() {
  float number1 = 0;
  char operation = ' ';
  float number2 = 0;
  read_expression(number1, operation, number2);
  float result = calculate_result(number1, operation, number2);
  print_result(result);
}