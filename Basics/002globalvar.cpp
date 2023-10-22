#include<iostream>
using namespace std;

int z;   
int y = 3;
extern int x;
int main() {
    cout << x << " " << y;
    return 0;
}
//int z = 4;      //error since it is defined after function so for that extern is used
int x = 10;