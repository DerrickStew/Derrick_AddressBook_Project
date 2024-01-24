#pragma once
#include <iostream>
using namespace std;
class addressType
{
private:
	string address = "";
	string city = "";
	string state = "XX";
	int zipCode = 10000;

public:

	//preconditions - address and city are supplied, supply state as a valid postal abbrev.
	//                supply zipcode as a 5-digit integer > 10000
	// postcondition - use supplied values for address and city, validate state and zipcode
	void print();
	addressType(string = "(Your address)", string = "(Your city)", string = "XX", int = 10000);

	// setState
	// preconditions - supplied value is a vaild postal (2 character) state abbreviation
	// postcondition - use the value supplied if valid, otherwise use the default ("XX")
	void setState(string st);

	//setZipcode
	// precondtions - supplied is a 5 digit integer > 10000
	// postcondition - use the supplied if valid, otherwise use the default (10000)
	void setZipcode(int zip);

	void setAddress(string add) { address = add; }

	string getState() { return state; }
};

