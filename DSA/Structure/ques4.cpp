#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle rectangles[5];

    cout << "Enter details of 5 rectangles:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for rectangle " << i + 1 << ":\n";
        cout << "Length: ";
        cin >> rectangles[i].length;
        cout << "Width: ";
        cin >> rectangles[i].width;
    }

    cout << "\nRectangle Areas:\n";
    for (int i = 0; i < 5; i++) {
        float area = rectangles[i].length * rectangles[i].width;
        cout << "\nRectangle " << i + 1 << " Area: " << area << "\n";
    }

    return 0;
}