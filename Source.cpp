#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    ofstream outputFile;

    // Open input and output files
    inputFile.open("inData.txt");
    outputFile.open("outData.txt");

    if (!inputFile || !outputFile) {
        cout << "Error opening files." << endl;
        return 1;
    }

    int num1, num2;
    char character;
    string message;

    // Read data from input file
    inputFile >> num1 >> num2 >> character >> message;

    // Calculate the sum of the two integers
    int sum = num1 + num2;

    // Increment the character by one (in ASCII sequence)
    character++;

    // Print data to the output file
    outputFile << "Sum of two integers: " << sum << endl;
    outputFile << "Character in ASCII sequence: " << character << endl;
    outputFile << "String message: " << message << endl;

    // Close the files
    inputFile.close();
    outputFile.close();

    cout << "Data processed and written to outData.txt." << endl;

    return 0;
}