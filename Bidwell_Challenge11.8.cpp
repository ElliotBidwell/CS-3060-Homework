/*
Elliot Bidwell
CS 3060 Section 002
Homework programming challenge 11.8

Desctription:
    This program holds an array of customer structs that each contain customer information. The program allows users to enter new customers with new info, 
search for existing ones, and change info for existing ones.
*/

#include <iostream>;
#include <iomanip>;
#include <string>;
using namespace std;

struct Customer
{
   string name;
   string address;
   string city;
   string state;
   string zip;
   string phone;
   double balance;
   string lastPay;
};

//Prototypes
void getInfo(Customer&);
void showInfo(Customer);
void showSearch(Customer[], string, int);

int main() {
   //Constant for number of accounts
   const int NUM_ACCOUNTS = 20;
   
   //Array for customer structs
   Customer account[NUM_ACCOUNTS];
   
   int maxCust = 0;
   int choice;
   int cust;
   int count;
   string search;
   
   do
   {
       //Display a menu
       cout << "1. Enter new account information\n";
       cout << "2. Change account information\n";
       cout << "3. Display all acount information\n";
       cout << "4. Search for a customer\n";
       cout << "5. Exit the program\n\n";

       //Get the user's choice
       cout << "Enter your choice: ";
       cin >> choice;

       //Validate the choice
       while (choice < 1 || choice > 5) {
           cout << "Please enter a valid choice.\n";
           cout << "Enter your choice: ";
           cin >> choice;
       }


       switch (choice) {
           
           //Enter new account info
           case 1:
                cin.get();
                getInfo(account[maxCust]);
                cout << "You have entered new information for customer number ";
                cout << maxCust << endl;
                maxCust++;
                break;
            
            //Change info for existing account
            case 2:
                cout << "Enter the customer number: ";
                cin >> cust;

                //Validate cust number
                while (cust < 0 || cust > maxCust) {
                    cout << "Please enter a valid customer number.\n";
                    cout << "Enter the customer number: ";
                    cin >> cust;
                }

                //Show account info
                showInfo(account[cust]);
                break;

            //Display all customer info
            case 3:
                cin.get();

                for (count = 0; count < maxCust; count++) {
                    showInfo(account[count]);
                    cout << "Press enter to continue...";
                    cin.get();
                }

                break;

            //Search for a customer
            case 4:
                cin.get();
                cout << "Enter part of the customer name: ";
                getline(cin, search);
                showSearch(account, search, maxCust);

       }
            
       
   } while (choice != 5);
   
   return 0; 
}

//Function gets customer info from user
void getInfo(Customer& c) {

    //Get customer name
    cout << "\nCustomer name: ";
    getline(cin, c.name);
    
    while (c.name.empty()) {
        cout << "You must enter a name.\n";
        cout << "\nCustomer name: ";
        getline(cin, c.name);
    }

    //Get customer address
    cout << "\nCustomer address: ";
    getline(cin, c.address);

    while (c.address.empty()) {
        cout << "You must enter an address.\n";
        cout << "\nCustomer address: ";
        getline(cin, c.address);
    }

    //Get customer city
    cout << "\nCustomer city: ";
    getline(cin, c.city);

    while (c.city.empty()) {
        cout << "You must enter a city.\n";
        cout << "\nCustomer city: ";
        getline(cin, c.city);
    }

    //Get customer state
    cout << "\nCustomer state: ";
    getline(cin, c.state);

    while (c.state.empty()) {
        cout << "You must enter a state.\n";
        cout << "\nCustomer state: ";
        getline(cin, c.state);
    }

    //Get customer zip code
    cout << "\nCustomer ZIP code: ";
    getline(cin, c.zip);

    while (c.zip.empty()) {
        cout << "You must enter a ZIP code.\n";
        cout << "\nCustomer ZIP code: ";
        getline(cin, c.zip);
    }

    //Get customer phone number
    cout << "\nCustomer phone number: ";
    getline(cin, c.phone);

    while (c.phone.empty()) {
        cout << "You must enter a phone number.\n";
        cout << "\nCustomer phone number: ";
        getline(cin, c.phone);
    }

    //Get customer account balance
    cout << "\nCustomer account balance: ";
    cin >> c.balance;

    while (c.balance < 0) {
        cout << "Balance must be greater than 0.\n";
        cout << "\nCustomer account balance: ";
        cin >> c.balance;
    }

    //Get the date of last payment
    cin.get();
    cout << "\nDate of last payment: ";
    getline(cin, c.lastPay);

    while (c.lastPay.empty()) {
        cout << "You must enter the date of the last payment.\n";
        cout << "\nDate of last payment: ";
        getline(cin, c.lastPay);
    }
}

//Function displays customer info
void showInfo(Customer c) {
    cout << fixed << showpoint << setprecision(2);
    cout << "Customer name: " << c.name << endl;
    cout << "Customer address: " << c.address << endl;
    cout << "City: " << c.city << endl;
    cout << "State: " << c.state << endl;
    cout << "ZIP: " << c.zip << endl;
    cout << "Phone number: " << c.phone << endl;
    cout << "Account balance: $" << c.balance << endl;
    cout << "Date of last payment: " << c.lastPay << endl << endl;
}

void showSearch(Customer c[], string s, int max) {
    bool found = false;

    //Step through array looking for accounts that match criteria
    for (int count = 0; count < max; count++) {
        if (c[count].name.find(s) != -1) {
            found = true;
            showInfo(c[count]);
        }
    }

    if (!found) {
        cout << "Customer record not found.\n";
        cout << "Press enter to continue...";
        cin.get();
    }
}