#include<iostream>
using namespace std;

int getSum(int arr[], int size) {

    if(size == 0) return 0; 
    
    if(size == 1) {
        return arr[0];
    }

    int remainingpart = getSum(arr+1, size-1);
    int sum = arr[0] + remainingpart;
    return sum;
}
int main() {

    int arr[5] = {2, 4, 7, 9, 10};
    int size = 5;

    int sum = getSum(arr, size);

    cout << sum;
    
    return 0;
}