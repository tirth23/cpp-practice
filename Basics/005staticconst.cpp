#include<iostream>
using namespace std;


int main() {
    static int x;
    cout << x << endl;

    const int y = 1;
    cout << y;
    return 0;
}