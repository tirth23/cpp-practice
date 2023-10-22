#include<iostream>
using namespace std;

int distinctcount(int a[], int n) {

    int count = 0;
    bool isdistinct = true;

    for (int i = 0; i < n; i++) {
        isdistinct = true;

        for(int j = i - 1; j >= 0; j--) {
            if(a[i] == a[j]) {
                isdistinct = false;
                break;
            }
        }

        if(isdistinct) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    int count = distinctcount(arr, n);
    cout << count << "  distinct elements in array.";
    return 0;
}