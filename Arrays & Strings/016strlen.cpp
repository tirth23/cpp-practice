#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s1[] = "gfg";
    //null character autmatically appended
    char s2[] = {'c', 'p', 'p', '\0'};
    char s3[] = {'c', 'p', 'p'};
    //if null character is not written then strlen will count until \0 found in memory
    cout << strlen(s1) << "\n";
    cout << strlen(s2) << "\n";
    cout << strlen(s3) << "\n";
    return 0;
}