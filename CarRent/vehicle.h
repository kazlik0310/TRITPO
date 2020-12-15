#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class vehicle
{
protected:
    int price;
    int id;
    bool status;
    std::string problems;
public:
    vehicle(){};
    vehicle(int price, int id, bool status, std::string problems) : price(price), id(id), status(status), problems(problems){};
    int getPrice() {return price;}
    void setPrice(int price) {this->price = price; }
    int getId() {return id;}
    void setId(int id) {this->id = id; }
    bool getStatus() {return status;}
    void setStatus(bool status) {this->status = status; }
    std::string getProblems() {return problems;}
    void setProblems(std::string problems) {this->problems = problems; }


};

#endif // VEHICLE_H
