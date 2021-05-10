//
// Created by ESCINF on 9/5/2021.
//

#include "BinPacking.h"

BinPacking::~BinPacking() {

}

PassengerManager BinPacking::distribucion(int *vectorBurbujas, int tamBus, int cantBurbujas, Passenger *_passenger) {
    int binCount = 1;

    //Driver *driver = new Driver();
    Driver *driver = new Driver("Daniel",123,50);
    Bus *bus = new Bus("toyota", "2000", 20, driver);
    BusManager *busManager = new BusManager();
    int m = tamBus;
    for (int i = 0; i < cantBurbujas; i++) {
        if (m - *(vectorBurbujas+ i) > 0) {
            m -= *(vectorBurbujas + i);
            busManager->addBus(*bus);
            bus->getPassengerList()->addPassenger(*_passenger);
            continue;
        } else {
            binCount++;
            busManager->addBus(*bus);
            m = tamBus;
            i--;
        }
    }

    // cout << "Number of buses required: " << binCount;
}


