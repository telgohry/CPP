// Program that reads from the user pennis, nickles, dimes, quarters, dollars and calculates total pennis and dollars then prints them on the screen

#include <iostream>

struct Piggy_Bank_Content{
  int pennies, nickels, dimes, quarters, dollars;
};

Piggy_Bank_Content read_piggy_bank_content(){
  Piggy_Bank_Content p;
  std::cout << "\nPlease enter the number of pennies\n";
  std::cin >> p.pennies;

  std::cout << "\nPlease enter the number of nickels\n";
  std::cin >> p.nickels;

  std::cout << "\nPlease enter the number of dimes\n";
  std::cin >> p.dimes;

  std::cout << "\nPlease enter the number of quarters\n";
  std::cin >> p.quarters;

  std::cout << "\nPlease enter the number of dollars\n";
  std::cin >> p.dollars;

  return p;
}

int calculate_total_pennies(Piggy_Bank_Content p){
  return p.pennies + p.nickels*5 + p.dimes*10 + p.quarters*25 + p.dollars*100;
}

int main() {

  int total_pennies = calculate_total_pennies(read_piggy_bank_content());
  
  std::cout << "\nTotal pennies = " << total_pennies << "\n";
  
  std::cout << "\nTotal dollars = " << (float) total_pennies/100 << "\n"; 
}