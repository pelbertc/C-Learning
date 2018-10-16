#include <iostream>

using namespace std;

int main(){
    /*
    for(int i =1; i<8;i++){
        for(int j=1; j<i;j++){
            cout << "*" ;
        }
    cout << endl;
    }
    */
    //building a square with [] symbols
    /*
    for(int i =1; i<5;i++){
        for(int j=1; j<8;j++){
            if(j%2==0){
            cout << "]";
            }else
            cout << "[" ;
        }
    cout << endl;
    */
    int temperature;
cout << "Enter a temperature: ";
cin >> temperature;
if (temperature < 50);
   cout << "It's cold!" << endl;
if (temperature > 50)
   cout << "It's hot!" << endl;
else
   cout << "Maybe it's raining?"; 
    }

//the output
//"It's cold!
//"Its's hot!
