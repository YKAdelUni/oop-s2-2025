#include "Appliance.h"
#include <iostream>

using namespace std;

int main(){
    Appliance appl1;
    Appliance appl2(3);
    cout << appl2.get_powerRating() << endl;
    int n;
    cin >> n;
    appl1.set_powerRating(n);
    cout << appl1.get_powerRating() << endl;
    if (appl1.get_isOn()){
        cout << "Appliance 1 is on" << endl;
    } else {
        cout << "Appliance 1 is off" << endl;
    }
    appl2.set_isOn(true);
    if (appl2.get_isOn()){
        cout << "Successfully turned on Appliance 2" << endl;
    }
    cout << appl2.getPowerConsumption() << endl;
    return 0;
}