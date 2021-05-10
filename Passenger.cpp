//
// Created by ESCINF on 9/5/2021.
//

#include "Passenger.h"

Passenger::Passenger() {}

Passenger::Passenger(bool ticket, int numAcomp) : ticket(ticket), numAcomp(numAcomp) {}

Passenger::Passenger(const std::string &name, int id, bool ticket, int numAcomp)
        : Person(name, id), ticket(ticket),numAcomp(numAcomp) {}

Passenger::~Passenger() {}



bool Passenger::isTicket() const {
    return ticket;
}
int Passenger::getNumAcomp() const {
    return numAcomp;
}


void Passenger::setTicket(bool ticket) {
    Passenger::ticket = ticket;
}
void Passenger::setNumAcomp(int numAcomp) {
    Passenger::numAcomp = numAcomp;
}



std::string Passenger::toString() {
    std::stringstream output;
    Person::toString();
    output<<"Numero de acompañantes: "<<getNumAcomp();
    return output.str();
}



