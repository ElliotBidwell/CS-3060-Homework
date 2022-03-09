/*
Elliot Bidwell
Homework challenge 11.14

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

//Constants for array size
const int NUM_BINS = 10;

//Declaration of InventoryBin structure
struct InventoryBin {
    
    string description;
    int num;

};

//Function prototypes
void selectBin(InventoryBin [], int);
void addParts(InventoryBin&, int);
void removeParts(InventoryBin&, int);


int main() {
    
    //The user's menu choice
    int choice;

    //Array of InventoryBins
    InventoryBin bins[NUM_BINS] = {
        {"Valve", 10},
        {"Bearing", 5},
        {"Bushing", 15},
        {"Coupling", 21},
        {"Flange", 7},
        {"Gear", 5},
        {"Gear Housing", 5},
        {"Vacuum Gripper", 25},
        {"Cable", 18},
        {"Rod", 112} };

    do
    {
        for (int count = 0; count < NUM_BINS; count++) {
            cout << "Bin #" << setw(3) << (count + 1);
            cout << ", Part: " << bins[count].description;
            cout << ", Quantity: " << bins[count].num << endl;
        }

        //Get the user's choice of bins
        cout << "\nEnter 0 to quit, or choose a bin number: ";
        cin >> choice;

        //Validate choice
        while (choice < 0 || choice > NUM_BINS) {
            cout << "\nError: Please enter a number from 0 to 10.";
            cout << "\nEnter 0 to quit, or choose a bin number: ";
            cin >> choice;
        }
        
        //Process choice
        if (choice != 0) {
            selectBin(bins, choice - 1);
        }

    } while (choice != 0);
    
    return 0;
}

void selectBin(InventoryBin b[], int choice) {
    
    int numParts; //Number of parts
    char aorr; //Add or remove
    
    //Get the user's desired action
    cout << "Add or Remove Parts (A or R)?: ";
    cin >> aorr;

    //Validate input
    while (toupper(aorr) != 'A' && toupper(aorr) != 'R') {
        
        cout << "Enter A or R: ";
        cin >> aorr;
    }
    
    //Process the selection. 'A' means Add, 'R' means Remove
    if (toupper(aorr) == 'A') {
        
        //Get number of parts to add
        cout << "How many parts to add?: ";
        cin >> numParts;
        
        //Add the parts
        addParts(b[choice], numParts);
    }
    else {
        
        //Get num of parts to remove
        cout << "How many parts to remove?: ";
        cin >> numParts;
        
        //Remove parts
        removeParts(b[choice], numParts);
    }
    
}

void addParts(InventoryBin& bin, int numAdd) {
    //Validate the numberof parts and add them if valid
    if (numAdd < 0) {
        cout << "\nError: Invalid entry. Please use positive numbers.\n" << endl;
    }
    else if (numAdd + bin.num > 30) {
        cout << "\nError: Invalid entry. Bins can only contain up to 30 parts.\n" << endl;
    }
    else {
        bin.num += numAdd;
    }
}

void removeParts(InventoryBin& bin, int numRem) {
    //Validate the number of parts and remove them if valid
    if (numRem < 0) {
        cout << "\nError: Invalid entry. Please use positive numbers.\n" << endl;
    }
    else if (bin.num - numRem < 0) {
        cout << "\nError: Invalid entry. You can not remove more parts than the bin contains.\n" << endl;
    }
    else {
        bin.num -= numRem;
    }
}