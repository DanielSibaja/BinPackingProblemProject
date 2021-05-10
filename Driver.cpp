//
// Created by ESCINF on 9/5/2021.
//

#include "Driver.h"

Driver::Driver() {}

Driver::Driver(int expYears) : expYears(expYears) {}

Driver::Driver(const std::string &name, int id, int expYears) : Person(name, id), expYears(expYears) {}

Driver::~Driver() {}



int Driver::getExpYears() const {
    return expYears;
}


void Driver::setExpYears(int expYears) {
    Driver::expYears = expYears;
}

std::string Driver::toString() {
    std::stringstream output;
    Person::toString();
    output<<"Experience years: "<<getExpYears();
    return output.str();
}

