// Program that reads a mark and 
/*
  - print "PASS": if mark >= 50

  - Print "FAIL": Otherwise
*/


#include <iostream>

double read_mark(){
  double mark;
  std::cout << "\nPlease enter your mark\n";
  std::cin >> mark;

  return mark;
}

bool calc_result(double mark){
  return (mark >= 50? true:false); 

  /*
  if(mark >= 50){
    return 1;
  } else {
    return 0;
  }
  */
}

void print_result(bool result){
  if(result){
    std::cout << "\nPASS\n";
  } else {
    std::cout << "\nFAIL\n";
  }
}



int main() {
  print_result((calc_result(read_mark())));
}
