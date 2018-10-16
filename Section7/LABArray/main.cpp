#include <iostream>

using namespace std;

int main(){
    
    int arr[10] {};
    arr[0] = 100;
    arr[9] = 1000;
     for(auto n: arr){
                cout << n << " - ";
            }
    return 0;
}
