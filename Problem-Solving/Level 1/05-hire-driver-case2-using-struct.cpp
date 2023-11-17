// Program reads driver credentials (age, has licence, has recommendation)

/*
  print "Hired" if:
    1) Has recommendation 
    2) age > 21 and has a driver licence

  print "Rejected":
    - Otherwise 
*/

#include <iostream>

struct Driver_Info{
  int age;
  bool has_driver_licence;
  bool has_recommendation; 
};

Driver_Info read_info(){
  Driver_Info info;
  std::cout << "\nPlease enter you age\n";
  std::cin >> info.age;
  std::cout << "\nDo you have a driver licence?\n" <<
               "Enter (1 if yes) and (0 if no)\n";
  std::cin >> info.has_driver_licence;
  std::cout << "\nDo you have a recommendation?\n" <<
               "Enter (1 if yes) and (0 if no)\n";
  std::cin >> info.has_recommendation;
  
  return info;
}

bool is_accepted(Driver_Info info){
  if(info.has_recommendation){
    return 1;
  } else if (info.age > 21 && info.has_driver_licence){
    return 1;
  } else {
    return 0;
  }
}

void print_result(Driver_Info info){
  if(is_accepted(info)){
    std::cout << "\nHired.\n";
  } else {
    std::cout << "\nRejectd.\n";
  }
}


int main() {
  print_result(read_info());
}
