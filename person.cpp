#include "person.h"
using namespace std;

//constructor with person's name
Person::Person(const string name) : name(name) {}
//empty constructor
Person::Person(){}
//to access Person object's name
string Person::getName(){
    return this->name;
}

//returns JSON with person's name
Json::Value Person::dump2JSON (void){
    Json::Value result { };

    if (this->name != ""){
        result["name"] = this->name;
    }

    return result;
}