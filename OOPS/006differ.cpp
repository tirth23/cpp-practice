#include<iostream>
using namespace std;

class BaseClass
{
    public: 
    //make private variables public
    int x;
};

//bydefault inheritance is private in class if public not mentioned so x becomes priavte and gives error
// class DerivedClass : BaseClass {};

// //make derivation public also
class DerivedClass : public BaseClass {};

struct BaseStruct
{
    int x;
};
// Need not specify public keyword
//bydefault inheritance is public in struct so no error
struct DerivedStruct : BaseStruct {};

int main()
{
    {
        DerivedStruct d;
        d.x = 20;    
        cout << d.x << '\n';
    }
    
    {
        DerivedClass d;
        d.x = 20;
        cout << d.x << '\n';
    }
    
    return 0;
}