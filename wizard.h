#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"
#include <iostream>
#include <string>

class Wizard : public Player {
    public:
        int mana;
        int getMana();
        int setMana(int mana);
        Wizard(std::string name, int health, int damage, int mana);
        void castSpell(Player* opponent);
};

#endif