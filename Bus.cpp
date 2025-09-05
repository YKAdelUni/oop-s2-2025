#include "Bus.h"

Bus::Bus(int ID) : Vehicle(ID) {}

int Bus::getParkingDuration(){
    std::time_t presentTime = std::time(nullptr);
    int parkingDuration = static_cast<int>(std::difftime(presentTime, timeOfEntry));
    return parkingDuration*0.75;
}