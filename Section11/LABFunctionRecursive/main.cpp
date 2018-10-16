#include <iostream>

using namespace std;

int function_activation_count {0};
float a_penny_doubled_everyday(int n, float amount = 1){
    function_activation_count++;
    if(n <= 1)
        return amount;
    return a_penny_doubled_everyday(--n, amount*2);

}

int main(){
   while(1){
    cout << "Please enter the number of days to accumulate the amount of pennies " << endl;
    int day;
    cin >> day;
    cout << "Amount of Pennies " << a_penny_doubled_everyday(day) << endl; 
    cout << "Dollar amount in day " << day << " is $ " << a_penny_doubled_everyday(day)/100 << endl;
   }
    return 0;
   
}