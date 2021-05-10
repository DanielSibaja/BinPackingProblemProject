//
// Created by ESCINF on 9/5/2021.
//

#ifndef BINPACKINGPROBLEM_PASSENGER_H
#define BINPACKINGPROBLEM_PASSENGER_H


#include "Person.h"


class Passenger: public Person{
private:
    bool ticket;
    int numAcomp;
public:
    Passenger();
    Passenger(bool ticket, int numAcomp);
    Passenger(const std::string &name, int id, bool ticket, int numAcomp);

    virtual ~Passenger();

    bool isTicket() const;
    int getNumAcomp() const;

    void setTicket(bool ticket);
    void setNumAcomp(int numAcomp);

    std::string toString();
};


#endif //BINPACKINGPROBLEM_PASSENGER_H
