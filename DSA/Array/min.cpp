#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
    int minElement = arr[0]; // Assume first element is the minimum
    for (int i = 1; i < size; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}

int main() {
    int arr[] = {10, 45, 23, 89, 12, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum element: " << findMin(arr, size) << endl;
    return 0;
}
