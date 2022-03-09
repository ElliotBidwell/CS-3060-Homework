/*
Elliot Bidwell
CS 3060 002
Homework challenge 6.6
*/

#include <iostream>

using namespace std;

double kineticEnergy(double, double);

int main()
{
    double mass = 0;
    double velocity = 0;
    
    //Get the object's mass
    cout << "Enter the object's mass in kilograms: " << endl;
    cin >> mass;
    
    //Get the object's velocity
    cout << "Enter the object's velocity in meters/second: " << endl;
    cin >> velocity;
    
    //Display
    cout << "\nThe Kinetic Energy of the object is " << kineticEnergy(mass, velocity) << " joules";
    
    return 0;
}

double kineticEnergy(double mass, double velocity) {
    double KE = 0.5 * mass * (velocity * velocity);

    return KE;
}