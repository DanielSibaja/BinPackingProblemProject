//
// Created by ESCINF on 9/5/2021.
//

#ifndef BINPACKINGPROBLEM_PASSENGERMANAGER_H
#define BINPACKINGPROBLEM_PASSENGERMANAGER_H

#include <vector>
#include <ostream>
#include <sstream>
#include "Passenger.h"
class PassengerManager {
private:
    std::vector<Passenger>passengerList;
public:
    const std::vector<Passenger> &getPassengerList() const;
    void setPassengerList(const std::vector<Passenger > &passengerList);
    bool addPassenger(Passenger _passenger);
    std::string toString();
};


#endif //BINPACKINGPROBLEM_PASSENGERMANAGER_H
