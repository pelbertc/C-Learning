//Section 13
//Access Modifier
#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    //attibute
    string name;
    int health;
    int xp;
public:
    //method
    void talk(string text_to_say){cout << name << " say " << text_to_say << endl;}
    bool is_dead();

};

int main(){
    Player frank;
    frank.talk("hello there");
   
    return 0;
}
