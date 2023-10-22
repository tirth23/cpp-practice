#include<iostream>
#include<string>
using namespace std;

int main() {

    //bydefault delimiter is \n if not given
    char arr[100];
    cin.getline(arr, 25,  '$');
    cout << arr;

    string s;
    getline(cin, s, '$');
    cout << s;

    return 0;
}