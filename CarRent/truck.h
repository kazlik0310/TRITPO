#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"



class truck : public vehicle
{
private:
    int carrying;
public:
    int getCarrying() {return carrying;}
    void setCarrying(int carrying) {this->carrying = carrying; }
    truck(){};
    truck(int carrying, int price, int id, bool status, std::string problems) : vehicle(price, id, status, problems), carrying(carrying){};
};

#endif // TRUCK_H
