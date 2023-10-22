#include<iostream>
using namespace std;

int main() {
    int x=10;
    //it is pre increment so variable is incremented before use : x=x+1, result=x+10
    int result = ++x + 10;
    cout << result;

    int y=10;
    //it is post increment so variable is incremented after use: result=y+10, y=y+1
    result = y++ + 10;
    cout << result;

    return 0;
}