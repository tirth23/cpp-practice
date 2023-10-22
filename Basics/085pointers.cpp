 #include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p;
    p = &x;
    cout << x << '\n' << *p << '\n' << p;
    return 0;
}