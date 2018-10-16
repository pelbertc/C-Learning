//String Functions
#include <iostream>
#include <string>

using namespace std;

int main(){
    
//    string bucky;
//    cin >> bucky;
//    cout >> "the string i entered is :" << bucky << endl;
//cin use to input a line, getline use input a sentence or read in a sentence for user.

    string x;
    string s1("hamster ");
    string s2;
    string s3;
    
    s2 = s1; //good way of copy string s2 to s1
    s3.assign(s1); //good way of copy string s1 to s3
    
    cout << s1 << s2 << s3 << endl;
    
    string s4 = "omsgdes";
    cout << s4.at(3) << endl;
    
    for(int x=0; x<s4.length(); x++){
        cout << s4.at(x);
    }

    return 0;
}
