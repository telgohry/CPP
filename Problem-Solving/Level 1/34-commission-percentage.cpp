// Program that reads total sales and calculates the commission then print it on the screen

#include <iostream>

float read_total_sales(){
  int total_sales;
  std::cout << "\nPlease enter the total sales\n";
  std::cin >> total_sales;

  return total_sales;
}

float get_commission_percentage(float total_sales){
 if(total_sales > 1000000){
    return 0.01;
  } else if(total_sales > 500000){
    return 0.02;
  } else if(total_sales > 100000) {
    return 0.03;
  } else if(total_sales > 50000) {
    return 0.05;
  } else {
    return 0;
  }
}

float calculate_commission(float total_sales){
  if(total_sales > 1000000){
    return total_sales * get_commission_percentage(total_sales);
  } else if(total_sales > 500000){
    return total_sales * get_commission_percentage(total_sales);
  } else if(total_sales > 100000) {
    return total_sales * get_commission_percentage(total_sales);
  } else if(total_sales > 50000) {
    return total_sales * get_commission_percentage(total_sales);
  } else {
    return 0;
  }
}

void print_commission(float total_sales){

  std::cout << "\nCommission Percentage = " << get_commission_percentage(total_sales) << "\n";
  
  std::cout << "\nTotal Commission = " << calculate_commission(total_sales) << "\n";
}

int main() {
  float total_sales = read_total_sales();
  print_commission(total_sales);
}