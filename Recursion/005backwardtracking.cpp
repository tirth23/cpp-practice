#include<iostream>
using namespace std;

void f(int n) {
    if(n>0) {
        f(n-1);
        cout << "WOO " << n << endl;
    }
}

int main() {

    int n;
    cin >> n;
    cout << endl;
    f(n);
    return 0;
}