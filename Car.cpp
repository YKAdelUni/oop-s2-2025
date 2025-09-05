#include "Car.h"

Car::Car(int ID) : Vehicle(ID) {}

int Car::getParkingDuration() {
  std::time_t presentTime = std::time(nullptr);
  int parkingDuration = static_cast<int>(std::difftime(presentTime, timeOfEntry));
  return parkingDuration * 0.9;
}