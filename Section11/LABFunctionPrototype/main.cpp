#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit_to_celcius(double fah){
    double celcius={};
    celcius = (5.0/9.0)*(fah - 32);
    return round(celcius);
}
//Below I am just overloading the same function and add 273 to the above function converting fah. to kelvin.
/*
double kelvin_to_celcius(double kel){
    double celcius={};
    celcius = (5.0/9.0)*(kel - 32)+273;
    return celcius;
}

*/

int main(){
    
    cout << "Temperature in fahrenheit :";
    double fah;
    cin >> fah;
    cout << "Temperature in celcius is :" << fahrenheit_to_celcius(fah) << endl;
    
    cout << "Temperature in fahrenheit :";
    double kel;
    cin >> kel;
    cout << "Temperature in kelvin is :" << fahrenheit_to_celcius(kel)+273 << endl;
    return 0;
}
