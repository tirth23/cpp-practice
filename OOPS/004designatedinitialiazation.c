#include<stdio.h>

struct Point
{
  int x;
  int y;
};

int main()
{
    struct Point p = {.y = 10, .x = 20};
    struct Point t;
    //using designated we can also skip initialization so int get default value as 0
    // struct Point p = {.y = 10};
    printf("%d %d %d", p.x, p.y, t.x);
    return 0;
}