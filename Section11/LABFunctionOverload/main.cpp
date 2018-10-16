#include <iostream>
#include <cmath>

using namespace std;

double area_cal(double width, double height){
    double total;
    total = width * height;
    cout << "The area is " << total << endl;
}

int main(){
    cout << "Please enter the width for this rectangle " << endl;
    double wid;
    cin >> wid;
    cout << "Please enter the length for tis rectangle " << endl;
    double len;
    cin >> len;
    area_cal(wid,len);
    cout << "Please length of one side of this square " << endl;
    cin >> wid;
    area_cal(wid,wid);
    
    return 0;
}
