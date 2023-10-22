#include<iostream>
using namespace std;

int main() {
    //and = &&, or = ||, not = !
    bool inrange;
    cout << inrange << endl;

    int x = 10, y = 20 ; 
    bool res = (x>0 && x<100);
    cout << res << "\n";

    res = (x>0 or x>y);
    cout << res << "\n";

    res = !res;
    cout << res << "\n";

    x=5;
    // Short Circuiting  -> 5>10 false so no need to check further
    res = (x>10)&&(x++);
    cout << res << " " << x << "\n";

    return 0;
}