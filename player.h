#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
    public:
        std::string name;
        int health;
        int damage;
        Player();
        Player(std::string name, int health, int damage);
        int getHealth();
        int setHealth(int health);
        std::string getName();
        std::string setName(std::string name);
        int getDamage();
        int setDamage(int damage);
        void attack(Player* opponent, int damage);
        void takeDamage(int damage);
};

#endif