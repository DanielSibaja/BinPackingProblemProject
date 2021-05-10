//
// Created by ESCINF on 9/5/2021.
//

#ifndef BINPACKINGPROBLEM_DRIVER_H
#define BINPACKINGPROBLEM_DRIVER_H

#include "Person.h"

class Driver: public Person {
private:
    int expYears;
public:
    Driver();
    Driver(int expYears);
    Driver(const std::string &name, int id, int expYears);

    virtual ~Driver();

    int getExpYears() const;
    void setExpYears(int expYears);

    std::string toString();
};



#endif //BINPACKINGPROBLEM_DRIVER_H
