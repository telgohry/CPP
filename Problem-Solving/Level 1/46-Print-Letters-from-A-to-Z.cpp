// Program that prints all letters from A to Z 

#include <iostream>

void PrintLettersFromAtoZ(){
  std::cout << "\nUpper case letters: \n";
  for(int i = 65; i <= 90; i++){
    std::cout << char(i) << "\n";
  }
}

void PrintLettersFrom_a_To_z(){
  std::cout << "\nLower case letters: \n";
  for(int i = 97; i <= 122; i++){
    std::cout << char(i) << "\n";
  }
}

int main() {
  PrintLettersFromAtoZ();
  PrintLettersFrom_a_To_z();
}
