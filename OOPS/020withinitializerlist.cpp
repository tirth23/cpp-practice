#include<iostream>
using namespace std;

class Test{
    public:
        Test(){cout << "Default\n"; }
        Test(int x){cout << "Parameterised\n"; }
};

class Main{
    Test t;
    
    // if t is initialized by initializer list in constructor then default assignment of t is bypassed
    public:
        Main(): t(10){
            
        }
};

int main()
{
    Main m;
    return 0;
}