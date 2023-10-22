#include<iostream>
using namespace std;

int main() {
    string num;
    cin >> num;

    int base = 1, ans = 0;
    int slen = num.length() - 1;

    for (int i = slen; i >= 0; i--) {
        ans = ans + (int(num[i] - '0') * base);                 //int is optional since char will cast to ascii as - sign there
        base = base * 2;
        //cout << num[i] - '0';
    }
    //num[i] = '1', '1' - '0', 
    //since negative sign, so ascii of 1 & 0 is 49 & 48 -> 49 - 48 = 1
    //num[i] = '0', '0' - '0' -> 48 - 48 = 0
    cout << ans;
    return 0;
}