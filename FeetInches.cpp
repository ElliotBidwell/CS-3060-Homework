//Implementation file for FeetInches class
#include <cstdlib>
#include "FeetInches.h"

/*
Definition of member function simplify. This function checks for values
in the inches member >12 or <0. If found, numbers feet and inches are adjusted
to conform to a standard feet and inches expression. For example, 3' 14" would
be 4' 2", and 5' 2" would be adjusted to 4' 10".
*/
void FeetInches::simplify() {
	if (inches >= 12) {
		feet += (inches / 12);
		inches = inches % 12;
	}
	else if (inches < 0) {
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);
	}
}

//Overloaded binary + operator
FeetInches FeetInches::operator + (const FeetInches& right) {
	FeetInches temp;

	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.simplify();
	return temp;
}

//Overloaded binary - operator
FeetInches FeetInches::operator - (const FeetInches& right) {
	FeetInches temp;

	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;
	temp.simplify();
	return temp;
}

/*
Overloaded prefix ++ operator. Causes the inches member to
be incremented. Returns the incremented object.
*/
FeetInches FeetInches::operator ++ () {
	++inches;
	simplify();
	return *this;
}

/*
Overloaded prefix ++ operator. Causes the inches member to
be incremented. Returns value of object before the increment
*/
FeetInches FeetInches::operator ++ (int) {
	FeetInches temp(feet, inches);
	inches++;
	simplify();
	return temp;
}

/*
Overloaded > operator. Returns true if the current object
is a set to a value less than that of right.
*/
bool FeetInches::operator > (const FeetInches& right) {
	bool status;

	if (feet > right.feet) {
		status = true;
	}
	else if (feet == right.feet && inches > right.inches) {
		status = true;
	}
	else {
		status = false;
	}

	return status;
}

/*
Overloaded < operator. Returns true if the current object
is a set to a value greater than that of right.
*/
bool FeetInches::operator < (const FeetInches& right) {
	bool status;

	if (feet < right.feet) {
		status = true;
	}
	else if (feet == right.feet && inches < right.inches) {
		status = true;
	}
	else {
		status = false;
	}

	return status;
}

/*
Conversion function to convert a Feetinches
object to a double
*/
FeetInches::operator double() {
	double temp = feet;
	temp += (inches / 12.0);
	return temp;
}

/*
Conversion function to convert a Feetinches
object to a double
*/
FeetInches::operator int() {
	return feet;
}

//New operators

/*
Overloaded >= operator. Returns true if the current
object is set to a value greater than or equal to
that right.
*/
bool FeetInches::operator >= (const FeetInches& right) {
	bool status;

	if ((*this > right) || (*this == right)) {
		status = true;
	}
	else {
		status = false;
	}

	return status;
}

/*
Overloaded <= operator. Returns true if the current
object is set to a value less than or equal to
that right.
*/
bool FeetInches::operator <= (const FeetInches& right) {
	bool status;

	if ((*this < right) || (*this == right)) {
		status = true;
	}
	else {
		status = false;
	}

	return status;
}

/*
Overloaded <= operator. Returns true if the current
object is set to a value not equal to that of right.
*/
bool FeetInches::operator != (const FeetInches& right) {
	bool status;

	if (*this == right) {
		status = false;
	}
	else {
		status = true;
	}

	return status;
}