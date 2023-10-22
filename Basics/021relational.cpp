#include<iostream>
using namespace std;

int main() {
    bool result {false};
    cout << result << "\n";
    result = (100 == 50 + 50);
    cout << result << endl;

    cout << (10 == 10.0) << endl;

    cout << (12 == 11.9999999999999999999) << endl;

    double a = 11.999999999;
    cout << a << endl;

    char char1 {}, char2 {};
    cin >> char1 >> char2;
    cout << (char1 != char2);

    int x=10, y=20;
    cout << (x=y);

    return 0;
}