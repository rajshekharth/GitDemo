//Delegating constructors

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int exp;
    
public:
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int exp_val);
};

Player::Player()
    : Player {"None", 0, 0} {
        
    }
    
Player::Player(string name_val)
    : Player {name_val, 0, 0} {
        
    }
    
Player::Player(string name_val, int health_val, int exp_val)
    : name {name_val}, health {health_val}, exp{exp_val} {
        
    }


int main() {
    
    Player slayer {"Slayer", 100, 20};
    
    return 0;
}