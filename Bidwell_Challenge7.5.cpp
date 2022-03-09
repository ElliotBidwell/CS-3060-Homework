#include <iostream>
#include <iomanip>

using namespace std;

//Constants
const int MONKEYS = 3;
const int DAYS = 5;

//Function prototypes
void getFoodEaten(double[][DAYS]);
void displayAverageDaily(double[][DAYS]);
void displayLeastEaten(double[][DAYS]);
void displayMostEaten(double[][DAYS]);

int main() {
	//Array to hold the monkey data
	double food[MONKEYS][DAYS];

	//Get amount of food eaten
	getFoodEaten(food);

	//Display the average amount eaten daily by each monkey
	displayAverageDaily(food);

	//Display the lest amount eaten in a day by any one monkey
	displayLeastEaten(food);

	//Display the most amount eaten in a day by any one monkey
	displayMostEaten(food);
	
	return 0;
}

void getFoodEaten(double food[][DAYS]) {

	for (int monkey = 0; monkey < MONKEYS; monkey++) {

		for (int day = 0; day < DAYS; day++) {

			//Get the amount eaten by this monkey on this day
			cout << "Enter the pounds of food eaten by monkey number " << monkey + 1
				<< "\non day " << day + 1 << ": ";
			cin >> food[monkey][day];

			//Validate input
			while(food[monkey][day] < 0) {
				
				cout << "Enter a non-negative amount: ";
				cin >> food[monkey][day];
			}
		}
	}
}

void displayAverageDaily(double food[][DAYS]) {
	double total;
	double average;
	
	cout << endl;
	
	for (int day = 0; day < DAYS; day++) {
		//Initialize the accumulator
		total = 0.0;

		//Get total eaten by all monkeys on this day
		for (int monkey = 0; monkey < MONKEYS; monkey++) {
			total += food[monkey][day];
		}

		//Calculate the average
		average = total / MONKEYS;

		//Display the average
		cout << "Average food eaten on day " << day + 1 << ": " << average << " lbs" << endl;
	}
}

//This function calculates and displays the least amount of food eaten by any one monkey on any one day
void displayLeastEaten(double food[][DAYS]) {
	double leastFood;
	int leastMonkey;
	int leastDay;

	//Assume the least amount was eaten by the first monkey on the first day
	leastMonkey = 0;
	leastDay = 0;

	//Step through array comparing each value 
	for (int monkey = 0; monkey < MONKEYS; monkey++) {

		for (int day = 0; day < DAYS; day++) {
		
			if (food[monkey][day] < food[leastMonkey][leastDay]) {
				leastFood = food[monkey][day];
				leastMonkey = monkey;
				leastDay = day;
			}
		}
	}

	//Display results
	cout << "Monkey number " << leastMonkey + 1 << " ate the least amount of pounds of food\non day " << leastDay + 1 << " with " << food[leastMonkey][leastDay] << " lbs." << endl;
}

//This function calculates and displays the most amount of food eaten by any one monkey on any one day
void displayMostEaten(double food[][DAYS]) {
	double mostFood;
	int mostMonkey;
	int mostDay;

	//Assume the most amount was eaten by the first monkey on the first day
	mostMonkey = 0;
	mostDay = 0;

	//Step through array comparing each value 
	for (int monkey = 0; monkey < MONKEYS; monkey++) {

		for (int day = 0; day < DAYS; day++) {

			if (food[monkey][day] > food[mostMonkey][mostDay]) {
				mostFood = food[monkey][day];
				mostMonkey = monkey;
				mostDay = day;
			}
		}
	}

	//Display results
	cout << "Monkey number " << mostMonkey + 1 << " ate the most amount of pounds of food\non day " << mostDay + 1 << " with " << food[mostMonkey][mostDay] << " lbs." << endl;
}