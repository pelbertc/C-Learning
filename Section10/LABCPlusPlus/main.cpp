#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"David Brown"};
   
    journal_entry_1.erase(0,6);
    journal_entry_2.erase(0,6);
    
    cout << boolalpha;
    if(journal_entry_1 > journal_entry_2)
        journal_entry_1.swap(journal_entry_2);
    if(journal_entry_2 < journal_entry_1)
        journal_entry_2.swap(journal_entry_1);
        
    cout << journal_entry_1 << endl;
    cout << journal_entry_2 << endl;
    

    return 0;
}
