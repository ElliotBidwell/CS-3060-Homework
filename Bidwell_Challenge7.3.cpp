#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int getTotal(int[], int);
int posOfLargest(int[], int);
int posOfSmallest(int[], int);

int main() {

	//Constant for number of salsa types
	const int NUM_TYPES = 5;

	//Array for names of salsa types
	string types[NUM_TYPES] = { "mild", "medium", "sweet", "hot", "zesty" };

	//Array for sales of each salsa type
	int sales[NUM_TYPES];

	//Total number of jars sold
	int totalJarsSold;

	//Subscript of the salsa that sold the most
	int hiSalesProduct;

	//Subscript of the salsa that sold the least
	int loSalesProduct;

	//Get the number of jars sold for each type of salsa
	for (int type = 0; type < NUM_TYPES; type++) {
		
		//Get number of jars sold
		cout << "Jars sold last month of " << types[type] << ": ";
		cin >> sales[type];

		//Validate the input
		while (sales[type] < 0) {

			cout << "Jars sold must be 0 or more. Please re-enter: ";
			cin >> sales[type];
		}
	}

	totalJarsSold = getTotal(sales, NUM_TYPES);
	hiSalesProduct = posOfLargest(sales, NUM_TYPES);
	loSalesProduct = posOfSmallest(sales, NUM_TYPES);

	//Display sales for each type of salsa
	cout << "\n\nSales and Totals:\n";
	for (int type = 0; type < NUM_TYPES; type++) {
		cout << "Jars sold last month of " << types[type] << ": " << sales[type] << "\n";
	}

	//Display the total sales, highest seller, and lowest seller
	cout << "Total number of jars sold: " << totalJarsSold << "\n";
	cout << "Highest number of jars sold: " << types[hiSalesProduct] << " at " << sales[hiSalesProduct] << " jars\n";
	cout << "Lowest number of jars sold: " << types[loSalesProduct] << " at " << sales[loSalesProduct] << " jars\n";

	return 0;
}

//This function sums up the values of the array passed in and returns that sum
int getTotal(int sales[], int size) {
	int total = 0;

	for (int i = 0; i < size; i++) {
		total += sales[i];
	}

	return total;
}

//This function calculates the index of the largest value in the array passed in and returns it
int posOfLargest(int sales[], int size) {
	int indexOfLargest = 0;

	for (int i = 0; i < size; i++) {
		if (sales[i] > sales[indexOfLargest]) {
			indexOfLargest = i;
		}
	}

	return indexOfLargest;
}

//This function calculates the index of the smallest value in the array passed in and returns it
int posOfSmallest(int sales[], int size) {
	int indexOfSmallest = 0;

	for (int i = 0; i < size; i++) {
		if (sales[i] < sales[indexOfSmallest]) {
			indexOfSmallest = i;
		}
	}

	return indexOfSmallest;
}