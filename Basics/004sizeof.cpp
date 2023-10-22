#include<iostream>
// #include<climits>
using namespace std;

int main() {
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;

    cout << "Minimum values:- " << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;

    cout << "Maximum values:- " << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;

    int age {21};
    cout << sizeof(age++) << endl; 
    cout << sizeof age << endl;
    cout << age << endl;
    //since sizeof is evaluated at compile time, age++ never execute at runtime

    cout << sizeof(10LL) << endl;       //long long
    cout << sizeof(10ULL) << endl;      //unsigned long long    
    cout << sizeof(10.5F) << endl;      //float   
    cout << sizeof(10.5) << endl;       //double
    cout << sizeof(10L) << endl;        //long double
    return 0;
}