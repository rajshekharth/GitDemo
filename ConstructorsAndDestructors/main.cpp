//Constructors and Destructors

#include <iostream>
#include <string>

using namespace std;

class Player {
private: 
    string name;
    int health;
    int exp;
    
public:
    void set_name (string n) {
        name = n;
        }
    
    //Overloaded Constructors
    
    Player() {
        cout << "No arguments constructor called" << endl;
    }
    
    Player(string name) {
        cout << "Single argument constructor is called" << endl;
    }
    
    Player (string name, int experience, int health) {
        cout << "Three arguments constructor is called" << endl;
    }
    
    //Destructor
    ~Player() {
        cout << "Destructor is called for " << name << endl;
    }
};

int main() {
    
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player Raaj;
        Raaj.set_name("Raaj");
        Player  hero ("Hero");
        hero.set_name("Hero");
        Player villian ("Villian", 5, 100);
        villian.set_name ("Villian");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Villian");
    
    Player *level_boss = new Player ("Level_boss",10,99);
    level_boss->set_name("Level boss");
    
    delete enemy;
    delete level_boss;
    
}
