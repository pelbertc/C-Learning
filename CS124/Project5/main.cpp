#include <iostream>
#include <iomanip>

using namespace std;

int prompt(int &month, int &year)
{
    cout << "Please enter month: ";
    cin >> month;
    cout << "Please enter year: ";
    cin >> year;
    return month, year;
}

bool isLeapYear(int year)
{
    return ((year%400 == 0) || (year%4==0 && year%100 !=0));
}

int daysInMonth(int year,int month)
{
    --month;
	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if(isLeapYear(year))
		months[1] = 29;
	return months[month];
}

int computeOffset(int year, int month)
{
   int offset = 0;
   int count = year - 1753;
   for ( int vYear = 0; vYear < count; vYear++)
   {
      offset = ( offset + 365 + isLeapYear(year)) % 7;
      year--;
   }

   for ( int vMonth = 1; vMonth < month; vMonth++)
   {
      offset = ( offset + daysInMonth(year, vMonth)) % 7;
   }

   return offset;
}

void display(int year, int month, int offset)
{
    int dayOfWeek;
    int day;

    cout << endl;
    if ( month == 1)
       cout << "January";
    else if ( month == 2)
       cout << "February";
    else if ( month == 3)
       cout << "March";
    else if ( month == 4)
       cout << "April";
    else if ( month == 5)
       cout << "May";
    else if ( month == 6)
       cout << "June";
    else if ( month == 7)
       cout << "July";
    else if ( month == 8)
       cout << "August";
    else if ( month == 9)
       cout << "September";
    else if ( month == 10)
       cout << "October";
    else if ( month == 11)
       cout << "November";
    else if ( month == 12)
       cout << "December";


    cout << ", " << year << "\n";
    // Display header
    cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";
    // aligning the start days of the month with offset
    if (offset == 0)
    {
       day = 2;
       cout << setw(6);
    }
    else if (offset == 1)
    {
       day = 3;
       cout << setw(10);
    }
    else if (offset == 2)
    {
       day = 4;
       cout << setw(14);
    }
    else if (offset == 3)
    {
       day = 5;
       cout << setw(18);
    }
    else if (offset == 4)
    {
       day = 6;
       cout << setw(22);
    }
    else if (offset == 5)
    {
       day = 7;
       cout << setw(26);
    }
    else if (offset == 6)
    {
       day = 1;
       cout << setw(2);
    }
    else
       cout << "Error offset must be >= 0 and <=6\n";

    // align the start days and end day of the month as well as days in between
    for ( dayOfWeek = 1; dayOfWeek <= daysInMonth(year, month); dayOfWeek++ )
    {
       cout << "  " <<  setw(2) << dayOfWeek;
       ++day;
       if (day == 8)
       {
          cout << "\n";
          day = 1;
       }
    }
    if ( day >= 2 && day <= 7)
       cout << "\n";
    return;
}

int main(){
    int month, year;
    
    prompt(month, year);
    
    int daysMonth = daysInMonth(year, month);
    bool leapYear = isLeapYear(year);
    int offset = computeOffset(year, month);
    
    cout << "days in Month = " << daysMonth << endl;
    cout << "offset value = " << offset << endl;
    cout << "leap year or not = " << leapYear << endl;
    display(year, month, offset);
    
    }