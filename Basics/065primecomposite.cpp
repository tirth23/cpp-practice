#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number to check prime or composite: ";
    cin >> n;

    bool isprime = true;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) { 
            isprime = false;
            break;
        }
    }
    if (isprime) {
        cout << n << " is prime.";
    } else {
        cout << n << " is composite.";
    }
    return 0;
}