#include<iostream>
using namespace std;

int main() {
    bool a = true;
    bool b = false;
    cout << a << " " << b << "\n";
    cout << std::boolalpha;                          //from hereafter bool values will be alphabetical
    cout << a << " " << b << '\n';
    cout << noboolalpha;                        //back to 0/1
    cout << a << " " << b << '\n';
    return 0;
}