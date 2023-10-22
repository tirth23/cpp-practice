#include<iostream>
using namespace std;

int search(int a[], int size, int key) {

    for (size_t i = 0; i < size; i++) {
        if (a[i] == key) return 1;
    }
    
    return 0;
}
int main() {
    int arr[10] = {2, 6, 0, -90, 56, 8, -1, 8, 23, 45};
    int key; 

    cout << "Enter key: ";
    cin >> key;

    bool found = search(arr, 10, key);

    if(found) {
        cout << "found in array";
    } else {
        cout << "not found in array";
    }
    return 0;
}