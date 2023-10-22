#include<iostream>
using namespace std;

int main() {
    
    int _97 = 'a';
    cout << _97 << endl;

    char b = 98;
    cout << b << endl;

    char c = 123456;
    cout << c << endl;

    // taking binary of 123456 -> ...........00001   11100010   01000000,    
    // taking last 8 bits: 01000000 -> 64.   8 bits bcoz char size is 1 byte & it is narrow down to 8 bits from 32 bits
    // ascii value of '@' = 64

    char d = 64;
    cout << d << endl;

    unsigned int e = -112;
    cout << e; 

    return 0;
}