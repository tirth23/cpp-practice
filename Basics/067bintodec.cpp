#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lastdigit, ans = 0, i = 0;
    while (n != 0) {
        lastdigit = n % 10;
        if (lastdigit == 1) ans = ans + (lastdigit * pow(2, i));
        i++;
        n = n / 10;
    } 
    cout << ans; 
    return 0;
}