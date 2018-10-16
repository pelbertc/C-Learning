#include <iostream>

using namespace std;

int main(){
    
    int* p = new int[10];
    for(int i = 0; i < 10; i++){
        p[i] = i * i;
        }
    cout << *p << " " << *(p + 1) << " " << p[2] << endl;
    
   return 0;
}
