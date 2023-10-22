#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, rem;
    cin >> num;

    string s = "";

    while (num > 0) {
        rem = num % 2;
        s = s + to_string(rem);
        num = num / 2;
    }
    reverse(s.begin(), s.end());

    cout << s;
    return 0;
}