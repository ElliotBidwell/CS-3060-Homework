#pragma once
//Specification file for the RoomDimension class
#ifndef ROOM_DIMENSION_H
#define ROOM_DIMENSION_H
#include <iostream>

using namespace std;

class FeetInches;

ostream& operator << (ostream&, const FeetInches&);
istream& operator >> (istream&, FeetInches&);

class FeetInches {
private:
	int feet;
	int inches;
	void simplify();
public:

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

	}
};

#endif