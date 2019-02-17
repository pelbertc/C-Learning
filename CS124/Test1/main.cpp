#include <iostream>
#include <iomanip>
using namespace std;

/***********************************************************************
 * Leap year.
 **********************************************************************/

bool isLeapYear(int year)
{
    return ((year%400 == 0) || (year%4==0 && year%100 !=0));
}

/***********************************************************************
 * Number of days in a month.
 **********************************************************************/
int numDaysMonth(int year, int month)
{
   int daysMonth;

   if ( month == 1)
      daysMonth = 31;
   else if ( month == 2)
   {
      if (isLeapYear(year) == true)
         daysMonth = 29;
      else
         daysMonth = 28;
   }
   else if ( month == 3)
      daysMonth = 31;
   else if ( month == 4)
      daysMonth = 30;
   else if ( month == 5)
      daysMonth = 31;
   else if ( month == 6)
      daysMonth = 30;
   else if ( month == 7)
      daysMonth = 31;
   else if ( month == 8)
      daysMonth = 31;
   else if ( month == 9)
      daysMonth = 30;
   else if ( month == 10)
      daysMonth = 31;
   else if ( month == 11)
      daysMonth = 30;
   else if ( month == 12)
      daysMonth = 31;

   return daysMonth;
}

/***********************************************************************
 * Computes the offset.
 **********************************************************************/

int computeOffset(int year, int month)
{
   int offset = 0;
   int count = year - 1853;
   for ( int iYear = 0; iYear < count; iYear++)
   {
      offset = ( offset + 365 + isLeapYear(year)) % 7;
   }

   for ( int iMonth = 1; iMonth < month; iMonth++)
   {
      offset = ( offset + numDaysMonth(year, iMonth)) % 7;
   }

   return offset;
}
int main()
{
   int offset;
   int month;
   int year;
    
    cout << "Please enter month: ";
    cin >> month;
 
    cout << "Please enter year: ";
    cin >> year;
    
   offset = computeOffset(year, month);
   cout << offset << endl;

   return 0;
}