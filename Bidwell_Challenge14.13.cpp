/*
Elliot Bidwell
CS 3060 Section 002
Challenge 14.13 Carpet Calculator
*/

#include <iostream>
#include "FeetInches.h"
#include "RoomDimension.h"
#include "RoomCarpet.h"
#include "FeetInches.cpp"
using namespace std;

int main() {
	//Variables for room length
	int lengthFeet, lengthInches;

	//Variables  for room width
	int widthFeet, widthInches;

	//Carpetcost per square foot
	double costPerFoot;

	FeetInches length;

	//Get the room's length
	cout << "Please input the feet component of the room's length: ";
	cin >> length;
	//cout << "Please input the inches component of the room's length: ";
	//cin >> lengthInches;

	/*FeetInches length();*/

	//Get the room's width
	cout << "Please input the feet component of the room's width: ";
	cin >> widthFeet;
	cout << "Please input the inches component of the room's width: ";
	cin >> widthInches;

	//FeetInches width(widthFeet, widthInches);

	//Create RoomDimension object
	//RoomDimension dimensions(length, width);

	//Get cost of carpet per square foot
	cout << "Please cost per square foot of carpet: ";
	cin >> costPerFoot;

	//Create a RoomCarpet object
	//RoomCarpet room(dimensions, costPerFoot);

	//Display the cost
	//cout << "The cost of carpeting the room is: $" << room.getTotalCost() << endl;
}
