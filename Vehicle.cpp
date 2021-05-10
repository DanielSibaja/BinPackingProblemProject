//
// Created by ESCINF on 9/5/2021.
//

#include "Vehicle.h"

Vehicle::Vehicle() {}
Vehicle::Vehicle(const std::string &brand,const std::string &model,int cantSeats)
        : brand(brand), model(model),cantSeats(cantSeats) {}

Vehicle::~Vehicle() {}


const std::string &Vehicle::getBrand() const {
    return brand;
}
const std::string &Vehicle::getModel() const {
    return model;
}
int Vehicle::getCantSeats() const {
    return cantSeats;
}


void Vehicle::setBrand(const std::string &brand) {
    Vehicle::brand = brand;
}
void Vehicle::setModel(const std::string &model) {
    Vehicle::model = model;
}
void Vehicle::setCantSeats(int cantSeats) {
    Vehicle::cantSeats = cantSeats;
}


std::string Vehicle::toString() {
    std::stringstream output;
    output << "brand: " << brand << std::endl
           << " model: " << model << std::endl
           << " cantSeats: " << cantSeats<< std::endl;
    return output.str();
}
