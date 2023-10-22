#include<iostream>      //std ip/op operations
using namespace std;

int isprime(int n) {
    for (int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int primefactor(int n) {

    for(int i = 2; i < n; i++) {
        if (isprime(i)) {
            int x = i;
            while(n % x == 0) {
                cout << i << " ";
                x = x * i;
            }
        }
        
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    primefactor(n);
    return 0;
}
