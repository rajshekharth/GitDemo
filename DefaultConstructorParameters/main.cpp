//Default constructor parameters

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int exp;
    
public:
    Player(string name_val = "None", 
           int health_val = 0, 
           int exp_val = 0);
    
};

Player::Player(string name_val, int health_val, int exp_val)
    : name {name_val}, health {health_val}, exp {exp_val} {
        cout << "Three-args constructor called" << endl;
        
    }

int main() {
    
    Player empty;
    Player raaj {"Raaj"};
    Player villian {"Villian", 100, 90};
    Player hero {"Hero", 100};
    
    return 0;
}
