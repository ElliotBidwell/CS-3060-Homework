/*
Elliot Bidwell
CS 3060 Section 002
Challenge 10.12 Password Requirements

Desctription:

*/

#include <iostream>
using namespace std;

//Global constants
const int SIZE = 30;
const int MIN = 6;

//Function prototypes
void displayRequirements();
void displayResults(char[]);
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
    cout << "Please enter your password:\n";
    cin.getline(cstring, SIZE);
    
    displayResults(cstring);
    
    return 0;
}


void displayRequirements() {
    //Display the password requirement
    cout << "Requirements:" << endl;
    cout << "The password must be at least " << MIN << " characters long,\n"
        << "have at least 1 uppercase and 1 lowercase character, and\n"
        << "have at least 1 digit.\n" << endl;
}

void displayResults(char str[]) {
    
    if (isValid(str)) {
        cout << "The password is valid.\n";
        
    }
    else {
        cout << "The password is invalid:\n";
        
        //Determine if the length of the string is invalid
        if (!hasLength(str)) {
            cout << "Too short. Must be at least " << MIN << " characters long.\n";
        }
        
        //Determine if the string contains a lowercase
        if (!hasLower(str)) {
            cout << "It should contain at least one lowercase letter.\n";
        }
        
        //Determine if the string contains an uppercase
        if (!hasUpper(str)) {
            cout << "It should contain at least one uppercase letter.\n";
        }
        
        //Determine if the string contains a digit
        if (!hasDigit(str)) {
            cout << "It should contain at least one digit.\n";
        }
        
    }
}

bool isValid(char str[]) {
    bool status = false;

    //If password meets all criteria
    if (hasLength(str) && hasLower(str) && hasUpper(str) && hasDigit(str)) {
        status = true;
    }

    return status;
}

bool hasLength(char str[]) {
    bool status = false; //Status flag
    int count = 0;

    while (*str != '\0') {
        //Increment counter variable
        count++;

        //Go to the next character
        *str++;
    }

    //Determine if counter variable is greater or equal to the minimum number of characters
    if (count >= MIN) {
        //If so, set status to to true
        status = true;
    }

    return status;
}

bool hasLower(char str[]) {
    bool status = false; //Status flag
    int count = 0;

    //Test each char until null is reached or lowercase is found
    while (*str != '\0' && count == 0) {

        //Determine if char is lowercase
        if (islower(*str)) {
            //If so, add to counter
            count++;
        }
        else {
            //If not, go to next char
            *str++;
        }
    }

    //Determine if lowercase chars counter is greater than 0
    if (count > 0) {
        //If so, status is true
        status = true;
    }

    //Return status
    return status;
}

bool hasUpper(char str[]) {
    bool status = false; //Status flag
    int count = 0;

    //Test each char until null is reached or uppercase is found
    while (*str != '\0' && count == 0) {

        //Determine if char is uppercase
        if (isupper(*str)) {
            //If so, add to counter
            count++;
        }
        else {
            //If not, go to next char
            *str++;
        }
    }

    //Determine if uppercase chars counter is greater than 0
    if (count > 0) {
        //If so, status is true
        status = true;
    }

    //Return status
    return status;
}

bool hasDigit(char str[]) {
    bool status = false; //Status flag
    int count = 0;

    //Test each char until null is reached or digit is found
    while (*str != '\0' && count == 0) {

        //Determine if char is lowercase
        if (isdigit(*str)) {
            //If so, add to counter
            count++;
        }
        else {
            //If not, go to next char
            *str++;
        }
    }

    //Determine if lowercase chars counter is greater than 0
    if (count > 0) {
        //If so, status is true
        status = true;
    }

    //Return status
    return status;
}