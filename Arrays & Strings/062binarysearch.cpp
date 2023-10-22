#include<iostream>
using namespace std;

// recursion approach
int binarySearch(int arr[], int start, int end, int key) {
    

    // start = end = INT_MAX ---> start + end > INT_MAX ---> error overflow in int
    // s + (e - s)/2 = s + e/2 - s/2 = (s + e)/2
    if(start > end) return -1;

    int mid = start + (end - start)/2;  

    if(key == arr[mid]) return mid;

    // right side
    if(key > arr[mid]) {
        return binarySearch(arr, mid + 1, end, key);
    } 
    // left side
    else {
        return binarySearch(arr, start, mid - 1, key);
    }     
}

int main() {
    
    int even[8] = {2, 4, 4, 5, 7, 8, 10, 12};
    int odd[7] = {5, 5, 7, 9, 10, 14, 17};

    cout << binarySearch(even, 0, 7, 100) << endl;
    cout << binarySearch(odd, 0, 6, 5);

    return 0;
}