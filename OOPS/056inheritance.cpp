#include<iostream>
using namespace std;

class Base
{
public:
    int x;
    Base(int a) : x(a) 
    {
        cout<<"Base \n";
    }
};
class Derived : protected Base
{
private:
    int y;
public:
    Derived(int a, int b) : Base(a), y(b)
    {
        cout << "Derived \n";
    }
    void print()
    {
        cout << x << " " << y << '\n';
    }
};
int main()
{
    Derived d (10, 20);
    d.print();

    // it will give error since x becomes protected as access specifier used is protected
    // cout << d.x;
    return 0;
}