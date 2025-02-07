#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    string occupation;
};

int main() {
    Person persons[5];

    cout << "Enter details of 5 persons:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for person " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, persons[i].name);
        cout << "Age: ";
        cin >> persons[i].age;
        cin.ignore();
        cout << "Occupation: ";
        getline(cin, persons[i].occupation);
    }

    cout << "\nPerson Details:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nPerson " << i + 1 << ":\n";
        cout << "Name: " << persons[i].name << "\n";
        cout << "Age: " << persons[i].age << "\n";
        cout << "Occupation: " << persons[i].occupation << "\n";
    }

    return 0;
}
