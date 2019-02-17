#include <iostream>
#include <iomanip>
using namespace std;

void displayTable(int numDays, int offset);
int getNumDays();
int getOffset();


/**********************************************************************
* MAIN
* Pretty much a delegator. Calls other functions.
***********************************************************************/
int main()
{
   //Get the number of days
   int numDays = getNumDays();

   //Get the day offset
   int offset = getOffset();

   //Displays the result
   displayTable(numDays, offset);

   return 0;
}


/**********************************************************************
 * DISPLAYTABLE
 * Displays the physical table to the screen.
 ***********************************************************************/
void displayTable(int numDays, int offset)
{
   //Declare Variables
   int days;
   int test;

   //List the day headings
   cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";

   //Displays number of days
   for (days = 1; days <= numDays; days++)
       if(days%7 == 0) 
           {
               cout << "  " << setw(2) << days << '\n';
           }else
               cout << "  " << setw(2) << days;
      
   return;
}


/**********************************************************************
 * OFFSET
 * Determines the number of days to offset the Calendar and then returns
 * that value back to displayTable.
 ***********************************************************************/
int getOffset()
{
   int offset;
   cout << "Offset: ";
   cin >> offset;

   return offset;
}


/**********************************************************************
 * NUMDAYS
 * Accepts the number of days from the user.
 ***********************************************************************/
int getNumDays()
{
   int numDays;
   cout << "Number of days: ";
   cin >> numDays;
   return numDays;
}