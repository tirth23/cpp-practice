#include<iostream>
using namespace std;

int main() {
    int a = 26, b = 20;
    cout << "Dec: " << a << " " << b << "\n";

    cout << std::hex;
    // flag will be set to display hexadecimal format
    cout << "Hex: " << a << " " << b << "\n";

    cout << std::oct;
    // flag will be set to display octal format
    cout << "Oct: " << a << " " << b << "\n";

    cout << std::dec;
    // flag will be set to display decimal format
    cout << "Dec: " << a << " " << b << "\n";

    cout << showbase;
    // flag will be set to display prefix before format (octal -> 0__, hexa -> 0x__)

    cout << hex;
    cout << "Hex in showbase: " << a << " " << b << "\n";

    cout << oct;
    cout << "Oct in showbase: " << a << " " << b << "\n";

    cout << showpos;     //doesn't work in latest compiler
    // flag will be set to displat '+' sign before format (+__)

    cout << "Oct in showpos: " << a << " " << b << "\n";

    cout << uppercase;
    // flag will be set to display in uppercase

    cout << hex;
    cout << "Hex in uppercase: " << a << " " << b << "\n";

    cout << nouppercase;
    // flag will be unset to display in uppercase

    cout << "Hex in nouppercase: " << a << " " << b << "\n";

    // noshowbase used to unset flag for showbase
    // noshowpose used to unset flag for showpos
    
    return 0;
} 