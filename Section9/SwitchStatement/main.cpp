//Session 9
//Switch Statement

/*
 * Ask the user what grade expected on an exam and
 * tell them what they need to score to get in
 */
#include <iostream>

using namespace std;

int main(){
    
char letter_grade{};
cout << "Enter the letter grade you expect on the exam :";
cin >> letter_grade;

switch(letter_grade){
    case 'a':
    case 'A':
    cout << "You need a 90 or above " << endl;
    break;
    case 'b':
    case 'B':
    cout << "You need 80-98, go study! " << endl;
    break;
      case 'c':
    case 'C':
    cout << "You need 70-78, go study! " << endl;
    break;
      case 'd':
    case 'D':
    cout << "You need 60-69, go study! " << endl;
    break;
      case 'f':
    case 'F':
    {
    char confirm{};
    cout << "Are you sure Y/N " << endl;
    cin >> confirm;
    if(confirm == 'y' || confirm == 'Y')
        cout << "I guess you dont want to study" << endl;
    else if(confirm == 'n' || confirm == 'N')
        cout << "Good go study" << endl;
    else 
        cout << "Invalid choice" << endl;
    break;
}
    default:
    cout << "Sorry that is not a valid grade " << endl;
}
cout << endl;
 return 0;
}
