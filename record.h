#ifndef _RECORD_H_
#define _RECORD_H_

#include <memory>
#include "time2.h"
#include "person.h"
#include "thing.h"
#include "location.h"

#include "common.h"

class Record{
	private:
		Location place;
		Time time;
		//these lists will hold the people/things in the record
		list<Person> personList;
		list<Thing> thingList;
	public:
		//constructor with a single object of each type
		Record(Person, Thing, Location, Time);
		//constructor that takes in lists for things and people
		Record(list<Person>, list<Thing>, Location, Time);
		//Default constructor
		Record();
		
		virtual Json::Value dump2JSON();
};

#endif