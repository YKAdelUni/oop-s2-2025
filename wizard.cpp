#include "wizard.h"

int Wizard::getMana() {return mana;}

int Wizard::setMana(int mana) {
    this->mana = mana;
    return mana;
}

Wizard::Wizard(std::string name, int health, int damage, int mana) {
  this->name = name;
  this->health = health;
  this->damage = damage;
  this->mana = mana;
}

void Wizard::castSpell(Player* opponent) {
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << mana << " damage." << std::endl;
    opponent->takeDamage(mana);
}