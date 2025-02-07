#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    Date dates[5];

    cout << "Enter details of 5 dates:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for date " << i + 1 << " (DD MM YYYY): ";
        cin >> dates[i].day >> dates[i].month >> dates[i].year;
    }

    cout << "\nEntered Dates:\n";
    for (int i = 0; i < 5; i++) {
        cout << dates[i].day << "/" << dates[i].month << "/" << dates[i].year << "\n";
    }

    return 0;
}
