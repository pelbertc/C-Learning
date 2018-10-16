#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if(frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not allowed" << endl;
        
    if(frank_account.withdraw(500.0))
        cout << "Withdraw OK" << endl;
    else 
        cout << "Not sufficient funds" << endl;
    
    if(frank_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
        
    return 0;
}

//what I learn here a class and functions has to be in the [header file][specification file] 
//the methods will be in the [account.cpp][implementation file] file 