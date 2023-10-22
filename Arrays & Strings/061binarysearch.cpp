#include<iostream>
using namespace std;

// iterative approach
int binarySearch(int arr[], int size, int key) {
    int start = 0, end = size - 1;

    while(start <= end) {

        // start = end = INT_MAX ---> start + end > INT_MAX ---> error overflow in int
        // s + (e - s)/2 = s + e/2 - s/2 = (s + e)/2
        int mid = start + (end - start)/2;  

        if(key == arr[mid]) return mid;

        // right side
        if(key > arr[mid]) {
            start = mid + 1;
        } 
        // left side
        else {
            end = mid - 1;
        } 
    }
    return -1;
}

int main() {
    
    int even[8] = {2, 4, 4, 5, 7, 8, 10, 12};
    int odd[7] = {5, 5, 7, 9, 10, 14, 17};

    cout << binarySearch(even, 8, 10) << endl;
    cout << binarySearch(odd, 7, 5);

    return 0;
}