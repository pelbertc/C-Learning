#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

/*
 
//P2.3
    cout << "Please enter a number : ";
    int number;
    cin >> number;
    double test = sqrt(number);
    double power = pow(number,2);
    cout << "Squre root of this number is : " << test << endl;
    cout << "Squre power 2 of this number is : " << power << endl;

//P2.4

cout << "Please enter a number : ";
int num1;
cin >> num1;

cout << "Please another number : ";
int num2;
cin >> num2;
double sum = num1 + num2;
double diff = num1 - num2;
double product = num1 * num2;
double average = (num1 + num2)/2;

cout << "This is the sum of these 2 numbers : " << sum << endl;
cout << "This is the difference of these 2 numbers : " << diff << endl;
cout << "This is the product of these 2 numbers : " << product << endl;
cout << "This is the average of these 2 numbers : " << average << endl;

*/
//2.5

cout << "Please enter a number : ";
int num3;
cin >> num3;
cout << "Please enter another number : ";
int num4;
cin >> num4;

//the distance(absolute value of the difference)
//the maximum larger of the 2
//the minimum smaller of the 2
int diff;

if(num3 > num4){
    diff = num3 - num4;
}else if(num4 > num3){
    diff = num4 - num3;
}else 
    diff = 0;

cout << "The difference of these 2 numbers are : " << diff << endl;

int max;
int min;

int dif = num3 - num4;
if(dif < 0){
   cout << "The maximum of these 2 numbers are : " << num4 << endl;
}else 
    cout << "The maximum of these 2 numbers are : " << num3 << endl;

    return 0;
}
