// Declaring a Class and objects

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    //attributes
    string name;
    int health;
    int experience;
    
    //methods
    void talk(string);
    bool is_dead();
};


class Account {
    //Attributes
    string name {"Account"}; 
    double balance {0.0};
    
    
    //methods
    bool deposit(double);
    bool withdraw(double);
    
};





int main() {
    
    Account Raj_account;
    Account Shekhar_account;
    
    
    
    Player Rajeshekhar, Rajya, Manjya;
    Player Balamma;
    
    Player players[] {Rajya, Manjya};
    
    vector<Player> player_vec {Balamma};
    player_vec.push_back(Rajya);
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}
