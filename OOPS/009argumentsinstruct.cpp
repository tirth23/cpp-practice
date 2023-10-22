#include<iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

void print(Point p)
{
    cout << p.x << ' ' << p.y << '\n'; 
    p.x = 5;
    cout << p.x << endl;
}
int main()
{
    Point a = {10,20};
    print(a);
    cout << a.x;
    return 0;
}