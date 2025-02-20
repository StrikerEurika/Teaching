# include <iostream>
# include <fstream> // file input/output library

using namespace std;

int main() {
    fstream file; // file object

    // open file for reading
    file.open("example_01.txt", ios::out); // iso::out = write mode

    // write to file
    file << "Hello, My name is Luffy." << endl;
    for (int i = 0; i < 50; i++) {
        file << i << " ";
    }
    
    // close file
    file.close();

    return 0;
}

