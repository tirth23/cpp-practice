#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    //base case
    if(size == 0) return 0; 
    
    if(arr[0] == key) {
        return 1;
    } else {
       bool remainingpart = search(arr+1, size-1, key); 
       return remainingpart;
    }
}
int main() {

    int arr[5] = {2, 4, 7, 9, 10};
    int size = 5;
    int key = 9;
    bool ans = search(arr, size, key);

    if(ans) cout << "Present";
    else cout << "Absent";
    
    return 0;
}