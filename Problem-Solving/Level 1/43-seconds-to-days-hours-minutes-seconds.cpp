// Program to calculate number of days, hours, minutes and seconds that a task take then print them on the screen. given task duration in total seconds 

#include <iostream>
#include <cmath>

constexpr int seconds_in_day = 24*60*60;
constexpr int seconds_in_hour = 60*60;
constexpr int seconds_in_minute = 60;


float read_total_seconds(float &total_seconds){
  std::cout << "Please enter the total number of seconds?\n";
  std::cin >> total_seconds;

  return total_seconds;
}

int task_duration_in_days(float &total_seconds){
  int task_duration_in_days = total_seconds / seconds_in_day;
  total_seconds = (int) total_seconds % seconds_in_day;
  return task_duration_in_days;
}

int task_duration_in_hours(float &total_seconds){
  int task_duration_in_hours = total_seconds / seconds_in_hour;
  total_seconds = (int) total_seconds % seconds_in_hour;
  return task_duration_in_hours;
}

int task_duration_in_minutes(float &total_seconds){
  int task_duration_in_minutes = total_seconds / seconds_in_minute;
  total_seconds = (int) total_seconds % seconds_in_minute;
  return task_duration_in_minutes;
}

int main() {
  float total_seconds = 0;
  read_total_seconds(total_seconds);
  std::cout << "\n";
  std::cout << task_duration_in_days(total_seconds) << ":" <<     
               task_duration_in_hours(total_seconds) << ":" <<
               task_duration_in_minutes(total_seconds) << ":" << 
               total_seconds << "\n";
  /*
  std::cout << "\nTotal seconds: " << total_seconds << "\n";
  std::cout << "Days: " << task_duration_in_days(total_seconds) << "\n";
  std::cout << "\nReminder seconds: " << total_seconds << "\n";
  std::cout << "Hours: " << task_duration_in_hours(total_seconds) << "\n";
  std::cout << "\nReminder seconds: " << total_seconds << "\n";
  std::cout << "Minutes: " << task_duration_in_minutes(total_seconds) << "\n";
  std::cout << "Reminder seconds: " << total_seconds << "\n";
  std::cout << "----------------------------------------------\n";
  */


}