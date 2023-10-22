#include<iostream>
using namespace std;

//greatest divisor of n greater than 1

int main()
{
    int n;
    cin >> n ; 
    for(int x = 2 ; x <= n ; x++)
    {
        if(n%x==0)
        {
            cout << "Smallest Divisor: " << x << endl ; 
            break;
        }
    }
    return 0;
}