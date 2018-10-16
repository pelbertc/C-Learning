#include <iostream>

using namespace std;

int main(){
    //below is manually initialized
    char vowel[] {'a','e','i','o','u'};
    cout << "\nThe first vowel is: " << vowel[0] << endl;
    cout << "The last vowel is: " << vowel[4] << endl;
    
    //below array the compiler will figure out the size of my array
    int scores[] {66,23,12,10,67,90};
    cout << "The highest temperature : " << scores[1] << endl;
    
    scores[1] = 100; //changing array value
    //cout << scores[1];
    
    //enter from console to the array
    cout << "\nEnter 1 and 2 Test Scores : ";
    cin >> scores[0] >> scores[1];
    
    cout << "Score 1: " << scores[0] << endl;
    cout << "Score 2: " << scores[1] << endl;
    cout << "Score 3: " << scores[2] << endl;
    
    cout << "Array name is translated to memory address of the array : " << scores << endl;
    
    //declaring an array without initializing, adding {} initializes the array
    int junk[5] {};
    cout << junk[0] << endl;
    cout << junk[1] << endl;
    
    
    return 0;
}
