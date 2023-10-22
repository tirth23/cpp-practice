#include<iostream>

using namespace std;

int main()
{
    int x = 0 , y = 0 ;
    cout << "Enter a choice \n";
    char move;
    cin >> move;
    switch(move)
    {
        case 'L': x--;
                  break;
        case 'R': x++;
                  break;
        case 'U': y++;
                  break;
        case 'D': y--;
                  break;
        default: cout << "Invalid choice";
    }
    cout << x << ' ' << y << '\n';

    char ch = '1';
    int num = 1;

    cout << endl;
    switch( num * 2 ) {

        case 2: cout << "First" <<endl;
                cout << " First again " <<endl;
                break;

        case '1': switch(num) {
                    case 1: cout<<" Value of num is "<< num <<endl;
                    break;
                 }
                break;

        default: cout << " It is default case" <<endl;        

    }

    cout << endl;
    return 0;
    
}