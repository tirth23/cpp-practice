#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int ans = n * (n + 1) / 2;
    cout << ans;

    /* 
        S(5) = 1 + 2 + 3 + 4 + 5
      + S(5) = 5 + 4 + 3 + 2 + 1
        2S(5) = 6 + 6 + 6 + 6 + 6
        2S(5) = 5(6)
        S(5) = 5(6)/2 = 5(5 + 1)/2 

        S(n) = n(n + 1)/2
    */
    return 0;
}