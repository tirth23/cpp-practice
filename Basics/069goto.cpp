#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    if (n % 2 == 0)
        goto label1;
    else
        goto label2;
    label1:
        cout << "Even";
        return 0;
        //once we reach label, everything afterthat is executed so return 0;
    label2:
        cout << "Odd";
        
}