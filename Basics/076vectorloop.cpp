#include <iostream>
#include <bits/stdc++.h>  
using namespace std;

int main() 
{
    vector<int> vect{10, 20, 30, 40};

    //auto x will create copy of each element and then modify so not reflect in vector
    for(auto x: vect)
        x = x+5;
    for (auto x: vect)
        cout << x << " ";
    return 0;
}