/*
Elliot Bidwell
CS 3060 Section 002
Homework programming challenge 8.8
Search Benchmarks

Desctription:

*/

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 20;
const int SEARCH_VALUE = 521;

int linearSearchBench(int[], int, int);
int binarySearchBench(int[], int, int);

int main()
{

//To hold the number of comparisons
int comparisons;


int tests[ARRAY_SIZE] = { 101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600 };

cout << "Searching for the value " << SEARCH_VALUE << " located near the end of the array.\n" << endl;

comparisons = linearSearchBench(tests, ARRAY_SIZE, SEARCH_VALUE);

cout << "The linear search made " << comparisons;
cout << " comparisons.\n" << endl;

comparisons = binarySearchBench(tests, ARRAY_SIZE, SEARCH_VALUE);

cout << "The binary search made " << comparisons;
cout << " comparisons.\n" << endl;



return 0;
}

int linearSearchBench(int values[], int size, int value) {
    int comparisons = 0;
    int index = 0;
    int position;
    bool found = false;

    while (index < size && !found) {

        if (values[index] == value) {
            found = true;
            position = index;
        }
        
        comparisons++;
        index++;
    }
    
    cout << "Array position " << position << endl;

    return comparisons;
}

int binarySearchBench(int values[], int size, int value) {
    int comparisons = 0;
    int first = 0;
    int last = size - 1;
    int middle;
    int position = -1;
    bool found = false;

    while (!found && first <= last) {
        middle = (first + last) / 2;

        if (values[middle] == value) { //If value in middle of search range
            found = true;
            position = middle;
        }
        else if (values[middle] > value) { //If value in lower half of the search range
            last = middle - 1; //Set search range to lower half of current range
        }
        else if (values[middle] < value) { //If value in upper half of search range
            first = middle + 1; //Set search range to upper half of current range
        }

        comparisons++;
    }

    cout << "Array position " << position << endl;
    
    return comparisons;
}