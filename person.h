#ifndef _PERSON_H_
#define _PERSON_H_

#include "common.h"

class Person{
    private:
        std::string name;
    public:
        //constructor with name
        Person(const std::string);
        //empty constructor
        Person();
        //to access the Person's name
        string getName();
        virtual Json::Value dump2JSON();
};

#endif