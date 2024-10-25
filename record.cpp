#include "record.h"
#include "common.h"
//constructor with no lists for arguments, just a person, thing, location, time
Record::Record(Person name, Thing thing, Location place, Time time) : place(place), time(time)  {
        //initialize lists with these arguments
        personList.push_back(name); 
        thingList.push_back(thing);
}
//constructor that takes in lists for things and people
Record::Record(list<Person>personList, list<Thing> thingList, Location place, Time time)
: personList(personList), thingList(thingList), place(place), time(time) {}
//default constructor
Record::Record(){}

//returns JSON of the entire record
Json::Value Record::dump2JSON(void){
    Json::Value result {};
    Json::Value jv_result;

    //makes json arrayValue for "people" that has every JSON of the people in personList
    result["people"] = Json::arrayValue;
    for (Person person: personList) {
        jv_result = person.dump2JSON();
        result["people"].append(jv_result);
    }

    //makes json arrayValue for "things" that has every JSON of the thing in thingList
    result["things"] = Json::arrayValue;
    for (Thing thing: thingList) {
        jv_result = thing.dump2JSON();
        result["things"].append(jv_result);
    }
    
    //sets place and time JSON as well
    jv_result = place.dump2JSON();
    result["place"] = jv_result;

    jv_result = time.dump2JSON();
    result["time"] = jv_result;

    return result;
}