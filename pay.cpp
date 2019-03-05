#include "person.cpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readData(Person arr[], int size);   // fucntion declaration
void writeData(Person arr[], int size);  // function declaration

int main()
{
	int size = 20;
	Person arr[size];     // arr of obejct type Person

	readData(arr, size);   // calling the readData function.
	writeData(arr, size);  // calling the writeData function.
	
	return 0;
}

void readData(Person arr[], int size)
	{
		string fname, lname, name, dataFile;
		float pay, hours;
		int count = 0;
		
		ifstream inData;			// using the ifstream op
		inData.open("input.txt");   // opens input.txt

		while (!inData.eof())	 	// while not end of file (eof)
		{
			count++;
			for (int i = 0; i < count; i++)
				{
					getline(inData, dataFile);
					
					inData >> fname;
					inData >> lname;
					inData >> pay;
					inData >> hours;
					name = fname + " " + lname;
		
					arr[i].setFirstName(fname);
					arr[i].setLastName(lname);
					arr[i].setPayRate(pay);
					arr[i].setHoursWorked(hours);
					
					cout << name << " " << pay << " " << hours << endl;
			
			 	}			
		}
		inData.close();		
	}
	

void writeData(Person arr[], int size)  // should call fullname() and totalpay()
{
	ofstream outData;
	outData.open("output.txt");

	for (int i = 0; i < size; i++)
	{
		outData << arr[i].fullName() << " " << arr[i].totalPay() << endl;
	}
	outData.close();
}