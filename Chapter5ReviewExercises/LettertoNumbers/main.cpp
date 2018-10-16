//Chapter 5 Function
//Exercise R5.6

#include <iostream>
#include <string>

using namespace std;

bool IsOne(char x){
    return x == '1';
}
bool IsTwo(char a){
    return a == 'A' || a == 'B' || a == 'C';
}
bool IsThree(char b){
    return b == 'D' || b == 'E' || b == 'F';
}
bool IsFour(char c){
    return c == 'G' || c == 'H' || c == 'I';
}
bool IsFive(char d){
    return d == 'J' || d == 'K' || d == 'L';
}
bool IsSix(char e){
    return e == 'M' || e == 'N' || e == 'O';
}
bool IsSeven(char f){
    return f == 'P' || f == 'Q' || f == 'R' || f == 'S';
}
bool IsEight(char g){
    return g == 'T' || g == 'U' || g == 'V';
}
bool IsNine(char h){
    return h == 'W' || h == 'X' || h == 'Y';
}
bool IsZero(char j){
    return j == '0';
}
//Function to translate the characters into their coordinated number
int NewValue(string s){
    
    //int count=0;
    //Iterating over each character in the word
    for(int i=0;i<s.size();i++)
    {
        //If we find the terminating character we increase the counter
        if(IsOne(s[i]))
            cout << "1";
        if(IsTwo(s[i]))
           // count++;
            cout << "2";
        if(IsThree(s[i]))
            cout << "3";
        if(IsFour(s[i]))
            cout << "4";
        if(IsFive(s[i]))
            cout << "5";
        if(IsSix(s[i]))
            cout << "6";
        if(IsSeven(s[i]))
            cout << "7";
        if(IsEight(s[i]))
            cout << "8";
        if(IsNine(s[i]))
            cout << "9";
        if(IsZero(s[i]))
            cout << "0";
    }
    //Return the count
    //return count;
}


int main(){
 while(1){
        //Printing out the required output from the Functions above
        cout << "Enter 11 characters phone number: ";
        string phonenumber;
        getline(cin,phonenumber);
        
        string numbers, letters;
        numbers = phonenumber.substr(0,4);
        letters = phonenumber.substr(4,7);
    
        cout << "\tString in Number are: " << numbers << " ";
        cout << NewValue(letters) << endl;
        
    }
}

//the output got  a trailing Zero, no sure why
//-----------------------------------------------
//Enter 11 characters phone number: 1800FLOWERS
//        String in Number are: 1800 35693770
//Enter 11 characters phone number:
