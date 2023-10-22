#include<iostream>
using namespace std;

class Test{
    public:
        Test(){
            cout << "Constructor called" << endl;
        }
        ~Test(){
            cout << "Destructor called" << endl;
        }
};

int main()
{
    Test t1;
    Test t2;
    return 0;
}