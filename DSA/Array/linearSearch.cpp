#include <iostream>
using namespace std;

void searchElement(int arr[], int size, int target) { 
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << target << " found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found!" << endl;
}

int main() {
    int arr[] = {10, 45, 23, 89, 12, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 89;

    searchElement(arr, size, target);

    return 0;
}
