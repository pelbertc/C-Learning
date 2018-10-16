//Section 18 
//Challenge 2
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    ifstream in_file;
    string answer_key{};
    string name{};
    string response{};
    string line;
    int score;
    const int total_width{23};
    
    in_file.open("../responses.txt");
    if(!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }
    
    
     while(!in_file.eof()){
        in_file >> line;
        cout << line << endl;
        
    }
    
    cout << "Student" << "\t\tScore" << endl;
    cout << std::setw(total_width)
         << std::setfill('-')
         << ""
         << endl; //display total_width dashes
    

     
    return 0;
}
