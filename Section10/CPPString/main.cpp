#include <iostream>
#include <iomanip>
#include <string> //important

using namespace std;

int main(){
    
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};        //Apple
    string s6 (s1, 0, 3);  //App, starting from index 0 and 3 characters after
    string s7 (10, 'X');   //XXXXXXXXXX, Constructor style initialization
    
    cout << s0 << endl;  //No garbase
    cout << s0.length() << endl; //asking for the length of the string 0
    
    cout << "----------------Initialization---------------" << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
    
    cout << "-----------------Comparison----------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << ": " <<(s1 == "Apple") << endl;
    
    cout << "----------------Assignment---------------" << endl;
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl; //Watermelon
    s2 = s1;
    cout << "s2 is now: " << s2 << endl; //Watermelon
    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl; //Frank
    
    s3[0] = 'C'; //Crank
    cout << "s3 change first letter to 'C': " << s3 << endl; //Crank
    s3.at(0) = 'P'; //using at method, same outcome
    cout << "s3 change first letter to 'P': " << s3 << endl; //Prank
    
    cout << "----------------Concatenation---------------" << endl;
    s3 = "watermelon";
    s3 = s5 + " and " + s2 + "  juice"; //Apple and Banana juice
    cout << "s3 is now: " << s3 << endl; //Apple and Banana Juice
    
    //s3 = "nice " + " cold " + s5 + " juice"; //compiler error
    //because c style literal and another c styple literal 'nice' and 'cold' dont work with +
    cout << "----------------For Looping---------------" << endl;
    cout << "Please enter any word :";
    cin >> s1;
   // s1 = "MangoCoconut";
    for(size_t i{0}; i<s1.length(); ++i)
        cout << s1.at(i); //or use s1[i] Mango, the difference the .at funtion do boundary checking the 's1[i]' does not
    cout << endl;
    
    cout << "----------------For Reverse Looping---------------" << endl;
    int wordSize = s1.size()-1;
    for(int i=wordSize; i>=0; --i)
      cout << s1.at(i); //or use s1[i] Mango, the difference the .at funtion do boundary checking the 's1[i]' does not
    cout << endl;
   
    cout << "----------------Range-based for loop---------------" << endl;
    
    for(char c:s1)
        cout << c; //Apple
        cout << endl;
        
    cout << "----------------Substring---------------" << endl;
    s1 = "This is a test ";
    cout << s1.substr(0,4) << endl; //This
    cout << s1.substr(5,2) << endl; //is
    cout << s1.substr(10,4) << endl; //test
    
    cout << "----------------Erase---------------" << endl;
    s1 = "This is a test";
    s1.erase(0,5); //Erase the form s1 results in "is a test"
    cout << "s1 is now: " << s1 << endl; //is a test
    
    cout << "----------------Getline---------------" << endl;
    string full_name {};
    cout << "Enter your full name: ";
    getline(cin, full_name);
    
    cout << "Your full name is: " << full_name << endl;
    
    cout << "----------------Find---------------" << endl;
    s1 = "The secret work is Boo";
    string word{};
    
    cout << "Enter the work to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if(position != string::npos)
        cout << "Found " << word << " at position:" << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;
        
        cout << endl;
        
    return 0;
}
 
 /*
 KEYWORDS:
  * .length()
  * .at()
  * size_t
  * .substr
  * .erase
  * getline
  * .find()
  * full_name.insert(6, " ");
 
 */