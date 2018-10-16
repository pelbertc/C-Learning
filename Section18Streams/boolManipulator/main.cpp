//Section 19
//Stream manipulators - Boolean
//boolalpha noboolalpha

#include <iostream>
#include <iomanip> //Must include for manipulators

using namespace std;

int main(){

    cout << "noboolalpha - default (10 == 10): " << (10 == 10) << endl;
    cout << "noboolalpha - default (20 == 10): " << (10 == 20) << endl;
    
    //Set to true/false
    cout << boolalpha;
    cout << "noboolalpha - default (10 == 10): " << (10 == 10) << endl;
    cout << "noboolalpha - default (20 == 10): " << (10 == 20) << endl;
    
    //Setting for future boolean insertions
    cout << "noboolalpha - default (10 == 10): " << (10 == 10) << endl;
    cout << "noboolalpha - default (20 == 10): " << (10 == 20) << endl;
    
    //Toggle to 0/1
    cout << noboolalpha;
    cout << "noboolalpha - default (10 == 10): " << (10 == 10) << endl;
    cout << "noboolalpha - default (20 == 10): " << (10 == 20) << endl;
    
    //Reset back to true/false setf method
    cout.setf(std::ios::boolalpha);
    cout << "noboolalpha - default (10 == 10): " << (10 == 10) << endl;
    cout << "noboolalpha - default (20 == 10): " << (10 == 20) << endl;
       
    //Reset to default which is I/O
    cout << resetiosflags(std::ios::boolalpha);
    cout << "noboolalpha - default (10 == 10): " << (10 == 10) << endl;
    cout << "noboolalpha - default (20 == 10): " << (10 == 20) << endl;
          
     //Integers
     cout << "-----------Integer---------------" << endl;
     int num={255};
     int num1{-225};
     //show the number is positive or negative/ noshowpos would stop this from happening
    cout << std::showpos;
    cout << num << endl;
    cout << num1 << endl;
    cout << endl;
   
     cout << std::showbase << std::uppercase;//showbase and uppercase
     cout << std::dec << "Decimal: " << num << endl;
     cout << std::hex << "HexaDecimal: " << num << endl;
     cout << std::oct << "Octal: " << num << endl;
    //Will Display 255 ff 277
    //showbase will show 0xFF

   
    return 0;
}
