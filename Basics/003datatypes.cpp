#include<iostream>
using namespace std;

int main() {
    char middlename = 'P';
    cout << "char: " << middlename << endl;

    unsigned short int score = 8;
    cout << "unsigned short int: " << score << endl;

    long people {12345678};
    cout << "long: " << people << endl;

    //overflow but won't compile
    // long peopleearth {4'567'890'123};
    // cout << "long overflow error: " << peopleearth << endl;

    //overflow but will compile & gives random number in o/p using traditional assignment 
    long people_earth = 4'567'890'123;       
    cout << "long overflow with random no: " << people_earth << endl;

    long long peopleearth {4'567'890'123};       //apostrophe work in c++ above
    cout << "long long: " << peopleearth << endl;

    long long peopleonearth {8'904'567'890'123};       
    cout << "long long2: " << peopleonearth << endl;

    float len = 23.67;
    cout << "float: " << len << endl;

    double pi {3.14396};
    cout << "double: " << pi << endl;

    long double largeamount = 2.7e120;
    cout << "long double:" << largeamount << endl;

    bool gameover {false};
    cout << "bool: " << gameover << endl;

    //overflow since product is larger than short. Either use int pro or int val1/val22
    short val1 = 30000, val2 = 1000;
    short pro {val1 * val2};
    cout << pro;

    return 0;
}