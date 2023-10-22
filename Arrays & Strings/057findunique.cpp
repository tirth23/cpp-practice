#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int findUnique(int arr[], int size) {
    int n = 1;
    for(int i = 1; i < size; i++) {
        if(arr[i - 1] != arr[i]) {
            arr[n] = arr[i];
            n++;
        }
    }
    return n;
}

int main() {
    int arr[] = {1, 2, 2, 6, 6, 6, 9, 10, 10, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int n = findUnique(arr, size);
    printArray(arr, n);
    return 0;
}