#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

// // Naive Approach: time = O(n * n-1) = O(n2), space = O(1)
// void moveZero(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         if(arr[i] == 0) {
//             for(int j = i+1; j < size; j++) {
//                 if(arr[j] != 0) {
//                     swap(arr[i], arr[j]);
//                     break;
//                 }
//             }
//         }
//     }
// }

// Optimize Approach: time = O(n), space = O(1)
void moveZero(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main() {
    int arr[] = {4, 0, 8, 9, 0, 0, 10, 0};
    int size = sizeof(arr)/sizeof(arr[0]);

    moveZero(arr, size);
    printArray(arr, size);
    return 0;
}
