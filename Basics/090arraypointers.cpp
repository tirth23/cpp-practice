#include<iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};
    int *p = a;

    //a represents address of first element of array

    cout << sizeof(a)  << endl;
    cout << sizeof(p)  << endl;

    //*(a+2) = *(address of a[2]) || *(a+2) = a[2]
    cout << *(a+2) << endl;   
    cout << a[2] << endl;          //recommened
    
    cout << p[2] << endl;
    cout << *(p+2);                //recommened
    return 0;
} 