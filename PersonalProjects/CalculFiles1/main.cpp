#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream theFile("/Users/presce/Documents/C++Codes/PersonalProjects/CalculFiles/stats.txt");
    ofstream theFile1;
    theFile1.open("/Users/presce/Documents/C++Codes/PersonalProjects/CalculFiles/test.txt");
     
    string operation;
    int num1;
    int num2;
    int num3;
    
   // theFile1 << "Elbert Prescott" << endl;
    while(theFile >> operation >> num1 >> num2 >> num3){
        theFile1 << operation << ", " << num1 << ", " << num2 << ", " << num3 << endl;
    }

    return 0;
}
