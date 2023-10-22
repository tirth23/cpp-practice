#include<iostream>
using namespace std;

class A {

    public:
    void fun1() {
        cout << "Im fun1";
    }

    void fun1(int a, char b) {
        cout << "Im fun2";
    }

    void fun1(char a, int b) {
        cout << "Im fun3";
    }

    void fun1(int a) {
        cout << "Im fun4";
    }

    void fun1(int a, int b) {
        cout << "Im fun5";
    }
};

int main() {

    A ob;
    ob.fun1(3, 't');
    return 0;
}