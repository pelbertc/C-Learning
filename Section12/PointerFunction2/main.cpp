//Section 12
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(vector<string> * v){
    //(*v).at(0) = "Funny" //dereferencing index 0 to Funny, if put here, Funny will print out 
    for(auto str: *v) //all the string in the vector
        cout << str << " ";
        cout << endl;
    //(*v).at(0) = "Funny" //dereferencing index 0 to funny
    //v = nullptr; //this can be done, however if 'const v' is const variable on the function than you can't modify it at ll. 
}

void display(int *array, int sentinel){
    while(*array != sentinel)
        cout << *array++ << " ";
        cout << endl;
}

int main(){
    cout << "--------------------" << endl;
    vector<string> stooges{"Larry","Moe","Curly"};
    display(&stooges);
    
    cout << "\n--------------------" << endl;
    int score[] {100,98,79,85,-1};
    display(score, -1);
    cout << endl;
    
    return 0;
}
