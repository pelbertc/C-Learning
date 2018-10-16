//  main.cpp
//  GiveChange2
//
//  Created by Elbert Prescott on 8/22/18.
//  Copyright © 2018 Elbert Prescott. All rights reserved.
//

#include <iostream>

int main() {
     // insert code here...
     while(1){
        float price;
        float paid;
        std::cout << "Enter item price in cents : ";
        std::cin >> price;
        std::cout << "Enter amount paid in cents : ";
        std::cin >> paid;
    
    if(price < 0 || paid < 0){
        std::cout << "Value Entered is Invalid\n";
        return 1;
    }
    else if(paid < price){
        std::cout << "Need more Money Insuffient Fund\n";
        return 1;
    }
    
    
        int change;
        int chan = paid - price; //original change
        change = paid-price;     //this is the change value that will be changed as max coins a taken out
        int qtr = change/25;
        const int max_quarter = 2;
        const int max_dime = 2;
        const int max_nickel = 2;
        const int max_penny = 2;
        
        if(qtr > max_quarter){
            qtr = max_quarter;
        }
        change -= qtr*25;
        
        int dime = change/10;
        if(dime > max_dime){
            dime = max_dime;
        }
        change -= dime*10;
        
        int nickel = change/5;
        if(nickel > max_nickel){
            nickel = max_nickel;
        }
        change -= nickel*5;
        
        int penny = change/1;
        if(penny > max_penny){
            penny = max_penny;
            std::cout << "Sorry Insuffient Changes\n";
            return 1;
        }
        
        //change -= penny*1;
        
         std::cout << "Original Change = " << chan << " Cents \n";
         std::cout << "\tQuarters: " << qtr << std::endl;
         std::cout << "\tDimnes: " << dime << std::endl;
         std::cout << "\tNickels: " << nickel << std::endl;
         std::cout << "\tPennies: " << penny << std::endl;
        
    
        }
     
}
//this home work was completed back on the 23 please grade it