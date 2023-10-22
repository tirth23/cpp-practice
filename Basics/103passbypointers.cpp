#include<iostream>
using namespace std;

void swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    
    int a = 10, b = 20;
    cout << a << " " << b << endl;

    int* p = &a;
    int* q = &b;

    swap(p, q);
    cout << a << " " << b << endl;

    //directly providing address
    swap(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}