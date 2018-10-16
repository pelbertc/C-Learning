#include <iostream>
#include <vector>

using namespace std;

int main(){
    int count {};
    vector <int> vec {1,3,5,6,9,10,15};
    for(auto num:vec){
        if(num%3 == 0 || num%5 == 0){
        count++;
        cout << count << endl;
        }
    }
    
    cout << endl;
    
    int var = 10;
    int *p;
    p = &var;
    
    int s = 50;
    int *t;
    t = &s;
    
    cout << var << endl; //10
    cout << *p << endl; //10
    cout << p << endl; //0x61fee8
    cout << t << endl; //0x61fee4
    
    return 0;
}

