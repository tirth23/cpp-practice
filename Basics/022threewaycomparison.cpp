#include<iostream>
using namespace std;

int main() {
    int x = 10, y = 20;
    auto result = 0;
    //result = (x <=> y);  //only works in c++20
    if (result < 0) cout << "x is small";
    else if (result == 0) cout << "x is equal to y";
    else if (result > 0) cout << "x is big";
    
    return 0;
}