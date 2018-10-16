//Chapter 6 Array and Vectors/Horstmann
//Review Exercises
#include <iostream>

using namespace std;


int main(){
    //R6.1
    double values[10];
    
//      double values[10] = {1,2,3,4,5,6,7,8,9,10};
//      for(double n: values){
//                cout << n << "  ";
//            }
//    cout << "a. ";
//    for(double n = 1; n <= 10; n = n+1){
//        cout << n << " ";
//    }
//        cout << endl;
//    
//    cout << "b. ";
//    int values1[10];
//    for(int i = 0; i < 18; i = i+2){
//        cout << i << " ";
//    }
//        cout << endl;
//        
//    cout << "f. ";
//    int values2[10];
//    for(int i = 0; i < 2; i = i+1){
//        cout << i << " ";
//    }
    
    //R6.2
    int a[] = {1,2,3,4,5,4,3,2,1,0};
//    int total = 0;
//    for(int i = 0; i < 10; i++){
//        total = total + a[i];
//        cout << total << endl;
//    }
//    
//    cout << "----------------------" << endl;
//    
//    int total1 = 0;
//    for(int e = 0; e < 10; e+=2){
//        total1 = total1 + a[e];
//        cout << total1 << endl;
//    }
//    
//    cout << "----------------------" << endl;
//    
//    int total2 = 0;
//    for(int o = 1; o < 10; o+=2){
//        total2 = total2 + a[o];
//        cout << total2 << endl;
//    }
//    
//    cout << "----------------------" << endl;
//    
//    int total2 = 0;
//    for(int o = 2; o <= 10; o+=2){
//        total2 = total2 + a[o];
//        cout << total2 << endl;
//    }
    cout << endl;
    cout << "----------------------" << endl;
    
    int total3 = 0;
    for(int u = 9; u >= 0; u--){
        total3 = total3 + a[u];
        cout << total3 << endl;
    }
    cout << endl;
    
    cout << "-----------------------" << endl;
    int total = 0;
    for(int i =9; i >=0; i=i-2){
        total = total + a[i];
        cout << total << endl;
    }
   
   return 0;
}
