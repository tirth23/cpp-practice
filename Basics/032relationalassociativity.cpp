#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, c = 30;
    if (c>b>a)
        cout << "Y";
    else
        cout << "N";

    //LR associativity
    //c > b -> 1(returns true boolean value)
    //1 > a,         
    //here boolean value 1 compared with int So, converted to int(1) as implicit type conversion (bool->int)
    //1 > 10 -> 0
}