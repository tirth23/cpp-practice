#include<iostream>
using namespace std;

// void f(int n) {
//     if(n>0) {
//         cout << "WOO " << n << endl;
//         f(n-1);
//         f(n-1);
//     }
// }

// void f(int n) {
//     if(n>0) {
//         f(n-1);
//         f(n-1);
//         cout << "WOO " << n << endl;
//     }
// }

void f(int n) {
    if(n>0) {
        f(n-1);
        cout << "WOO " << n << endl;
        f(n-1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << endl;
    f(n);
    return 0;
}