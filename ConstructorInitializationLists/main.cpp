//Constructor initialization lists

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
    : name {"None"}, health {0}, exp {0} {

}

Player::Player(string name_val) 
    : name {name_val}, health {0}, exp {0} {

}

Player::Player(string name_val, int health_val, int exp_val) 
    : name {name_val}, health {health_val}, exp {exp_val} {

}

int main() {
    
    Player empty;
    Player Raaj {"Raaj"};
    Player villian {"Villian", 100, 3};
    
    
    
    return 0;
}