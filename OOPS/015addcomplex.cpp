#include<iostream>
using namespace std;

struct complx {
    int real, img;
};

int main() {

    complx n1, n2, sum;

    cin >> n1.real >> n1.img;
    cin >> n2.real >> n2.img;

    sum.real = n1.real + n2.real;
    sum.img = n1.img + n2.img;

    cout << sum.real << " " << sum.img << "i";
    return 0;
}