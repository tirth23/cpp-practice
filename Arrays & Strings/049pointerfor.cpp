#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[5] = {2, 30, 78, 3, 90};
    int* p;
    p = arr;
    cout << *arr << endl;

    for(int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < 5; i++) {
        cout << *p << " ";
        p++;
    }

    cout << endl;

    for(int i = 0; i < 5; i++) {
        cout << *(arr + i) << " ";   //arr is constant indexing pointer
    }

 
	return 0;
}