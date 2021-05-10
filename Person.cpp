//
// Created by ESCINF on 9/5/2021.
//

#include "Person.h"

Person::Person() {}

Person::Person(const std::string &name, int id) : name(name), id(id) {}

Person::~Person() {}




const std::string &Person::getName() const {
    return name;
}
int Person::getId() const {
    return id;
}


void Person::setName(const std::string &name) {
    Person::name = name;
}
void Person::setId(int id) {
    Person::id = id;
}

std::string Person::toString() {
    std::stringstream output;
    output<<"Nombre: "<<getName()
          <<"\nIdentification: "<<getId()<<std::endl;
    return output.str();
}
