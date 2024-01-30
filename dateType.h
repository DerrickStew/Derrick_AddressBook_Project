#pragma once
class dateType
{
private:
	int dMonth = 1;
	int dDay = 1;
	int dYear = 1900; 
	
	// isDateGood
	// preconditions - supplied values are 3 integers
	// postconditions - true is returned if date is valid and false otherwise 
	bool isDateGood(int, int, int);

public:

	dateType(int = 1, int = 1, int = 1900);

	// setDate
	// preconditions - supplied values are 3 integers 
	// postcondition - use the values supplied if valid, otherwise use the default (1,1,1900)
	void setDate(int, int, int);

	// print
	//postcondition - date is displayed
	void print();

	// isLeapYear
	// preconditions - supplied value is an integer
	// postcondition - true is returned if year is a leap year and false otherwise
	bool isLeapYear(int);

	int getDay() { return dDay;  }
	int getMonth() { return dMonth;  }
	int getYear() { return dYear;  }

};

