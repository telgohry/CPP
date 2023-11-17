// Program to reads month number then prints the month name on the screen;

#include <iostream>

enum enMonths {
  Jan = 1,
  Feb = 2, 
  Mar = 3,
  Apr = 4,
  May = 5,
  Jun = 6,
  Jul = 7,
  Aug = 8,
  Sep = 9,
  Oct = 10,
  Nov = 11, 
  Dec = 12
};

int read_month_number(){
  int month_number;
  
  std::cout << "\nPlease enter month number?\n";
  std::cin >> month_number;

  return month_number;
}

std::string get_month_name(int month_number){
  switch(month_number){
    case enMonths::Jan:
      return "January";
    case enMonths::Feb:
      return "February";
    case enMonths::Mar:
      return "March";
    case enMonths::Apr:
      return "April";
    case enMonths::May:
      return "May";
    case enMonths::Jun:
      return "June";
    case enMonths::Jul:
      return "July";
    case enMonths::Aug:
      return "August";
    case enMonths::Sep:
      return "September";
    case enMonths::Oct:
      return "October";
    case enMonths::Nov:
      return "Novemeber";
    case enMonths::Dec:
      return "Decemeber";
    default:
      return "Wrong month number";
  }
}

int main() {
  int month_number = read_month_number();
  std::cout << "It's " << get_month_name(month_number) << "\n";
}