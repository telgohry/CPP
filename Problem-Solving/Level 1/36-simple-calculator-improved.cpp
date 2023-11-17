#include <iostream>

enum enOperationType{Add = '+', Subtract = '-', Multiply = '*', Divide = '/'};

float read_float_number(std::string message){
  float number = 0;
  std::cout << message << "\n";
  std::cin >> number;

  return number;
}

enOperationType read_operation_type(){
  char operation_type = '+';
  std::cout << "Please enter the operation type (+ , - , * , /)?\n";
  std::cin >> operation_type;

  return (enOperationType) operation_type;
}

float calculate_result(float number1, float number2, enOperationType op_type){
  switch(op_type){
    case enOperationType::Add:
      return number1 + number2;
    case enOperationType::Subtract:
      return number1 - number2;
    case enOperationType::Multiply:
      return number1 * number2;
    case enOperationType::Divide:
      return number1 / number2;
    default:
      return number1 + number2;
  }
}

int main() {
  float number1 = read_float_number("Please enter the first number?");
  float number2 = read_float_number("Please enter the second number?");
  enOperationType op_type = read_operation_type();
  std::cout << "\nResult = " << calculate_result(number1, number2, op_type) << "\n";
}