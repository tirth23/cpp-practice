#include<iostream>
using namespace std;

int main()
{
    int a[] = {10, 20};
    int *p = a;
    ++*p;

    //prefix ++ and dereference * has same precedence and right associativity
    //++*p -> ++(*p) -> ++10 -> 11 
    //since it is pointer so array value also changed

    cout << a[0] << " " 
         << a[1] << "\n" 
         << *p;
    return 0;
}