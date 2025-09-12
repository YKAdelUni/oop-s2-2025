#include "House.h"
#include <iostream>

House::House(){
    maxAppliances = 0;
    numAppliances = 0;
    appliances = new Appliance*;
}

House::House(int maxAppliances){
    this->maxAppliances = maxAppliances;
    numAppliances = 0;
    appliances = new Appliance*[maxAppliances];
}

bool House::addAppliance(Appliance* appliance){
    if (numAppliances < maxAppliances){
        appliances[numAppliances] = appliance;
        std::cout << "Successfully added appliance to house" << std::endl;
        numAppliances++;
        return true;
    } else {
        std::cout << "House is full" << std::endl;
        return false;
    }
}

double House::getTotalPowerConsumption(){
    double totalPowerConsumption = 0;
    for (int i = 0; i < numAppliances; i++){
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}
