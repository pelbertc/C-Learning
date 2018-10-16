//Section 13
//Delegating Constructor

#include <iostream>
#include <string>

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
    
    //Below 3 overloaded contructor are using delegations, the last contructor is being used as reference for the other 2 constructor to avoid repetition on the code
    Player::Player()
     :Player{"None",0,0}{
         cout << "No-args constructor" << endl;
     }

    Player::Player(std::string name_val)
      :Player{name_val,0,0}{
          cout << "1-args constructor" << endl;
      }
      
    Player::Player(std::string name_val, int health_val, int xp_val)
      :name{name_val}, health{health_val}, xp{xp_val}{
          cout << "3-args constructor" << endl;
      }
      
int main(){
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain",100,55};
    
    return 0;
}
