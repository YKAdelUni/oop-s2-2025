#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
    private:
        int maxVehicles;
        int currentVehicles;
    public:
        Vehicle** vehicles;
        ParkingLot(int maxVehicles);
        int getCount();
        ParkingLot parkVehicle(Vehicle* vehicle);
        ParkingLot unparkVehicle(int ID);

};

#endif