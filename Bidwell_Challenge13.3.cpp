/*
Elliot Bidwell
CS 3060 Section 002
Homework programming challenge 13.3

Desctription:
    This program contains a class Car that holds variables for the year/model, the make, ant the spees of a car object.
The members of the class are an accelerate and braking function. The main function creates an object of the class Car,
calls the accelerate function 5 times and then calls the braking function 5 times.
*/


#include <iostream>
#include <string>
using namespace std;

class Car
{
private:

    int yearModel; //The car's make and model
    string make; //Car's make
    int speed; // Car's current speed

public:

    //Constructor
    Car(int y, string m) {
        yearModel = y;
        make = m;
        speed = 0;
    }

    //Accelerate function
    void accelerate() {
        speed += 5;
    }

    //Brake function
    void brake() {
        speed -= 5;
    }

    //Accessors
    int getYearModel() {
        return yearModel;
    }

    string getMake() {
        return make;
    }

    int getSpeed() {
        return speed;
    }
};

int main () {
    
    //loop counter
    int count;
    
    //Create car obj
    Car porsche(2206, "Porsche");
    
    //Display current speed
    cout << "Current speed: " << porsche.getSpeed() << endl;
    
    //Accelerate five times
    for (count = 0; count < 5; count++) {
        cout << "Accelerating...\n";
        porsche.accelerate();
        cout << "Current speed: " << porsche.getSpeed() << endl;
    }
    
    //Brake five times
    for (count = 0; count < 5; count++) {
        cout << "Braking...\n";
        porsche.brake();
        cout << "Current speed: " << porsche.getSpeed() << endl;
    }
    
    return 0;
}