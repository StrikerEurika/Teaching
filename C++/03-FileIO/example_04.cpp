#include <iostream>
#include <fstream> // file input OR output library

using namespace std;

int main() {
    // Declare variables
    string dataToWrite = "This is a test string.";
    string dataRead;

    // Write to file
    ofstream writeFile("example_04.txt");
    if (writeFile.is_open()) {
        writeFile << dataToWrite;
        writeFile.close();
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    // Read from file
    ifstream readFile("example_04.txt");
    if (readFile.is_open()) {
        while (getline(readFile, dataRead)) {
            cout << "Data read from file: " << dataRead << endl;
        }
        readFile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}

