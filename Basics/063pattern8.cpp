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
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= 5 - i) {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}