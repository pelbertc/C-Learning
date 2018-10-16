#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    char firstname[] {"Bjorn"};
    char lastname[] {"Stroustrup"};
    char wholename [20];
    
    cout << "Hello, " << firstname << " your first name has " << strlen(firstname) << " characters" << endl;
    cout << "Hello, " << lastname << " your first name has " << strlen(lastname) << " characters" << endl;
    
    strcpy(wholename, firstname); //copy first_name to full_name
    strcat(wholename, " "); //concatenate full_name and a space
    strcat(wholename, lastname); //concatenate last_name to full_name
    cout << "Your full name is " << wholename << endl;
    
    return 0;
}
