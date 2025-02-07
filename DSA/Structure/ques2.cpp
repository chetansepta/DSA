#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
};

int main() {
    Book books[5];

    cout << "Enter details of 5 books:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        cout << "Title: ";
        cin.ignore();
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Price: ";
        cin >> books[i].price;
    }

    cout << "\nBook Details:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        cout << "Title: " << books[i].title << "\n";
        cout << "Author: " << books[i].author << "\n";
        cout << "Price: " << books[i].price << "\n";
    }

    return 0;
}
