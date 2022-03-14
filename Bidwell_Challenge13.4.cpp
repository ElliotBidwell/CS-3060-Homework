/*
Elliot Bidwell
CS 3060 Section 002
Challenge 13.4

*/

#include <iostream>
#include <string>
using namespace std;

// class declaration
class PersonalInfo
{

private:
    string name;
    string address;
    int age;
    string phone;

public:
    // Default constructor set all fields to null/0.
    PersonalInfo()
    {
        name = "";
        address = "";
        age = 0;
        phone = "";
    }

    // Overloaded Constructor
    PersonalInfo(string n, string addr, int a, string p)
    {
        setName(n);
        setAddress(addr);
        setAge(a);
        setPhone(p);
    }

    // Mutator functions
    void setName(string n)
    {
        name = n;
    }

    void setAddress(string a)
    {
        address = a;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setPhone(string p)
    {
        phone = p;
    }

    // Accessor functions
    string getName() const
    {
        return name;
    }

    string getAddress() const
    {
        return address;
    }

    int getAge() const
    {
        return age;
    }

    string getPhone() const
    {
        return phone;
    }
};

// Function prototye
void displayPersonalInfo(PersonalInfo);

// Demo program
int main()
{
    // Create the first instance of PersonalInfo.
    PersonalInfo me("Herb Dorfmann",
        "27 Technology Drive",
        25, "555-1212");

    // Create an instance for a family member.
    PersonalInfo auntSally("Sally Dorfmann",
        "48 Friendly Street",
        50, "555-8484");

    // Create an instance for a friend.
    PersonalInfo joe("Joe Looney",
        "191 Apple Mountain Road",
        30, "555-2222");

    // Display the data in each object.
    displayPersonalInfo(me);
    displayPersonalInfo(auntSally);
    displayPersonalInfo(joe);

    return 0;
}

//displayPersonalInfo function
void displayPersonalInfo(PersonalInfo obj)
{
    cout << "Name: " << obj.getName()
        << endl;
    cout << "Address: " << obj.getAddress()
        << endl;
    cout << "Age: " << obj.getAge()
        << endl;
    cout << "Phone: " << obj.getPhone()
        << endl << endl;
}