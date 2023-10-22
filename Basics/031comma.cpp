#include<iostream>
using namespace std;

int main()
{
    int x = 1, y = 2, z = 3, a;
    a = (x, y, z);             
    //parenthesis has higher priority so it will be evaluated first
    //x, y -> y      y, z -> z(3)            LR associativity for ','
    cout << a << endl;

    a = x, y, z;
    //= has higher precedence then ',' so it will take x as its rvaluex
    cout << a;

    return 0;
} 