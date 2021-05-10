//
// Created by ESCINF on 9/5/2021.
//

#include "Bus.h"

Bus::Bus() {}

Bus::Bus(const std::string &brand, const std::string &model, int cantSeats, Driver *driver)
: Vehicle(brand, model,cantSeats),driver(driver) {

}

Bus::~Bus() {}

Driver *Bus::getDriver() const {
    return driver;
}

void Bus::setDriver(Driver *driver) {
    Bus::driver = driver;
}

PassengerManager *Bus::getPassengerList() const {
    return passengerList;
}

void Bus::setPassengerList(PassengerManager *passengerList) {
    Bus::passengerList = passengerList;
}

std::string Bus::toString() const {
    std::stringstream output;
    output << " The bus with the driver: " << driver->getName() << "\n  " << passengerList->toString();
    return output.str();
}


