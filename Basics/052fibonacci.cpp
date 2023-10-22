#include<iostream>
using namespace std;

int main() {

    int a = 0, b = 1, n, sum;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}