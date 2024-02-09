#pragma once
#include <iostream>
using namespace std;

class personType
{
private:
	string firstName = "";
	string lastName = "";

public: 
	// precondition - first and last name are supplied
	// postcondition - use supplied values for first and last name
	personType(string first = "", string last = "")
	{
		setFirstName(first);
		setLastName(last);
	}

	// setFirstName
	// precondtion - supplied is a first
	// postcondition - first name is set to supplied name
	void setFirstName(string name) { firstName = name; }

	// setFirstName
	// precondtion - supplied is a first
	// postcondition - first name is set to supplied name
	void setLastName(string name) { lastName = name;  }

	// print
	// postcondition - first and last name are displayed 
	void print()
	{
		cout << firstName << " " << lastName << endl;
	}

	string getFirstName() { return firstName;  }
	string getLastName() { return lastName;  }
};

