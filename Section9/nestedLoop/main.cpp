#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*
    //multiplication table
    for(int num1{1}; num1 <= 10; ++num1){
        for(int num2{1}; num2 <=12; ++num2){
            cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        }
        cout << "-------------------" << endl;
    }
    cout << endl;
    */
     //histogram
  int num_items{};
  cout << "How many data item do you have? ";
  cin >> num_items;
    
  vector<int> data{};
  
    for(int i{1}; i<=num_items;++i){
    int data_item{};
    cout << "Enter data item " << i << ": ";
    cin >> data_item;
    data.push_back(data_item);
}
    cout << "\nDisplay Histogram" << endl;
    for(auto val:data){
        for(int i{1}; i<=val; ++i){
            if(i%5==0){
                cout << "***" << endl;
            }else
        cout << "-" ;
        
        }
        cout << endl;
}
cout << endl;
return 0;
}
