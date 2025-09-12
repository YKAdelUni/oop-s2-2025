#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"
#include <iostream>

using namespace std;

int main(){
    Fridge fridge1(3,10);
    TV tv(2,40);
    Fridge fridge2;
    House house(4);

    house.addAppliance(&fridge1);
    house.addAppliance(&tv);
    house.addAppliance(&fridge2);

    cout << "Total power consumption: " << house.getTotalPowerConsumption() << " kW" << endl;

    return 0;
}