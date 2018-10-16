#include <iostream>

using namespace std;

int main(){

//P3.1   
    //read a temperature in Celcius and return Fahrenheit
    //print weather water is liquid solid or gaseous at given temperature at sea level
    cout << "Please enter temprature in Celcius : ";
    int tempC;
    cin >> tempC;
    double tempF = (tempC * 2) + 30;
    
    cout << "Temperature in Fahrenheit is : " << tempF;
    
    
    
    return 0;
}
