//
// Created by ESCINF on 9/5/2021.
//

#ifndef BINPACKINGPROBLEM_NORMAL_H
#define BINPACKINGPROBLEM_NORMAL_H

#include "IViaje.h"

class Normal: public IViaje {
public:
    virtual ~Normal();
    virtual PassengerManager distribucion(int *vectorBurbujas, int tamBus, int cantBurbujas, Passenger *_passenger) override;
};


#endif //BINPACKINGPROBLEM_NORMAL_H
