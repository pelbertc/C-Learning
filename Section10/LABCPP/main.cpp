#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string unformatted_full_name {"ElbertPrescott"};
    string first_name = unformatted_full_name.substr(0,6);
    string last_name = unformatted_full_name.substr(6,8);
    
    cout << first_name << endl;
    cout << last_name << endl;
    
   //string formatted_full_name = first_name + " " + last_name;
   //formatted_full_name.insert(6, " ");
    string formatted_full_name = unformatted_full_name.insert(6, " "); //this would do the same as above inserting space at index 6
    cout << formatted_full_name << endl;
    
    return 0;
}
