#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House{
    protected:
        int numAppliances;
        int maxAppliances;
        Appliance** appliances;
    public:
        House(); // creates an empty House object
        House(int maxAppliances); // creates a House object with space for maxAppliances appliances
        bool addAppliance (Appliance* appliance);   // adds an Appliance object to the House
                                                    // return true if there is space in the house otherwise false
        double getTotalPowerConsumption(); // returns the total power consumption of all appliances in the house
};

#endif