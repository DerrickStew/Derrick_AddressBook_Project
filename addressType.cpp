#include "addressType.h"
#include <iostream>

using namespace std;

void addressType::print()
{
	cout << address << endl;
	cout << city << ", " << state << " " << zipCode << endl;
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
		state = "XX";
		cout << "State is invalid" << endl;
	}
	else
		state = st;
}

void addressType::setZipcode(int zip)
{
	if (zip <= 10000)
	{
		zip = 10000;
		cout << "Zipcode is invalid" << endl;
	}
	else
		zipCode = zip;
}