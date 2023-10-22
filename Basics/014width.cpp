#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int a = 12, c = 123456;
    string b = "abc";

    cout << std::setw(5);
    // setw() -> fix size of print to 5 if var len <= 5
    cout << a << endl;

    // setfill(), left, right can be used in pair with setw()
    cout << std::setw(5);
    cout << std::setfill('*');
    // setfill() -> fill remaining space with character
    cout << a << endl;

    // setw() will set for only 1 statement but 4setfill, left, right will set for whole program
    cout << a << endl;

    cout << std::setw(5);
    cout << b << endl;

    cout << left;
    // shift var to left, bydefault is right
    cout << setw(5);
    cout << b << endl;

    cout << setw(5);
    cout << b << endl;

    cout << right;
    // shift var to left, bydefault is right
    cout << setw(5);
    cout << b << endl;

    cout << setw(5);
    // if var len > 5 then setw() does nothing
    cout << c << endl;

    return 0;
}