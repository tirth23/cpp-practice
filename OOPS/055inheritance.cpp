#include<iostream>
using namespace std;

class Base
{
protected:
    int x;
public:
    Base(int a) : x(a) 
    {
        cout<<"Base \n";
    }
};
class Derived : public Base
{
private:
    int y;
public:
    // By default it will call default base class constructor and if there is parameterized contructor then it should be initialized here
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
    return 0;
}