#include "dateType.h"
#include <iostream>

using namespace std;

void dateType::print()
{
	cout << dMonth << "-" << dDay << "-" << dYear << endl;
}

dateType::dateType(int month, int day, int year)
{
	// check for valid date
	if (isDateGood(month, day, year))
	{
		dMonth = month;
		dDay = day;
		dYear = year;
	}
	else
	{
		cout << "Date invalid, setting date to:";
	}
}

void dateType::setDate(int month, int day, int year)
{
	// check for valid date
	if (isDateGood(month, day, year))
	{
		dMonth = month;
		dDay = day;
		dYear = year;
	}
	else
	{
		cout << "Date invalid, setting to 1/1/1900" << endl;
		dMonth = 1;
		dDay = 1;
		dYear = 1900;
	}
}

bool dateType::isDateGood(int month, int day, int year)
{
	// check for valid year (>1900)
	if (year < 1900)
		return false;

	// check for valid month 
	if (month < 1 || month > 12)
		return false;

	// check for valid number a day can be in general
	if (day < 1 || day > 31)
		return false;
	// check for valid number a day can be in specific month
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;

	// check for leap year, february
	if (month == 2)
	{
		if (isLeapYear(year))
		{
			if (day > 29)
				return false;
		}
		else {
			if (day > 28)
				return false;
		}
	}
	return true;
}

bool dateType::isLeapYear(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return true;
	}
	else
		return false;
}