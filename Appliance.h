#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <string>

class Appliance {
    protected:
        int powerRating;
        bool isOn;
    public:
        Appliance();
        Appliance(int powerRating); // creates an Appliance with a power rating
        int get_powerRating();
        void set_powerRating(int powerRating);
        bool get_isOn();
        void set_isOn(bool isOn);
        void turnon();
        void turnoff();
        virtual double getPowerConsumption();
};

#endif