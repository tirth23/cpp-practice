#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 65;
    while (row < 65 + n) {
        int col = 65;
        while (col < 65 + n) {
            cout << char(row + col - 65) << " ";
            col++;
        }
        cout << '\n';
        row++;
    }

    row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            cout << char('A' + row + col - 2) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}