//C-Style String LAB

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char firstname[] {"Elbert"};
    char lastname[] {"Prescott"};
    char wholename [20];
    
    cout << "Hello, " << firstname << " your first name has " << strlen(firstname) << " characters" << endl;
    cout << "Hello, " << lastname << " your first name has " << strlen(lastname) << " characters" << endl;
    
    strcpy(wholename, firstname);
    strcat(wholename, " ");
    strcat(wholename, lastname);
    
    cout << wholename << endl;
    
    return 0;
}

/*
 * strcat would the same as .insert on c++ string
 * */
