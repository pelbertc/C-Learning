//do while loop, post test loop
#include <iostream>

using namespace std;

int main(){
    /*
    int num;
    do{
        cout << "Enter a number between 1 and 5: ";
        cin >> num;
    }while(num <= 1 || num >= 5);
    
    cout << "Thanks" << endl;
    
    //area calculation with calculate another
    char selection {};
    do {
        double width, height;
        cout << "Enter width and height separated bya space :";
        cin >> width >> height;
        
        double area {width * height};
        cout << "The area is " << area << endl;
        cout << "Calculate another? (Y/N) : ";
        cin >> selection;
    }while(selection == 'Y' || selection == 'y');
    cout << "Thanks!" << endl;
    
    */
    //do while example
    char selec {};
    do{
        cout << "\n--------------------------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cin >> selec;
        
        if(selec == '1')
            cout << "Eat Ice cream" << endl;
        else if(selec == '2')
            cout << "Eat Pie" << endl;
        else if(selec == '3')
            cout << "Eat trifle" << endl;
        else if(selec == 'Q' || selec == 'q')
            cout << "Bye" << endl;
        else
            cout << "Invalid Selection try again.." << endl;
        
    }while(selec != 'q' && selec != 'Q');
    
    cout << endl;
    
    return 0;
}
