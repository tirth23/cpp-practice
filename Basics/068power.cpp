#include<iostream>
using namespace std;

int main() {
    int a, b, ans = 1;
    cin >> a >> b;
    while (b > 0) {
        ans = ans * a;
        b--;
    }
    cout << ans;
    return 0;
}