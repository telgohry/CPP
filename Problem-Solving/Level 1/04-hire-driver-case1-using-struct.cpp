// Program reads user age and driver licence then print 
/*
  - Hired: If user's age > 21 and has a driver's licence
  - Rejected: Otherwise 
*/

#include <iostream>

struct Driver_Info {
  int age; 
  bool has_driver_licence;
};

Driver_Info read_info(){

  Driver_Info info;
  
  std::cout << "\nPlease enter your age\n";
  std::cin >> info.age;
  std::cout << "\nDo you have a driver licence?\n" <<
               "Enter (1 if yes) and (0 if no)\n";
  std::cin >> info.has_driver_licence;

  return info;
}

bool is_accepted(Driver_Info info){
  return (info.age > 21 && info.has_driver_licence); 
}

void print_result (Driver_Info info){
  if(is_accepted(info)){
    std::cout << "\nHired\n";
  } else {
    std::cout << "\nRejected\n"; 
  }
}


int main() {
  print_result(read_info());
}
