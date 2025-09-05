#include "Vehicle.h"

Vehicle::Vehicle(int ID) {
    timeOfEntry = std::time(nullptr);
    this->ID = ID;
}

int Vehicle::getID() {return ID;}
