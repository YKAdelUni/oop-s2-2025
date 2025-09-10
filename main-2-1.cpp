#include "Appliance.h"
#include "Fridge.h"
#include <iostream>

using namespace std;

int main(){
    Fridge fridge1;
    int n;
    cin >> n;
    fridge1.set_powerRating(n);
    int m;
    cin >> m;
    fridge1.setVolume(m);
    cout << fridge1.get_powerRating() << " " << fridge1.getPowerConsumption() << endl;
    if (fridge1.get_isOn()){cout << "Fridge 1 is turned on" << endl;} else {cout << "Fridge 1 is turned off" << endl;}
    Fridge fridge2(3,10);
    cout << fridge2.get_powerRating() << " " << fridge2.getPowerConsumption() << endl;
    fridge2.set_isOn(true);
    if (fridge2.get_isOn()){cout << "Fridge 2 is turned on" << endl;} else {cout << "Fridge 2 is turned off" << endl;}
    return 0;
}