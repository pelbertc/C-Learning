#include <iostream>

using namespace std;

int lyear(int year)
{
    cout << "Thsee are the leap year between " << year << " and 1753 :\n";

    
    for(int i = year; i >= 1753; --i)
        {
            if((i%400 == 0) || (i%4==0 && i%100 !=0))
            cout << i << endl;

         
        }

}   
int main()
{
    cout << "Please enter a year : ";
    int year;
    cin >> year;

    lyear(year);
    
    return 0;
}
