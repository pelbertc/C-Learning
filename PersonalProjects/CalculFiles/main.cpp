//Reading and Processing File
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    
    string line;
    ifstream inFile;
    ofstream outFile;
    inFile.open("/Users/presce/Documents/C++Codes/PersonalProjects/CalculFiles/stats1.txt");
    outFile.open("/Users/presce/Documents/C++Codes/PersonalProjects/CalculFiles/test.txt");
     
    if(!inFile)
    {
        cout << "Unable to open file";
        exit(1);
    }

//this piece of code only prints output vertically
//    while(inFile >> line)
//        
//        cout << line << " " << endl;
//        inFile.close();
  
//this piece of code prints the file as how it looks on text file format  
       
//     while(getline(inFile, line))
//	{
//		//cout << line << endl;  //this will print output to screen
//        outFile << left << line << endl; //this will print output to the test.txt file
//	}

    
    
    
    return 0;
}
