#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"
#include <iostream>
#include <string>

class Warrior : public Player {
    public:
        std::string weapon;
        std::string getWeapon();
        std::string setWeapon(std::string weapon);
        Warrior(std::string name, int health, int damage, std::string weapon);
        void swingWeapon(Player* opponent);
};

#endif