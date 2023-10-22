#include<iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

int main()
{
    // every elememt of p is of struct type
    // Point p[0], point p[1],.....
    Point p[3];

    for(int i = 0; i < 3; i++)
    {
        p[i].x = i;
        p[i].y = i*10;
    }
    for(int i = 0; i < 3; i ++)
    {
        cout << p[i].x << ' '
             << p[i].y << '\n';
    }

    // assignment
    Point a = p[1];
    cout << a.x << " " << a.y;
    return 0;
}