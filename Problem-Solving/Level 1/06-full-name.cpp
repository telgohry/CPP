// Program to read first name and last name and print the full name  

#include <iostream>

struct Person_Info{
  std::string first_name;
  std::string last_name;
};

Person_Info read_info(){
  Person_Info person_info;
  std::cout << "\nPlease enter your first name\n";
  std::cin >> person_info.first_name;
  
  std::cout << "\nPlease enter your last name\n";
  std::cin >> person_info.last_name;

  return person_info;
}

std::string get_name(Person_Info info){
  std::string full_name = " "; 
  
  full_name = info.first_name + " " + info.last_name;
  return full_name;
}

void print_full_name(std::string full_name){
  std::cout << "\nYour full name is: " << full_name << "\n";
}


int main() {
  print_full_name(get_name(read_info())); 
}
