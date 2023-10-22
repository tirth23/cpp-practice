#include<iostream>
using namespace std;

int main()
{
    int *p1;
    double *p2;
    string *p3;

    //size is same since all stores address of variable of particular data type 

    cout << sizeof(p1) << ' '
         << sizeof(p2) << ' '
         << sizeof(p3);
    return 0;
}