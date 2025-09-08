#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>

using namespace std;

int main(){
    ParkingLot(10);
    for (int i = 0; i < 10; i++){
        int type;
        cout << "Enter the vehicle type (1=car, 2=bus, 3=motorbike): ";
        cin >> type;
        // switch (type){
        //     case 1:
        //         vehicles[i] = new Car(i+1);
        //         break;
        //     case 2:
        //         vehicles[i] = new Bus(i+1);
        //         break;
        //     case 3:
        //         vehicleLot[i] = new Motorbike(i+1);
        //         break;
        // }
    }
}