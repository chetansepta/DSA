#include <iostream>
using namespace std;

struct Product {
    string name;
    float price;
    int quantity;
};

int main() {
    Product products[5];
    float totalCost = 0;

    cout << "Enter details of 5 products:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for product " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, products[i].name);
        cout << "Price: ";
        cin >> products[i].price;
        cout << "Quantity: ";
        cin >> products[i].quantity;
        totalCost += products[i].price * products[i].quantity;
    }

    cout << "\nProduct Details:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nProduct " << i + 1 << ":\n";
        cout << "Name: " << products[i].name << "\n";
        cout << "Price: " << products[i].price << "\n";
        cout << "Quantity: " << products[i].quantity << "\n";
        cout << "Total Cost: " << (products[i].price * products[i].quantity) << "\n";
    }

    cout << "\nTotal cost of all products: " << totalCost << "\n";

    return 0;
}
