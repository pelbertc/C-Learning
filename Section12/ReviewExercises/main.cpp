//Chapter 7 Review Exercises/Horstmann
//Pointers
#include <iostream>

using namespace std;

int main(){
    //R7.1
//    double a = 1000;
//    double b = 2000;
//    double* p = &a;
//    *p = 3000;
//    p = &b;
//    a = *p * 2; //a is referencing to p(*p) where p is 2000 from address &b
//    cout << a << " " << b << " " << p << endl;
    //R7.2
//    double a = 1000;
//    double b = 2000;
//    double* p = &a;
//    double* q = &b;
//    *p = *q;
//    p = q;
//    *p = 3000;
//    cout << a << " " << b << " " << p << " " << q << endl; //2000 3000 0x61ff08 0x61ff08
    //R7.3
    double a = 1000;
    double b = 2000;
    double* p = &a;
    double* q = p;
    b = *q;
    p = &b;
    a = *p + *q;
    cout << a <<  " " << b << endl; //2000 1000
    
    
    
    return 0;
}
