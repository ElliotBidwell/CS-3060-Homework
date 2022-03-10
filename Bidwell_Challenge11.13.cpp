/*
Elliot Bidwell
CS 3060 Section 002
Challenge 11.13 Drink Machine Simulator

Desctription:

*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

//Constants for array
const int NUM_DRINKS = 5;

//Declaration of drink struct
struct Drink
{
    string name;
    double price;
    int num;
};

//Prototypes
int getChoice(Drink []);
void transaction(Drink [], int, double &);

int main() {

   //Menu choice
   int choice;
   
   //Drink machine earnings
   double earnings = 0;
   
   //Array of drinks
   Drink machine[NUM_DRINKS] = {
       {"Cola      ", 0.75, 20},
       {"Root Beer ", 0.75, 20},
       {"Lemon-Lime", 0.75, 20},
       {"Grape-Soda", 0.80, 20},
       {"Cream-Soda", 0.80, 20} };
   
   
   //Set floating-point output formatting
   cout << fixed << showpoint << setprecision(2);

   //Display the menu and process the user's choice
   choice = getChoice(machine);
   while (choice != 5) {
       //Process transaction
       transaction(machine, choice, earnings);

       //Get the next choice
       choice = getChoice(machine);
   }

   //Display the machine's total earnings
   cout << "Total earnings: $" << earnings << endl;

   return 0;
}

int getChoice (Drink m[]) {
    //The user's choice
    int choice;

    cout << endl;

    //Display a list of drinks preceded by a number
    for (int i = 0; i < NUM_DRINKS; i++) {
        cout << (i + 1) << ") " << m[i].name << "\t\t";
        cout << m[i].price << endl;
    }

    //Display the last menu item, which is to leave the drink menu screen
    cout << (NUM_DRINKS + 1) << ") Leave the drink machine menu\n\n";

    //Get user's choice.
    cout << "Choose one: ";
    cin >> choice;

    //Validate choice
    while (choice < 1 || choice > 6) {
        cout << "Invalid choice. Choose one: ";
        cin >> choice;
    }

    //Return the choice, as a subscript into the array of drinks.
    return choice - 1;
}

void transaction(Drink m[], int choice, double &earnings) {
    //The amount of money tendered
    double money;
    
    //if the drink selected is sold out, display a message and exit function
    if (m[choice].num == 0) {
        cout << "Sorry, that selection is sold out.\n";
        return;
    }
    
    //Get some money from the customer
    cout << "Enter an amount of money: ";
    cin >> money;
    
    //Make sure customer entered at least enough for the selected drink, and no more than $1.00.
    while (money < m[choice].price || money > 1.0) {
        cout << "Enter at least " << m[choice].price;
        cout << " and not more than 1 dollar.\n";
        cin >> money;
    }
    
    //Process the selection and give back any change that is due.
    if (money >= m[choice].price) {
        
        //Dispense the drink
        cout << "\nThump, thump, thump, splat!\n"
            << "Enjoy your beverage!\n\n";

        //Calculate change that is due.
        cout << "Change calculated: "
            << (money - m[choice].price) << endl;

        //If change is due, give it to the customer.
        if ((money - m[choice].price) > 0) {
            cout << "Your change, " << (money - m[choice].price)
                << " has just dropped into the change dispenser.\n\n";
        }

        //Update our earnings.
        earnings += m[choice].price;

        //Decrease number of cans of selected drink currently in the machine.
        m[choice].num--;

        //Display the number of cans of this drink currently in the machine.
        cout << "There are " << m[choice].num << " drinks of that type left.\n";
    }
}