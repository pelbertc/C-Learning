#include <iostream>
#include <cmath>

using namespace std;

int main(){
    while(1){
    cout << "Please enter the amount of guest : ";
    int guest;
    cin >> guest;
    cout << "Please enter the total bill : ";
    double bill;
    cin >> bill;
    double individual;
    individual = bill/guest;
    cout << "Each will pay - floor example " << individual << endl;
    cout << "Each will pay - floor example " << floor(individual) << endl;
    cout << "Each will pay - round example " << round(individual) << endl;
    cout << "Each will pay - cieling example " << ceil(individual) << endl;
    
    }
}
