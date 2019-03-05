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
	
	inline Person();  // initializer 
	
	void inline setLastName(string lastName);
	
	string inline getLastName();      // completed in person.cpp
	
	void inline setFirstName(string _first);
	
	string inline getFirstName();     // completed in person.cpp  
	
	void inline setPayRate(float _rate);
	
	float inline getPayRate();       // completed in person.cpp
	
	void inline setHoursWorked(float _hours);
	
	float inline getHoursWorked();    // completed in person.cpp
	
	float inline totalPay();
	
	string inline fullName();
};
#endif  // end person.h


