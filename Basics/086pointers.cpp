#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    cout << *ptr << '\n';
    x += 30;
    cout << *ptr << '\n';
    *ptr += 40;
    cout << x << '\n';
    return 0;
}