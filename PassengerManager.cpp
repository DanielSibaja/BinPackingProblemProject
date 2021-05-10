//
// Created by ESCINF on 9/5/2021.
//

#include "PassengerManager.h"

const std::vector<Passenger> &PassengerManager::getPassengerList() const {
    return passengerList;
}

void PassengerManager::setPassengerList(const std::vector<Passenger> &passengerList) {
    PassengerManager::passengerList = passengerList;
}
bool PassengerManager::addPassenger(Passenger _passenger){
    passengerList.push_back(_passenger);
    return true;
}

std::string PassengerManager::toString() {
    std::stringstream output;
    unsigned int contPassenger = passengerList.size();
    if (contPassenger == 0) {
        output << " has 0 passenger ";
        return output.str();
    }
    output << " has ";
    for (unsigned int cont = 0; cont < contPassenger; ++cont) {
        output << passengerList.at(cont).toString();
    }
    output << " passenger. ";
    return output.str();
}