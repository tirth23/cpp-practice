#include<iostream>
using namespace std;

class A{
public:
    int x;
};

// by using 'virtual' keyword A's constructor is called only once when object of d is made
// no ambigious error bcoz of virtual

class B : virtual public A 
{ };
class C : virtual public A 
{ };
class D : public B, public C 
{ };

int main()
{
    D d;
    cout << d.x;
    return 0;
}