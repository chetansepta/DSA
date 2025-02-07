#include<iostream>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    Student students[5];

    cout << "Enter details of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Roll Number: " << students[i].rollNumber << "\n";
        cout << "Marks: " << students[i].marks << "\n";
    }

    return 0;
}