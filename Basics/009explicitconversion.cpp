#include<iostream>
using namespace std;

int main()
{
    int x = 15, y = 2;
    double z1 = x/y;
    cout << z1 << '\n';

    //c-style casting
    double z2 = (double)x/y;    //OR double(x)/y: it isn't receommened
    cout << z2 << '\n';

    //cpp casting
    double z3 = static_cast<double>(x)/y;
    cout << z3;

    //cpp style will check whether variable can be casted to to given type or not while in c-style it won't check
    return 0;
}