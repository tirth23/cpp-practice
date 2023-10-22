#include<iostream>
using namespace std;

/*
ans ---> index of second largest element
arr[i] > arr[largest] ----> ans = largest, largest = i (3, 4, 8, 8)

arr[i] == arr[largest]  --> ignore no change (10, 10, 10)

arr[i] < arr[largest] ----> ans = -1 no second largest found, ans = i (10, 10, 10, 5)
                            arr[i] > arr[ans], ans = i (4, 11, 6 15, 13) 13 > 11
                            arrr[i] <= arr[ans], ignore (4, 11, 15, 10) 10 <= 11 
*/

int secondLargest(int* arr, int size) {
    int ans = -1, largest = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[largest]) {
            ans = largest;
            largest = i;
        }
        else if(ans == -1 || arr[i] > arr[ans]) {
            ans = i;
        }
    }
    return ans;
}
int main() {
    int arr[] = {9, 11, 0, 10, 11, 13};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Index of second largest: " << secondLargest(arr, size);
    return 0;
}