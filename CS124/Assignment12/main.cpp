/***********************************************************************
* Program:
*    Project 04, Monthly Budget
*    Brother Wagstaff, CS124
* Author:
*    Elbert Prescott
* Summary:
*    prompts the user for his or her income and
*    displays the result on the screen.
*
*    Estimated:  2.0 hrs
*    Actual:     2.0 hrs
*     
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * MAIN
 * The main function will prompts the user for his or her income and
 * expenses and will compute a report and displays on the screen.
 ***********************************************************************/
int main()
{
   //format the output for money
   cout.setf(ios::fixed);   //no scientific notation
   cout.setf(ios::showpoint); //always show the decimal point
   cout.precision(2);         //money is formatted to 2 decimals

   //Declare variable
   float income;
   float budgetexpenses;
   float actualexpenses;
   float taxes;
   float tithes;
   float others;
   //Display line 1
   cout << "This program keeps track of your monthly budget\n";
   
   //Display line 2
   cout << "Please enter the following:\n";
   
   //Input income and expenses
   cout << "\tYour monthly income: ";
   cin >> income;
   cout << "\tYour budgeted living expenses: ";
   cin >> budgetexpenses;
   cout << "\tYour actual living expenses: ";
   cin >> actualexpenses;
   cout << "\tYour actual taxes witheld: ";
   cin >> taxes;
   cout << "\tYour actual tithe offerings: ";
   cin >> tithes; 
   cout << "\tYour actual other expenses: ";
   cin >> others;
   cout << endl;
   
   //Report of the montly expenses
   cout << "The following is a report of your montly expenses\n";
   cout << "\tItem" << setw(24) << "Budget" << setw(17) << "Actual\n";
   cout << "\t=============== " << "===============" << " ===============\n";    
   
   cout << "\tIncome" << setw(11) << "$" << setw(11) << income << setw(5) << "$" << setw(11) << income << endl;
   cout << "\tTaxes" << setw(12) << "$" << setw(11) << income << setw(5) << "$" << setw(11) << income << endl;
   cout << "\tTithing" << setw(10) << "$" << setw(11) << income << setw(5) << "$" << setw(11) << income << endl;
   cout << "\tLiving" << setw(11) << "$" << setw(11) << income << setw(5) << "$" << setw(11) << income << endl;
   cout << "\tOthers" << setw(11) << "$" << setw(11) << income << setw(5) << "$" << setw(11) << income << endl;
   
   return 0;
}