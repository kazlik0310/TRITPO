#ifndef BIKE_H
#define BIKE_H

#include "vehicle.h"



class bike : public vehicle
{
private:
    bool motokasko;
public:
    bool getMotokasko() {return motokasko;}
    void setMotokasko(bool motokasko) {this->motokasko = motokasko; }
    bike(bool motokasko, int price, int id, bool status, std::string problems) : motokasko(motokasko), vehicle(price, id, status, problems){};
    bike(){};
};

#endif // BIKE_H
