#include<iostream>
using namespace std;

int main() {

    // int a = cin.get();
    // cout << a;

    // char name[25];
    // cin.get(name, 25, '$');     //bydefault delimiter is \n if not mentioned
    // cout << name;

    // cin >> name;
    // cout << name;

    char b[23];
    //reads string until \n
    gets(b);      //deprecated
    cout << b;

    return 0;
}