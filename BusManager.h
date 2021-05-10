//
// Created by ESCINF on 9/5/2021.
//

#ifndef BINPACKINGPROBLEM_BUSMANAGER_H
#define BINPACKINGPROBLEM_BUSMANAGER_H

#include <vector>
#include <ostream>
#include "Bus.h"

class BusManager {
private:
    std::vector<Bus>busList;
public:
    BusManager(const std::vector<Bus> &busList);
    virtual ~BusManager();

    const std::vector<Bus> &getBusList() const;
    void setBusList(const std::vector<Bus> &busList);

    std::string toString()const;

    bool addBus(Bus _bus);

    BusManager();
};


#endif //BINPACKINGPROBLEM_BUSMANAGER_H
