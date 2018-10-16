//Section 13
//Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
  //Player class is a blueprint of how each Player created will contain
  //attributes
  string name {"Player"};
  int health {100};
  int xp {3};
  
  //methods
  void talk(string);
  bool is_dead();
  
};

class Account{
    //attributes
    string name{"Account"};
    double balance{0.0};
    
    //methods
    bool deposit(double);
    bool withdraw(double);
    
};

int main(){
    Account frank_acount;
    Account joe_account;
    
    Player frank;
    Player joe;
    
    Player players[]{frank,joe};
    
    vector<Player> player_vec{frank};
    player_vec.push_back(joe);
    
    Player *enemy{nullptr};//this creates junk value for string, unlike frank and joe they dont have junk value
    enemy = new Player;
    
    delete enemy;
    return 0;
}
