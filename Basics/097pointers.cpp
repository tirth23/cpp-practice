#include<iostream>
using namespace std;

int main()
{
    int a[] = {10, 20};
    int *p = a;
    *p++;

    //postfix ++ has higher precedence than dereference *
    //*p++ -> *(p++) -> *(address of 20) -> 20
    //p++ will increment p by 4 bytes since int type so now it will point to address of 20

    cout << a[0] << " " 
         << a[1] << "\n" 
         << *p;
    return 0;
}