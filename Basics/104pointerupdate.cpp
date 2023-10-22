#include<iostream>   
using namespace std;

void update(int** ptr) {
    *ptr = *ptr + 1;
}

int main() {
    
    int a = 5;
    int* p = &a;
    int** p1 = &p;
    cout << p << endl;
    cout << *p << endl;
    update(p1);
    cout << p << endl;
    cout << *p << endl;
    return 0;
}
