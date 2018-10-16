//Review Exercise Chapter 2

#include <iostream>
#include <string>

using namespace std;

int main(){
    //R2.4
 /*   
a. dm = m * (sqrt(1 + v / c) / sqrt(1 - v / c) - 1);
   dm = m * (sqrt(1 
b. volume = PI * r * r * h;
c. volume = 4 * PI * pow(r, 3) / 3;
d. z = sqrt(x * x + y * y);
 */
    //R2.6
     string s = "Hello";
     string t = "World";
     
     cout << s.length() + t.length() << endl;
     cout << s.substr(1, 2) << endl;
     cout << s.substr(s.length()/2, 1) << endl;
     cout << s + t << endl;
     
     
    return 0;
}
