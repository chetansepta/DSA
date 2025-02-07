#include <iostream>
using namespace std;

struct Order {
    int orderNumber;
    string date;
    float totalCost;
};

int main() {
    Order orders[5];

    cout << "Enter details of 5 orders:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for order " << i + 1 << ":\n";
        cout << "Order Number: ";
        cin >> orders[i].orderNumber;
        cin.ignore();
        cout << "Date (DD/MM/YYYY): ";
        getline(cin, orders[i].date);
        cout << "Total Cost: ";
        cin >> orders[i].totalCost;
    }

    cout << "\nOrder Details:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nOrder " << i + 1 << ":\n";
        cout << "Order Number: " << orders[i].orderNumber << "\n";
        cout << "Date: " << orders[i].date << "\n";
        cout << "Total Cost: " << orders[i].totalCost << "\n";
    }

    return 0;
}