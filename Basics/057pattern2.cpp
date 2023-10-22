#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int row = 1;
    while (row <= n) {
        int col = 1, value = row;
        while (col <= row) {
            cout << value << " ";
            value++;
            col++;
        }
        row++;
        cout << endl;
    }

    for (int i = 1; i <= n; i++) {
        int value = i;
        for (int j = 1; j <= n; j++) {
            if (j <= i) {
                cout << value << " ";
                value++; 
            }
        }
        cout << endl;
    }

    row = 1;
    while (row <= n){
        int col = 1;
        while (col <= row){
            cout << row+col-1 << " ";
            col = col + 1;      
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}