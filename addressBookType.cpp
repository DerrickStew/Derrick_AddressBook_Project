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
	while (inFile >> firstName)
	{
		inFile >> lastName >> month >> day >> year;
		inFile.ignore();
		getline(inFile, addr);
		getline(inFile, city);
		inFile >> st >> zip >> phone >> relation;
		extPersonType(firstName, lastName, month, day,
			year, addr, city, st, zip, phone, relation);
		length++;
	}
}
