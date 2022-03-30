/*
	
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

//Design a class named employee

class Employee {
private:
	//Member variables
	string name;
	string number;
	string hireDate;

public:
	//Default constructor
	Employee() {
		name = "";
		number = "";
		hireDate = "";
	}

	//Constructor
	Employee(string aName, string aNumber, string aDate) {
		name = aName;
		number = aNumber;
		hireDate = aDate;
	}

	//Mutators
	void setName(string n) {
		name = n;
	}

	void setNumber(string num) {
		number = num;
	}

	void setHireDate(string date) {

	}
	//Accessors

};
#endif