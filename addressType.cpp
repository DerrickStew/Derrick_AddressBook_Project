#include "addressType.h"
#include <iostream>

using namespace std;

void addressType::print()
{
	cout << address << endl;
	cout << city << state << " " << zipcode << endl;
}


// constructor with parameters
addressType::addressType(string add, string cty, string st, int zip)
{
	address = add;
	city = cty;
	setState(st);
	setZipcode(zip);
}

void addressType::setState(string st)
{
	if (st.length() > 2)
	{
		state = " XX";
		cout << "State is invalid" << endl;
	}
	else
		state = " " + st + ",";
}

void addressType::setZipcode(int zip)
{
	if (zip == 10000) //case for default constructor 
	{
		zipcode = zip;
	}
	else if (zip <= 11111) //case for outside lowerbound zipcode
	{
		zipcode = 10000;
		cout << "Zipcode is invalid" << endl;
	}
	else if (zip > 99999) //case for upperbound zipcode
	{
		zipcode = 10000;
		cout << "Zipcode is invalid" << endl;
	}
	else
		zipcode = zip;
}