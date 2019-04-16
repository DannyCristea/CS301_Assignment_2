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
	
	string getLastName();      
	
	void setFirstName(string _first);
	
	string getFirstName();    
	
	void setPayRate(float _rate);
	
	float getPayRate();       
	
	void setHoursWorked(float _hours);
	
	float getHoursWorked();   
	
	float totalPay();
	
	string fullName();
};
#endif  // end person.h


