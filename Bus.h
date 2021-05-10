//
// Created by ESCINF on 9/5/2021.
//

#ifndef BINPACKINGPROBLEM_BUS_H
#define BINPACKINGPROBLEM_BUS_H

#include <sstream>
#include <ostream>
#include "Driver.h"
#include "PassengerManager.h"
#include "Vehicle.h"

class Driver;
class PassengerManager;

class Bus: public Vehicle {
private:
    Driver* driver;
    PassengerManager* passengerList;

public:
    Bus();
    Bus(const std::string &brand, const std::string &model, int cantSeats, Driver *driver);

    virtual ~Bus();

    Driver *getDriver() const;
    PassengerManager *getPassengerList() const;

    void setDriver(Driver *driver);
    void setPassengerList(PassengerManager *passengerList);

    std::string toString() const;
};



#endif //BINPACKINGPROBLEM_BUS_H
