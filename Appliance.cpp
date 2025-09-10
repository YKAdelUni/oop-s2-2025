#include "Appliance.h"
#include <iostream>

Appliance::Appliance(){
    powerRating = 0;
    isOn = false;
}

Appliance::Appliance(int powerRating){
    this->powerRating = powerRating;
    isOn = false;
}

int Appliance::get_powerRating() {return powerRating;}

void Appliance::set_powerRating(int powerRating){this->powerRating = powerRating;}

bool Appliance::get_isOn() {return isOn;}

void Appliance::set_isOn(bool isOn){this->isOn = isOn;}

void Appliance::turnon(){set_isOn(true);}

void Appliance::turnoff(){set_isOn(false);}

double Appliance::getPowerConsumption() {return 0.0;}
