# include <iostream>
# include <iomanip>
# include <fstream> // file input/output library

using namespace std;

// read
int main() {
    fstream file; // file object
    string id, name;
    int age; 

    // open file
    file.open("example_02.txt", ios::in); // ios::int = read mode

    // read from file
    while (!file.eof())
    {
        file >> id;
        file >> name;
        file >> age;
        cout << name << " " << age << " " << id << endl;
    }
    
    // close file
    file.close();

    return 0;
}