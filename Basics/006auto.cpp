#include<iostream>
// #include<typeinfo>
using namespace std;

int main() {
    auto a = 10;
    auto b = 15.5;
    cout << a << endl
         << b << endl;
    cout << typeid(a).name() << endl
         << typeid(b).name();
    return 0;
}