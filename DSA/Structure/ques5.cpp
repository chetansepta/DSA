#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time times[5];

    cout << "Enter details of 5 time values:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter time " << i + 1 << " (HH MM SS): ";
        cin >> times[i].hours >> times[i].minutes >> times[i].seconds;
    }

    cout << "\nEntered Times:\n";
    for (int i = 0; i < 5; i++) {
        cout << (times[i].hours < 10 ? "0" : "") << times[i].hours << ":"
             << (times[i].minutes < 10 ? "0" : "") << times[i].minutes << ":"
             << (times[i].seconds < 10 ? "0" : "") << times[i].seconds << "\n";
    }

    return 0;
}