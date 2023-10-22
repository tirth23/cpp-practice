#include<iostream>
using namespace std;

void f (int x)
{
    cout << "Integer" << '\n';
}
void f (int *ptr)
{
    cout << "Pointer" << '\n';
}
int main()
{
    //f(NULL);     //will give error since compiler won't know where to assign NULL which will be internally integer 0
    f(0);
    f(nullptr);
    return 0;
}