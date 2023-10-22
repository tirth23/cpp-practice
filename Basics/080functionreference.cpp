#include <iostream>
using namespace std;

//fun returns reference and when reference is retured it can be modified further
int &fun()
{   
    //life of non-static limited to function only
    //if x is non-static, then z can't refer to x after function call ends
    //since x is static, y can refer to z all the time 
    
    static int x = 10;
    return x;

    //return reference variable;
}
int main()
{
    int &z = fun();     
    cout << fun() << " ";
    z = 30;
    cout << fun();
    return 0;
}