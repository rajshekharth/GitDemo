#include "Player.h"
#include <string>

int Player::num_of_players {0};  //Initialization

Player::Player(std::string name_val, int exp_val, int health_val)
    : name{name_val}, exp{exp_val}, health{health_val} {
        ++num_of_players;
}

Player::Player(const Player &source)
    : Player {source.name, source.exp, source.health} {
        
}

Player::~Player() {
    --num_of_players;
}

