#include "location.h"
using namespace std;

//constructor with place
Location::Location(string place) : place(place) {}
//empty constructor
Location::Location(){}
//to access place from outside
string Location::getPlace(){
    return this->place;
}

//returns JSON with place
Json::Value Location::dump2JSON (void){
    Json::Value result { };

    if (this->place != ""){
        result["place"] = this->place;
    }

    return result;
}