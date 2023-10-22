#include<iostream>
using namespace std;

void sp(string a, char b[]) {
    a[2] = 'P';
    b[2] = 'P';
    cout << "In function, string: " << a << endl;
    cout << "In function, char array: "<< b << endl;
}
int main() {
    string s1 = "abcd";
    char s2[10] = "wxyz";
    sp(s1, s2);   //string will pass value, array will pass reference
    cout << "After function, string: " << s1 << endl;
    cout << "After function, char array: " << s2;
    return 0;
}