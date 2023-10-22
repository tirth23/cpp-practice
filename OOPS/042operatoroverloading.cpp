#include<iostream>
using namespace std;

class B {
    public:
    int a, b;

    // This is automatically called when '()' is used with object
    void operator() () {
        cout << "Parenthesis overloaded";
    }
};

int main() {
    B obj1;

    obj1 ();

    return 0; 
}