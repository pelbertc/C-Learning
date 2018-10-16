//Section 19
//Stream manipulators - Field width, justification and setfill
//setw, left, right, setfill
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void ruler(){
    std::cout << "\n12345678901234567890123456789012345678901234567890" << endl;
}

int main(){
    int num1{1234};
    double num2{1234.5678};
    string hello{"Hello"};
    
    //Defaults
    cout << "\n--Defaults-------------------------------------------------------------" << endl;
    ruler();
    cout << num1 << num2 << hello << endl;
    
    //Defaults - one per line
    cout << "\n--Defaults - one per line ----------------------------------------------" << endl;
    ruler();
    cout << num1 << endl;
    cout << num1 << endl;
    cout << hello << endl;
    
    //Set field to 10
    //Note the default justification is right for num1 only!
    cout << "\n---width 10 for num1---" << endl;
    ruler();
    cout << std::setw(10) << num1 << num2 << hello << endl;
    
    //Set field to 10 for the first 2 output
    //Note the default justification is right for both
    cout << "\n---width 10 for num1 and num2---" << endl;
    ruler();
    cout << std::setw(10) << num1 << std::setw(10) << num2 ;
    ruler();
    cout << std::setw(10) << num1 << std::setw(10) << num2 << hello << endl;
    
    //Set field to 10 for the first 3 output
    //All 3 ouput are left justified
    cout << "\n---width 10 for num1 and num2 and hello left for all---" << endl;
    ruler();
    cout << std::setw(10) << std::left << num1 << 
            std::setw(10) << std::left << num2 << 
            std::setw(10) << std::left << hello << endl;
            
    //setfill to a dash
    //this is persistent
    //Then repeat the previous display
    cout << std::setfill('-');
    cout << "\n---width 10 for num1 and num2 and hello left for all setfill to dash---" << endl;
    ruler();
    cout << std::setw(10) << std::left << num1
         << std::setw(10) << std::left << num2
         << std::setw(10) << std::left << hello << endl;
    
    //set width to 10 for all, left justified and cary the sefill characters
    cout << "\n---width 10 for num1 and num2 and hello - setfill varies---" << endl;
    ruler();
    cout << std::setw(10) << std::left << std::setfill('*') << num1
         << std::setw(10) << std::left << std::setfill('#') << num2
         << std::setw(10) << std::left << std::setfill('-') << hello << endl;
    
    
    return 0;
}
