//
// Created by ESCINF on 9/5/2021.
//

#ifndef BINPACKINGPROBLEM_BINPACKING_H
#define BINPACKINGPROBLEM_BINPACKING_H

#include "IViaje.h"
#include "BusManager.h"
#include <vector>

class BinPacking: public IViaje{

public:
    ~BinPacking();
    PassengerManager distribucion(int *vectorBurbujas, int tamBus, int cantBurbujas, Passenger *_passenger) override;



};


#endif //BINPACKINGPROBLEM_BINPACKING_H
