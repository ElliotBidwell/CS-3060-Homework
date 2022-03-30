#pragma once
//Specification file for the RoomDimension class
#ifndef ROOM_DIMENSION_H
#define ROOM_DIMENSION_H
#include "FeetInches.h"

class RoomDimension {
private:
	FeetInches length;
	FeetInches width;
	FeetInches area;
public:
	
	//Default constructor
	RoomDimension() {

	}

	//Constructor
	RoomDimension(FeetInches len, FeetInches w) {
		length = len;
		width = w;
		area = len.multiply(w);
	}

	//Copy constructor
	RoomDimension(const RoomDimension& obj) {
		length = obj.length;
		width = obj.width;
		area = obj.area;
	}

	//getArea function
	FeetInches getArea() {
		return area;
	}
};
#endif
