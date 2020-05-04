#include <iostream>

#include "Date1.h" //include a header file for definition

using namespace std;

// Exercise 2 Question 1
// constructor is a function that is used to initialize the data members of it's class
Date1::Date1()
{
	day1 = 10;
	month1 = 12;
	year1 = 2001;
}

// this is an overload method. It is the same method as a constructor or another method, however it has a different parameter. It will be used if the main functions calls a method that matched it's parameter
Date1::Date1(int day3, int month3, int year3)
{
	day1 = day3;
	month1 = month3;
	year1 = year3;
}

// destructor is a function that destroys the value of data members
Date1::~Date1()
{

}

void Date1::setDate1(int day2, int month2, int year2)
{
	day1 = day2;
	month1 = month2;
	year1 = year2;
}

void Date1::printDate1()
{
	cout << "Date: " << day1 << "." << month1 << "." << year1 << endl;
}

// Extra note: a method is divided by 2 which is set and get
// set is a method that sets the value of a data member
// get is a method that returns or pass the value of data member that is set.