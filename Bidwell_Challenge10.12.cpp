/*
Elliot Bidwell
CS 3060 Section 002
Homework programming challenge 10.12

Desctription:

*/

#include <iostream>
using namespace std;

//Global constants


//Function prototypes
void displayRequirements();
void displayResults();
bool isValid(char[]);
bool hasLength(char[]);
bool hasLower(char[]);
bool hasUpper(char[]);
bool hasDigit(char[]);

int main()
{
    char cstring[SIZE];
    
    //Display password requirements
    displayRequirements();

    //Get the password input
    cout << " ";
    cin.getline(cstring, SIZE);
    
    displayResults(cstring);
    
    return 0;
}


void displayRequirements() {
    //Display the password requirement
    cout << "Requirements:" << endl;
    cout << "The password "
}

void displayResults() {
    
    if (isValid(str)) {
        cout << "The password is valid\n";
        
    }
    else {
        cout << "The password is invalid\n";
        
        //Determine if the length of the string is invalid
        if (!hasLength(str)) {
            cout << "Too short. Must be at least " << MIN << " characters long.\n";
        }
        
        //Determine if the string contains a lowercase
        if (!hasUpper(str)) {
            cout << "It should contain at least one lowercase letter.\n";
        }
        
        //Determine if the string contains an uppercase
        if (!hasUpper(str)) {
            cout << "It should contain at least one uppercaseercase letter.\n";
        }
        
        //Determine if the string contains a digit
        if (!hasDigit(str)) {
            
        }
        
    }
}

bool isValid(char str[]) {
    
    return status;
}

bool hasLength(char str[]) {
    
    bool status = 0;
    int counter = 0;
    
    while (*str != '\0') {
        
    }
    
    return status;
}

bool hasLower(char str[]) {
    
    return status;
}

bool hasUpper(char str[]) {
    
}