// Program to calculate task duration in seconds and print it on the screen. Given task in the number of(days-hours-minutes-seconds)

#include <iostream>

float read_task_number(std::string message){
  float number;
  std::cout << message << "\n";
  std::cin >> number;

  return number;
}

float task_in_seconds(float days, float hours, float minutes, float seconds){
  return seconds + minutes*60 + hours*60*60 + days*24*60*60;
}

int main() {
  float days = read_task_number("Please enter the number of days?");
  float hours = read_task_number("Please enter the number of hours?");
  float minutes = read_task_number("Please enter the number of minutes?");
  float seconds = read_task_number("Please enter the number of seconds?");

  std::cout << "\nTotal seconds = " << task_in_seconds(days, hours, minutes, seconds) << "\n";
}