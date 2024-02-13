
#include <iostream>
#include "addressBookType.h"
using namespace std;

// menu options to run program
// postcondition - returns the user's selection
int showMenu()
{
	int userInput;
	cout << "ADDRESS BOOK MENU" << endl;
	cout << "NOTE: enter corresponding number to perform desired action";
	cout << endl << "1 - Search by last name " << endl;
	cout << "2 - Search by birth month " << endl;
	cout << "3 - Search by relationship " << endl;
	cout << "4 - Quit " << endl;
	cin >> userInput;
	return userInput;
}

int main()
{
	addressBookType addressBook;
	addressBook.initEntry("AddressBookData.txt");
	addressBook.sortEntries();
	int choice;
	addressBook.print();
	do
	{
		choice = showMenu();
		if (choice == 1)
		{
			string pLastName;
			cout << "Enter person's last name: " << endl;
			cin >> pLastName;
			addressBook.findPerson(pLastName);
		}
		else if (choice == 2)
		{
			int bMonth;
			cout << "Enter month as number: " << endl;
			cin >> bMonth;
			addressBook.findBirthdays(bMonth);
		}
		else if (choice == 3)
		{
			string relationship;
			cout << "Enter relationship: " << endl;
			cin >> relationship;
			addressBook.findRelations(relationship);
		}
		else if (choice == 4)
		{
			cout << "You have ended the program";
			break;
		}
		else
		{
			cout << "Invalid entry";
		}

	} while (choice != 4);
}
