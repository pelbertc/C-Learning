#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int count {};
    size_t index{0};
    
    vector <int> vec {1,3,5,6,9,-99,-99};
    while(index < vec.size() && vec.at(index) != -99){
        count++;
        ++index;
        cout << count << endl;
        }
    }
   // return 0;

