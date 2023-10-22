#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";


    cout << arr << endl;
    //attention here
    cout << ch << endl;
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    //prints until \0 is found in memory
    cout << p << endl;

    //not recommened
    char* d = "tirth";
    cout << d;


    return 0;
}