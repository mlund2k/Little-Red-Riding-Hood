#include "time2.h"
#include "person.h"
#include "thing.h"
#include "location.h"
#include "record.h"

#include "string.h"
int main(){
	//create people objects
	Person Mom {"Mom"};
  	Person LRRH {"Little Red Riding Hood"};
	Person Grandmother {"Grandmother"};
	Person Wolf {"Wolf"};

    //create location objects
	Location Spot {"A particular spot in the wood"};
	Location House {"House under three large oak trees"};
	Location Unknown;

    //create thing objects. 
	Thing Cap = {"Red cap", LRRH};
	Thing Nothing;
    Thing Cake {"Cake", LRRH, Mom};
    Thing Wine {"Wine", LRRH, Mom};

    //create time objects
    Time time1{1}; 
    Time time2{2};
    Time time3{3};
    Time time4{4};

    //create records for each event and call dump2JSON
    Record Record1{LRRH, Cap, Unknown, time1};
    cout << "Record 1:\n" << Record1.dump2JSON().toStyledString() << endl;

    Record Record2{{LRRH, Mom}, {Cake, Wine}, Unknown, time2};
    cout << "Record 2:\n" << Record2.dump2JSON().toStyledString() << endl;

    Record Record3{{LRRH, Wolf}, {Nothing}, Spot, time3};
    cout << "Record 3:\n" << Record3.dump2JSON().toStyledString() << endl;

    Record Record4{Grandmother, Nothing, House, time4};
    cout << "Record 4:\n" << Record4.dump2JSON().toStyledString() << endl;

    return 0;
}