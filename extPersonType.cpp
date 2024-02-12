#include "extPersonType.h"
#include <iostream>

using namespace std;

extPersonType::extPersonType(string first, string last, int m, int d, int y,
	string a, string city, string state, int zip, string  phone, string r): 
	personType(first, last), birthdate(m,d,y), address(a, city, state, zip)
{
	phonenumber = phone;
	setRelationship(r);
}

void extPersonType::setRelationship(string relation)
{
	if (relation == "Family")
		relationship = "Family";
	else if (relation == "Friend")
		relationship = "Friend";
	else if (relation == "Business")
		relationship = "Business";
	else
		relationship = "";
}

void extPersonType::print()
{
	personType::print();
	birthdate.print();
	address.print();
	cout << phonenumber << endl << relationship << endl;
}
