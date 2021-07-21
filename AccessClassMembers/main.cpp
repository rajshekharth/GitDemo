//Accessing Class members

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
    //attributes
    string name;
    int health;
    int experience;
    
    //methods
    void talk(string text_to_say) {cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};


class Account {
public:
    //Attributes
    string name {"Account"}; 
    double balance {0.0};
    
    
    //methods
    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl;}
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl;}
    
};

int main() {
    
    Account Raj_account;
    
    Raj_account.name = "Rajshekhar account";
    Raj_account.balance = 5000.0;
    
    
    Raj_account.deposit(1000.0);
    Raj_account.withdraw(500.0);
    
    Player Rajeshekhar;
    
    Rajeshekhar.name = "Rajeshekhar";
    Rajeshekhar.health = 100;
    Rajeshekhar.experience = 6;
    
    Rajeshekhar.talk("Hi There!");
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->experience = 10;
    
    enemy->talk("I will destroy you.");
    
    
    
    return 0;
}