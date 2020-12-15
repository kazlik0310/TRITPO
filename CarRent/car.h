#ifndef CAR_H
#define CAR_H

#include "vehicle.h"


class car : public vehicle
{
private:
    int seats;
public:
    int getSeats() {return seats;}
    void setSeats(int seats) {this->seats = seats; }
    car(int seats, int price, int id, bool status, std::string problems) : seats(seats), vehicle(price, id, status, problems){};
    car(){};
};

#endif // CAR_H
