//Section 13
//Default Constructor

#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val){
        name = name_val;
    }
    std::string get_name(){
        return name;
    }
    //customer default constructor
    Player(){
        name = "None";
        health = 100;
        xp = 3;
    }
};
    //default constructor only works if you dont have a consctructor at all
int main(){
    Player frank;
    frank.set_name("Frank");
    cout << frank.get_name() << endl;
    return 0;
}
