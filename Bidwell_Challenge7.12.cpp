/*
Elliot Bidwell
CS 3060 Section 002
Homework programming challenge 7.12

Desctription:

*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Constants
const int STUDENTS = 5;
const int TESTS = 4;

//Prototypes
void calculateLetterGrade(char &letterGrade, double testScores[]);

int main() {
	string name;
	int score;

	string students[STUDENTS];
	char letterGrades[STUDENTS];
	double stud1Scores[TESTS];
	double stud2Scores[TESTS];
	double stud3Scores[TESTS];
	double stud4Scores[TESTS];
	double stud5Scores[TESTS];

	//Get each student's name
	for (int i = 0; i < STUDENTS; i++) {
		cout << "Please enter the name for student #" << (i + 1) << ": ";
		cin >> name;

		students[i] = name;
	}

	cout << endl;

	//Get 4 test scores for student 1
	for (int i = 0; i < TESTS; i++) {
		cout << "Please enter " << students[0] << "'s score for test #" << (i + 1) << ": ";
		cin >> stud1Scores[i];

		//Validate test score
		while (stud1Scores[i] < 0 || stud1Scores[i] > 100) {
			cout << "Please enter a score from 0 to 100." << endl;
			cout << "Please enter " << students[0] << "'s score for test #" << (i + 1) << ": ";
			cin >> stud1Scores[i];
		}

	}

	cout << endl;

	//Get 4 test scores for student 2
	for (int i = 0; i < TESTS; i++) {
		cout << "Please enter " << students[1] << "'s score for test #" << (i + 1) << ": ";
		cin >> stud2Scores[i];

		//Validate test score
		while (stud2Scores[i] < 0 || stud2Scores[i] > 100) {
			cout << "Please enter a score from 0 to 100." << endl;
			cout << "Please enter " << students[1] << "'s score for test #" << (i + 1) << ": ";
			cin >> stud2Scores[i];
		}
	}

	cout << endl;

	//Get 4 test scores for student 3
	for (int i = 0; i < TESTS; i++) {
		cout << "Please enter " << students[2] << "'s score for test #" << (i + 1) << ": ";
		cin >> stud3Scores[i];

		//Validate test score
		while (stud3Scores[i] < 0 || stud3Scores[i] > 100) {
			cout << "Please enter a score from 0 to 100." << endl;
			cout << "Please enter " << students[2] << "'s score for test #" << (i + 1) << ": ";
			cin >> stud3Scores[i];
		}
	}

	cout << endl;

	//Get 4 test scores for student 4
	for (int i = 0; i < TESTS; i++) {
		cout << "Please enter " << students[3] << "'s score for test #" << (i + 1) << ": ";
		cin >> stud4Scores[i];

		//Validate test score
		while (stud4Scores[i] < 0 || stud4Scores[i] > 100) {
			cout << "Please enter a score from 0 to 100." << endl;
			cout << "Please enter " << students[3] << "'s score for test #" << (i + 1) << ": ";
			cin >> stud4Scores[i];
		}
	}

	cout << endl;

	//Get 4 test scores for student 5
	for (int i = 0; i < TESTS; i++) {
		cout << "Please enter " << students[4] << "'s score for test #" << (i + 1) << ": ";
		cin >> stud5Scores[i];

		//Validate test score
		while (stud5Scores[i] < 0 || stud5Scores[i] > 100) {
			cout << "Please enter a score from 0 to 100." << endl;
			cout << "Please enter " << students[4] << "'s score for test #" << (i + 1) << ": ";
			cin >> stud5Scores[i];
		}
	}

	cout << endl;

	//Caluculate average and letter grade for each student
	calculateLetterGrade(letterGrades[0], stud1Scores);
	calculateLetterGrade(letterGrades[1], stud2Scores);
	calculateLetterGrade(letterGrades[2], stud3Scores);
	calculateLetterGrade(letterGrades[3], stud4Scores);
	calculateLetterGrade(letterGrades[4], stud5Scores);

	//Display letter grades for each student
	for (int i = 0; i < STUDENTS; i++) {
		cout << "Final grade for " << students[i] << ": " << letterGrades[i] << endl;
	}

	return 0;
}

//Function calculates average and letter grade based on test scores
void calculateLetterGrade(char &letterGrade, double testScores[]) {

	double total = 0;
	double average;

	for (int i = 0; i < TESTS; i++) {
		total += testScores[i];
	}

	average = total / TESTS;

	if (average <= 59.0) {
		letterGrade = 'F';
	}
	else if (average >= 60.0 && average <= 69.0) {
		letterGrade = 'D';
	}
	else if (average >= 70.0 && average <= 79.0) {
		letterGrade = 'C';
	}
	else if (average >= 80.0 && average <= 89.0) {
		letterGrade = 'B';
	}
	else if (average >= 90.0 && average <= 100.0) {
		letterGrade = 'A';
	}

}