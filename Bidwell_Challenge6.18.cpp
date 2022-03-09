/*
Elliot Bidwell
CS 3060 002
Homework challenge 6.18
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Constants
const int WALL_AREA_PER_GALLON = 110;
const double HOURS_PER_110_SQUARE_FEET = 8;
const double HOURLY_RATE = 25.0;

//Prototypes
int getNumberOfRooms();
double getPaintPrice();
double getWallSquareFeet();
int numberOfGallons(double);
double laborHours(double);
void displayCost(int, double, double);

int main() {

    //Variables
    int numRooms;
    double paintPrice;
    int totalWallArea = 0;
    int gallons;
    double hours;

    //Get the number of rooms
    numRooms = getNumberOfRooms();

    //Get the price of paint per gallon
    paintPrice = getPaintPrice();

    for (int i = 1; i <= numRooms; i++) {
        int wallArea;
        cout << "Room " << i << ": ";
        wallArea = getWallSquareFeet();
        totalWallArea += wallArea;
    }

    //Get the number of gallons of paint
    gallons = numberOfGallons(totalWallArea);

    //Get the number of labor hours
    hours = laborHours(totalWallArea);

    //Display the cost of the paint job
    displayCost(gallons, paintPrice, hours);

    return 0;
}

int getNumberOfRooms() {
    int rooms;

    //Get the number of rooms
    cout << "Please input the number of rooms: ";
    cin >> rooms;

    //Validate input
    while (rooms < 1) {
        cout << "Number of rooms must be 1 or greater.\n";
        cout << "Please input the number of rooms: ";
        cin >> rooms;

    }

    return rooms;
}

double getPaintPrice() {
    double price;

    //Get price per gallon of paint
    cout << "Please input the price for a gallon of paint:";
    cin >> price;

    //Validate input
    while (price < 10.00) {
        cout << "The price must be $10.00 or greater.\n";
        cout << "Please input the price for a gallon of paint:";
        cin >> price;
    }

    return price;
}

double getWallSquareFeet() {
    double wallSquareFeet;

    //Get wall square footage
    cout << "Please input the square footage of wall space: ";
    cin >> wallSquareFeet;

    //Validate input
    while (getWallSquareFeet < 0) {
        cout << "Wall area must be a positive number.\n";
        cout << "Please input the square footage of wall space: ";
        cin >> wallSquareFeet;
    }

    return wallSquareFeet;
}
int numberOfGallons(double totalWallArea) {
    double doubleGallons;
    double remainder;
    int intGallons;

    //Calculate as double and truncate to int
    doubleGallons = totalWallArea / WALL_AREA_PER_GALLON;
    intGallons = static_cast<int>(doubleGallons);
    remainder = doubleGallons - static_cast<int>(doubleGallons);

    //Add a gallon if some remainder exists
    if (remainder > 0) {
        intGallons++;
    }

    return intGallons;

}

double laborHours(double totalWallArea) {
    double hours;
    
    //Calculate labor hours
    hours = (totalWallArea / WALL_AREA_PER_GALLON) * HOURS_PER_110_SQUARE_FEET;

    return hours;
}

void displayCost(int gallons, double paintPrice, double hours) {
    double totalPaintCost;
    double totalLaborCost;
    double totalCharges;

    //Calculate paint cost
    totalPaintCost = gallons * paintPrice;

    //Calculate labor cost
    totalLaborCost = hours * HOURLY_RATE;

    //Calculate total cost
    totalCharges = totalPaintCost + totalLaborCost;

    //Display breakdown of charges
    cout << "Gallons of paint required: " << gallons << endl;
    cout << "Price of paint per gallon: $" << paintPrice << endl;
    cout << "Total cost of paint: $" << totalPaintCost << endl;
    cout << "Labor hours required: " << hours << endl;
    cout << "Hourly rate for labor: $" << HOURLY_RATE << endl;
    cout << "Total labor cost: $" << totalLaborCost << endl;
    cout << "Total overall cost: $" << totalCharges << endl;

}