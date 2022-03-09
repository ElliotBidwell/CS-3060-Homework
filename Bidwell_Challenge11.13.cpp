/******************************************************************************
Elliot Bidwell
Homework Challenge 11.13
*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//Declaration of drink struct
struct Drink
{
    string name;
    double price;
    int num;
};

//Prototypes
int get Choice(Drink []);
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
       {""
   
   
   //Set floating-point output formatting
   
   //Display the menu and process the user's choice
   
   //Display the machine's total earnings
    

    return 0;
}

int getChoice (Drink m[]) {
    //The user's choice
    
    //Display a list of drinks preceded by a number
    for (int i = 0, i < NUM_DRINKS, i++) {
        
    }
    
    
}

void transaction(Drink m[], int choice, double &earnings) {
    //The amount of money tendered
    double money;
    
    //if the drink selected is sold out, display a message an exit function
    if (m[choice].num == 0) {
        
    }
    
    //Get
    
    //Make sure
    while (money < m[choice].price || money > 1.0) {
        
    }
    
    if (money >= m[choice].price) {
        
    }
}