#include <iostream>
#include <fstream> // file input OR output library

using namespace std;

// student structure
struct Student {
    string name;
    string id;
    int age;
};

// write to file
int main()
{
    Student student[50]; // array of 50 students
    int numberOfStudents = 4;
    // input data
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Input data for student " << i + 1 << endl;
        cout << "Enter student " << i + 1 << " id: "; cin >> student[i].id;
        cout << "Enter student " << i + 1 << " name: "; cin >> student[i].name;
        cout << "Enter student " << i + 1 << " age: "; cin >> student[i].age;
        cout << endl;
    }

    // open the file
    fstream file;
    file.open("StudentList.txt", ios::out);

    // output and write to file
    cout << "The file content is: " << endl;
    for (int i = 0; i < numberOfStudents; i++) {
        // display
        cout << student[i].id << " ";
        cout << student[i].name << " ";
        cout << student[i].age << " " << endl;
        
        // write to file
        file << student[i].id << " ";
        file << student[i].name << " ";
        file << student[i].age << " " << endl;
    }

    // close
    file.close();

    return 0;
}
