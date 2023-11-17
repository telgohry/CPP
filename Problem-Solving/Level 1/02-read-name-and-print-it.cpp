// Program to read the name of the user and print it

#include <iostream>

std::string read_name(){
  std::string name; 
  std::cout << "\nPlease enter your name\n";
  std::getline(std::cin, name);

  return name;
}

void print_name(std::string name){
  std::cout << "\nYour name is : " << name << "\n";
}

int main() {
  std::string name = read_name();
  print_name(name);
}
