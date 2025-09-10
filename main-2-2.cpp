#include "Appliance.h"
#include "TV.h"
#include <iostream>

using namespace std;

int main(){
    TV tv1;
    int n;
    cin >> n;
    tv1.set_powerRating(n);
    int m;
    cin >> m;
    tv1.setScreenSize(m);
    cout << tv1.get_powerRating() << " " << tv1.getPowerConsumption() << endl;
    if (tv1.get_isOn()){cout << "TV 1 is turned on" << endl;} else {cout << "TV 1 is turned off" << endl;}
    TV tv2(3,30);
    cout << tv2.get_powerRating() << " " << tv2.getPowerConsumption() << endl;
    tv2.set_isOn(true);
    if (tv2.get_isOn()){cout << "TV 2 is turned on" << endl;} else {cout << "TV 2 is turned off" << endl;}
    return 0;
}