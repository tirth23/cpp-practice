#include <iostream>
#include <bits/stdc++.h>  
using namespace std;

int main() 
{
    vector<string> vect{"geeksforgeeks practice", "geeksforgeeks ide", "geeksforgeeks write"};

    //for each interation, x will create copy of each string which is memory and time consuming and will print it
    for (auto x: vect)
        cout << x << " ";
    cout << endl;

    //Efficient way
    vector<string> vect2{"geeksforgeeks practice", "geeksforgeeks ide", "geeksforgeeks write"};

    //x will refer to each string i.e., refer to same memory location rather than copy t0 different location which will save time and space
    for (auto &x: vect2)
        cout << x << " ";

    //const can be used to restrict modification of data 
    for (const auto &x: vect2) 
        cout << x << " ";
    return 0;
}