/*
Elliot Bidwell
Homework Problem 
Due 

*/

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 20;

int linearSearchBench(int[], int, int);
int binarySearchBench(int[], int, int);

int main()
{

//To hold the number of comparisons
int comparisons;


int tests[ARRAY_SIZE] = (101, 231, 157, 205, 132, 199, 460, 500, 323, 222, 190,
223, 301, 405, 555, 303, 111, 521, 536, 600);

cout << "Searching for the value 521",
<< "located near the end of the array.\n";

comparisons = linearSearchBench(tests, ARRAY_SIZE, 521);

cout << "The linear search made " << comparisons;
cout << " comparisons.\n";

comparisons = binarySearchBench(tests, ARRAY_SIZE, 521);

cout << "The binary search made " << comparisons;
cout << " comparisons.\n";



return 0;
}

int linearSearchBench(int values[], int size, int value) {

   
}

int binarySearchBench(int values[], int size, int value) {
 
    
}