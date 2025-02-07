#include <iostream>
using namespace std;

struct Employee {
    string name;
    int age;
    float salary;
    string department;
};

int main() {
    Employee employees[10];

    cout << "Enter details of 10 employees:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, employees[i].name);
        cout << "Age: ";
        cin >> employees[i].age;
        cout << "Salary: ";
        cin >> employees[i].salary;
        cin.ignore();
        cout << "Department: ";
        getline(cin, employees[i].department);
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "Name: " << employees[i].name << "\n";
        cout << "Age: " << employees[i].age << "\n";
        cout << "Salary: " << employees[i].salary << "\n";
        cout << "Department: " << employees[i].department << "\n";
    }

    return 0;
}
