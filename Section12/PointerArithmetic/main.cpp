//Section 12
//Pointer Arithmetic

#include <iostream>

using namespace std;

int main(){
    
    int scores[]{100,95,89,68,-1};
    int *score_ptr{scores};
    
    while(*score_ptr != -1){
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    cout << "\n------------------------------" << endl;
    score_ptr = scores;
    while(*score_ptr != -1)
        cout << *score_ptr++ << endl;
        
    cout << "\n------------------------------" << endl;
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"James"};
    
    string *p1{&s1};//referencing
    string *p2{&s2};
    string *p3{&s1};//point to Frank s1 again
    
    cout << boolalpha;
    //Here we are comparing the pointer, p1 1000 != p2 2000 as an example, these strings all have different memory location
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl; //false
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl; //true
    
    //Frank == Frank is true, here we are comparing the string not the pointer
    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl; //true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; //true
    
    p3 = &s3; //point to James - we are dereferncing p3 to &s3
    cout << *p1 << "==" << *p3 << ":" << (*p1 == *p3) << endl; //false
    
    cout << "\n------------------------------" << endl;
    char name[] {"Frank"};
    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};
    
    char_ptr1 = &name[0]; //F
    char_ptr2 = &name[3]; //n
    
    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    
    cout << endl;
    
    return 0;
}
