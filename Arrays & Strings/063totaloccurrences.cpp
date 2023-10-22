#include<bits/stdc++.h>
using namespace std;

//find total occurrences of element in array using binary search

int firstOcc(vector<int>& arr, int n, int key) {
    int start = 0, end = n - 1, ans = -1;
    
    while(start <= end) {
        int mid = start + (end - start)/2;
        
        if(key == arr[mid]) {
            ans = mid;
            end = mid - 1;    //go till first element
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else if(key < arr[mid]) {
            end = mid - 1;
        }
    }
    return ans;
}

int secondOcc(vector<int>& arr, int n, int key) {
    int start = 0, end = n - 1, ans = -1;
    
    while(start <= end) {
        int mid = start + (end - start)/2;
        
        if(key == arr[mid]) {
            ans = mid;
            start = mid + 1;   //go till last element
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else if(key < arr[mid]) {
            end = mid - 1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = secondOcc(arr, n, k);
    return p;
}

int main() {
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2};

    pair<int, int> p = firstAndLastPosition(arr, 8, 2);
    // cout << p.first << " " << p.second;
    cout << "Total Occurences of 2: " << p.second - p.first + 1;
    return 0;
}