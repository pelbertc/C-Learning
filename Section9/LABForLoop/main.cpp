#include <iostream>

using namespace std;

int calculate_sum(){
    int sum = 0;    
    for(int i = 0; i < 16; ++i){
        if(i % 2 != 0){
        sum += i;
        }
}
return sum;
}
int main(){
    calculate_sum();
  
  return 0;
}
