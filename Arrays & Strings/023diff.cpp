#include<iostream>
using namespace std;

int main() {

    int a = 'C' - 'A';
    cout << a << endl;
    char b = 'C' - 'A';
    cout << b << endl;

    char dc[3] = "DC";
    string s = "DC";
    cout << sizeof(dc) << endl;
    cout << sizeof(s) << endl;

    char arr1[10] = {'a', 'b', '\0', 'c', '\0'};
    string arr2 = "ab\0c\0";
    int arr3[10] = {1, 2, 3};

    cout << arr1 << endl;
    cout << arr2 << endl;
    cout << arr3;
    return 0;
}