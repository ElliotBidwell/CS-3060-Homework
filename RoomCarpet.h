#pragma once
//Specification file for the RoomCarpet class
#ifndef ROOM_CARPET_H
#define ROOM_CARPET_H
#include "RoomDimension.h"

class RoomCarpet {
private:
	RoomDimension dimensions;
	double cost;

public:
	//Constructor
	RoomCarpet(RoomDimension rd, double c) {
		dimensions = rd;
		cost = c;
	}

	//getTotalCost function
	double getTotalCost() {
		double area = dimensions.getArea();
		return area = cost;
	}
};
#endif

