#pragma once
//Specification file for the FeetInches class
#ifndef FEETINCHES_H
#define FEETINCHES_H
#include <iostream>

using namespace std;

class FeetInches; //Forward declaration

//Function prototypes for Overloaded Stream Operators
ostream& operator << (ostream&, const FeetInches&);
istream& operator >> (istream&, FeetInches&);

//The FeetInches class holds distances or measurements
//expressed in feet and inches

class FeetInches {
private:
	int feet;
	int inches;
	void simplify();
public:
	//Constructor
	FeetInches(int f = 0, int i = 0) {
		feet = f;
		inches = i;
		simplify();
	}

	//Copy constructor
	FeetInches(FeetInches& right) {
		feet = right.feet;
		inches = right.inches;
	}

	//Mutators
	void setFeet(int f) {
		feet = f;
	}

	void setInches(int i) {
		inches = i;
		simplify();
	}

	//Multiply function
	FeetInches multiply(FeetInches obj) {
		FeetInches temp;
		temp.feet = feet * obj.feet;
		temp.inches = inches * obj.inches;
		temp.simplify();
		return temp;
	}

	//Accessor functions
	int getFeet() const {
		return feet;
	}

	int getInches() const {
		return inches;
	}

	//Overloaded operator functions
	FeetInches operator + (const FeetInches&);
	FeetInches operator - (const FeetInches&);
	FeetInches operator ++ ();
	FeetInches operator ++ (int);
	bool operator > (const FeetInches&);
	bool operator < (const FeetInches&);
	bool operator == (const FeetInches&);

	//New operators
	bool operator >= (const FeetInches&);
	bool operator <= (const FeetInches&);
	bool operator != (const FeetInches&);

	//Conversion functions
	operator double();
	operator int();

	//Friends
	friend ostream& operator << (ostream&, const FeetInches&);
	friend istream& operator >> (istream&, FeetInches&);
};

#endif