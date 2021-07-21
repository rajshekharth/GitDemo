// Public and Private examples

#include <iostream>

using namespace std;

class Player {
private:
//attributes
    string name {"Player"};
    int experience;
    int health;
    
public:
//methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

int main() {
    
    Player frank;
    //frank.name = "Frank";
    //cout << frank.health << endl;
    
    frank.talk("Hello there!");
    
    return 0;
}
