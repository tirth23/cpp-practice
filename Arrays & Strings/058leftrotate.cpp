#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void leftRotate(int arr[], int size) {
    int temp = arr[0];

    for(int i = 1; i < size; i++) {
        arr[i-1] = arr[i];
    }
    arr[size-1] = temp;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};

    leftRotate(arr, 6);
    printArray(arr, 6);
    return 0;
}