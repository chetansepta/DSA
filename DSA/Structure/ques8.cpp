#include <iostream>
using namespace std;

struct Customer {
    string name;
    string address;
    string phoneNumber;
};

int main() {
    Customer customers[10];

    cout << "Enter details of 10 customers:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nEnter details for customer " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, customers[i].name);
        cout << "Address: ";
        getline(cin, customers[i].address);
        cout << "Phone Number: ";
        getline(cin, customers[i].phoneNumber);
    }

    cout << "\nCustomer Details:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nCustomer " << i + 1 << ":\n";
        cout << "Name: " << customers[i].name << "\n";
        cout << "Address: " << customers[i].address << "\n";
        cout << "Phone Number: " << customers[i].phoneNumber << "\n";
    }

    return 0;
}
