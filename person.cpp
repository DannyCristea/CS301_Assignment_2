#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person::Person()   // initializer 
{
	lastName = "";
	firstName = "";
	payRate = 0.00;
	hoursWorked = 0.00;
}  

void Person::setLastName(string _last)
{
	lastName = _last;
}

string Person::getLastName()
{
	return lastName;
}

void Person::setFirstName(string _first)
{
	firstName = _first;
}

string Person::getFirstName() 
{
	return firstName;
}

void Person::setPayRate(float _rate)
{
	payRate = _rate;
}

float Person::getPayRate()
{
	return payRate;
}

void Person::setHoursWorked(float _hours)
{
	hoursWorked = _hours;
}

float Person::getHoursWorked()   // Person:: calls the public methods(functions) in person class.
{	
	return hoursWorked;
}


float Person::totalPay()
{
	return  0.00;
}
	
string Person::fullName()
{
	return "";
}