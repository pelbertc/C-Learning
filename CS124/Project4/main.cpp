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
*    Estimated:  3.0 hrs
*    Actual:     3.0 hrs
*    Took me a while to figure out the functions
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * MAIN
 * The main function will prompts the user for his or her income and
 * expenses and will compute a report and displays on the screen.
 ***********************************************************************/
float computeTax(float monthlyIncome){
    float yearlyIncome;
    float monthlyTax;
    float yearlyTax;
	yearlyIncome = monthlyIncome * 12;
	if (yearlyIncome >= 0 && yearlyIncome < 15100)
	yearlyTax = yearlyIncome * 0.10;
	if (yearlyIncome >= 15100 && yearlyIncome < 61300)
	yearlyTax = 1510 + 0.15 *(yearlyIncome - 15100);
	if (yearlyIncome >= 61300 && yearlyIncome < 123700)
	yearlyTax = 8440 + 0.25 *(yearlyIncome - 61300);
	if (yearlyIncome >= 123700 && yearlyIncome < 188450)
	yearlyTax = 24040 + 0.28 *(yearlyIncome - 123700);
	if (yearlyIncome >= 188450 && yearlyIncome < 336550)
	yearlyTax = 42170 + 0.33 *(yearlyIncome - 188450);
	if (yearlyIncome >= 336550)
	yearlyTax = 91043 + 0.35 *(yearlyIncome - 336550);
	monthlyTax = yearlyTax / 12;
	return monthlyTax;
}

float computeTithing(float monthlyIncome){
    float monthlyTithe;
	monthlyTithe = monthlyIncome * 0.10;
	return monthlyTithe;
}
    
int main()
{
   //format the output for money
   cout.setf(ios::fixed);   //no scientific notation
   cout.setf(ios::showpoint); //always show the decimal point
   cout.precision(2);         //money is formatted to 2 decimals

   //Declare variable
   float monthlyIncome;
   float budgetExpenses;
   float actualExpenses;
   float budgetTaxes;
   float actualTaxes;
   float budgetTithes;
   float actualTithes;
   float otherExpenses;
   float budgetdiff;
   
   //Display line 1
   cout << "This program keeps track of your monthly budget\n";

   //Display line 2
   cout << "Please enter the following:\n";

   //Input income and expenses
   cout << "\tYour monthly income: ";
   cin >> monthlyIncome;
   cout << "\tYour budgeted living expenses: ";
   cin >> budgetExpenses;
   cout << "\tYour actual living expenses: ";
   cin >> actualExpenses;
   cout << "\tYour actual taxes witheld: ";
   cin >> actualTaxes;
   cout << "\tYour actual tithe offerings: ";
   cin >> actualTithes;
   cout << "\tYour actual other expenses: ";
   cin >> otherExpenses;
   cout << endl;

   //Report of the montly expenses
   cout << "The following is a report of your montly expenses\n";
   cout << "\tItem" << setw(24) << "Budget" << setw(17) << "Actual\n";
   cout << "\t=============== " << "===============" << " ===============\n";

   cout << "\tIncome" << setw(11) << "$" << setw(11) << monthlyIncome << setw(5) << "$" << setw(11) << monthlyIncome << endl;
   cout << "\tTaxes" << setw(12) << "$" << setw(11) << computeTax(monthlyIncome) << setw(5) << "$" << setw(11) << actualTaxes << endl;
   cout << "\tTithing" << setw(10) << "$" << setw(11) << computeTithing(monthlyIncome) << setw(5) << "$" << setw(11) << actualTithes << endl;
   cout << "\tLiving" << setw(11) << "$" << setw(11) << budgetExpenses << setw(5) << "$" << setw(11) << actualExpenses << endl;
   cout << "\tOthers" << setw(11) << "$" << setw(11) << otherExpenses << setw(5) << "$" << setw(11) << otherExpenses << endl;

   cout << "\t=============== " << "===============" << " ===============\n";
   
   budgetdiff = (monthlyIncome + computeTax(monthlyIncome) + computeTithing(monthlyIncome) + budgetExpenses + otherExpenses) - 
                (monthlyIncome + actualTaxes + actualTithes + actualExpenses + otherExpenses);
   
   cout << "\tDifferences" << setw(6) << "$" << setw(11) << 0.00 << setw(5) << "$" << setw(11) << budgetdiff << endl;
   
   return 0;
   
}