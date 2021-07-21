//Default constructor

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int exp;
    
public:
    void set_name(string n) {
        name = n;
    }
    
    string get_name() {
        return name;
    }
    
    Player() {
        name = "None";
        health = 100;
        exp = 3;
    }
};



int main() {
    Player Raaj;
    Raaj.set_name("Raaj");
    cout << Raaj.get_name() << endl;
    return 0;
}
