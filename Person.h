//
// Created by ESCINF on 9/5/2021.
//

#ifndef BINPACKINGPROBLEM_PERSON_H
#define BINPACKINGPROBLEM_PERSON_H

#include <sstream>

class Person {
private:
    std::string name;
    int id;
public:
    Person();
    Person(const std::string &name, int id);
    virtual ~Person();

    const std::string &getName() const;
    int getId() const;

    void setName(const std::string &name);
    void setId(int id);

    virtual std::string toString();




};


#endif //BINPACKINGPROBLEM_PERSON_H
