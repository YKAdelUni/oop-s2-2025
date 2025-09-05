#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include <ctime>

class Vehicle {
    protected:
        std::time_t timeOfEntry;
        int ID;
    public:
        Vehicle(int ID);
        int getID();
        virtual int getParkingDuration() = 0;
};

#endif