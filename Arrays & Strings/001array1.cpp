#include<iostream>
#include<math.h>
using namespace std;

int main() {
    
    int a[9];
    a[0] = 1;
    a[10] = 6;
    cout << a[0] << " " << a[4] << " " << a[10] << " " << a[11] << endl;
    //a[4], a[11] gives garbage
    //a[10] will be assigen value at (base + 10 * 4) but won't be counted in array

    int b[9] = {};
    //b[0] = 1;
    b[10] = 6;
    cout << b[0] << " " << b[4] << " " << b[10] << " " << b[11] << endl;
    //a[4] will be 0

    int arr[5];
    arr[0] = 5;
    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[2] = -10;
    arr[3] = arr[0];
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;

    int arr1[6]={11,12,13,14,15,16};
    // Way 1
    for(int i=0;i<6;i++)
        cout<<arr1[i]<<" ";
    
    cout<<endl;
    // Way 2
    for(int i=0;i<6;i++)   
        cout<<i[arr1]<<" ";
    
    cout<<endl;
    // Way 3 range based for loop
    for(int x: arr1)
        cout<<x<<" ";
    
    cout<<endl;

    int lenofarray = sizeof(arr)/sizeof(int);
    cout << lenofarray;
    return 0;
}