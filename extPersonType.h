#pragma once
#include "personType.h"
#include "addressType.h"
#include "dateType.h"

class extPersonType :
    public personType
{
private:
    addressType address;
    dateType birthdate;
    string phonenumber;
    string relationship;

public:
    // constructor
    // precondition - all necessary information is supplied (first and last name, 
    // birthdate, address, phone number, and relationship
    // postcondition - use supplied values to fill in information
    extPersonType(string = "", string = "", int = 1, int = 1, int = 1900,
        string = "", string = "", string = "XX", int = 10000, string = "None", string = "None");
    
    // setPhoneNumber
    // precondition - phone number is suppplied 
    // postcondition - use supplied value for phone number
    void setPhoneNumber(string number) { phonenumber = number;  }

    // setRelationship
    // precondition - relationship is supplied
    // postcondition - use supplied value for relationship if it's valid
    void setRelationship(string relation);


    // print
    // postcondition - date is displayed
    void print();

    string getPhoneNumber() { return phonenumber;  }
    string getRelationship() { return relationship;  }
    int getBirthMonth() { return birthdate.getMonth(); }
};

