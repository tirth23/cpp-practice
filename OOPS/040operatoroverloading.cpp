#include<iostream>
using namespace std;

class B {
    public:
    int a, b;

    // This is automatically called when '+' is used with 
    // between two Complex objects 
    void operator+ (B& obj) {
        int value1 = a;
        int value2 = obj.a;
        cout << "Output: " << value2 - value1 << endl;
    }
};

int main() {
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    // 'obj1' will be object and '+' used to call overloaded operator function
    // 'obj2' will be function argument

    return 0; 
}