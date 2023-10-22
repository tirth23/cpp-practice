#include<iostream>
using namespace std;

int power(int base, int n) {

    // base case:  pow(0) = 1
    if(n == 0) return 1;

    // int smallproblem = power(base, n-1);
    // int bigproblem = base * smallproblem;
    // return bigproblem;

    return base * power(base, n-1);
}

int main() {

    int base, n;
    cin >> base >> n;

    cout << power(base, n);
    
    return 0;
}