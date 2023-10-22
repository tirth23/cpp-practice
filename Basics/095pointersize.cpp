#include<iostream>
using namespace std;

int main()
{
    char a[] = {'g','f','g'};
    char *p = a;
    cout << sizeof(a) << " " << sizeof(p) << "\n";
    return 0;
}