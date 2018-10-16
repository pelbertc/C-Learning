#include <iostream>

using namespace std;

int main(){
    
//    double account = 100;
//    double* ptr = &account;
//    cout << ptr << endl; //print the memory address of &account
//    cout << *ptr << endl;//access the value account
//    
//    int m = 10; //Assumed to be at address 20300
//    int n = 20; //Assumed to be at address 20304
//    int* p = &m;
//    
//    cout << &m << endl;//this is pointing to the memory address of m
//    cout << &n << endl;
//    cout << *p << endl;//value of p which is the value of m
//    cout << p << endl; //this is pointing to the memory address of m
//    
//    cout << "-----------------BANK ACCOUNT EXAMPLE-------------------" << endl;
//    double harrys_account = 0;
//    double joint_account = 2000;
//    double* account_pointer = &harrys_account;
//    
//    *account_pointer = 1000; //Initial deposit
//    
//    *account_pointer = *account_pointer - 100; //withdraw $100
//    cout << "Harrys Account Balance: " << *account_pointer << endl; //print balance
//    
//    //Change the pointer value
//    account_pointer = &joint_account;
//    
//    //The same statement affect a different account
//    *account_pointer = *account_pointer - 100; //withdraw $100
//    cout << "Joint Account Balance: " << *account_pointer << endl; //print balance
//    
//    cout << "-------------------------EXAMPLEs---------------------" << endl;
//    int a = 1;
//    int b = 2;
//    int* l = &a;
//    int* q = &b;
//    *l = *q; //here l is pointing to value of a, and now l equals the value of q(b)
//    cout << a << " " << b << endl;
//    
     cout << "-------------------------EXAMPLEs---------------------" << endl;
//    int c = 15;
//    int* p = &c;
//    int* q = &c;
//    *p = *p + 10; //*q = *p + 10 is the same as well
//    cout << *q << endl; //the outcome of *p and *q is the same output since they both point at &c
//    
    int a = 15;
    int* p = &a;
    cout << *p << " " << p << endl; //*p is the value of &a(15), p prints the memory address of &a
    
    return 0;
}
