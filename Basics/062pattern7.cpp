#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int col = 1, start = 'A' + n - row;
        while (col <= row) {
            cout << char(start) << " ";
            start++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}