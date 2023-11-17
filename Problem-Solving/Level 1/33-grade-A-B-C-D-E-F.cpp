// Program that reads grade from the user and print grade letter on the screen

#include <iostream>

enum enGrades{A=1, B=2, C=3, D=4, E=5, F=6};

int read_grade(){
  int grade;
  std::cout << "\nPlease enter your grade\n";
  std::cin >> grade;
  return grade;
}

enGrades get_grade_letter(int grade){
  if(grade >= 90 && grade <= 100){
    return enGrades::A;
  } else if(grade >= 80 && grade <= 89){
    return enGrades::B;
  } else if(grade >= 70 && grade <= 79){
    return enGrades::C;
  } else if(grade >= 60 && grade <= 69){
    return enGrades::D;
  } else if(grade >= 50 && grade <= 59){
    return enGrades::E;
  } else {
    return enGrades::F;
  }
}

void print_grade(int grade){
  if(get_grade_letter(grade) == enGrades::A){
    std::cout << "\nA\n";
  }else if(get_grade_letter(grade) == enGrades::B){
    std::cout << "\nB\n";
  }else if(get_grade_letter(grade) == enGrades::C){
    std::cout << "\nC\n";
  }else if(get_grade_letter(grade) == enGrades::D){
    std::cout << "\nD\n";
  }else if(get_grade_letter(grade) == enGrades::E){
    std::cout << "\nE\n";
  }else if(get_grade_letter(grade) == enGrades::F){
    std::cout << "\nF\n";
  }
}

int main() {
  int grade = read_grade();
  print_grade(grade);
}