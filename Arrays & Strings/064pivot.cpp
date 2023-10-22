#include<bits/stdc++.h>
using namespace std;

//pivot = 1 (minimum element in aray) where arr = {1, 2, 3, 7, 9} and rotated = {7, 9, 1, 2, 3}
//input is sorted and rotated array

int getPivot(int arr[], int size) {
    int s = 0, e = size - 1, mid;

    while(s < e) {
        mid = s + (e - s)/2;

        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
    }
    return s;
}  

int main() {

    int arr[5] = {7, 9, 1, 2, 3};

    cout << getPivot(arr, 5);
    return 0;
}