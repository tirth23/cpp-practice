#include<iostream>
using namespace std;
class Complex {
    private:
        int real, imag;

    public:
        Complex(int r = 0, int i = 0) {
            real = r;
            imag = i;
        }

    // This is automatically called when '+' is used with 
    // between two Complex objects 

    Complex operator + (Complex const & b) {
        Complex a;
        a.real = real + b.real;
        a.imag = imag + b.imag;
        return a;
    }

    void print() {
        cout << real << " + i" << imag << endl;
    }
};
int main() {
    
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; 
    // An example call to "operator+" 
    // 'c1' is object and '+' used to call operator function
    // 'c2' is function argument

    c3.print();
}
