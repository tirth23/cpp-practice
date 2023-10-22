#include<iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

int main()
{
    Point p = {10, 20};
    Point *ptr = &p;

    //-> used to access structure member using pointer
    cout << ptr -> x << ' ';
    ptr -> x = 30;
    cout << p.x;
    return 0;
}