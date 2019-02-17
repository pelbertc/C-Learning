#include <iostream>
#include <iomanip>

using namespace std;

bool isLeapYear(int year)
{
return (year%4==0);
}

int main()
{
int month;
int yearNumber;
int numDays;

cout << "Please enter month: ";
cin >> month;
cout << "Please enter year: ";
cin >> yearNumber;

int x = yearNumber % 4;


if (month == 2) {

 {
      if (isLeapYear(yearNumber)==true)
         numDays = 29;
      else
         numDays = 28;
   }

}

cout << numDays;

}