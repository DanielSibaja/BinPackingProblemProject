//
// Created by ESCINF on 9/5/2021.
//

#include "BusManager.h"

BusManager::BusManager() {
    std::vector <Bus> B;
    B.size()==10;
}

BusManager::BusManager(const std::vector<Bus> &busList) : busList(busList) {
    std::vector <Bus> B;
    B.size()==10;
}
BusManager::~BusManager() {}


const std::vector<Bus> &BusManager::getBusList() const {
    return busList;
}



void BusManager::setBusList(const std::vector<Bus> &busList) {
    BusManager::busList = busList;
}



std::string BusManager::toString() const {
    std::stringstream output;
    unsigned int contBus = busList.size();
    if (contBus == 0) {
        output << "There is 0 bus ";
        return output.str();
    }
    output << "There is: "<<contBus<<" buses.\n\n";
    for (unsigned int cont = 0; cont < contBus; ++cont) {
        output<<contBus+1;
        output << "Has as driver "<<busList.at(cont).getDriver()->getName()
               <<" and this bus has "<<busList.size()<<std::endl<<" passengers.";
    }
    return output.str();
}


bool BusManager::addBus(Bus _bus) {
    busList.push_back(_bus);
    return true;
}


