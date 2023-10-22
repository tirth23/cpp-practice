#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int space = n - row;
        while (space) {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= row) {
            cout << col;
            col++;
        }
        int start = row - 1;
        while (start) {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }

    row = 1;
    while (row <= n) {
        int first = 1;
        while (first <= 6 - row) {
            cout << first;
            first++;
        }
        int second  = row - 1;
        while (second) {
            cout << "*";
            second--;
        }
        int third = row - 1;
        while (third) {
            cout << "*";
            third--;
        }
        int fourth = 6 - row;
        while (fourth >= 1) {
            cout << fourth;
            fourth--;
        }
        cout << endl;
        row++;
    }

    return 0;
}