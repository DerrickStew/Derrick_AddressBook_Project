#pragma once
#include "extPersonType.h"
class addressBookType
{
private:
	int maxLength = 500;
	int length = 0; 
	extPersonType addressList[500];

public:
	// precondition - file exists
	// postcondition - reads data from file into list
	// note: going to call addEntry(person)
	void initEntry(string fileName );

	// precondition - a person is supplied
	// postcondition - person is added to list
	void addEntry(extPersonType person);

	// precondition - last name is supplied
	// postcondition - prints entry for that person if found
	void findPerson(string lName);

	// precondition - birth month is supplied
	// postcondition - prints names of all persons who have
	// supplied birth month
	void findBirthdays(int month);

	// precondition - relationship is supplied
	// postcondition - prints names of all persons who have
	// supplied relationship
	void findRelations(string relationship);

	// postcondition - prints all entries in list
	void print();

	// precondtion - list is not empty
	// postcondition - list is sorted in alphabetical order 
	// by last name 
	void sortEntries();
};

