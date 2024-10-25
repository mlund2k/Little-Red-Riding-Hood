#include "thing.h"
#include "person.h"
#include "common.h"

//constructor with thing, owner, and giver
Thing::Thing(std::string thing, Person owner, Person giver)
    : thing(thing), owner(owner), giver(giver){}

//constructor with thing and owner
Thing::Thing(std::string thing, Person owner)
    : thing(thing), owner(owner){}
//constructor with just thing
Thing::Thing(std::string thing) : thing(thing){}
//default constructor
Thing::Thing(){}

//accessor functions
string Thing::getThing(){
    return this->thing;
}
Person Thing::getOwner(){
    return this->owner;
}
Person Thing::getGiver() {
    return this->giver;
}

//returns JSON of entire thing object (including thing, owner, and giver when applicable)
Json::Value Thing::dump2JSON (void){
    Json::Value result { };

    if (this->thing != ""){
        result["name of thing"] = this->thing;
    }

    Json::Value jv_result;

    if (this->owner.getName() != ""){
        jv_result = (this->owner).dump2JSON();
        result["owner"] = jv_result;
    }

    if (this->giver.getName() != ""){
        jv_result = (this->giver).dump2JSON();
        result["giver"] = jv_result;
    }

    return result;
}