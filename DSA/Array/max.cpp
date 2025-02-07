#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int arr[] = {10, 45, 23, 89, 12, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum element: " << findMax(arr, size) << endl;
    return 0;
}
