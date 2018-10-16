//Section 11
//Arrays and functions
#include <iostream>

using namespace std;

void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[], size_t size){ //const
    for(size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
        cout << endl;
}
//set each array element to value
void set_array(int arr[], size_t size, int value){
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main(){
    int my_scores[] {100,98,90,86,84};
    
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
    set_array(my_scores, 5, 90);
    print_array(my_scores, 5);
    
    cout << endl;
    return 0;
}
/*
//ArrayFunctions Exercise
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

string print_guest_list(const string[], size_t size);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void clear_guest_list(string[], size_t size);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
                                      
//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----                                      
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list() {

    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----

    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);
    

    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

string print_guest_list(const string guest_list[], size_t guest_list_size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    
    for (size_t i{0}; i < guest_list_size; i++)
        cout << guest_list[i] << endl;
    
        
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return typeid(guest_list).name();
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

void clear_guest_list(string guest_list[], size_t guest_list_size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THEPARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    
    for(size_t i{0}; i < guest_list_size; i++)
        guest_list[i] = " ";
    
    
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}
*/