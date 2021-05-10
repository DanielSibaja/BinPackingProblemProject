//
// Created by ESCINF on 9/5/2021.
//

#ifndef BINPACKINGPROBLEM_VEHICLE_H
#define BINPACKINGPROBLEM_VEHICLE_H

#include <sstream>
#include <ostream>

class Vehicle {
private:
    std::string brand;
    std::string model;
    int cantSeats;
public:
    Vehicle();
    Vehicle(const std::string &brand,const std::string &model,int cantSeats);
    virtual ~Vehicle();


    const std::string &getBrand() const;
    const std::string &getModel() const;
    int getCantSeats() const;


    void setBrand(const std::string &brand);
    void setModel(const std::string &model);
    void setCantSeats(int cantSeats);

    virtual  std::string toString();
};


#endif //BINPACKINGPROBLEM_VEHICLE_H
