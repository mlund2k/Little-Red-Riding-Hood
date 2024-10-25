#include "time2.h"
//constructor with order
Time::Time(int order) : order(order){
    if(order <= 0 ) {throw("order must be >0");}
}
//default constructor
Time::Time(){}

//Accessor function
int Time::getTime () {
    return this->order;
}

//Returns JSON with order
Json::Value Time::dump2JSON (void){
    Json::Value result {};
    result["order"] = this->order;
    
    return result;
}