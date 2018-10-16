//Nested Loop Examples

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    
//    for(int i = 1; i <= 3; i++)
//        {
//        for(int j = 1; j <=4; j++){
//            cout << "*"; 
//        }
//            cout << endl;
//    }
//    std::cout << "Done";
    
    //R4.1
//    int i = 0;
//    int j = 10;
//    int n = 0;
//    while(i < j){
//        i++; j--; n++;
//    }

    //R4.8
    string days [] = {"Su","Mon","Tues","Wed","Thur","Fri","Sat"};
    for(auto x:days){
        cout << x << "\t";
    }
    cout << endl;
        for(int i = 1; i <= 1; i++)
        {
        for(int j = 1; j <=7; j++){
            cout << j << "\t"; 
        }
            cout << endl;
    }
       for(int i = 1; i <= 1; i++)
        {
        for(int j = 8; j <=14; j++){
            cout << j << "\t"; 
        }
            cout << endl;
    } 
    for(int i = 1; i <= 1; i++)
        {
        for(int j = 15; j <=21; j++){
            cout << j << "\t"; 
        }
            cout << endl;
    }
    for(int i = 1; i <= 1; i++)
        {
        for(int j = 22; j <=28; j++){
            cout << j << "\t"; 
        }
            cout << endl;
    }
    //std::cout << "Done";
    return 0;
}
