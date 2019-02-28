//begin person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
private:
	string lastName;
	string firstName;
	float  payRate;
	float  hoursWorked;
public:
	
	Person();  // initializer 
	
	void setLastName(string lastName);
	
	string getLastName();      // completed in person.cpp
	
	void setFirstName(string _first);
	
	string getFirstName();     // completed in person.cpp  
	
	void setPayRate(float _rate);
	
	float getPayRate();       // completed in person.cpp
	
	void setHoursWorked(float _hours);
	
	float getHoursWorked();    // completed in person.cpp
	
	float totalPay();
	
	string fullName();
};
#endif // end person.h

