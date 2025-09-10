#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"
#include <iostream>

using namespace std;

int main(){
    // Create a house with space for 5 appliances
    House house(5);
    
    // Create some appliances
    Fridge fridge1(200, 500);  // 200W power rating, 500L volume
    Fridge fridge2(250, 600);  // 250W power rating, 600L volume
    TV tv1(100, 55);          // 100W power rating, 55 inch screen
    TV tv2(150, 65);          // 150W power rating, 65 inch screen
    
    // Add appliances to the house
    cout << "Adding appliances to house:" << endl;
    house.addAppliance(&fridge1);
    house.addAppliance(&tv1);
    house.addAppliance(&fridge2);
    house.addAppliance(&tv2);
    
    // Try to add another appliance (should fail as house is full)
    TV tv3(120, 42);
    cout << "Trying to add a 5th appliance:" << endl;
    house.addAppliance(&tv3);
    
    // Calculate and display total power consumption
    cout << "Total power consumption: " << house.getTotalPowerConsumption() << " kWh" << endl;
    
    return 0;
}