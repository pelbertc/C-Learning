//Section 12
//Simple pointers

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int num {10};
    cout << "Value of num is: " << num << endl;
    cout << "Address of num is: " << &num << endl;
    cout << "sizeof of num is: "<< sizeof num << endl;
   
   //declaring a pointer
   int *p;
   cout << "\nValue of p is: " << p << endl; //garbage
   cout << "Address of p is: " << &p << endl; 
   cout << "sizeof of p is: " << sizeof p << endl;
   
   p = nullptr;
   cout << "\nValue of is: " << p << endl;
   int *p1{nullptr};
   double *p2{nullptr};
   unsigned long long *p3{nullptr};
   vector<string> *p4{nullptr};
   string *p5{nullptr};
   
   cout << "\nsizeof p1 is: " << sizeof p1 << endl;
   cout << "size of p2 is: " << sizeof p2 << endl;
   cout << "size of p3 is: " << sizeof p3 << endl;
   cout << "size of p4 is: " << sizeof p4 << endl;
   cout << "size of p5 is: " << sizeof p5 << endl;
   
   int score{100};
   double high_temp{100.7};
   
   int *score_ptr{nullptr};
   
   score_ptr = &score;
   cout << "Value of score is: " << score << endl;
   cout << "Address of score is: " << &score << endl;
   cout << "Value of score_ptr is: " << score_ptr << endl;
   
   //Dereferencing Double Examples
   *score_ptr = 200;
   cout << *score_ptr << endl;
   cout << score << endl;
   
   double low_temp{37.4};
   double *temp_ptr{&high_temp};
   
   cout << *temp_ptr << endl; //100.7
   temp_ptr = &low_temp; //referring temp_ptr to low_temp , here we making changes to the pointers
   cout << *temp_ptr << endl; //37.4
   
   //String Examples
   string name {"Frank"};
   string *string_ptr(&name);
   
   cout << *string_ptr << endl; //Frank
   name = "James";              //changing string value without the pointer, would update the pointer as well, string value <- pointer <- display
   cout << *string_ptr << endl; //James
   
    //Vector Examples
    cout << "\n----------------------------------------------" << endl;
    vector<string> stooges {"Larry","Moe","Curly"};
    vector<string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges;
    
    cout << "First stooge: " << (*vector_ptr).at(0) << endl; //Larry
    cout << "Stooges: ";
    for(auto stooge: *vector_ptr)
        cout << stooge << " "; //print out Larry - stooge.at(0)
        cout << endl;
        
        cout << endl;
    return 0;
}
