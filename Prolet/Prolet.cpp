#include <iostream>

int get_int();
double calculate_per_capita_gdp_estimate(int quarters_from_epoch);
std::string format_money(double money);
std::string quarter_to_ordinal(int quarter);

/** This program was written by Rania Maaraba
 * with the funciton of taking user input based on the year and 
 * fiscal quarter and calculating the GDP for that quarter
 * to return the values to the user.
*/

int main() {

  int enteredQuarter, enteredYear, epochq;
  double cd;

  

  std::cout << "Please enter the year for the calculation: ";
  enteredYear = get_int();
  std::cout << "Please enter the quarter for the calculation: ";
  enteredQuarter = get_int();


  epochq = 1977 * 4;
  cd = enteredYear*4 + (enteredQuarter-1);

  int quatersDifference = cd - epochq;
  auto gdp = calculate_per_capita_gdp_estimate(quatersDifference);
  auto money = format_money(gdp);
  

  std::cout << "In the " << quarter_to_ordinal(enteredQuarter) << " quarter of " << enteredYear 
  << ", the projected contribution to GDP per working-age person is $" << money << "." << std::endl;


  return 0;
}