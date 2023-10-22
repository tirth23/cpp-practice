#include<iostream>
using namespace std;

union Test{
    int x;
    int y;
};


int main()
{
    Test t;
    t.x = 10;
    cout << t.x << ' ' << t.y << '\n';
    t.y = 20;
    cout << t.x << ' ' << t.y << '\n';
    cout << sizeof(t);
    return 0;
}