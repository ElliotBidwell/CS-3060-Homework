/******************************************************************************
Elliot Bidwell
Challenge 12.11

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

//Constant for the array size
const int SIZE = 12;

//Definition of Division Structure
struct Division
{
    char divName[SIZE]; //Division name
    int quarter;
    double sales;
};

int main()
{
    //Need file stream object,
    fstream file("corp.dat", ios::out, ios::binary);
    
    //Division structure variables for each division
    Division east, west, north, south; 
    
    //loop counter for each quarter
    int qtr;
    
    //Assign division names to the division variable
    strcpy_s(east.divName, "East");
    strcpy_s(west.divName, "West");
    strcpy_s(north.divName, "North");
    strcpy_s(south.divName, "South");
    
    return 0;
}
