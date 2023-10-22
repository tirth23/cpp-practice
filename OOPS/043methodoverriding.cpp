#include<iostream>
using namespace std;

class A {
    public:
    void method1() {
        cout << "Parent class method";
    }
};

class B: public A {
    public:
    void method1() {
        cout << "Child class method";
    }
};
 
int main() {
    B obj;
    obj.method1();
    return 0;
} 