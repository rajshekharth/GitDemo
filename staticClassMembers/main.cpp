#include <iostream>
#include "Player.h"

using namespace std;

void display_num_of_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
    
    display_num_of_players();
    
    Player Hero {"Hero"};
    display_num_of_players();
    
    {
        Player Frank {"Frank"};
        display_num_of_players();
    }
    
    display_num_of_players();
    
    Player *villian = new Player {"Villian", 100, 100};
    display_num_of_players();
    delete villian;
    display_num_of_players();
    
    return 0;
}
