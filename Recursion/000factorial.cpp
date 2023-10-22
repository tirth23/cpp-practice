#include<iostream>
using namespace std;

int factorial(int n) {

    // base case: 0! = 1
    if(n == 0) return 1;

    // 5! = 5*4*3*2*1
    // 5! = 5*4!
    // n! = n*(n-1)!
    // f(n) = n * f(n-1)!
    // big problem = n * small problem
    
    // int smallproblem = factorial(n-1);
    // int bigproblem = n * smallproblem;
    // return bigproblem;

    return n * factorial(n-1);
}

int main() {

    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans;
    
    return 0;
}