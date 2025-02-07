#include <iostream>
using namespace std;

void findPairWithSum(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] <<endl;
                return;
            }
        }
    }
    cout << "No pair found with the given sum!" << endl;
}

int main() {
    int arr[] = {10, 45, 23, 89, 55, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 100;

    findPairWithSum(arr, size, target);

    return 0;
}
