//Chapter 12
//References is an alias of the variable

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    int num{100};
    int &ref{num};
    
    cout << num << endl; //refer to the value using variables
    cout << ref << endl; //refer to the value using the reference
    
    num = 200;
    cout << "\n-------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    ref = 300;
    cout << "\n--------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    //Reference inside range-based loop
    
    cout << "\n---------------------------------" << endl;
    vector<string> stooges{"Larry","Moe","Curly"};
    
    for(auto str:stooges) 
        str = "Funny";  //this is just equating str to Funny not the actual vector values
    
    for(auto str:stooges)
        cout << str << endl;
        
    cout << "\n---------------------------------" << endl;
    for(auto &str: stooges) //&str is a reference to each vector element
    str = "Funny";
    
    for(auto const &str:stooges) //notice we are using const
    cout << str << endl;         //now the vector elements have changed
    
    cout << endl;
    
    return 0;
}
