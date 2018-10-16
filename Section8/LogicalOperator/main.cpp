#include <iostream>

using namespace std;

int main(){
    while(1){
    int num1{};
    int num2{};
    const int lower{10};
    const int upper{20};
    
    cout << boolalpha;
    
    //This would test if the number entered is within bound
//    cout << "Please enter an integer between " << lower << " and " << upper << ":";
//    cin >> num1;
//    
//    bool within_bounds(false);
//    
//    within_bounds = (num1 > lower && num1 < upper);
//    cout << num1 << " is between " << lower << " and " << upper << " : " << within_bounds << endl;
  
    //This would check if the number entered is outside of bound
    cout << "Please enter an integer outside " << lower << " and " << upper << ":";
    cin >> num2;
    
    bool outside_bounds(false);
    outside_bounds = (num2 < lower || num2 > upper);//if the number is outside the boundary than its true
    cout << num2 << " is outside of " << lower << " and " << upper << " : " << outside_bounds << endl;
    
    //deterimine if you need to wear a code or not
    bool wear_coat{false};
    double temperature {};
    int windspeed {};
    
    const int wind_speed_for_coat{25};
    const double temperature_for_coat{45};

    cout << "\nEnter the current temperature in (F) : ";
    cin >> temperature;
    cout << "\nEnter the windspeed : ";
    cin >> windspeed;

    //Require a coat if BOTH the windspeed AND temperature is too low
    wear_coat = (temperature < temperature_for_coat) && (windspeed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND ? " << wear_coat << endl;
    cout << endl;
    
    }
    return 0;
}

