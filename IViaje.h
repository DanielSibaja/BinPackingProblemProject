//
// Created by ESCINF on 9/5/2021.
//

#ifndef BINPACKINGPROBLEM_IVIAJE_H
#define BINPACKINGPROBLEM_IVIAJE_H

#include "PassengerManager.h"

class IViaje {
public:
    virtual ~IViaje();
    virtual PassengerManager distribucion(int *vectorBurbujas, int tamBus, int cantBurbujas, Passenger *_passenger) = 0;
};


#endif //BINPACKINGPROBLEM_IVIAJE_H
