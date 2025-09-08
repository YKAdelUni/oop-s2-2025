#include "ParkingLot.h"

ParkingLot::ParkingLot(int maxVehicles){
    this->maxVehicles = maxVehicles;
    this->vehicles = new Vehicle*[maxVehicles];
}

int ParkingLot::getCount() {return currentVehicles;}

ParkingLot ParkingLot::parkVehicle(Vehicle* vehicle){
    if (currentVehicles >= maxVehicles){
        std::cout << "The lot is full" << std::endl;
    } else {
        for (int i = 0; i < maxVehicles; i++){
            if (vehicles[i] == nullptr){
                vehicles[i] = vehicle;
                currentVehicles++;
                break;
            }
        }
    }
}

ParkingLot ParkingLot::unparkVehicle(int ID){
    for (int i = 0; i < maxVehicles; i++){
        if (vehicles[i]->getID() == ID){
            delete vehicles[i];
            vehicles[i] = nullptr;
            currentVehicles--;
            break;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}
