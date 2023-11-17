// Program to reads a day number and then print the day name

#include <iostream>

enum enDays {
  Saturday = 1, 
  Sunday = 2, 
  Monday = 3,
  Tuesday = 4,
  Wednesday = 5,
  Thursday = 6,
  Friday = 7
};

int read_day_number(){
  int day_number;

  do{  
    std::cout << "Please enter the day number?\n";
    std::cin >> day_number;
  } while (day_number < 1 || day_number > 7);

  return day_number;
}

std::string get_day_name(int day_number){
  switch(day_number){
    case enDays::Saturday:
      return "Saturday\n";
    case enDays::Sunday:
      return "Sunday\n";
    case enDays::Monday:
      return "Monday\n";
    case enDays::Tuesday:
      return "Tuesday\n";
    case enDays::Wednesday:
      return "Wednesday\n";
    case enDays::Thursday:
      return "Thursday\n";
    case enDays::Friday:
      return "Friday\n";
    default:
      return "Wrong day\n";
  }
}

int main() {
  int day_number = read_day_number();
  std::cout << "\nIt's " << get_day_name(day_number);
}