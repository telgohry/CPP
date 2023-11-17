// Program that reads a number of hours from the user and calculates the number of weeks, and days in that number then print them on the screen

#include <iostream>

float read_number_of_hours(){
  float number_of_hours; 
  do{
    std::cout << "Please enter a number of hours (positive)?\n";
    std::cin >> number_of_hours;
  } while(number_of_hours <= 0);

  return number_of_hours;  
}

float number_of_weeks(float number_of_hours){
  return number_of_hours / 24 / 7;
}

float number_of_days(float number_of_hours){
  return number_of_hours / 24; 
}

int main() {
  float number_of_hours = read_number_of_hours();
  std::cout << "\nWeeks: " <<  number_of_weeks(number_of_hours) << "\n";
  std::cout << "Days: " <<  number_of_days(number_of_hours) << "\n";
}