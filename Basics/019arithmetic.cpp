#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // Binary Operators
    {
        int x = 20, y = 10;
        cout << (x+y) << "\n"
             << (x-y) << "\n"
             << (x%y) << "\n"
             << (x*y) << "\n";
    }
    // Unary Operators
    {
        int x = 10;
        int y = x++;           //y=x,x=x+1   postfix increment
        int z = ++x;           //x=x+1,z=x   prefix increment
        cout << x << "\n"
             << y << "\n"
             << z << '\n';
        int a = 9;
        cout << a++ << '\n';
        cout << ++a;
    }
    return 0;
}