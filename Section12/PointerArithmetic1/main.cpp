//Section 12
//Pointer Arithmetic Practice

#include <iostream>

using namespace std;

double sum(double a[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total = total + a[i];
    }
    return total;
}
int main(){
    double data [2];
    double s = sum(data, 2);
    
    cout << s << endl;
    
//    int a[] = {2,3,5};
//    int* p = a; //this print 2
//    p++;        //this print 3, since 3 is the next number to 2
//    *p = 0;     //this will print 0
//    cout << *p << endl;
//    
    int a[] = {1, 3, 5};
    cout << *a + 2 << " ";
    cout << *(a + 2) << endl;
    
    int b[] = {2, 3, 5};
    int* p = b;
    cout << *p << endl;
    
    return 0;
}
