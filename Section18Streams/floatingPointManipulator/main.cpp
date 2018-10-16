//Section 19
//Stream manipulators - Floating point manipulators
//Scientific, setprecision, fixed, showpoint, showops, uppercase

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double num1{123456789.987654321};
    double num2{1234.5678};
    double num3{1234.0};
    
    //using default settings
    cout << "---------------Defaults--------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    //Note how since we can't display in precision 2 scientific notation is used
    cout << setprecision(6) << std::fixed;
    cout << "----------Precision 6:Fixed---------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    cout << setprecision(6) << std::scientific;
    cout << "----------Precision 6:Scientific---------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    return 0;
}
