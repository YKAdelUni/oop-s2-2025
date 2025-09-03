#include "warrior.h"

std::string Warrior::getWeapon() {return weapon;}

std::string Warrior::setWeapon(std::string weapon) {
    this->weapon = weapon;
    return weapon;
}

Warrior::Warrior(std::string name, int health, int damage, std::string weapon) {
  this->name = name;
  this->health = health;
  this->damage = damage;
  this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent) {
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << std::endl;
    opponent->takeDamage(damage);
}