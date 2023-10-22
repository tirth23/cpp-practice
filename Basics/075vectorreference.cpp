#include <iostream>
#include <bits/stdc++.h>  

using namespace std;

void Print(vector<int> &v)
{
    for(auto x: v)
        cout << x << " ";
}

int main()
{
    vector<int> v;
    for (int i = 0; i<1000; i++)
        v.push_back(i);
    Print(v);
    
    //with pass by value, a new copy of vector will be made inside calling function which will take extra space
    //here we are passing vector of 1000 integers by reference (&v) since it is a large object
    //and no new vector created inside calling function
    
    return 0;
}