/***********************
Written: 5.13.20
Author: netkommander
Purpose: Determine if entered year is a leap year. '99 office space style.

***********************/
#include <iostream>

int main() {
  int year;
  int valid_year;
  std::cout << "Welcome to the Y2K Leap Year program.\n" << "----------------------\n";
  std::cout << "Enter year to determine if it is a valid year: ";
  std::cin >> valid_year;

  if(valid_year > 999 && valid_year <= 9999)
    {
      year = valid_year;
      if ( (year % 4 == 0) && !(year % 400 == 1) )
      {
        std::cout << "\n----------------------\n" << year << " is a leap year!\n";

      }
      else if ( (year % 100 == 0) || !(year % 400 == 0) )
      {
        std::cout << "\n----------------------\n" << year << " is NOT a leap year.\n";
      }
    }
  else
  {
    std::cout << "Sorry. You need to enter a valid year.\n";
  }
}
