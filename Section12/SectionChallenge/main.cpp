#include <iostream>

using namespace std;

//int print(int* array, int a){
//        int* p = array;
//        for(int i = 0; i < a; i++){
//            cout << *array++ << " ";
//               }
//            cout << endl;
//}

void print(const int *const arr, size_t size){
    cout << "[";
    for(size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
        cout << "]";
        cout << endl;
}
int * apply_all(const *const arr1, size_t size1, const int *const arr2, size_t size2){
    int *new_array {};
    new_array = new int[size1 * size2];
    
    int position{0};
    for(size_t i{0}; i < size2; ++i){
        for(size_t j{0}; j < size1; ++j){
            new_array[position] = arr1[j] * arr2[i];
            ++position;
        }
    }
    return new_array;
}

int main(){
    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};
    
    cout << "Array 1: ";
    print(array1,5);
    
    cout << "Array 2: ";
    print(array2,3);
    
    int *result = apply_all(array1,5, array2,3);
    cout << "Result: ";
    print(result, 15);
    
    return 0;
}
