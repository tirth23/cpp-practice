//fibonacci using memoization, faster than normal regression
#include<iostream>
using namespace std;
int F[51];  
// first 51 values will be stored from n .....max n can be 50, increase as per input needs
int fib(int n) {
    if(n <= 1) return n;

    if(F[n] != -1) return F[n];

    F[n] = fib(n-2) + fib(n-1);
    return F[n];
}

int main() {

    for(int i = 0; i < 51; i++) {
        F[i] = -1;
    }
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}