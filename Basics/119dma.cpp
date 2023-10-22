#include <iostream>
using namespace std;

int *fun()
{
    int a = 10;
    int *ptr = &a;
    return ptr;
}

int main() 
{
    int x, y;
    cout << fun() << " " << *fun();
    return 0;
}