//Mixed Type Expressions
//Explicit Type Casting - static_cast<type>

#include <iostream>

using namespace std;

int main(){
    int total_amount {100};
    int total_number {8};
    double average {0.0};
    
    average = total_amount/total_number;
    cout << average << endl; //display 12
    
    average = static_cast<double>(total_amount)/total_number; //coercion converting the output to double
    cout << average << endl; //display 12.5
    
    return 0;
}
