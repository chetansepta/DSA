#include <iostream>
using namespace std;

int findMissingElement(int arr[], int size, int range) {
    bool found;
    
    for (int i = 1; i <= range; i++) {
        found = false;
        
        for (int j = 0; j < size; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            return i;
        }
    }
    
    return -1;  
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};  
    int size = sizeof(arr) / sizeof(arr[0]);
    int range = 6;  

    int missing = findMissingElement(arr, size, range);
    cout << "Missing element: " << missing << endl;

    return 0;
}
