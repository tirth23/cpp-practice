#include<iostream>
using namespace std;

int main() {
    
    int x = 5;
    bool res = (x == 4) && x++;            //x==4 is false so for && no need to check 2nd condition, it is called short circuiting
    cout << res << " " << x << '\n';

    x = 5;
    res = (x == 4) || x++;                 //x==4 is false so check 2nd condition for ||
    cout << res << " " << x << '\n';

    x = 5;
    res = (x == 5) || x++;                 //x==5 is true so for || no need to check 2nd condition
    cout << res << " " << x << '\n';
    
    return 0;
}