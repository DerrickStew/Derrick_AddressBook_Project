#include "addressBookType.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void addressBookType::initEntry(string fileName)
{
	ifstream inFile;
	string firstName, lastName;
	int month, day, year;
	string addr, city, st;
	int zip;
	string phone, relation;

	inFile.open(fileName);
	if (!inFile.is_open())
		cout << "Could not open file" << endl;
	while (inFile >> firstName)
	{
		inFile >> lastName >> month >> day >> year;
		inFile.ignore();
		getline(inFile, addr);
		getline(inFile, city);
		inFile >> st >> zip >> phone >> relation;
		extPersonType person(firstName, lastName, month, day,
			year, addr, city, st, zip, phone, relation);
		addEntry(person);
	}
}

void addressBookType::addEntry(extPersonType person)
{
	if (length != maxLength)
	{
		addressList[length] = person;
		length++;
	}
	else
	{
		cout << "Address book is full";
	}
}

void addressBookType::findPerson(string lName)
{
	for (int i = 0; i < length; i++)
	{
		if (addressList[i].getLastName() == lName)
		{
			addressList[i].print();
			break;
		}
	}
}

void addressBookType::findBirthdays(int month)
{
	bool mFound = false;
	for (int i = 0; i < length; i++)
	{
		if (addressList[i].getBirthMonth() == month)
		{
			addressList[i].print();
			mFound = true;
		}
	}
	if (!mFound)
		cout << "No persons found within given month" << endl;
}

void addressBookType::findRelations(string relationship)
{
	bool rFound = false;
	for (int i = 0; i < length; i++)
	{
		if (addressList[i].getRelationship() == relationship)
		{
			addressList[i].print();
			rFound = true;
		}
	}
	if (!rFound)
		cout << "No persons found with given relationship" << endl;
}

void addressBookType::print()
{
	for (int i = 0; i < length; i++)
	{
		addressList[i].print();
	}
}

void addressBookType::sortEntries()
{
	extPersonType temp;
	int index;
	bool placeFound;
	int current = 1;
	while (current < length)
	{
		index = current;
		placeFound = false;
		while (index > 0 && !placeFound)
		{
			if (addressList[index].getLastName() < addressList[index - 1].getLastName())
			{
				temp = addressList[index];
				addressList[index] = addressList[index - 1];
				addressList[index - 1] = temp;
				index = index - 1;
			}
			else
			{
				placeFound = true;
			}
		}
		current++;
	}
}

