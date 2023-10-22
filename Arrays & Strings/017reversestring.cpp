#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string newString = "";
    // int l = s.length() - 1;
    // while(l >= 0)
    // {
    //     newString = newString + s[l];
    //     l--;
    // }

    for (int i = s.length(); i >= 0; i--) {
        newString += s[i];
    }
    
    cout << newString;
    return 0;
}