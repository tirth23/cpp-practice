#include<iostream>
using namespace std;

int main()
{
    int a[] = {10, 20};
    int *p = a;
    //int *p = &a[0];       //alternate approach
    *++p;

    //prefix ++ and dereference * has same precedence and right associativity
    //*++p -> *(++p) -> *(address of 20) -> 20
    //++p will increment p by 4 bytes since int type so now it will point to address of 20

    cout << a[0] << " " 
         << a[1] << "\n" 
         << *p << "\n" 
         << &a[0] << "\n"
         << p << "\n"
         << &a;
         
    return 0;
}