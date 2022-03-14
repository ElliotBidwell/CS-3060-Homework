/*
Elliot Bidwell
CS 3060 Section 002
Challenge 12.15

*/

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <fstream>
using namespace std;

// Function prototypes
int countSentences(string);
int countWords(string);

int main()
{
    int sentences;   // Number of sentences
    int words;       // Number of words
    double average;  // Average words per sentence

    // Get the number of sentences in the file.
    sentences = countSentences("text.txt");

    // Get the number of words in the file.
    words = countWords("text.txt");

    // Calculate the average words per sentence.
    average = static_cast<double>(words) / sentences;

    // Display the result.
    cout << "The file contains " << words
        << " words, and " << sentences
        << " sentences.\n";
    cout << "There is an average of "
        << setprecision(1) << fixed << average
        << " words per sentence.\n";

    return 0;
}

// countSentences function
int countSentences(string filename)
{
    const int SIZE = 500;  // Size of input array
    char input[SIZE];      // To hold file input
    fstream inputFile;     // File stream object
    int numSentences = 0;  // Number of sentences

    // Open the file in input mode.
    inputFile.open(filename, ios::in);
    if (!inputFile)
    {
        cout << "ERROR: Cannot open file.\n";
        exit(0);
    }

    // Read the file contents.
    inputFile.getline(input, SIZE);  // Use \n as a delimiter.
    while (!inputFile.eof())
    {
        // Step through input counting the number of periods.
        for (int index = 0; input[index] != '\0'; index++)
        {
            if (input[index] == '.')
                numSentences++;
        }
        inputFile.getline(input, SIZE);  // Use \n as a delimiter.
    }

    // Close the file.
    inputFile.close();

    // Return the number of sentences.
    return numSentences;
}

// countWords function
int countWords(string filename)
{
    const int SIZE = 500;  // Size of input array
    char input[SIZE];      // To hold file input
    fstream inputFile;     // File stream object
    int numWords = 0;      // Number of words

    // Open the file in input mode.
    inputFile.open(filename, ios::in);
    if (!inputFile)
    {
        cout << "ERROR: Cannot open file.\n";
        exit(0);
    }

    // Read the file contents.
    inputFile.getline(input, SIZE);  // Use \n as a delimiter.
    while (!inputFile.eof())
    {
        // Step through the string, counting words.
        int index = 0;
        while (input[index] != '\0')
        {
            // Skip over any whitespace characters.
            while (isspace(input[index]) && input[index] != '\0')
                index++;

            // If not at end of string, then count this as a word then skip over it.
            if (input[index] != '\0')
            {
                // beginning of a word so increment
                numWords++;

                // Skip over this word.
                while (!isspace(input[index]) && input[index] != '\0')
                    index++;
            }
        }

        // Read the next line from the file.
        inputFile.getline(input, SIZE);  // Use \n as a delimiter.
    }

    // Close the file.
    inputFile.close();

    // Return the number of words.
    return numWords;
}