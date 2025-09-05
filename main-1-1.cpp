#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>

using namespace std;

int main(){
    int numVehicles;
    cout << "Enter the number of vehicles in the lot: ";
    cin >> numVehicles;

    Vehicle** vehicleLot = new Vehicle*[numVehicles];

    for (int i = 0; i < numVehicles; i++){
        int type;
        cout << "Enter the vehicle type (1=car, 2=bus, 3=motorbike): ";
        cin >> type;
        switch (type){
            case 1:
                vehicleLot[i] = new Car(i+1);
                break;
            case 2:
                vehicleLot[i] = new Bus(i+1);
                break;
            case 3:
                vehicleLot[i] = new Motorbike(i+1);
                break;
        }
    }
    for (int i = 0; i < numVehicles; i++){
        cout << "Vehicle ID " << vehicleLot[i]->getID() << " has been parked for duration " << vehicleLot[i]-> getParkingDuration() << endl;
    }
    
}