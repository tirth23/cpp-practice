#include<iostream>   
using namespace std;

void update1(int** ptr) {
    **ptr = **ptr + 1;
}

int main() {
    
    int a = 5;
    int* p = &a;
    int** p1 = &p;
    cout << p << endl;
    cout << *p << endl;

    cout << **p1 << endl;
    update1(p1);
    cout << **p1 << endl;
    return 0;
}