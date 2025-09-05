#include "Motorbike.h"

Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration(){
    std::time_t presentTime = std::time(nullptr);
    int parkingDuration = static_cast<int>(std::difftime(presentTime, timeOfEntry));
    return parkingDuration*0.85;
}