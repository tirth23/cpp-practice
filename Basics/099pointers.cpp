#include<iostream>      
using namespace std;

int main() {
    
    int a = 5;
    int* p; 
    p = &a;

    cout << *p << " " << p << " " << endl;
    p++;
    cout << *p << " " << p << " " << endl;
    return 0;
}
