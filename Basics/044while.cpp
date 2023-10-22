#include<iostream>
using namespace std;

int main()
{
    int i = 0 ; 
    while(i<5)
    {
        cout << "GFG\n";
        i++;
    }

    for (int a = 0, b = 1; a >= 0 && b >= 1; a--, b--) {
        cout << a << " " << b << endl;
    }

    int a = 3;
    for (; a <= 7;) {
        cout << a << " ";
        a++;
    }

    cout << "\n";
    int b = 3;
    for (;;) {
        if (b <= 7) {
            cout << b << " ";
        } else {
            break;                  //if break is eliminated it will be infinite loop
        }
        b++;
    }

    return 0;
}