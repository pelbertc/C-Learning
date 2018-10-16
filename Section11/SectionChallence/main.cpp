//Section 11 Challenge
#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(){
       vector<int> num = {2,5,7,5,5};
       float average;
       char selec {};
    do{
        cout << "\n--------------------------------------------" << endl;
        cout << "P. Print Numbers" << endl;
        cout << "A. Add a Number" << endl;
        cout << "M. Display means of Numbers" << endl;
        cout << "S. Display smallest Number" << endl;
        cout << "L. Display largest Number" << endl;
        cout << "D. Delete all Numbers" << endl;
        cout << "Q. Quit" << endl;
        cin >> selec;

        if(selec == 'P' || selec == 'p'){
            cout << "*******Printing list of numbers*******" << endl;
            for(auto n: num){
                        cout << n << " ";
                    }
                }
        else if(selec == 'A' || selec == 'a'){
            cout << "*******Adding numbers to the list*******" << endl;
            cout << "Please enter a number : ";
            int input;
            cin >> input;
            cout << "Added : " << input << endl;
            num.push_back(input);
            for(auto n: num){
                cout << n << " ";
            }
        }
        else if(selec == 'M' ||selec == 'm'){
            cout << "*******Mean of the numbers list*******" << endl;
            for(auto n:num){
             average = accumulate( num.begin(), num.end(), 0.0 )/ num.size();
            }
            cout << "Mean of the numbers : " << average;
        }

        else if(selec == 'S' ||selec == 's'){
            cout << "*******Smallest Number on the list*******" << endl;
             sort( num.begin(), num.end());
   }

        else if(selec == 'L' ||selec == 'l'){
            cout << "*******Largest Number on the list*******" << endl;
             sort( num.rbegin(), num.rend());
             cout << num[0] << endl;
        }

        else if(selec == 'D' ||selec == 'd'){
            cout << "*******Deleting all Numbers on the list*******" << endl;
             num.erase( num.begin(), num.end());
             cout << num[0] << endl;
        }
        else if(selec == 'Q' || selec == 'q')
            cout << "Bye" << endl;
        else
            cout << "Invalid Selection try again.." << endl;

    }while(selec != 'q' && selec != 'Q');

    cout << endl;

    return 0;

}

