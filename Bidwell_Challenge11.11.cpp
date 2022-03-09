/*
Elliot Bidwell
CS 3060 Section 002
Homework programming challenge 11.11

Desctription:
    This program creates a monthly itemized budget with a struct based on user input user input and compares the items
    to the original budget figures to determine whether the user has gone over or under bugdet and if so by how much.
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Constants for budget
const double HOUSING = 500.0;
const double UTIL = 150.0;
const double HOUSEHOLD = 65.0;
const double TRANSPORT = 50.0;
const double MEDICAL = 30.0;
const double INSURANCE = 100.0;
const double ENTERTAIN = 150.0;
const double CLOTHING = 75.0;
const double MISC = 50.0;

//Struct declaration
struct MonthlyBudget {
    
    double housing;
    double util;
    double household;
    double transport;
    double medical;
    double insurance;
    double entertain;
    double clothing;
    double misc;
};

//Prototypes
void getMonthlyBudget(MonthlyBudget&);
void displayMonthlyReport(const MonthlyBudget&);

int main() {
    
    //Monthly budget variable
    MonthlyBudget budget;

    //Populate the variable
    getMonthlyBudget(budget);

    //Display budget report
    displayMonthlyReport(budget);

    return 0;
}

//Function gets monthly budget items from user input
void getMonthlyBudget(MonthlyBudget& mb) {

    //Get the amount for housing
    cout << "Enter the amount spent for housing: ";
    cin >> mb.housing;

    //Get the amount for utilities
    cout << "Enter the amount spent for utilities: ";
    cin >> mb.util;

    //Get the amount for household
    cout << "Enter the amount spent for household expenses: ";
    cin >> mb.household;

    //Get the amount for transport
    cout << "Enter the amount spent for transportation: ";
    cin >> mb.transport;

    //Get the amount for medical
    cout << "Enter the amount spent for medical expenses: ";
    cin >> mb.medical;

    //Get the amount for insurance
    cout << "Enter the amount spent for insurance: ";
    cin >> mb.insurance;

    //Get the amount for entertainment
    cout << "Enter the amount spent for entertainment: ";
    cin >> mb.entertain;

    //Get the amount for clothing
    cout << "Enter the amount spent for clothing: ";
    cin >> mb.clothing;

    //Get the amount for miscellaneous
    cout << "Enter the amount spent for miscellaneous expenses: ";
    cin >> mb.misc;

}

//Function displays monthly budget from a MonthlyBudget struct
void displayMonthlyReport(const MonthlyBudget& mb) {
    //Variable holds amount that student is over or under
    double overUnder = 0.0;

    //Set up floating point formatting
    cout << setprecision(2) << fixed << showpoint;

    //Display headings
    cout << setw(18) << left << "\nCategory"
        << setw(11) << right << "Budgeted"
        << setw(10) << right << "Spent"
        << setw(16) << right << "Over(-)/Under" << endl;
    cout << "-----------------------------------------------------------------\n";

    //Get budget amounts for housing
    cout << setw(18) << left << "Housing"
        << setw(10) << right << HOUSING
        << setw(10) << right << mb.housing
        << setw(16) << right
        << (HOUSING - mb.housing) << endl;
    //Get the over/under
    overUnder += (HOUSING - mb.housing);

    //Get budget amounts for utilities
    cout << setw(18) << left << "Utilities"
        << setw(10) << right << UTIL
        << setw(10) << right << mb.util
        << setw(16) << right
        << (UTIL - mb.util) << endl;
    //Get the over/under
    overUnder += (UTIL - mb.util);

    //Get budget amounts for household
    cout << setw(18) << left << "Household"
        << setw(10) << right << HOUSEHOLD
        << setw(10) << right << mb.household
        << setw(16) << right
        << (HOUSEHOLD - mb.household) << endl;
    //Get the over/under
    overUnder += (HOUSEHOLD - mb.household);

    //Get budget amounts for transportation
    cout << setw(18) << left << "Transportation"
        << setw(10) << right << TRANSPORT
        << setw(10) << right << mb.transport
        << setw(16) << right
        << (TRANSPORT - mb.transport) << endl;
    //Get the over/under
    overUnder += (TRANSPORT - mb.transport);

    //Get budget amounts for medical
    cout << setw(18) << left << "Medical"
        << setw(10) << right << MEDICAL
        << setw(10) << right << mb.medical
        << setw(16) << right
        << (MEDICAL - mb.medical) << endl;
    //Get the over/under
    overUnder += (MEDICAL - mb.medical);

    //Get budget amounts for insurance
    cout << setw(18) << left << "Insurance"
        << setw(10) << right << INSURANCE
        << setw(10) << right << mb.insurance
        << setw(16) << right
        << (INSURANCE - mb.insurance) << endl;
    //Get the over/under
    overUnder += (INSURANCE - mb.insurance);

    //Get budget amounts for entertainment
    cout << setw(18) << left << "Entertainment"
        << setw(10) << right << ENTERTAIN
        << setw(10) << right << mb.entertain
        << setw(16) << right
        << (ENTERTAIN - mb.entertain) << endl;
    //Get the over/under
    overUnder += (ENTERTAIN - mb.entertain);

    //Get budget amounts for clothing
    cout << setw(18) << left << "Clothing"
        << setw(10) << right << CLOTHING
        << setw(10) << right << mb.clothing
        << setw(16) << right
        << (CLOTHING - mb.clothing) << endl;
    //Get the over/under
    overUnder += (CLOTHING - mb.clothing);

    //Get budget amounts for misc
    cout << setw(18) << left << "Miscellaneous"
        << setw(10) << right << MISC
        << setw(10) << right << mb.misc
        << setw(16) << right
        << (MISC - mb.misc) << endl;
    //Get the over/under
    overUnder += (MISC - mb.misc);

    //Display over/under for entire month
    if (overUnder >= 0) {
        cout << "\nFor the month you are under budget by $"
            << overUnder << endl;
    }
    else {
        cout << "\nFor the month you are over budget by $"
            << overUnder << endl;
    }
}
