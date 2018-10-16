//SECTION 11
//PASS BY REFERENCE LAB
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_vector(vector<string> &v){
    v.clear(); //delete all vector elements
}

void print_vector(const vector<string> &v){
        for(auto s:v)
        cout << s << " ";
        cout << endl;
}

int main(){
    
    vector<string> guest{"guest 1", "guest 2", "guest 3"};
    cout << "Here are the guest " << endl;
    print_vector(guest);
    cout << "Here are the cleaned guest list " << endl;
    pass_vector(guest);
    cout << "Here are the guest " << endl;
    print_vector(guest);
    
    return 0;
}
