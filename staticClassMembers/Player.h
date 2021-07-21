#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player
{
private:
    static int num_of_players;
    std::string name;
    int exp;
    int health;
public:
    std::string get_name() {return name;}
    int get_exp() {return exp;}
    int get_health() {return health;}
    Player(std::string name_val = "None", int exp_val = 0, int health_val = 0);
    //Copy constructor
    Player(const Player &source);
    //Destructor
    ~Player();
    
    static get_num_players() {
        return num_of_players;
    }

};

#endif // _PLAYER_H_
