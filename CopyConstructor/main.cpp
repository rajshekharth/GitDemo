//Copy constructor

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int exp;
    
public:
    string get_name() {return name;}
    int get_health() {return health;}
    int get_exp() {return exp;}
    Player(string name_val = "None",
           int health_val = 0,
           int exp_val = 0);
    Player(const Player &source);   //Copy constructor declaration
    ~Player() {
        cout << "Destructor called for " << name << endl;
    }
};

Player::Player(string name_val, int health_val, int exp_val)
    : name {name_val}, health {health_val}, exp {exp_val} {
        cout << "Three args constructor is called" << endl;
    }
    
//Copy constructor implementation

Player::Player(const Player &source)
    : name {source.name}, health {source.health}, exp {source.exp} {
        cout << "Copy constructor : Made copy of " << source.name << endl;
}

void display (Player P) {
    cout << "Name: " << P.get_name() << endl;
    cout << "Health: " << P.get_health() << endl;
    cout << "Experience: " << P.get_exp() << endl;
}
    
int main() {
    
    Player empty;
    display(empty);
    Player Raaj {"Raaj"};
    Player villian {"Villian", 100, 50};
    Player Hero {"Hero", 100};
    
    
    
    return 0;
}
