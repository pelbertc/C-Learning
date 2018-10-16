//Section 12
//Dynamic Memory
#include <iostream>

using namespace std;

int main(){
    
//HEAP Free Store
    
    int *int_ptr{nullptr};
    int_ptr = new int; //0x6f1488 location of memory in HEAP
    cout << int_ptr << endl;
    delete int_ptr;
    
    size_t size{0};
    double *temp_ptr{nullptr};
    
    cout << "How many temps? " << endl;;
    cin >> size;
    temp_ptr = new double[size];
    cout << temp_ptr << endl;
    //tmp_ptr{nullptr} - this would cause memory leak, if pointer for memory is not deleted using the command below, we just null our only way or bridge to be able to find the memory location in HEAP
    delete [] temp_ptr;
    
    cout << endl;
    return 0;
}
