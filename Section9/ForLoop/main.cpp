#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    //print the numbers from 1 to 5
    for(int i = 1; i <= 5; ++i){
        cout << i << endl;
    }
    cout << endl;
    
    //print only the multiple of 2 between 1 and 10 in decrementing order
    
    for(int x = 10; x > 1; --x){
        if(x%2==0)
            cout << x << endl;
    }
    
    //this for loop does the same thing
    
    for(int i{2}; i <= 10; i+=2){
        cout << i << endl;
    }
    cout << endl;
    
    //printing out the array using for loop
    
    int scores[]{100,90,87};
    for(int i = 0; i < 3; ++i){
        cout << scores[i] << endl;
    }
    cout << scores[2] << " " << scores[1] << " " << scores[0] << endl;
    cout << endl;
    
    //comma operator
    
    for(int i {1}, j{5} ; i <=5 ; ++i, ++j){
        cout << i << " * " << j << " : " << (i * j) << endl;
    }
    
    //print multiple of 30 between 1 - 100
    for(int i{10}; i <= 100; i+=10){
        if(i%15==0)
            cout << i << endl;
    }
    
    //addition
    
    for(int i{1}, j{5}; i <= 5; ++i, ++j){
        cout << i << " + " << j << " = " << (i+j) << endl;
    }
    
    //printing 1 to 100 in a square
    for(int i{11}; i <= 100; ++i){
        cout << i;
        if(i%10==0)
            cout << endl;
            else
            cout << " ";
    }
    //this would do the same thing as above loo
    //for(int i{1}; i<=100; ++i){
    //       cout << i << (i%100 == 0) ? "\n":" ");
    //}
    cout << endl;
    //using a vector
    vector <int> nums{19,78,39,34,52};
    for(unsigned i{0}; i < nums.size(); ++i)
        cout << nums[i] << endl;
    
    //Range-based for Loop
    cout << "\n====================Range-base for Loop===============\n";
    //this loop will let you loop through the array already identified above
    int marks [] {22,54,90};//using array
    int points [] {100,90,88}; 
    for(auto score : marks){
        cout << score << endl;
        
    }
    //another range-based for loop
    cout << "\n====================Another Range-base for Loop Example===============\n";
    vector<double> temps {87.2,88.7,90.5,72.5};//using vector
    double average_temp{};
    double running_sum{};
    
    for(auto temp: temps)//auto or double will work the same
        running_sum += temp;
        
        average_temp = running_sum/temps.size();
        
        cout << fixed << setprecision(1);//this will set the point decimal to 1 for output average_temp need to include iomanip
        cout << average_temp << endl;
        cout << endl;
        
     //this is to printout a value inside the loop
    for(auto val:{3,2,4,5,1})   
    cout << val << endl;
    
    //print string without space
    for(auto c: "This is a test")
        if(c != ' ')
            cout << c;
    cout << endl;
    
    //print the string vertically
    for(auto c: "This is a test")
        if(c == ' ')
            cout << "\n";
            else 
                cout << c << endl;
    cout << endl;
    

    return 0;
}
