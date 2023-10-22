#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

// // Naive Approach time = O(nd), space = O(1)
// void leftRotate(int arr[], int n) {
//     int temp = arr[0];

//     for(int i = 1; i < n; i++) {
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
// }

// int main() {

//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = 6;
//     int d = 2;

//     while(d--) {
//         leftRotate(arr, n);
//     }
//     printArray(arr, n);
//     return 0;
// }

// // Better Approach time = O(d+n-d+d) = O(d+n) = O(n) d<=n
// //                 space = O(d)
// void leftRotate(int arr[], int n, int d) {
//     int temp[d];

//     // store first d elements in temp
//     for(int i = 0; i < d; i++) {
//         temp[i] = arr[i];
//     }
//     // left rotate rest of elements
//     for(int i = d; i < n; i++) {
//         arr[i-d] = arr[i];
//     }
//     // append temp elements in arr
//     for(int i = 0; i < d; i++) {
//         arr[n-d+i] = temp[i];
//     }
// }

// int main() {

//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int d = 2;
//     int n = 6;

//     leftRotate(arr, n, d);
//     printArray(arr, n);
//     return 0;
// }

// Optimize Approach time = O(d+n-d+n) = O(2n) = O(n)
//                   space = O(1)
void reverse(int arr[], int low, int high) {
    while(low < high) {
        swap(arr[low++], arr[high--]);
    }
}
void leftRotate(int arr[], int n, int d) {
    reverse(arr, 0, d-1);    //reverse first 2 elements (2 1 3 4 5 6)
    reverse(arr, d, n-1);    //reverse remaining n-d elements (2 1 6 5 4 3)   
    reverse(arr, 0, n-1);    //reverse arr (3 4 5 6 1 2)
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};
    int d = 2;
    int n = 6;

    leftRotate(arr, n, d);
    printArray(arr, n);
    return 0;
}

