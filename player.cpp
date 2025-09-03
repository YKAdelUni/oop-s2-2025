#include "player.h"

Player::Player() {}

Player::Player(std::string name, int health, int damage) {
  this->name = name;
  this->health = health;
  this->damage = damage;
}

int Player::getHealth() {return health;}

int Player::setHealth(int health) {
    this->health = health;
    return health;
}

std::string Player::getName() {return name;}

std::string Player::setName(std::string name){
    this->name = name;
    return name;
}

int Player::getDamage(){
    return damage;
}

int Player::setDamage(int damage) {
    this->damage = damage;
    return damage;
}

void Player::attack(Player* opponent, int damage){
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage){
    health = health - damage;
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << std::endl;
}
