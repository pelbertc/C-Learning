//Section 19
//Read File 1
//Test for file open and simple read of 3 data items

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ifstream in_file;
    string line;
    int num;
    double total;
    
    in_file.open("../test.txt");
    if(!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }
    
    while(!in_file.eof()){
        in_file >> line >> num >> total;
        cout << std::setw(10) << line
             << std::setw(10) << num
             << std::setw(10) << total 
             << endl;
        
    }
//    in_file >> line >> num >> total;
//    cout << line << endl;
//    cout << num << endl;
//    cout << total << endl;
    in_file.close();
    return 0;
}
