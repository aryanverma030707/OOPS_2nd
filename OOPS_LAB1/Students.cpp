#include <iostream>
#include <string>
using namespace std;

float average(int marks[]) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }

    return sum / 5.0;
}

int main() {
    string name, degree;
    int sem;
    int marks[5];
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Degree: ";
    getline(cin, degree);

    cout << "Enter Semester: ";
    cin >> sem;

    cout << "Enter Marks of 5 Subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }
    cout << "\n----- Student Details -----\n";
    cout << "Name      : " << name << endl;
    cout << "Degree    : " << degree << endl;
    cout << "Semester  : " << sem << endl;
    cout << "Marks     : ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }
    cout << "\nAverage Marks : " << average(marks) << endl;

    return 0;
}