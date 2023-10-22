#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int s, int e) {

    int pivot = arr[s];
    int count = 0;
    for(int i = s+1; i <= e; i++) {
        if(arr[i] <= pivot) {
        count++;
        }
    }
    int pivotindex = s + count;

    swap(arr[s], arr[pivotindex]);

    int i = s, j = e;

    while(i < pivotindex && j > pivotindex) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        // 6,6,-6, -2, -4, -6, 2, -6  if necessary take this eg as i/p
        if(i < pivotindex && j > pivotindex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}

void quickSort(vector<int>& arr, int s, int e) {

    // base case 
    if(s >= e) return;

    int pivot = partition(arr, s, e);

    quickSort(arr, s, pivot-1);
    quickSort(arr, pivot+1, e);
}

int main() {
    
    int n = 5;
    unsigned int a = ~6;
    cout << a;

    return 0;
}