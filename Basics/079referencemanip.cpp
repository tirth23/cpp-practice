#include <iostream>
using namespace std;

int main() 
{
    int x = 10, z = 20;
    int &y = x;
    y = z;
    y = y+5;
    cout << x << " " << y << " " << z << " ";
    int &b = y;
    int &a = b;
    a = a + 100;
    cout << y;
    return 0;
}