#include<iostream>
using namespace std;

int main() {
    int size=5;
    int arr[size] = {8,7,1,6,4};

    for(int i=1;i<size;i++) {
        int j=i-1;
        int temp = arr[j];

        while(j>=0 && arr[j] > arr[i]) {
            arr[j] = arr[i];
            j--;
        }
        arr[j] = temp;
    }

    for(int i=0;i<size;i++) {
        cout<<arr[i]<<endl;
    }
}
