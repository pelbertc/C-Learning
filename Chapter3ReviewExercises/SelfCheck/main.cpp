//SelfCheck 5

#include <iostream>

using namespace std;

int main(){
    
    int fuel_amount ;
    int fuel_capacity = 100;
    
    cout << "Please enter the fuel_amount " << endl;
    cin >> fuel_amount;
    
    if(fuel_amount < fuel_capacity * 10/100){
        cout << "Red" << endl;
    }else
        cout << "Green" << endl;
  
  return 0;
}
