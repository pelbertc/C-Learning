//Section 13
//Constructor Initialization List

#include <iostream>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
//Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};


    Player::Player()
    :name{"None"}, health{0},xp{0}{ //Initialization List Example
}
    Player::Player(std::string name_val)//Iinitialization List Example
    :name{name_val}, health{0},xp{0}{
}

    Player::Player(std::string name_val,int health_val, int xp_val){
    name = name_val;
    health = health_val;
    xp = xp_val;
}

int main(){
    
    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain",100,55};
    
    return 0;
}
